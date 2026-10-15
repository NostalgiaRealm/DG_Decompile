/*
 * FUN_18003631c at 18003631c
 * undefined __fastcall FUN_18003631c(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char param_7)
 * Address ranges: 18003631c-180036386
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003631c(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7)

{
  (**(code **)(*param_1 + 0x2a0))();
  *(undefined4 *)((longlong)param_1 + 0x2cbc) = param_5;
  *(undefined4 *)(param_1 + 0x598) = param_6;
  *(uint *)(param_1 + 0x58c) = -(uint)(param_7 != '\0');
  *(undefined4 *)(param_1 + 0x596) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x2cb4) = param_3;
  *(undefined4 *)(param_1 + 0x597) = param_4;
  *(undefined1 *)(param_1 + 0x62e) = 1;
  return;
}

