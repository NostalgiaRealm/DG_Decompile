/*
 * FUN_100278b0 at 100278b0
 * undefined FUN_100278b0(void)
 * Address ranges: 100278b0-10027ba3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100278b0(undefined8 param_1,float *param_2,float *param_3,float *param_4,uint param_5,
                 uint param_6,float *param_7)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *param_2;
  fVar7 = param_2[1];
  fVar4 = *param_3;
  fVar3 = param_3[1];
  param_6 = param_6 & (param_5 ^ 0xffffffff);
  if ((param_5 - 4 & 0xfffffffb) == 0) {
    fVar6 = fVar7 - fVar3;
    pfVar1 = param_7 + 1;
    if (param_5 != 4) {
      pfVar1 = param_7 + 3;
    }
    fVar3 = *pfVar1;
    fVar6 = (fVar7 - fVar3) / fVar6;
    fVar5 = 1.0;
    if (fVar6 < 1.0) {
      fVar4 = (fVar4 - fVar8) * fVar6 + fVar8;
      fVar5 = fVar6;
    }
    uVar2 = param_6 & 0xfffffffc;
    if (fVar4 <= *param_7) {
      uVar2 = param_6 & 0xfffffffc | 1;
    }
    if (param_7[2] <= fVar4) {
      uVar2 = uVar2 | 2;
    }
  }
  else if (param_5 - 1 < 2) {
    fVar6 = fVar8 - fVar4;
    if (param_5 == 1) {
      fVar4 = *param_7;
    }
    else {
      fVar4 = param_7[2];
    }
    fVar6 = (fVar8 - fVar4) / fVar6;
    fVar5 = 1.0;
    if (fVar6 < 1.0) {
      fVar3 = (fVar3 - fVar7) * fVar6 + fVar7;
      fVar5 = fVar6;
    }
    uVar2 = param_6 & 0xfffffff3;
    if (fVar3 <= param_7[1]) {
      uVar2 = param_6 & 0xfffffff3 | 4;
    }
    if (param_7[3] <= fVar3) {
      uVar2 = uVar2 | 8;
    }
  }
  else {
    fVar4 = 0.0;
    fVar3 = 0.0;
    fVar5 = 0.0;
    uVar2 = param_6;
  }
  *param_4 = fVar4;
  param_4[1] = fVar3;
  param_4[3] = (param_3[3] - param_2[3]) * fVar5 + param_2[3];
  param_4[4] = (param_3[4] - param_2[4]) * fVar5 + param_2[4];
  param_4[5] = (param_3[5] - param_2[5]) * fVar5 + param_2[5];
  param_4[7] = (param_3[7] - param_2[7]) * fVar5 + param_2[7];
  param_4[6] = (param_3[6] - param_2[6]) * fVar5 + param_2[6];
  param_4[8] = (param_3[8] - param_2[8]) * fVar5 + param_2[8];
  param_4[9] = (param_3[9] - param_2[9]) * fVar5 + param_2[9];
  param_4[10] = (param_3[10] - param_2[10]) * fVar5 + param_2[10];
  param_4[0xb] = (param_3[0xb] - param_2[0xb]) * fVar5 + param_2[0xb];
  param_4[0xc] = (param_3[0xc] - param_2[0xc]) * fVar5 + param_2[0xc];
  param_4[0xd] = (param_3[0xd] - param_2[0xd]) * fVar5 + param_2[0xd];
  param_4[0xe] = (param_3[0xe] - param_2[0xe]) * fVar5 + param_2[0xe];
  return uVar2;
}

