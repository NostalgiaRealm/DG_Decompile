/*
 * FUN_1800eece8 at 1800eece8
 * undefined __fastcall FUN_1800eece8(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 1800eece8-1800eed60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eece8(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4)

{
  FUN_1800e2d18(*(longlong *)(param_2 + 0x1508),param_4,0,1,0x800);
  FUN_1800e2d18(*(longlong *)(param_2 + 0x1508),param_3,0,1,0x400);
  FUN_1800e3e30(*(longlong *)(param_2 + 0x1508),param_3,param_4);
  return;
}

