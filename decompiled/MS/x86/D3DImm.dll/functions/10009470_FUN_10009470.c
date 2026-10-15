/*
 * FUN_10009470 at 10009470
 * undefined4 __stdcall FUN_10009470(float * param_1, float * param_2)
 * Address ranges: 10009470-1000964c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10009470(float *param_1,float *param_2)

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
  undefined1 auVar10 [16];
  undefined4 in_EAX;
  uint uVar11;
  undefined1 auVar13 [12];
  float fVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  
  auVar16._4_4_ = -(uint)(param_1[0xd] == 0.0);
  auVar16._0_4_ = -(uint)(param_1[0xc] == 0.0);
  auVar16._8_4_ = -(uint)(param_1[0xe] == 0.0);
  auVar16._12_4_ = -(uint)(param_1[0xf] == 1.0);
  uVar11 = movmskps(in_EAX,auVar16);
  if (uVar11 == 0xf) {
    fVar1 = param_1[8];
    fVar2 = *param_1;
    fVar3 = param_1[4];
    fVar4 = param_1[9];
    fVar5 = param_1[1];
    fVar6 = param_1[2];
    fVar7 = param_1[5];
    fVar8 = param_1[10];
    fVar9 = param_1[6];
    auVar14._4_4_ = -(uint)(ABS(fVar6 * fVar2 + fVar9 * fVar3 + fVar8 * fVar1) < 0.001);
    auVar14._0_4_ = -(uint)(ABS(fVar5 * fVar2 + fVar7 * fVar3 + fVar4 * fVar1) < 0.001);
    auVar14._8_4_ = -(uint)(ABS(fVar6 * fVar5 + fVar9 * fVar7 + fVar8 * fVar4) < 0.001);
    auVar14._12_4_ = 0xffffffff;
    uVar11 = movmskps(0xf,auVar14);
    uVar11 = uVar11 & 7;
    if ((char)uVar11 == '\a') {
      auVar13._0_4_ = fVar2 * fVar2;
      auVar13._4_4_ = fVar3 * fVar3;
      auVar13._8_4_ = fVar1 * fVar1;
      auVar18._0_4_ = fVar5 * fVar5;
      auVar18._4_4_ = fVar7 * fVar7;
      auVar18._8_4_ = fVar4 * fVar4;
      auVar15._0_4_ = auVar13._0_4_ + auVar13._4_4_ + auVar13._8_4_;
      auVar15._4_8_ = auVar13._4_8_;
      auVar15._12_4_ = 0;
      auVar21._0_4_ = fVar6 * fVar6;
      auVar21._4_4_ = fVar9 * fVar9;
      auVar21._8_4_ = fVar8 * fVar8;
      auVar19._0_4_ = auVar18._0_4_ + auVar18._4_4_ + auVar18._8_4_;
      auVar19._4_8_ = auVar18._4_8_;
      auVar19._12_4_ = 0;
      auVar16 = rsqrtss(auVar15,auVar15);
      fVar12 = auVar16._0_4_;
      auVar16 = rsqrtss(auVar19,auVar19);
      fVar17 = auVar16._0_4_;
      auVar22._0_4_ = auVar21._0_4_ + auVar21._4_4_ + auVar21._8_4_;
      auVar22._4_8_ = auVar21._4_8_;
      auVar22._12_4_ = 0;
      auVar16 = rsqrtss(auVar22,auVar22);
      fVar20 = auVar16._0_4_;
      auVar10._4_4_ = -(uint)(ABS(1.0 - fVar17) < 0.001);
      auVar10._0_4_ = -(uint)(ABS(1.0 - fVar12) < 0.001);
      auVar10._8_4_ = -(uint)(ABS(1.0 - fVar20) < 0.001);
      auVar10._12_4_ = 0;
      uVar11 = movmskps(uVar11,auVar10);
      uVar11 = uVar11 & 7;
      if ((char)uVar11 == '\a') {
        *param_2 = fVar12 * fVar2;
        param_2[1] = fVar12 * fVar3;
        param_2[2] = fVar12 * fVar1;
        param_2[3] = fVar12 * 0.0;
        param_2[4] = fVar17 * fVar5;
        param_2[5] = fVar17 * fVar7;
        param_2[6] = fVar17 * fVar4;
        param_2[7] = fVar17 * 0.0;
        param_2[8] = fVar20 * fVar6;
        param_2[9] = fVar20 * fVar9;
        param_2[10] = fVar20 * fVar8;
        param_2[0xb] = fVar20 * 0.0;
        return CONCAT31((int3)((uint)param_2 >> 8),1);
      }
    }
  }
  return uVar11 & 0xffffff00;
}

