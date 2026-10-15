/*
 * FUN_180037668 at 180037668
 * undefined __fastcall FUN_180037668(uint * param_1)
 * Address ranges: 180037668-1800376ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037668(uint *param_1)

{
  FUN_180027dd4((longlong)param_1,*(LPCVOID *)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x5e) + 0x10))();
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5c) + 0x10))();
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_1800374e0((longlong)param_1);
  FUN_180037094(param_1);
  FUN_180036d9c(param_1);
  FUN_180037344(param_1);
  return;
}

