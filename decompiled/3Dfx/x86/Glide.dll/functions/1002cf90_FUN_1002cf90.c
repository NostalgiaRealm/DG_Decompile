/*
 * FUN_1002cf90 at 1002cf90
 * undefined __thiscall FUN_1002cf90(void * this, int param_1)
 * Address ranges: 1002cf90-1002cfc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cf90(void *this,int param_1)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x150))();
  if (param_1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = (param_1 != 1) + 2;
  }
  *(int *)((int)this + 0x2ac4) = iVar1;
  *(undefined1 *)((int)this + 0x2bc2) = 1;
  return;
}

