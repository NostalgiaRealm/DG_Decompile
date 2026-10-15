/*
 * FUN_10009299 at 10009299
 * undefined __stdcall FUN_10009299(float * param_1, float * param_2, float * param_3)
 * Address ranges: 10009299-1000946f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009299(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [12];
  float fVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar6 = param_1[4];
  fVar7 = param_1[8];
  fVar8 = *param_1;
  fVar9 = param_1[1];
  fVar1 = param_1[9];
  fVar2 = param_1[6];
  fVar3 = param_1[5];
  auVar16._0_4_ = fVar8 * fVar8;
  auVar16._4_4_ = fVar6 * fVar6;
  auVar16._8_4_ = fVar7 * fVar7;
  fVar4 = param_1[10];
  fVar5 = param_1[2];
  auVar13._0_4_ = fVar9 * fVar9;
  auVar13._4_4_ = fVar3 * fVar3;
  auVar13._8_4_ = fVar1 * fVar1;
  auVar17._0_4_ = auVar16._0_4_ + auVar16._4_4_ + auVar16._8_4_;
  auVar17._4_8_ = auVar16._4_8_;
  auVar17._12_4_ = 0;
  auVar11._0_4_ = fVar5 * fVar5;
  auVar11._4_4_ = fVar2 * fVar2;
  auVar11._8_4_ = fVar4 * fVar4;
  auVar18 = rsqrtss(auVar17,auVar17);
  fVar15 = auVar18._0_4_;
  auVar14._0_4_ = auVar13._0_4_ + auVar13._4_4_ + auVar13._8_4_;
  auVar14._4_8_ = auVar13._4_8_;
  auVar14._12_4_ = 0;
  auVar18 = rsqrtss(auVar14,auVar14);
  fVar12 = auVar18._0_4_;
  auVar18._0_4_ = auVar11._0_4_ + auVar11._4_4_ + auVar11._8_4_;
  auVar18._4_8_ = auVar11._4_8_;
  auVar18._12_4_ = 0;
  auVar18 = rsqrtss(auVar18,auVar18);
  fVar10 = auVar18._0_4_;
  *param_3 = fVar15 * fVar8 * fVar15;
  param_3[1] = fVar15 * fVar6 * fVar15;
  param_3[2] = fVar15 * fVar7 * fVar15;
  param_3[3] = fVar15 * 0.0 * fVar15;
  param_3[4] = fVar12 * fVar9 * fVar12;
  param_3[5] = fVar12 * fVar3 * fVar12;
  param_3[6] = fVar12 * fVar1 * fVar12;
  param_3[7] = fVar12 * 0.0 * fVar12;
  param_3[8] = fVar10 * fVar5 * fVar10;
  param_3[9] = fVar10 * fVar2 * fVar10;
  param_3[10] = fVar10 * fVar4 * fVar10;
  param_3[0xb] = fVar10 * 0.0 * fVar10;
  fVar10 = param_3[1];
  fVar12 = param_3[2];
  fVar15 = param_3[3];
  if (0.0 <= ((fVar3 * fVar4 - fVar1 * fVar2) * fVar8 - (fVar4 * fVar9 - fVar1 * fVar5) * fVar6) +
             (fVar9 * fVar2 - fVar3 * fVar5) * fVar7) {
    *param_2 = *param_3;
    param_2[1] = fVar10;
    param_2[2] = fVar12;
    param_2[3] = fVar15;
    fVar6 = param_3[5];
    fVar7 = param_3[6];
    fVar8 = param_3[7];
    param_2[4] = param_3[4];
    param_2[5] = fVar6;
    param_2[6] = fVar7;
    param_2[7] = fVar8;
    fVar6 = param_3[8];
    fVar7 = param_3[9];
    fVar8 = param_3[10];
    fVar9 = param_3[0xb];
  }
  else {
    *param_2 = -*param_3;
    param_2[1] = -fVar10;
    param_2[2] = -fVar12;
    param_2[3] = -fVar15;
    fVar6 = param_3[5];
    fVar7 = param_3[6];
    fVar8 = param_3[7];
    param_2[4] = -param_3[4];
    param_2[5] = -fVar6;
    param_2[6] = -fVar7;
    param_2[7] = -fVar8;
    fVar6 = -param_3[8];
    fVar7 = -param_3[9];
    fVar8 = -param_3[10];
    fVar9 = -param_3[0xb];
  }
  param_2[8] = fVar6;
  param_2[9] = fVar7;
  param_2[10] = fVar8;
  param_2[0xb] = fVar9;
  return;
}

