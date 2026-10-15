/*
 * FUN_180055d80 at 180055d80
 * undefined __fastcall FUN_180055d80(undefined8 * param_1)
 * Address ranges: 180055d80-180055dd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055d80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_1801022e8;
  *puVar1 = &PTR_FUN_180101fd0;
  FUN_180040e00((longlong)puVar1);
  *puVar1 = &PTR_FUN_180101fd0;
  FUN_1800fbcf0((LPVOID)param_1[8]);
  *param_1 = &PTR_FUN_180101be8;
  return;
}

