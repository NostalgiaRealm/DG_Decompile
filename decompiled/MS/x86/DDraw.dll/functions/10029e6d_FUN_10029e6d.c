/*
 * FUN_10029e6d at 10029e6d
 * undefined __fastcall FUN_10029e6d(undefined4 * param_1)
 * Address ranges: 10029e6d-10029e9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10029e6d(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x40];
  *param_1 = &PTR_FUN_1006421c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_1[8] != 0) {
    FUN_1002b624(param_1[8]);
  }
  *param_1 = &PTR_LAB_10062724;
  return;
}

