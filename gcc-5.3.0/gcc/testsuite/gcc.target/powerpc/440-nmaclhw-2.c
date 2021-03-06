/* Test generation of nmaclhw. on 440.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */
/* { dg-do compile } */
/* { dg-require-effective-target ilp32 } */
/* { dg-skip-if "do not override -mcpu" { powerpc*-*-* } { "-mcpu=*" } { "-mcpu=440" } } */
/* { dg-options "-O2 -mcpu=440" } */

/* { dg-final { scan-assembler "nmaclhw\\. " } } */

int
f(int a, int b, int c)
{
  a -= (short)b * (short)c;
  if (!a)
    return 10;
  return a;
}
