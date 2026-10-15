/*
 * FUN_18012b1a0 at 18012b1a0
 * undefined FUN_18012b1a0(void)
 * Address ranges: 18012b1a0-18012b767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18012b1a0(float *param_1,undefined8 *param_2,uint param_3)

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
  float fVar19;
  undefined8 uVar20;
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
  float local_88 [2];
  undefined8 local_80;
  float local_78;
  float fStack_74;
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
  
  fVar9 = param_1[6];
  fVar27 = param_1[7];
  fVar29 = param_1[0xc];
  fVar17 = param_1[0xd];
  fVar10 = param_1[10];
  fVar25 = param_1[0xb];
  fVar32 = param_1[8];
  fVar15 = param_1[9];
  fVar14 = param_1[0xe];
  fVar26 = param_1[0xf];
  fVar28 = param_1[4];
  fVar16 = param_1[5];
  local_88[0] = (((fVar10 * fVar16 * fVar26 - fVar25 * fVar16 * fVar14) - fVar15 * fVar9 * fVar26) +
                 fVar15 * fVar27 * fVar14 + fVar17 * fVar9 * fVar25) - fVar17 * fVar27 * fVar10;
  local_78 = ((((fVar14 * fVar25 * fVar28 - fVar26 * fVar10 * fVar28) + fVar26 * fVar32 * fVar9) -
              fVar14 * fVar32 * fVar27) - fVar25 * fVar29 * fVar9) + fVar10 * fVar29 * fVar27;
  local_68 = (((fVar26 * fVar15 * fVar28 - fVar17 * fVar25 * fVar28) - fVar26 * fVar32 * fVar16) +
              fVar17 * fVar32 * fVar27 + fVar25 * fVar29 * fVar16) - fVar15 * fVar29 * fVar27;
  local_58 = ((((fVar17 * fVar10 * fVar28 - fVar14 * fVar15 * fVar28) + fVar14 * fVar32 * fVar16) -
              fVar17 * fVar32 * fVar9) - fVar10 * fVar29 * fVar16) + fVar15 * fVar29 * fVar9;
  fVar21 = param_1[2];
  fVar11 = param_1[3];
  fVar12 = *param_1;
  fVar18 = param_1[1];
  fVar31 = fVar32 * fVar11;
  local_88[1] = ((((fVar25 * fVar18 * fVar14 - fVar10 * fVar18 * fVar26) + fVar26 * fVar15 * fVar21)
                 - fVar14 * fVar15 * fVar11) - fVar25 * fVar17 * fVar21) + fVar10 * fVar17 * fVar11;
  fVar22 = fVar29 * fVar11;
  fVar19 = fVar29 * fVar21;
  fVar23 = fVar32 * fVar21;
  fStack_74 = (((fVar26 * fVar10 * fVar12 - fVar14 * fVar25 * fVar12) - fVar26 * fVar23) +
               fVar14 * fVar31 + fVar25 * fVar19) - fVar10 * fVar22;
  fVar29 = fVar29 * fVar18;
  fVar32 = fVar32 * fVar18;
  fStack_64 = ((((fVar17 * fVar25 * fVar12 - fVar26 * fVar15 * fVar12) + fVar26 * fVar32) -
               fVar17 * fVar31) - fVar25 * fVar29) + fVar15 * fVar22;
  fStack_54 = (((fVar14 * fVar15 * fVar12 - fVar17 * fVar10 * fVar12) - fVar14 * fVar32) +
               fVar17 * fVar23 + fVar10 * fVar29) - fVar15 * fVar19;
  fVar34 = fVar28 * fVar11;
  fVar33 = fVar28 * fVar21;
  fVar24 = fVar27 * fVar12;
  fVar30 = fVar9 * fVar12;
  fVar28 = fVar28 * fVar18;
  fVar13 = fVar16 * fVar12;
  local_80._0_4_ =
       (((fVar26 * fVar9 * fVar18 - fVar14 * fVar27 * fVar18) - fVar26 * fVar16 * fVar21) +
        fVar14 * fVar16 * fVar11 + fVar27 * fVar17 * fVar21) - fVar9 * fVar17 * fVar11;
  local_80._4_4_ =
       ((((fVar10 * fVar27 * fVar18 - fVar25 * fVar9 * fVar18) + fVar25 * fVar16 * fVar21) -
        fVar10 * fVar16 * fVar11) - fVar27 * fVar15 * fVar21) + fVar9 * fVar15 * fVar11;
  local_70 = ((((fVar14 * fVar24 - fVar26 * fVar30) + fVar26 * fVar33) - fVar14 * fVar34) -
             fVar27 * fVar19) + fVar9 * fVar22;
  fStack_6c = (((fVar25 * fVar30 - fVar10 * fVar24) - fVar25 * fVar33) + fVar10 * fVar34 +
              fVar27 * fVar23) - fVar9 * fVar31;
  local_60 = (((fVar26 * fVar13 - fVar17 * fVar24) - fVar26 * fVar28) + fVar17 * fVar34 +
             fVar27 * fVar29) - fVar16 * fVar22;
  fStack_5c = ((((fVar15 * fVar24 - fVar25 * fVar13) + fVar25 * fVar28) - fVar15 * fVar34) -
              fVar27 * fVar32) + fVar16 * fVar31;
  local_50 = ((((fVar17 * fVar30 - fVar14 * fVar13) + fVar14 * fVar28) - fVar17 * fVar33) -
             fVar9 * fVar29) + fVar16 * fVar19;
  fStack_4c = (((fVar10 * fVar13 - fVar15 * fVar30) - fVar10 * fVar28) + fVar15 * fVar33 +
              fVar9 * fVar32) - fVar16 * fVar23;
  fVar9 = fVar18 * local_78 + fVar12 * local_88[0] + fVar21 * local_68 + fVar11 * local_58;
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
        uVar20 = *(undefined8 *)((longlong)&local_80 + lVar8);
        uVar4 = *(undefined8 *)(local_88 + lVar6);
        lVar6 = lVar6 + 4;
        puVar3 = (undefined8 *)(lVar8 + (longlong)param_2);
        puVar3[1] = CONCAT44((float)((ulonglong)uVar20 >> 0x20) * fVar9,(float)uVar20 * fVar9);
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
          *(float *)((longlong)param_2 + (ulonglong)uVar2 * 4) = local_88[uVar5 + iVar1] * fVar9;
        } while (uVar7 < 4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < 4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

