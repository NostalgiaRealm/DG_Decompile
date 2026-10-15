/*
 * FUN_1009f358 at 1009f358
 * undefined FUN_1009f358(void)
 * Address ranges: 1009f358-1009f3df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009f358(undefined8 param_1,int param_2,uint param_3,undefined1 param_4,uint *param_5)

{
  undefined1 uVar1;
  
  if (((param_3 & 0x3f00) == 0x300) && (*(uint *)(param_2 + 0x21c) != 0)) {
    *param_5 = param_3 | 0x40000000;
    *(undefined1 *)(param_5 + 1) = param_4;
    param_5[4] = 0xffffffff;
    param_5[5] = 0xffffffff;
    param_5[6] = 0xffffffff;
    param_5[7] = 0xffffffff;
    uVar1 = *(undefined1 *)(param_2 + 0x220);
    param_5[8] = *(uint *)(param_2 + 0x21c) | 0x10000000;
    *(undefined1 *)(param_5 + 9) = uVar1;
  }
  else {
    *param_5 = param_3;
    *(undefined1 *)(param_5 + 1) = param_4;
    param_5[4] = 0xffffffff;
    param_5[5] = 0xffffffff;
    param_5[6] = 0xffffffff;
    param_5[7] = 0xffffffff;
  }
  return;
}

