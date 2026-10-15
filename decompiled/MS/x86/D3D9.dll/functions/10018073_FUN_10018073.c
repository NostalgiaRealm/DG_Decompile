/*
 * FUN_10018073 at 10018073
 * undefined __thiscall FUN_10018073(void * this, int param_1)
 * Address ranges: 10018073-100180a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018073(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar1 + 100);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar1 + 0x68);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x3f800000;
  return;
}

