/*
 * FUN_10005eaf at 10005eaf
 * undefined4 __thiscall FUN_10005eaf(void * this, undefined4 param_1)
 * Address ranges: 10005eaf-10005ef8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10005eaf(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0x7dc);
  if (*(int *)(*(int *)((int)this + 0xc) + 0x7e0) == 1) {
    param_1 = 1;
  }
  else if ((iVar1 == 0x100) || (iVar1 == 0x500)) {
    uStack_8 = 2;
    param_1 = uStack_8;
  }
  else if ((iVar1 == 0x300) || (iVar1 == 0x400)) {
    uStack_8 = 3;
    param_1 = uStack_8;
  }
  return param_1;
}

