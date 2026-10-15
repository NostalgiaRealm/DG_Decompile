/*
 * FUN_180029a18 at 180029a18
 * undefined __fastcall FUN_180029a18(uint * param_1)
 * Address ranges: 180029a18-180029a7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029a18(uint *param_1)

{
  FUN_18001a140((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x5e) + 0x10))();
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5c) + 0x10))();
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_180029890((longlong)param_1);
  FUN_180029444(param_1);
  FUN_18002914c(param_1);
  FUN_1800296f4(param_1);
  return;
}

