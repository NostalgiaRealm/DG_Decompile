/*
 * FUN_18001f8a0 at 18001f8a0
 * uint __cdecl FUN_18001f8a0(undefined8 param_1, float * param_2, float * param_3, float * param_4, uint param_5, uint param_6, float * param_7)
 * Address ranges: 18001f8a0-18001fad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18001f8a0(undefined8 param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                  uint param_6,float *param_7)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = *param_2;
  fVar8 = param_2[1];
  fVar7 = *param_3;
  fVar5 = param_3[1];
  uVar1 = param_6 & (param_5 ^ 0xffffffff);
  if (param_5 - 1 < 2) {
    if (param_5 == 1) {
      fVar6 = *param_7;
      pfVar4 = param_7;
    }
    else {
      fVar6 = param_7[2];
      pfVar4 = param_7 + 2;
    }
    fVar9 = (fVar9 - fVar6) / (fVar9 - fVar7);
    fVar7 = *pfVar4;
    fVar6 = 1.0;
    if (fVar9 < 1.0) {
      fVar5 = (fVar5 - fVar8) * fVar9 + fVar8;
      fVar6 = fVar9;
    }
    uVar2 = uVar1 & 0xfffffff3;
    if (fVar5 <= param_7[1]) {
      uVar2 = uVar1 & 0xfffffff3 | 4;
    }
    if (param_7[3] <= fVar5) {
      uVar2 = uVar2 | 8;
    }
  }
  else if ((param_5 - 4 & 0xfffffffb) == 0) {
    if (param_5 == 4) {
      fVar6 = param_7[1];
      lVar3 = 4;
    }
    else {
      fVar6 = param_7[3];
      lVar3 = 0xc;
    }
    fVar8 = (fVar8 - fVar6) / (fVar8 - fVar5);
    fVar5 = *(float *)(lVar3 + (longlong)param_7);
    fVar6 = 1.0;
    if (fVar8 < 1.0) {
      fVar7 = (fVar7 - fVar9) * fVar8 + fVar9;
      fVar6 = fVar8;
    }
    uVar2 = uVar1 & 0xfffffffc;
    if (fVar7 <= *param_7) {
      uVar2 = uVar1 & 0xfffffffc | 1;
    }
    if (param_7[2] <= fVar7) {
      uVar2 = uVar2 | 2;
    }
  }
  else {
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    uVar2 = uVar1;
  }
  *param_4 = fVar7;
  param_4[1] = fVar5;
  param_4[3] = (param_3[3] - param_2[3]) * fVar6 + param_2[3];
  param_4[4] = (param_3[4] - param_2[4]) * fVar6 + param_2[4];
  param_4[5] = (param_3[5] - param_2[5]) * fVar6 + param_2[5];
  param_4[7] = (param_3[7] - param_2[7]) * fVar6 + param_2[7];
  param_4[6] = (param_3[6] - param_2[6]) * fVar6 + param_2[6];
  param_4[8] = (param_3[8] - param_2[8]) * fVar6 + param_2[8];
  param_4[9] = (param_3[9] - param_2[9]) * fVar6 + param_2[9];
  param_4[10] = (param_3[10] - param_2[10]) * fVar6 + param_2[10];
  param_4[0xb] = (param_3[0xb] - param_2[0xb]) * fVar6 + param_2[0xb];
  param_4[0xc] = (param_3[0xc] - param_2[0xc]) * fVar6 + param_2[0xc];
  param_4[0xd] = (param_3[0xd] - param_2[0xd]) * fVar6 + param_2[0xd];
  param_4[0xe] = (param_3[0xe] - param_2[0xe]) * fVar6 + param_2[0xe];
  return uVar2;
}

