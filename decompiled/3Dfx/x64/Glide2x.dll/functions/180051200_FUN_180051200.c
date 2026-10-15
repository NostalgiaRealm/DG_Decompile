/*
 * FUN_180051200 at 180051200
 * undefined __fastcall FUN_180051200(undefined8 param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined4 param_5)
 * Address ranges: 180051200-180051286
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051200(undefined8 param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
                  undefined4 param_5)

{
  FUN_180047a5c(*(longlong *)(param_2 + 0x1508),param_4,0,0,0x2000);
  FUN_180047a5c(*(longlong *)(param_2 + 0x1508),param_3,0,0,0x1000);
  FUN_180048940(*(longlong *)(param_2 + 0x1508),param_3,0,param_4,0,param_5);
  return;
}

