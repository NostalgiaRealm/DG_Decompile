/*
 * FUN_100611f8 at 100611f8
 * undefined FUN_100611f8(void)
 * Address ranges: 100611f8-100613f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100611f8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar1 = param_1 + 1;
  pfVar2 = param_1 + 2;
  fVar5 = *param_2 - *param_1;
  fVar8 = *pfVar1 - param_2[1];
  fVar6 = param_2[2] - *pfVar2;
  fVar3 = (float)FUN_10001138(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
  fVar11 = *param_3 - *param_1;
  fVar9 = *pfVar1 - param_3[1];
  fVar7 = param_3[2] - *pfVar2;
  fVar4 = (float)FUN_10001138(fVar9 * fVar9 + fVar11 * fVar11 + fVar7 * fVar7);
  fVar10 = (fVar7 / fVar4) * (fVar8 / fVar3) - (fVar9 / fVar4) * (fVar6 / fVar3);
  fVar6 = (fVar7 / fVar4) * (fVar5 / fVar3) - (fVar11 / fVar4) * (fVar6 / fVar3);
  fVar4 = (fVar9 / fVar4) * (fVar5 / fVar3) - (fVar11 / fVar4) * (fVar8 / fVar3);
  fVar3 = (float)FUN_10001138(fVar6 * fVar6 + fVar10 * fVar10 + fVar4 * fVar4);
  fVar10 = fVar10 / fVar3;
  fVar6 = fVar6 / fVar3;
  fVar4 = fVar4 / fVar3;
  fVar3 = -(fVar6 * *pfVar1 + fVar10 * *param_1 + fVar4 * *pfVar2);
  if (param_4[1] * fVar6 + *param_4 * fVar10 + param_4[2] * fVar4 + fVar3 < 0.0) {
    fVar10 = -fVar10;
    fVar6 = -fVar6;
    fVar4 = -fVar4;
    fVar3 = -fVar3;
  }
  *param_5 = fVar10;
  *param_6 = fVar6;
  *param_7 = fVar4;
  *param_8 = fVar3;
  return;
}

