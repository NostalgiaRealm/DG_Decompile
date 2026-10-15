/*
 * FUN_1002f7f0 at 1002f7f0
 * undefined FUN_1002f7f0(void)
 * Address ranges: 1002f7f0-1002fce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002f7f0(float *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
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
  float local_40 [2];
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  float local_8;
  float fStack_4;
  
  fVar29 = param_1[10];
  fVar8 = param_1[5];
  fVar22 = param_1[0xf];
  fVar25 = param_1[0xb];
  fVar16 = param_1[0xe];
  fVar32 = param_1[9];
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  fVar18 = param_1[0xd];
  fVar9 = param_1[4];
  fVar26 = param_1[8];
  fVar19 = param_1[0xc];
  local_40[0] = (((fVar8 * fVar29 * fVar22 - fVar25 * fVar8 * fVar16) - fVar10 * fVar32 * fVar22) +
                 fVar11 * fVar32 * fVar16 + fVar18 * fVar10 * fVar25) - fVar18 * fVar11 * fVar29;
  local_30 = ((((fVar9 * fVar25 * fVar16 - fVar9 * fVar29 * fVar22) + fVar26 * fVar10 * fVar22) -
              fVar26 * fVar11 * fVar16) - fVar19 * fVar10 * fVar25) + fVar19 * fVar11 * fVar29;
  local_20 = (((fVar9 * fVar32 * fVar22 - fVar9 * fVar25 * fVar18) - fVar26 * fVar8 * fVar22) +
              fVar26 * fVar11 * fVar18 + fVar19 * fVar8 * fVar25) - fVar19 * fVar11 * fVar32;
  local_10 = ((((fVar9 * fVar29 * fVar18 - fVar9 * fVar32 * fVar16) + fVar26 * fVar8 * fVar16) -
              fVar26 * fVar10 * fVar18) - fVar19 * fVar8 * fVar29) + fVar19 * fVar10 * fVar32;
  fVar21 = param_1[1];
  fVar30 = param_1[2];
  fVar28 = param_1[3];
  fVar15 = fVar30 * fVar26;
  fVar14 = fVar28 * fVar26;
  fVar13 = fVar30 * fVar19;
  fVar7 = fVar28 * fVar19;
  fVar26 = fVar21 * fVar26;
  fVar24 = *param_1;
  local_40[1] = ((((fVar21 * fVar25 * fVar16 - fVar21 * fVar29 * fVar22) + fVar30 * fVar32 * fVar22)
                 - fVar28 * fVar32 * fVar16) - fVar30 * fVar18 * fVar25) + fVar28 * fVar18 * fVar29;
  fVar19 = fVar21 * fVar19;
  fStack_2c = (((fVar24 * fVar29 * fVar22 - fVar24 * fVar25 * fVar16) - fVar15 * fVar22) +
               fVar14 * fVar16 + fVar25 * fVar13) - fVar29 * fVar7;
  fStack_1c = ((((fVar24 * fVar25 * fVar18 - fVar22 * fVar24 * fVar32) + fVar22 * fVar26) -
               fVar14 * fVar18) - fVar25 * fVar19) + fVar32 * fVar7;
  fStack_c = (((fVar16 * fVar24 * fVar32 - fVar24 * fVar29 * fVar18) - fVar16 * fVar26) +
              fVar15 * fVar18 + fVar29 * fVar19) - fVar32 * fVar13;
  fVar31 = fVar24 * fVar11;
  fVar27 = fVar24 * fVar10;
  fVar20 = fVar30 * fVar9;
  fVar12 = fVar28 * fVar9;
  fVar9 = fVar21 * fVar9;
  fVar23 = fVar24 * fVar8;
  local_38._0_4_ =
       (((fVar22 * fVar21 * fVar10 - fVar16 * fVar21 * fVar11) - fVar22 * fVar30 * fVar8) +
        fVar16 * fVar28 * fVar8 + fVar30 * fVar18 * fVar11) - fVar28 * fVar18 * fVar10;
  local_38._4_4_ =
       ((((fVar29 * fVar21 * fVar11 - fVar25 * fVar21 * fVar10) + fVar25 * fVar30 * fVar8) -
        fVar29 * fVar28 * fVar8) - fVar30 * fVar32 * fVar11) + fVar28 * fVar32 * fVar10;
  local_28 = ((((fVar16 * fVar31 - fVar22 * fVar27) + fVar22 * fVar20) - fVar16 * fVar12) -
             fVar11 * fVar13) + fVar10 * fVar7;
  fStack_24 = (((fVar25 * fVar27 - fVar29 * fVar31) - fVar25 * fVar20) + fVar29 * fVar12 +
              fVar15 * fVar11) - fVar14 * fVar10;
  local_18 = (((fVar22 * fVar23 - fVar18 * fVar31) - fVar22 * fVar9) + fVar18 * fVar12 +
             fVar11 * fVar19) - fVar8 * fVar7;
  fStack_14 = ((((fVar32 * fVar31 - fVar25 * fVar23) + fVar25 * fVar9) - fVar32 * fVar12) -
              fVar11 * fVar26) + fVar14 * fVar8;
  local_8 = ((((fVar18 * fVar27 - fVar16 * fVar23) + fVar16 * fVar9) - fVar18 * fVar20) -
            fVar10 * fVar19) + fVar8 * fVar13;
  fStack_4 = (((fVar29 * fVar23 - fVar32 * fVar27) - fVar29 * fVar9) + fVar32 * fVar20 +
             fVar10 * fVar26) - fVar15 * fVar8;
  fVar26 = local_40[0] * fVar24 + local_30 * fVar21 + local_20 * fVar30 + local_10 * fVar28;
  if (fVar26 == 0.0) {
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
    uVar6 = 0;
    fVar26 = 1.0 / fVar26;
    if ((param_3 & 1) == 0) {
      do {
        uVar17 = *(undefined8 *)((int)&local_38 + uVar6 * 4);
        uVar4 = *(undefined8 *)(local_40 + uVar6);
        puVar2 = (undefined8 *)((int)param_2 + uVar6 * 4);
        uVar6 = uVar6 + 4;
        puVar2[1] = CONCAT44((float)((ulonglong)uVar17 >> 0x20) * fVar26,(float)uVar17 * fVar26);
        *puVar2 = CONCAT44((float)((ulonglong)uVar4 >> 0x20) * fVar26,(float)uVar4 * fVar26);
      } while (uVar6 < 0x10);
    }
    else {
      do {
        uVar5 = 0;
        do {
          iVar3 = uVar5 * 4;
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(float *)((int)param_2 + iVar1 + uVar6 * 0x10) = local_40[uVar6 + iVar3] * fVar26;
        } while (uVar5 < 4);
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

