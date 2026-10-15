/*
 * FUN_1004f034 at 1004f034
 * undefined __stdcall FUN_1004f034(int param_1, uint param_2, int param_3)
 * Address ranges: 1004f034-1004f0ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f034(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    if ((param_2 & 0x70000000) == 0x30000000) {
      param_3 = FUN_1004f004(param_1,param_2 & 0x1fff);
    }
    else {
      param_3 = FUN_1004efd4(param_1,param_2 & 0x1fff);
    }
  }
  *(int *)(param_1 + 0x240) = param_3;
  *(byte *)(param_1 + 0x244) = (byte)(param_2 >> 0x10) & 0xf;
  *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25c) = 0xffffffff;
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x254) = 0xffffffff;
  *(uint *)(param_1 + 0x234) = param_2 >> 0x18 & 0xf;
  *(uint *)(param_1 + 0x230) = param_2 >> 7 & 0x2000;
  return;
}

