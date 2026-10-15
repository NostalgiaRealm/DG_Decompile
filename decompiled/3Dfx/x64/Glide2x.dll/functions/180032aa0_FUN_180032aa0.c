/*
 * FUN_180032aa0 at 180032aa0
 * undefined __fastcall FUN_180032aa0(longlong param_1, ulonglong param_2, uint param_3, ulonglong param_4, uint param_5, uint param_6, uint param_7, uint param_8, longlong param_9, int param_10, byte param_11)
 * Address ranges: 180032aa0-180032b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032aa0(longlong param_1,ulonglong param_2,uint param_3,ulonglong param_4,uint param_5,
                  uint param_6,uint param_7,uint param_8,longlong param_9,int param_10,byte param_11
                  )

{
  longlong lVar1;
  
  lVar1 = (param_2 & 0xffffffff) * 0x180;
  FUN_180031d0c(param_1,param_1 + 0x148 + lVar1,param_3,param_4,param_5,param_6);
  FUN_180032564(param_1,param_1 + 0x148 + lVar1,param_7,param_8,param_9,param_10,param_11);
  return;
}

