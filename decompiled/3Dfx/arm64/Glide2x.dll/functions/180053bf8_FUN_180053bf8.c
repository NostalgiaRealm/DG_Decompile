/*
 * FUN_180053bf8 at 180053bf8
 * undefined __cdecl FUN_180053bf8(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined4 param_5)
 * Address ranges: 180053bf8-180053c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053bf8(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  FUN_18004b098(*(ulonglong *)(param_2 + 0x1508),param_4,0,0,0x2000);
  FUN_18004b098(*(ulonglong *)(param_2 + 0x1508),param_3,0,0,0x1000);
  FUN_18004c168(*(longlong *)(param_2 + 0x1508),param_3,0,param_4,0,param_5);
  return;
}

