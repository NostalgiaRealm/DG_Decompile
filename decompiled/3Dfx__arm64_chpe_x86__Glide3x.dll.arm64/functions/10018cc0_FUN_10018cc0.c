/*
 * FUN_10018cc0 at 10018cc0
 * undefined FUN_10018cc0(void)
 * Address ranges: 10018cc0-10018d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10018cc0(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  *(int *)(param_1 + 0x1c8) = param_2;
  *(int *)(param_1 + 0x1d0) = param_2;
  *(int *)(param_1 + 0x1d4) = param_3;
  if ((param_4 & 1) == 0) {
    *(int *)(param_1 + 0x1d0) = param_2 + (0x4000 - *(int *)(param_1 + 0x1b8)) * 0x50;
  }
  else {
    *(int *)(param_1 + 0x1b8) = 0x4000;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  *(int *)(param_1 + 0x1c0) = param_3;
  if ((param_5 & 1) == 0) {
    param_3 = param_3 + (0x4000 - *(int *)(param_1 + 0x1bc)) * 4;
    *(int *)(param_1 + 0x1d4) = param_3;
  }
  else {
    *(int *)(param_1 + 0x1bc) = 0x4000;
  }
  *(int *)(param_1 + 0x1c4) = param_3;
  return;
}

