/*
 * FUN_180019f8c at 180019f8c
 * uint * __fastcall FUN_180019f8c(uint * param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, byte param_7)
 * Address ranges: 180019f8c-18001a03c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_180019f8c(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                    byte param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 < param_3) {
    uVar4 = (uint)param_7 * 2 + 2;
    uVar3 = uVar4 * param_6;
    uVar1 = param_2 / uVar3;
    param_1[1] = uVar1;
    uVar2 = (uint)(((ulonglong)param_2 % (ulonglong)uVar3) / (ulonglong)uVar4);
    *param_1 = uVar2;
    param_1[3] = param_3 / uVar3;
    uVar4 = (uint)(((ulonglong)param_3 % (ulonglong)uVar3) / (ulonglong)uVar4);
    param_1[2] = uVar4;
    if (param_4 < uVar2) {
      uVar1 = uVar1 + 1;
      *param_1 = 0;
      param_1[1] = uVar1;
    }
    if (param_4 < uVar4) {
      param_1[2] = param_4;
    }
    if (param_5 <= uVar1) {
      param_1[1] = param_5;
    }
    if (param_5 <= param_3 / uVar3) {
      param_1[2] = param_4;
      param_1[3] = param_5 - 1;
    }
  }
  return param_1;
}

