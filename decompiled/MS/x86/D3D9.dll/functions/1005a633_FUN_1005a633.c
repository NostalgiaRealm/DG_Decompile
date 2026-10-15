/*
 * FUN_1005a633 at 1005a633
 * uint * __stdcall FUN_1005a633(uint * param_1, int * param_2, int * param_3, ushort param_4)
 * Address ranges: 1005a633-1005a6c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1005a633(uint *param_1,int *param_2,int *param_3,ushort param_4)

{
  uint uVar1;
  ushort uVar2;
  
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  *param_1 = 0;
  uVar2 = param_4 & 0xf0;
  *(undefined1 *)(param_1 + 1) = 0xe4;
  if (uVar2 == 0x10) {
    FUN_1005a556(param_2,param_3);
    *param_1 = param_2[0x82];
  }
  else {
    if (uVar2 == 0x20) {
      FUN_1005a5c1((int)param_2);
      uVar1 = param_2[0x83];
    }
    else {
      if (uVar2 != 0xb0) {
        return param_1;
      }
      uVar1 = param_4 >> 10 | 0x410000;
    }
    *param_1 = uVar1;
  }
  return param_1;
}

