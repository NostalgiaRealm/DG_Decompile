/*
 * FUN_10048238 at 10048238
 * undefined FUN_10048238(void)
 * Address ranges: 10048238-100482bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048238(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = param_3;
  if ((param_4 & 1) == 0) {
    *(int *)(param_1 + 0x24) = param_2 + (0x4000 - *(int *)(param_1 + 0xc)) * 0x3c;
  }
  else {
    *(int *)(param_1 + 0xc) = 0x4000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(int *)(param_1 + 0x14) = param_3;
  if ((param_5 & 1) == 0) {
    param_3 = param_3 + (0x4000 - *(int *)(param_1 + 0x10)) * 4;
    *(int *)(param_1 + 0x28) = param_3;
  }
  else {
    *(int *)(param_1 + 0x10) = 0x4000;
  }
  *(int *)(param_1 + 0x18) = param_3;
  return;
}

