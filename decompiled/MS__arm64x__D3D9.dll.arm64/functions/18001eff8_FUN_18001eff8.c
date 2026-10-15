/*
 * FUN_18001eff8 at 18001eff8
 * undefined FUN_18001eff8(void)
 * Address ranges: 18001eff8-18001f497
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001eff8(float *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_80 [2];
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  fVar23 = param_1[0xc];
  fVar30 = param_1[0xd];
  fVar14 = param_1[6];
  fVar34 = param_1[7];
  fVar32 = param_1[10];
  fVar31 = param_1[0xb];
  fVar25 = param_1[8];
  fVar33 = param_1[9];
  fVar28 = param_1[0xe];
  fVar29 = param_1[0xf];
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar9 = param_1[2];
  fVar15 = param_1[3];
  fVar20 = param_1[4];
  fVar13 = param_1[5];
  local_80[0] = (((fVar32 * fVar13 * fVar29 - fVar31 * fVar13 * fVar28) - fVar33 * fVar14 * fVar29)
                 + fVar33 * fVar34 * fVar28 + fVar30 * fVar14 * fVar31) - fVar30 * fVar34 * fVar32;
  local_70 = ((((fVar28 * fVar31 * fVar20 - fVar29 * fVar32 * fVar20) + fVar29 * fVar25 * fVar14) -
              fVar28 * fVar25 * fVar34) - fVar31 * fVar23 * fVar14) + fVar32 * fVar23 * fVar34;
  local_60 = (((fVar29 * fVar33 * fVar20 - fVar30 * fVar31 * fVar20) - fVar29 * fVar25 * fVar13) +
              fVar30 * fVar25 * fVar34 + fVar31 * fVar23 * fVar13) - fVar33 * fVar23 * fVar34;
  local_50 = ((((fVar30 * fVar32 * fVar20 - fVar28 * fVar33 * fVar20) + fVar28 * fVar25 * fVar13) -
              fVar30 * fVar25 * fVar14) - fVar32 * fVar23 * fVar13) + fVar33 * fVar23 * fVar14;
  fVar12 = fVar25 * fVar15;
  fVar16 = fVar25 * fVar9;
  fVar25 = fVar25 * fVar11;
  fVar18 = fVar23 * fVar9;
  fVar17 = fVar23 * fVar15;
  fVar23 = fVar23 * fVar11;
  local_80[1] = ((((fVar31 * fVar11 * fVar28 - fVar32 * fVar11 * fVar29) + fVar29 * fVar33 * fVar9)
                 - fVar28 * fVar33 * fVar15) - fVar31 * fVar30 * fVar9) + fVar32 * fVar30 * fVar15;
  fStack_5c = ((((fVar30 * fVar31 * fVar10 - fVar29 * fVar33 * fVar10) + fVar29 * fVar25) -
               fVar30 * fVar12) - fVar31 * fVar23) + fVar33 * fVar17;
  fVar27 = fVar20 * fVar15;
  fStack_6c = (((fVar29 * fVar32 * fVar10 - fVar28 * fVar31 * fVar10) - fVar29 * fVar16) +
               fVar28 * fVar12 + fVar31 * fVar18) - fVar32 * fVar17;
  fStack_4c = (((fVar28 * fVar33 * fVar10 - fVar30 * fVar32 * fVar10) - fVar28 * fVar25) +
               fVar30 * fVar16 + fVar32 * fVar23) - fVar33 * fVar18;
  fVar24 = fVar20 * fVar9;
  fVar22 = fVar34 * fVar10;
  fVar26 = fVar14 * fVar10;
  fVar20 = fVar20 * fVar11;
  fVar21 = fVar13 * fVar10;
  local_78._0_4_ =
       (((fVar29 * fVar14 * fVar11 - fVar28 * fVar34 * fVar11) - fVar29 * fVar13 * fVar9) +
        fVar28 * fVar13 * fVar15 + fVar34 * fVar30 * fVar9) - fVar14 * fVar30 * fVar15;
  local_78._4_4_ =
       ((((fVar32 * fVar34 * fVar11 - fVar31 * fVar14 * fVar11) + fVar31 * fVar13 * fVar9) -
        fVar32 * fVar13 * fVar15) - fVar34 * fVar33 * fVar9) + fVar14 * fVar33 * fVar15;
  local_68 = ((((fVar28 * fVar22 - fVar29 * fVar26) + fVar29 * fVar24) - fVar28 * fVar27) -
             fVar34 * fVar18) + fVar14 * fVar17;
  fStack_64 = (((fVar31 * fVar26 - fVar32 * fVar22) - fVar31 * fVar24) + fVar32 * fVar27 +
              fVar34 * fVar16) - fVar14 * fVar12;
  local_58 = (((fVar29 * fVar21 - fVar30 * fVar22) - fVar29 * fVar20) + fVar30 * fVar27 +
             fVar34 * fVar23) - fVar13 * fVar17;
  fStack_54 = ((((fVar33 * fVar22 - fVar31 * fVar21) + fVar31 * fVar20) - fVar33 * fVar27) -
              fVar34 * fVar25) + fVar13 * fVar12;
  local_48 = ((((fVar30 * fVar26 - fVar28 * fVar21) + fVar28 * fVar20) - fVar30 * fVar24) -
             fVar14 * fVar23) + fVar13 * fVar18;
  fStack_44 = (((fVar32 * fVar21 - fVar33 * fVar26) - fVar32 * fVar20) + fVar33 * fVar24 +
              fVar14 * fVar25) - fVar13 * fVar16;
  fVar9 = fVar11 * local_70 + fVar10 * local_80[0] + fVar9 * local_60 + fVar15 * local_50;
  if (fVar9 == 0.0) {
    uVar4 = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
  }
  else {
    fVar9 = 1.0 / fVar9;
    if ((param_3 & 1) == 0) {
      lVar6 = 0;
      do {
        lVar8 = lVar6 * 4;
        uVar19 = *(undefined8 *)((longlong)&local_78 + lVar8);
        uVar4 = *(undefined8 *)(local_80 + lVar6);
        lVar6 = lVar6 + 4;
        puVar3 = (undefined8 *)(lVar8 + (longlong)param_2);
        puVar3[1] = CONCAT44((float)((ulonglong)uVar19 >> 0x20) * fVar9,(float)uVar19 * fVar9);
        *puVar3 = CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar9,(float)uVar4 * fVar9);
      } while (lVar6 != 0x10);
    }
    else {
      uVar5 = 0;
      do {
        uVar7 = 0;
        do {
          iVar1 = uVar7 * 4;
          uVar2 = uVar7 + uVar5 * 4;
          uVar7 = uVar7 + 1;
          *(float *)((longlong)param_2 + (ulonglong)uVar2 * 4) = local_80[uVar5 + iVar1] * fVar9;
        } while (uVar7 < 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

