/*
 * FUN_180038700 at 180038700
 * undefined __fastcall FUN_180038700(longlong param_1, int param_2, ulonglong param_3, undefined8 param_4, uint param_5, uint param_6, uint param_7, byte param_8)
 * Address ranges: 180038700-180038754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038700(longlong param_1,int param_2,ulonglong param_3,undefined8 param_4,uint param_5,
                  uint param_6,uint param_7,byte param_8)

{
  FUN_180038b30(param_1,param_2,param_3,*(longlong *)(param_1 + 0xf718),
                *(longlong *)(param_1 + 0xf710),*(int *)(param_1 + 0x7c),param_5,param_6,param_7,
                param_8);
  return;
}

