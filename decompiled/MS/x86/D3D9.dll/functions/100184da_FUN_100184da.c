/*
 * FUN_100184da at 100184da
 * undefined __thiscall FUN_100184da(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100184da-10018509
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100184da(void *this,undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100086bd((void *)((int)this + 0x318),&param_1);
  if ((uVar1 != 0xffffffff) && ((int)uVar1 < 8)) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x60))(uVar1,param_2);
  }
  return;
}

