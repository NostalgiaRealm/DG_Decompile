/*
 * FUN_10070c20 at 10070c20
 * undefined FUN_10070c20(void)
 * Address ranges: 10070c20-10070cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070c20(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0) {
    if ((param_3 & 0x70000000) == 0x30000000) {
      param_4 = FUN_10070bd8();
    }
    else {
      param_4 = FUN_10070b90(param_1,param_2,param_3 & 0x1fff);
    }
  }
  *(int *)(param_2 + 0x240) = param_4;
  *(byte *)(param_2 + 0x244) = (byte)(param_3 >> 0x10) & 0xf;
  *(undefined8 *)(param_2 + 0x250) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 600) = 0xffffffffffffffff;
  *(uint *)(param_2 + 0x234) = param_3 >> 0x18 & 0xf;
  *(uint *)(param_2 + 0x230) = param_3 >> 7 & 0x2000;
  return;
}

