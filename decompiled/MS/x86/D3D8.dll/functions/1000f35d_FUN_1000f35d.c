/*
 * FUN_1000f35d at 1000f35d
 * undefined4 __thiscall FUN_1000f35d(void * this, undefined4 param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 1000f35d-1000f3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000f35d(void *this,undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)*(void **)((int)this + 0x7c) * 0x228;
  if (((HDC)*param_2 == *(HDC *)(&DAT_100ba8fc + iVar1)) &&
     (*(HDC *)(&DAT_100ba8fc + iVar1) != (HDC)0x0)) {
    FUN_100234c1(*(void **)((int)this + 0x7c),(HDC)*param_2,param_3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (*param_3 == 1) {
    FUN_10023f88(*(int *)(&DAT_100ba8f8 + iVar1));
  }
  return uVar2;
}

