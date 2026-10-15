/*
 * FUN_1800424c4 at 1800424c4
 * uint * __fastcall FUN_1800424c4(undefined8 param_1, uint * param_2, uint * param_3, uint param_4, uint param_5, uint param_6, uint param_7)
 * Address ranges: 1800424c4-180042584
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_1800424c4(undefined8 param_1,uint *param_2,uint *param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  
  if (param_6 == 0xffffffff) {
    uVar1 = param_7 >> 0x10;
    if ((param_7 >> 0x10 == 0) || ((short)param_7 == 0)) {
      param_6 = 0;
      param_7 = 0;
    }
    else {
      param_6 = *param_3;
      uVar2 = param_7 & 0xffff;
      param_7 = (param_6 * uVar2) / uVar1;
      if (param_3[1] <= param_7) {
        param_7 = param_3[1];
        param_6 = (param_3[1] * uVar1) / uVar2;
      }
    }
  }
  if ((param_4 == 0xffffffff) && (param_5 == 0xffffffff)) {
    param_4 = *param_3 - param_6 >> 1;
    param_5 = param_3[1] - param_7 >> 1;
  }
  *param_2 = param_4;
  param_2[1] = param_5;
  param_2[2] = param_6 + param_4;
  param_2[3] = param_7 + param_5;
  if (((int)(param_6 + param_4) <= (int)param_4) || ((int)(param_7 + param_5) <= (int)param_5)) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return param_2;
}

