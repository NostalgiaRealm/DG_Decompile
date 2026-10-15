/*
 * FUN_10013126 at 10013126
 * undefined4 __thiscall FUN_10013126(void * this, undefined4 param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 10013126-10013174
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10013126(void *this,undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)*(void **)((int)this + 0x7c) * 0x228;
  if (((HDC)*param_2 == *(HDC *)(&DAT_100df4c4 + iVar1)) &&
     (*(HDC *)(&DAT_100df4c4 + iVar1) != (HDC)0x0)) {
    FUN_1002aaf5(*(void **)((int)this + 0x7c),(HDC)*param_2,param_3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*param_3 == 1) {
    FUN_1002b5fa(*(int *)(&DAT_100df4c0 + iVar1));
  }
  return uVar2;
}

