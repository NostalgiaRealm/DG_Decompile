/*
 * FUN_10043860 at 10043860
 * undefined __stdcall FUN_10043860(uint * param_1, uint param_2, char param_3, uint * param_4, uint * param_5)
 * Address ranges: 10043860-100439cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043860(uint *param_1,uint param_2,char param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  ushort uVar22;
  ushort uVar23;
  uint uVar24;
  ushort uVar25;
  undefined1 auVar21 [16];
  uint uVar26;
  ushort uVar27;
  uint uVar28;
  ushort uVar32;
  uint uVar33;
  ushort uVar35;
  uint uVar36;
  ushort uVar38;
  undefined1 auVar29 [16];
  ushort uVar31;
  ushort uVar34;
  ushort uVar37;
  uint uVar39;
  ushort uVar40;
  undefined1 auVar30 [16];
  
  auVar21 = ZEXT816(0);
  if (param_3 == '\0') {
    uVar13 = param_2 >> 3;
    auVar30 = _DAT_100d98d0;
    while( true ) {
      uVar14 = auVar21._0_2_;
      uVar15 = auVar21._2_2_;
      uVar16 = auVar21._4_2_;
      uVar18 = auVar21._6_2_;
      uVar19 = auVar21._8_2_;
      uVar22 = auVar21._10_2_;
      uVar23 = auVar21._12_2_;
      uVar25 = auVar21._14_2_;
      uVar27 = auVar30._0_2_;
      uVar31 = auVar30._2_2_;
      uVar32 = auVar30._4_2_;
      uVar34 = auVar30._6_2_;
      uVar35 = auVar30._8_2_;
      uVar37 = auVar30._10_2_;
      uVar38 = auVar30._12_2_;
      uVar40 = auVar30._14_2_;
      if (uVar13 == 0) break;
      uVar5 = (ushort)*param_1;
      uVar6 = *(ushort *)((int)param_1 + 2);
      uVar7 = (ushort)param_1[1];
      uVar8 = *(ushort *)((int)param_1 + 6);
      uVar9 = (ushort)param_1[2];
      uVar10 = *(ushort *)((int)param_1 + 10);
      uVar11 = (ushort)param_1[3];
      uVar12 = *(ushort *)((int)param_1 + 0xe);
      param_1 = param_1 + 4;
      auVar21._0_2_ = (uVar14 < uVar5) * uVar5 | (uVar14 >= uVar5) * uVar14;
      auVar21._2_2_ = (uVar15 < uVar6) * uVar6 | (uVar15 >= uVar6) * uVar15;
      auVar21._4_2_ = (uVar16 < uVar7) * uVar7 | (uVar16 >= uVar7) * uVar16;
      auVar21._6_2_ = (uVar18 < uVar8) * uVar8 | (uVar18 >= uVar8) * uVar18;
      auVar21._8_2_ = (uVar19 < uVar9) * uVar9 | (uVar19 >= uVar9) * uVar19;
      auVar21._10_2_ = (uVar22 < uVar10) * uVar10 | (uVar22 >= uVar10) * uVar22;
      auVar21._12_2_ = (uVar23 < uVar11) * uVar11 | (uVar23 >= uVar11) * uVar23;
      auVar21._14_2_ = (uVar25 < uVar12) * uVar12 | (uVar25 >= uVar12) * uVar25;
      auVar30._0_2_ = (uVar5 < uVar27) * uVar5 | (uVar5 >= uVar27) * uVar27;
      auVar30._2_2_ = (uVar6 < uVar31) * uVar6 | (uVar6 >= uVar31) * uVar31;
      auVar30._4_2_ = (uVar7 < uVar32) * uVar7 | (uVar7 >= uVar32) * uVar32;
      auVar30._6_2_ = (uVar8 < uVar34) * uVar8 | (uVar8 >= uVar34) * uVar34;
      auVar30._8_2_ = (uVar9 < uVar35) * uVar9 | (uVar9 >= uVar35) * uVar35;
      auVar30._10_2_ = (uVar10 < uVar37) * uVar10 | (uVar10 >= uVar37) * uVar37;
      auVar30._12_2_ = (uVar11 < uVar38) * uVar11 | (uVar11 >= uVar38) * uVar38;
      auVar30._14_2_ = (uVar12 < uVar40) * uVar12 | (uVar12 >= uVar40) * uVar40;
      uVar13 = uVar13 - 1;
    }
    uVar14 = (uVar19 < uVar14) * uVar14 | (uVar19 >= uVar14) * uVar19;
    uVar15 = (uVar22 < uVar15) * uVar15 | (uVar22 >= uVar15) * uVar22;
    uVar16 = (uVar23 < uVar16) * uVar16 | (uVar23 >= uVar16) * uVar23;
    uVar18 = (uVar25 < uVar18) * uVar18 | (uVar25 >= uVar18) * uVar25;
    uVar19 = (uVar27 < uVar35) * uVar27 | (uVar27 >= uVar35) * uVar35;
    uVar22 = (uVar31 < uVar37) * uVar31 | (uVar31 >= uVar37) * uVar37;
    uVar23 = (uVar32 < uVar38) * uVar32 | (uVar32 >= uVar38) * uVar38;
    uVar25 = (uVar34 < uVar40) * uVar34 | (uVar34 >= uVar40) * uVar40;
    uVar14 = (uVar16 < uVar14) * uVar14 | (uVar16 >= uVar14) * uVar16;
    uVar18 = (uVar18 < uVar15) * uVar15 | (uVar18 >= uVar15) * uVar18;
    uVar15 = (uVar19 < uVar23) * uVar19 | (uVar19 >= uVar23) * uVar23;
    uVar16 = (uVar22 < uVar25) * uVar22 | (uVar22 >= uVar25) * uVar25;
    uVar14 = (uVar18 < uVar14) * uVar14 | (uVar18 >= uVar14) * uVar18;
    uVar15 = (uVar15 < uVar16) * uVar15 | (uVar15 >= uVar16) * uVar16;
    for (uVar13 = param_2 & 7; uVar13 != 0; uVar13 = uVar13 - 1) {
      uVar16 = (ushort)*param_1;
      param_1 = (uint *)((int)param_1 + 2);
      uVar14 = (uVar14 < uVar16) * uVar16 | (uVar14 >= uVar16) * uVar14;
      uVar15 = (uVar16 < uVar15) * uVar16 | (uVar16 >= uVar15) * uVar15;
    }
    *param_4 = 0;
    *(ushort *)param_4 = uVar15;
    *param_5 = 0;
    *(ushort *)param_5 = uVar14;
    return;
  }
  uVar13 = param_2 >> 2;
  auVar29 = _DAT_100d98d0;
  while( true ) {
    uVar17 = auVar21._0_4_;
    uVar20 = auVar21._4_4_;
    uVar24 = auVar21._8_4_;
    uVar26 = auVar21._12_4_;
    uVar28 = auVar29._0_4_;
    uVar33 = auVar29._4_4_;
    uVar36 = auVar29._8_4_;
    uVar39 = auVar29._12_4_;
    if (uVar13 == 0) break;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    param_1 = param_1 + 4;
    auVar21._0_4_ = (uVar17 < uVar1) * uVar1 | (uVar17 >= uVar1) * uVar17;
    auVar21._4_4_ = (uVar20 < uVar2) * uVar2 | (uVar20 >= uVar2) * uVar20;
    auVar21._8_4_ = (uVar24 < uVar3) * uVar3 | (uVar24 >= uVar3) * uVar24;
    auVar21._12_4_ = (uVar26 < uVar4) * uVar4 | (uVar26 >= uVar4) * uVar26;
    auVar29._0_4_ = (uVar1 < uVar28) * uVar1 | (uVar1 >= uVar28) * uVar28;
    auVar29._4_4_ = (uVar2 < uVar33) * uVar2 | (uVar2 >= uVar33) * uVar33;
    auVar29._8_4_ = (uVar3 < uVar36) * uVar3 | (uVar3 >= uVar36) * uVar36;
    auVar29._12_4_ = (uVar4 < uVar39) * uVar4 | (uVar4 >= uVar39) * uVar39;
    uVar13 = uVar13 - 1;
  }
  uVar13 = (uVar24 < uVar17) * uVar17 | (uVar24 >= uVar17) * uVar24;
  uVar17 = (uVar26 < uVar20) * uVar20 | (uVar26 >= uVar20) * uVar26;
  uVar20 = (uVar28 < uVar36) * uVar28 | (uVar28 >= uVar36) * uVar36;
  uVar24 = (uVar33 < uVar39) * uVar33 | (uVar33 >= uVar39) * uVar39;
  uVar13 = (uVar17 < uVar13) * uVar13 | (uVar17 >= uVar13) * uVar17;
  uVar17 = (uVar20 < uVar24) * uVar20 | (uVar20 >= uVar24) * uVar24;
  for (uVar20 = param_2 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
    uVar24 = *param_1;
    param_1 = param_1 + 1;
    uVar13 = (uVar13 < uVar24) * uVar24 | (uVar13 >= uVar24) * uVar13;
    uVar17 = (uVar24 < uVar17) * uVar24 | (uVar24 >= uVar17) * uVar17;
  }
  *param_4 = uVar17;
  *param_5 = uVar13;
  return;
}

