/*
 * FUN_10017a4d at 10017a4d
 * undefined4 __thiscall FUN_10017a4d(void * this, undefined4 param_1)
 * Address ranges: 10017a4d-10017a96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10017a4d(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0x7dc);
  if (*(int *)(*(int *)((int)this + 0xc) + 0x7e0) == 1) {
    param_1 = 0;
  }
  else if ((iVar1 == 0x100) || (iVar1 == 0x500)) {
    param_1 = 1;
  }
  else if ((iVar1 == 0x300) || (iVar1 == 0x400)) {
    param_1 = 2;
  }
  return param_1;
}

