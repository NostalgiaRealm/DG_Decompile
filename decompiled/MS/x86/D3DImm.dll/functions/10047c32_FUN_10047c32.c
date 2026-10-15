/*
 * FUN_10047c32 at 10047c32
 * undefined __fastcall FUN_10047c32(float * param_1, float * param_2, float * param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8)
 * Address ranges: 10047c32-10047e4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10047c32(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2[2] - param_1[2];
  fVar4 = *param_2 - *param_1;
  fVar6 = param_1[1] - param_2[1];
  fVar1 = FUN_1005c6fa(fVar6 * fVar6 + fVar4 * fVar4 + fVar2 * fVar2);
  fVar9 = (float)fVar1;
  fVar5 = *param_3 - *param_1;
  fVar7 = param_1[1] - param_3[1];
  fVar3 = param_3[2] - param_1[2];
  fVar1 = FUN_1005c6fa(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  fVar8 = (float)fVar1;
  fVar10 = (fVar3 / fVar8) * (fVar6 / fVar9) - (fVar7 / fVar8) * (fVar2 / fVar9);
  fVar6 = (fVar7 / fVar8) * (fVar4 / fVar9) - (fVar5 / fVar8) * (fVar6 / fVar9);
  fVar8 = (fVar3 / fVar8) * (fVar4 / fVar9) - (fVar5 / fVar8) * (fVar2 / fVar9);
  fVar1 = FUN_1005c6fa(fVar8 * fVar8 + fVar10 * fVar10 + fVar6 * fVar6);
  fVar9 = (float)fVar1;
  fVar10 = fVar10 / fVar9;
  fVar8 = fVar8 / fVar9;
  fVar6 = fVar6 / fVar9;
  fVar9 = -(fVar8 * param_1[1] + fVar10 * *param_1 + fVar6 * param_1[2]);
  if (fVar8 * param_4[1] + fVar10 * *param_4 + fVar6 * param_4[2] + fVar9 < 0.0) {
    fVar10 = -fVar10;
    fVar8 = -fVar8;
    fVar6 = -fVar6;
    fVar9 = -fVar9;
  }
  *param_5 = fVar10;
  *param_6 = fVar8;
  *param_7 = fVar6;
  *param_8 = fVar9;
  return;
}

