/*
 * FUN_1001a1fa at 1001a1fa
 * uint __stdcall FUN_1001a1fa(float * param_1, float * param_2, float * param_3, uint param_4, uint param_5, float * param_6)
 * Address ranges: 1001a1fa-1001a438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1001a1fa(float *param_1,float *param_2,float *param_3,uint param_4,uint param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float local_10;
  float local_c;
  
  uVar4 = param_5 & ~param_4;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  local_c = *param_2;
  local_10 = param_2[1];
  if ((param_4 == 1) || (param_4 == 2)) {
    fVar3 = fVar1 - local_c;
    if (param_4 == 1) {
      local_c = *param_6;
    }
    else {
      local_c = param_6[2];
    }
    uVar4 = uVar4 & 0xfffffff3;
    fVar3 = (fVar1 - local_c) / fVar3;
    if (fVar3 < 1.0) {
      local_10 = (local_10 - fVar2) * fVar3 + fVar2;
    }
    else {
      fVar3 = 1.0;
    }
    if (local_10 <= param_6[1]) {
      uVar4 = uVar4 | 4;
    }
    if (param_6[3] < local_10 != (param_6[3] == local_10)) {
      uVar4 = uVar4 | 8;
    }
  }
  else if ((param_4 == 4) || (param_4 == 8)) {
    fVar3 = fVar2 - local_10;
    if (param_4 == 4) {
      local_10 = param_6[1];
    }
    else {
      local_10 = param_6[3];
    }
    uVar4 = uVar4 & 0xfffffffc;
    fVar3 = (fVar2 - local_10) / fVar3;
    if (fVar3 < 1.0) {
      local_c = (local_c - fVar1) * fVar3 + fVar1;
    }
    else {
      fVar3 = 1.0;
    }
    if (local_c <= *param_6) {
      uVar4 = uVar4 | 1;
    }
    if (param_6[2] < local_c != (param_6[2] == local_c)) {
      uVar4 = uVar4 | 2;
    }
  }
  else {
    fVar3 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
  }
  *param_3 = local_c;
  param_3[1] = local_10;
  param_3[3] = (param_2[3] - param_1[3]) * fVar3 + param_1[3];
  param_3[4] = (param_2[4] - param_1[4]) * fVar3 + param_1[4];
  param_3[5] = (param_2[5] - param_1[5]) * fVar3 + param_1[5];
  param_3[7] = (param_2[7] - param_1[7]) * fVar3 + param_1[7];
  param_3[6] = (param_2[6] - param_1[6]) * fVar3 + param_1[6];
  param_3[8] = (param_2[8] - param_1[8]) * fVar3 + param_1[8];
  param_3[9] = (param_2[9] - param_1[9]) * fVar3 + param_1[9];
  param_3[10] = (param_2[10] - param_1[10]) * fVar3 + param_1[10];
  param_3[0xb] = (param_2[0xb] - param_1[0xb]) * fVar3 + param_1[0xb];
  param_3[0xc] = (param_2[0xc] - param_1[0xc]) * fVar3 + param_1[0xc];
  param_3[0xd] = (param_2[0xd] - param_1[0xd]) * fVar3 + param_1[0xd];
  param_3[0xe] = param_1[0xe] + (param_2[0xe] - param_1[0xe]) * fVar3;
  return uVar4;
}

