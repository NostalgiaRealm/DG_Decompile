/*
 * FUN_1001435d at 1001435d
 * undefined __thiscall FUN_1001435d(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 1001435d-1001438c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001435d(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_10007b6a((void *)((int)this + 0x174),&param_1);
  if ((uVar1 != 0xffffffff) && ((int)uVar1 < 8)) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x60))(uVar1,param_2);
  }
  return;
}

