/*
 * FUN_1800256b4 at 1800256b4
 * undefined __fastcall FUN_1800256b4(longlong param_1, ulonglong param_2, uint param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, longlong param_9, int param_10, byte param_11)
 * Address ranges: 1800256b4-18002573b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800256b4(longlong param_1,ulonglong param_2,uint param_3,ulonglong param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,longlong param_9,int param_10,byte param_11
                  )

{
  longlong lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0x180;
  FUN_180024918(param_1,param_1 + 0x148 + lVar1,param_3,param_4,param_5,param_6);
  FUN_180025178(param_1,param_1 + 0x148 + lVar1,param_7,param_8,param_9,param_10,param_11);
  return;
}

