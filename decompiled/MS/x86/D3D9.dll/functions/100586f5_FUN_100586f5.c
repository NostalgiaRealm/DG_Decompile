/*
 * FUN_100586f5 at 100586f5
 * undefined __stdcall FUN_100586f5(byte * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 100586f5-10058744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100586f5(byte *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 >> 0x19 & 1) != 0) {
    uVar1 = param_3 >> 0x1a & 3;
    if (uVar1 == 0) {
      param_1[4] = param_1[4] | 1;
    }
    else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      *param_1 = *param_1 | 0xc;
    }
  }
  if ((param_3 >> 0x18 & 1) != 0) {
    param_1[1] = 0xf;
  }
  return;
}

