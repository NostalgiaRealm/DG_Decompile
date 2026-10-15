/*
 * FUN_100497e0 at 100497e0
 * undefined __stdcall FUN_100497e0(byte * param_1, uint param_2, uint param_3)
 * Address ranges: 100497e0-1004982d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100497e0(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 1) != 0) {
    uVar1 = param_3 >> 1 & 3;
    if (uVar1 == 0) {
      param_1[4] = param_1[4] | 1;
    }
    else if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
      *param_1 = *param_1 | 0xc;
    }
  }
  if ((param_2 & 0x80000000) != 0) {
    param_1[1] = 0xf;
  }
  return;
}

