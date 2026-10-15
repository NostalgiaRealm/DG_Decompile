/*
 * FUN_1003571c at 1003571c
 * int __thiscall FUN_1003571c(void * this, int param_1)
 * Address ranges: 1003571c-10035755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1003571c(void *this,int param_1)

{
  int iVar1;
  RECT *pRVar2;
  
  pRVar2 = (RECT *)0x0;
  (**(code **)(**(int **)this + 0x38))();
  if ((param_1 != 0) &&
     (pRVar2 = (RECT *)FUN_1002a149(*(void **)this,param_1), pRVar2 == (RECT *)0x0)) {
    return -0x7789fdb8;
  }
  iVar1 = FUN_10032da5(*(void **)this,pRVar2);
  return iVar1;
}

