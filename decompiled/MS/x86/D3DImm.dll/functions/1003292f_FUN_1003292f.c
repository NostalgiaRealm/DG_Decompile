/*
 * FUN_1003292f at 1003292f
 * uint * __stdcall FUN_1003292f(uint * param_1, int * param_2, int * param_3, ushort param_4)
 * Address ranges: 1003292f-100329be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1003292f(uint *param_1,int *param_2,int *param_3,ushort param_4)

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
    FUN_1003289c(param_2,param_3);
    *param_1 = param_2[0x7e];
  }
  else {
    if (uVar2 == 0x20) {
      FUN_10032907((int)param_2);
      uVar1 = param_2[0x7f];
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

