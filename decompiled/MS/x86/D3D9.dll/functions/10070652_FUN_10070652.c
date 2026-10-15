/*
 * FUN_10070652 at 10070652
 * undefined __stdcall FUN_10070652(int param_1, uint param_2, undefined1 param_3, uint * param_4)
 * Address ranges: 10070652-100706cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070652(int param_1,uint param_2,undefined1 param_3,uint *param_4)

{
  undefined1 uVar1;
  
  if (((param_2 & 0x3f00) == 0x300) && (*(int *)(param_1 + 0x21c) != 0)) {
    *(undefined1 *)(param_4 + 1) = param_3;
    param_4[4] = 0xffffffff;
    param_4[7] = 0xffffffff;
    param_4[6] = 0xffffffff;
    param_4[5] = 0xffffffff;
    *param_4 = param_2 | 0x40000000;
    uVar1 = *(undefined1 *)(param_1 + 0x220);
    param_4[8] = *(uint *)(param_1 + 0x21c) | 0x10000000;
    *(undefined1 *)(param_4 + 9) = uVar1;
  }
  else {
    *(undefined1 *)(param_4 + 1) = param_3;
    *param_4 = param_2;
    param_4[4] = 0xffffffff;
    param_4[7] = 0xffffffff;
    param_4[6] = 0xffffffff;
    param_4[5] = 0xffffffff;
  }
  return;
}

