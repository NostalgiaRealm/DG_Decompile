/*
 * FUN_1002957a at 1002957a
 * undefined __fastcall FUN_1002957a(undefined4 * param_1)
 * Address ranges: 1002957a-1002958d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002957a(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_10064620;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

