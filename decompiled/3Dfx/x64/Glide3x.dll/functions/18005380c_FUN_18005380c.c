/*
 * FUN_18005380c at 18005380c
 * undefined __fastcall FUN_18005380c(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined4 param_5)
 * Address ranges: 18005380c-180053892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005380c(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  FUN_18004a068(*(longlong *)(param_2 + 0x1508),param_4,0,0,0x2000);
  FUN_18004a068(*(longlong *)(param_2 + 0x1508),param_3,0,0,0x1000);
  FUN_18004af4c(*(longlong *)(param_2 + 0x1508),param_3,0,param_4,0,param_5);
  return;
}

