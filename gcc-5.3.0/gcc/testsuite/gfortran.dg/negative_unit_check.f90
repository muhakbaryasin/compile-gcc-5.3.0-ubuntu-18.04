! { dg-do compile }
!  Test case from PR61933.
   LOGICAL :: file_exists
   INQUIRE(UNIT=-1,EXIST=file_exists)! { dg-error "can not be -1" }
END
