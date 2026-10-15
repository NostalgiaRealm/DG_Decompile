/*
 * FUN_180043250 at 180043250
 * undefined __fastcall FUN_180043250(longlong param_1, int param_2, undefined * param_3, undefined8 param_4, int param_5, uint param_6, uint param_7, byte param_8)
 * Address ranges: 180043250-1800432ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043250(longlong param_1,int param_2,undefined *param_3,undefined8 param_4,int param_5,
                  uint param_6,uint param_7,byte param_8)

{
  FUN_180048db0(param_1,param_2,param_3,*(longlong *)(param_1 + 0xf718),
                *(longlong *)(param_1 + 0xf710),*(int *)(param_1 + 0x7c),param_5,param_6,param_7,
                param_8);
  *(byte *)(param_1 + 0xf68f) =
       *(byte *)(param_1 + 0xf68f) |
       (*(uint *)(param_3 + 0x10) & *(uint *)(param_1 + 0x10180)) != *(uint *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
  *(bool *)(param_1 + 0x10184) = param_7 != 0;
  return;
}

