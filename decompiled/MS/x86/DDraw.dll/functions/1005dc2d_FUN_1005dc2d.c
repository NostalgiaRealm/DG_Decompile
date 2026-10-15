/*
 * FUN_1005dc2d at 1005dc2d
 * uint * __stdcall FUN_1005dc2d(uint * param_1, uint * param_2, uint param_3, uint param_4, uint param_5, uint param_6)
 * Address ranges: 1005dc2d-1005dcd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1005dc2d(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 == 0xffffffff) {
    param_5 = 0;
    uVar2 = param_6 & 0xffff;
    uVar3 = param_6 >> 0x10;
    param_6 = 0;
    if ((uVar3 != 0) && (uVar2 != 0)) {
      param_5 = *param_2;
      param_6 = (param_5 * uVar2) / uVar3;
      uVar1 = param_2[1];
      if (uVar1 <= param_6) {
        param_5 = (uVar1 * uVar3) / uVar2;
        param_6 = uVar1;
      }
    }
  }
  if ((param_3 == 0xffffffff) && (param_4 == 0xffffffff)) {
    param_3 = *param_2 - param_5 >> 1;
    param_4 = param_2[1] - param_6 >> 1;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5 + param_3;
  param_1[3] = param_6 + param_4;
  if (((int)(param_5 + param_3) <= (int)param_3) || ((int)(param_6 + param_4) <= (int)param_4)) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return param_1;
}

