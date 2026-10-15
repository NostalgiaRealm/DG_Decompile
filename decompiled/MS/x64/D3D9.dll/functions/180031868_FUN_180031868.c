/*
 * FUN_180031868 at 180031868
 * undefined __fastcall FUN_180031868(longlong param_1, int param_2, uint param_3, undefined2 param_4, uint param_5, int param_6, uint param_7, uint param_8, undefined8 param_9, int param_10)
 * Address ranges: 180031868-18003190d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031868(longlong param_1,int param_2,uint param_3,undefined2 param_4,uint param_5,
                  int param_6,uint param_7,uint param_8,undefined8 param_9,int param_10)

{
  uint uVar1;
  
  *(undefined2 *)(param_1 + 0x14) = param_4;
  *(short *)(param_1 + 0x12) = (short)param_3;
  *(short *)(param_1 + 0x10) = (short)param_2;
  *(int *)(param_1 + 0x20) = param_6;
  *(char *)(param_1 + 0x24) = (char)param_7;
  *(char *)(param_1 + 0x25) = (char)param_8;
  *(char *)(param_1 + 0x26) = (char)(param_5 >> 3);
  if (param_6 == 0) {
    uVar1 = param_2 * param_5 >> 3;
  }
  else {
    uVar1 = ((param_2 + -1 + param_7 & -param_7) / param_7) * param_6;
  }
  uVar1 = param_10 + -1 + uVar1 & -param_10;
  *(uint *)(param_1 + 0x18) = uVar1;
  if (param_6 != 0) {
    param_3 = ((param_8 - 1) + param_3 & -param_8) / param_8;
  }
  *(short *)(param_1 + 0x16) = (short)param_3;
  *(uint *)(param_1 + 0x1c) = (param_3 & 0xffff) * uVar1;
  return;
}

