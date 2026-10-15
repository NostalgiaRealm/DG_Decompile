/*
 * FUN_10039979 at 10039979
 * undefined4 __thiscall FUN_10039979(void * this, int param_1)
 * Address ranges: 10039979-100399c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10039979(void *this,int param_1)

{
  int iVar1;
  undefined4 uStack_c;
  
  uStack_c = 0;
  iVar1 = *(int *)(param_1 * 0x1510 + 0x520 + *(int *)((int)this + 0x3a8));
  if (iVar1 == 0xa000) {
    uStack_c = 1;
  }
  else if (iVar1 == 0xa100) {
    uStack_c = 2;
  }
  else if (iVar1 == 0xb000) {
    uStack_c = 3;
  }
  else if (iVar1 == 0xb100) {
    uStack_c = 4;
  }
  return uStack_c;
}

