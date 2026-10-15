/*
 * FUN_1002cfc4 at 1002cfc4
 * undefined __thiscall FUN_1002cfc4(void * this, int param_1)
 * Address ranges: 1002cfc4-1002d001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cfc4(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0xeb);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else if (iVar1 == 2) {
    param_1 = 1;
  }
  *(int *)((int)this + 0x2c44) = param_1;
  *(undefined1 *)((int)this + 0x3150) = 1;
  return;
}

