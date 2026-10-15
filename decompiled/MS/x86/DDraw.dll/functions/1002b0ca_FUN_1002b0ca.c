/*
 * FUN_1002b0ca at 1002b0ca
 * undefined4 __thiscall FUN_1002b0ca(void * this, undefined4 * param_1)
 * Address ranges: 1002b0ca-1002b0f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002b0ca(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)(**(int **)((int)this + 0xf8) + 4))(*(int **)((int)this + 0xf8));
    *param_1 = *(undefined4 *)((int)this + 0xf8);
    uVar1 = 0;
  }
  return uVar1;
}

