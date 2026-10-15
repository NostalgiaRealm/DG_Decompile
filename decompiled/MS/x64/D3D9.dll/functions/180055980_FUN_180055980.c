/*
 * FUN_180055980 at 180055980
 * undefined __fastcall FUN_180055980(undefined8 * param_1)
 * Address ranges: 180055980-1800559d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055980(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_180102290;
  *puVar1 = &PTR_FUN_180101fd0;
  FUN_180040e00((longlong)puVar1);
  *puVar1 = &PTR_FUN_180101fd0;
  FUN_1800fbcf0((LPVOID)param_1[8]);
  *param_1 = &PTR_FUN_180101be8;
  return;
}

