# compile-gcc-5.3.0-ubuntu-18.04
Im trying to build gcc version &lt;= 5.3 for regarding I am using recent Ubuntu 18.04 but want to use CUDA 8.0. 

# The problem
Kubuntu 18.04 has installed gcc version 7. We can install gcc v 5 but the onlye the 5.5.x one. CUDA 8 on the other hand only support 5.3 &lt;=

# My RIG
- AMD Ryzen 5 1600
- 8GB Memory
- Nvidia Gforce GTX 1050 2GB

# My OS
- Kubuntu 18.04
- Installed gcc 
	- gcc 4.8 (as default to compile gcc 5.3--)
	- gcc 6
	- gcc 7
- Installed g++
	- g++ 4.8 (as default to compile gcc 5.3--)
	- g++ 6
	- g++ 7

- GlibC 2.27

#Compile
	- ./configure --program-suffix=-5.3.0 --disable-checking --enable-languages=c,c++,objc --disable-multilib --with-system-zlib
	- make

#Obstacle 1

In file included from ../.././libgcc/unwind-dw2.c:401:0:
./md-unwind-support.h: In function ‘x86_64_fallback_frame_state’:
./md-unwind-support.h:65:47: error: dereferencing pointer to incomplete type ‘struct ucontext’
       sc = (struct sigcontext *) (void *) &uc_->uc_mcontext;
                                               ^
../.././libgcc/shared-object.mk:14: recipe for target 'unwind-dw2.o' failed
make[3]: *** [unwind-dw2.o] Error 1

#Solution -  obstacle 1
 - https://stackoverflow.com/questions/46999900/how-to-compile-gcc-6-4-0-with-gcc-7-2-in-archlinux?utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
 - https://github.com/suaefar/ryzen-test/issues/6


#Obstacle 2

In function ‘int __sanitizer::TracerThread(void*)’:
../../.././libsanitizer/sanitizer_common/sanitizer_stoptheworld_linux_libcdep.cc:237:22: error: aggregate ‘sigaltstack handler_stack’ has incomplete type and cannot be defined
   struct sigaltstack handler_stack;
                      ^
Makefile:449: recipe for target 'sanitizer_stoptheworld_linux_libcdep.lo' failed
make[4]: *** [sanitizer_stoptheworld_linux_libcdep.lo] Error 1


#Solution - obstacle 2
 - https://github.com/voidlinux/void-packages/issues/7284


#Obstacle 3

../../.././libsanitizer/asan/asan_linux.cc: In function ‘bool __asan::AsanInterceptsSignal(int)’:
../../.././libsanitizer/asan/asan_linux.cc:222:20: error: ‘SIGSEGV’ was not declared in this scope
   return signum == SIGSEGV && common_flags()->handle_segv;
                    ^
Makefile:461: recipe for target 'asan_linux.lo' failed
make[4]: *** [asan_linux.lo] Error 1


#Solution - obstacle 3
 - https://github.com/buildroot/buildroot/blob/master/package/gcc/4.9.4/942-asan-fix-missing-include-signal-h.patch
 

#Obstacle 4

../../.././libsanitizer/tsan/tsan_platform_linux.cc: In function ‘int __tsan::ExtractResolvFDs(void*, int*, int)’:
../../.././libsanitizer/tsan/tsan_platform_linux.cc:380:16: error: ‘statp’ was not declared in this scope
   __res_state *statp = (__res_state*)state;
                ^
../../.././libsanitizer/tsan/tsan_platform_linux.cc:380:37: error: expected primary-expression before ‘)’ token
   __res_state *statp = (__res_state*)state;
                                     ^
Makefile:500: recipe for target 'tsan_platform_linux.lo' failed
make[4]: *** [tsan_platform_linux.lo] Error 1

#Solution - obstacle 4
 - https://github.com/google/sanitizers/issues/822

 
# Reference
- http://juniway.blogspot.co.id/2015/06/install-gcc510-on-ubuntu-1204build-from.html
