/*
 * FUN_1800eec60 at 1800eec60
 * undefined __fastcall FUN_1800eec60(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined4 param_5)
 * Address ranges: 1800eec60-1800eece6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eec60(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  FUN_1800e2d18(*(longlong *)(param_2 + 0x1508),param_4,0,0,0x2000);
  FUN_1800e2d18(*(longlong *)(param_2 + 0x1508),param_3,0,0,0x1000);
  FUN_1800e3dcc(*(longlong *)(param_2 + 0x1508),param_3,0,param_4,0,param_5);
  return;
}

