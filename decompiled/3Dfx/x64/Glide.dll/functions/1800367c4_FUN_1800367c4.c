/*
 * FUN_1800367c4 at 1800367c4
 * undefined __fastcall FUN_1800367c4(longlong * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char param_7)
 * Address ranges: 1800367c4-18003682e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800367c4(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

