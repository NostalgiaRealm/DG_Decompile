/*
 * FUN_10090808 at 10090808
 * bool __thiscall FUN_10090808(void * this, undefined4 param_1, undefined4 param_2)
 * Address ranges: 10090808-1009082c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10090808(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(**(int **)((int)this + 8) + 0x24))(param_1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x2c))(piVar1,param_2);
  }
  return piVar1 != (int *)0x0;
}

