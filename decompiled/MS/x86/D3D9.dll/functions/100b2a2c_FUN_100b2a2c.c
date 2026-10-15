/*
 * FUN_100b2a2c at 100b2a2c
 * bool __thiscall FUN_100b2a2c(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 100b2a2c-100b2a50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100b2a2c(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 8) + 0x24))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  }
  return piVar1 != (int *)0x0;
}

