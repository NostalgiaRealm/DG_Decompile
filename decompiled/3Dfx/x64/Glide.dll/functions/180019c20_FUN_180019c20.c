/*
 * FUN_180019c20 at 180019c20
 * undefined __fastcall FUN_180019c20(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
 * Address ranges: 180019c20-180019c67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019c20(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x3238) = param_5;
  *(undefined8 *)(param_1 + 0x3280) = param_3;
  *(undefined8 *)(param_1 + 0x3230) = param_4;
  *(undefined1 *)(param_1 + 0x32da) = 1;
  *(undefined4 *)(param_1 + 0x328c) = *(undefined4 *)(&DAT_180062c48 + (longlong)param_2 * 4);
  FUN_180048514(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),param_2);
  return;
}

