/*
 * FUN_18001e698 at 18001e698
 * uint __fastcall FUN_18001e698(undefined8 param_1, float * param_2, float * param_3, float * param_4, uint param_5, uint param_6, float * param_7)
 * Address ranges: 18001e698-18001e924
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001e698(undefined8 param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                  uint param_6,float *param_7)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar6 = *param_3;
  uVar2 = param_6 & ~param_5;
  fVar8 = param_3[1];
  if ((param_5 == 1) || (param_5 == 2)) {
    fVar9 = *param_2 - fVar6;
    if (param_5 == 1) {
      fVar7 = *param_2 - *param_7;
      pfVar5 = param_7;
    }
    else {
      pfVar5 = param_7 + 2;
      fVar7 = *param_2 - *pfVar5;
    }
    fVar6 = *pfVar5;
    uVar3 = uVar2 & 0xfffffff3;
    fVar7 = fVar7 / fVar9;
    if (fVar7 < 1.0) {
      fVar8 = (fVar8 - fVar1) * fVar7 + fVar1;
    }
    else {
      fVar7 = 1.0;
    }
    uVar2 = uVar3 | 4;
    if (param_7[1] < fVar8) {
      uVar2 = uVar3;
    }
    if (param_7[3] <= fVar8) {
      uVar2 = uVar2 | 8;
    }
  }
  else {
    lVar4 = 4;
    if ((param_5 == 4) || (param_5 == 8)) {
      fVar7 = fVar1 - fVar8;
      if (param_5 == 4) {
        fVar9 = param_7[1];
      }
      else {
        fVar9 = param_7[3];
        lVar4 = 0xc;
      }
      uVar3 = uVar2 & 0xfffffffc;
      fVar8 = *(float *)(lVar4 + (longlong)param_7);
      fVar7 = (fVar1 - fVar9) / fVar7;
      if (fVar7 < 1.0) {
        fVar6 = (fVar6 - *param_2) * fVar7 + *param_2;
      }
      else {
        fVar7 = 1.0;
      }
      uVar2 = uVar3 | 1;
      if (*param_7 < fVar6) {
        uVar2 = uVar3;
      }
      if (param_7[2] <= fVar6) {
        uVar2 = uVar2 | 2;
      }
    }
    else {
      fVar6 = 0.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
    }
  }
  *param_4 = fVar6;
  param_4[1] = fVar8;
  param_4[3] = (param_3[3] - param_2[3]) * fVar7 + param_2[3];
  param_4[4] = (param_3[4] - param_2[4]) * fVar7 + param_2[4];
  param_4[5] = (param_3[5] - param_2[5]) * fVar7 + param_2[5];
  param_4[7] = (param_3[7] - param_2[7]) * fVar7 + param_2[7];
  param_4[6] = (param_3[6] - param_2[6]) * fVar7 + param_2[6];
  param_4[8] = (param_3[8] - param_2[8]) * fVar7 + param_2[8];
  param_4[9] = (param_3[9] - param_2[9]) * fVar7 + param_2[9];
  param_4[10] = (param_3[10] - param_2[10]) * fVar7 + param_2[10];
  param_4[0xb] = (param_3[0xb] - param_2[0xb]) * fVar7 + param_2[0xb];
  param_4[0xc] = (param_3[0xc] - param_2[0xc]) * fVar7 + param_2[0xc];
  param_4[0xd] = (param_3[0xd] - param_2[0xd]) * fVar7 + param_2[0xd];
  param_4[0xe] = (param_3[0xe] - param_2[0xe]) * fVar7 + param_2[0xe];
  return uVar2;
}

