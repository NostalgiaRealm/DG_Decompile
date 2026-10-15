/*
 * FUN_180024100 at 180024100
 * undefined FUN_180024100(void)
 * Address ranges: 180024100-18002415b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180024100(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if ((iVar1 == *(int *)(param_1 + 0x24)) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(),
     iVar1 == *(int *)(param_1 + 0x28))) {
    return 0;
  }
  return 1;
}

