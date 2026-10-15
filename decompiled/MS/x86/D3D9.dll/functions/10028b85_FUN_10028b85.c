/*
 * FUN_10028b85 at 10028b85
 * undefined4 __fastcall FUN_10028b85(float * param_1, undefined4 * param_2, char param_3)
 * Address ranges: 10028b85-1002920a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10028b85(float *param_1,undefined4 *param_2,char param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float local_124 [72];
  
  fVar1 = param_1[10];
  fVar2 = param_1[5];
  fVar3 = param_1[0xf];
  fVar4 = param_1[0xb];
  fVar5 = param_1[0xe];
  fVar6 = param_1[9];
  fVar7 = param_1[6];
  fVar8 = param_1[7];
  fVar9 = param_1[0xd];
  local_124[0] = (fVar9 * fVar7 * fVar4 +
                 ((fVar1 * fVar2 * fVar3 - fVar4 * fVar2 * fVar5) - fVar6 * fVar7 * fVar3) +
                 fVar6 * fVar8 * fVar5) - fVar9 * fVar8 * fVar1;
  fVar10 = param_1[4];
  fVar11 = param_1[8];
  fVar12 = param_1[0xc];
  local_124[4] = fVar12 * fVar8 * fVar1 +
                 ((((fVar4 * fVar10 * fVar5 - fVar10 * fVar1 * fVar3) + fVar3 * fVar11 * fVar7) -
                  fVar11 * fVar8 * fVar5) - fVar4 * fVar12 * fVar7);
  local_124[8] = (fVar2 * fVar12 * fVar4 +
                 ((fVar6 * fVar10 * fVar3 - fVar4 * fVar10 * fVar9) - fVar11 * fVar2 * fVar3) +
                 fVar9 * fVar11 * fVar8) - fVar12 * fVar8 * fVar6;
  local_124[0xc] =
       (((fVar11 * fVar2 * fVar5 + (fVar10 * fVar1 * fVar9 - fVar6 * fVar10 * fVar5)) -
        fVar11 * fVar7 * fVar9) - fVar2 * fVar12 * fVar1) + fVar12 * fVar7 * fVar6;
  fVar13 = param_1[1];
  fVar14 = param_1[2];
  fVar15 = param_1[3];
  local_124[1] = fVar9 * fVar15 * fVar1 +
                 ((((fVar5 * fVar4 * fVar13 - fVar1 * fVar13 * fVar3) + fVar6 * fVar14 * fVar3) -
                  fVar5 * fVar6 * fVar15) - fVar4 * fVar9 * fVar14);
  fVar16 = *param_1;
  fVar19 = fVar11 * fVar14;
  fVar18 = fVar11 * fVar15;
  fVar20 = fVar12 * fVar14;
  fVar17 = fVar12 * fVar15;
  local_124[5] = (fVar4 * fVar20 +
                 ((fVar3 * fVar1 * fVar16 - fVar4 * fVar16 * fVar5) - fVar19 * fVar3) +
                 fVar18 * fVar5) - fVar17 * fVar1;
  fVar11 = fVar11 * fVar13;
  fVar12 = fVar12 * fVar13;
  local_124[9] = ((((fVar9 * fVar4 * fVar16 - fVar6 * fVar16 * fVar3) + fVar3 * fVar11) -
                  fVar18 * fVar9) - fVar12 * fVar4) + fVar17 * fVar6;
  local_124[0xd] =
       (fVar12 * fVar1 +
       ((fVar6 * fVar16 * fVar5 - fVar1 * fVar16 * fVar9) - fVar11 * fVar5) + fVar19 * fVar9) -
       fVar20 * fVar6;
  local_124[2] = (fVar15 * fVar2 * fVar5 +
                  ((fVar3 * fVar7 * fVar13 - fVar5 * fVar8 * fVar13) - fVar2 * fVar14 * fVar3) +
                 fVar9 * fVar14 * fVar8) - fVar9 * fVar15 * fVar7;
  fVar21 = fVar8 * fVar16;
  fVar22 = fVar7 * fVar16;
  fVar24 = fVar10 * fVar14;
  fVar23 = fVar15 * fVar10;
  local_124[6] = fVar17 * fVar7 +
                 ((((fVar5 * fVar21 - fVar22 * fVar3) + fVar3 * fVar24) - fVar23 * fVar5) -
                 fVar20 * fVar8);
  fVar25 = fVar2 * fVar16;
  fVar10 = fVar13 * fVar10;
  local_124[10] =
       (((fVar3 * fVar25 - fVar9 * fVar21) - fVar3 * fVar10) + fVar23 * fVar9 + fVar12 * fVar8) -
       fVar17 * fVar2;
  local_124[0xe] =
       fVar20 * fVar2 +
       ((((fVar22 * fVar9 - fVar25 * fVar5) + fVar10 * fVar5) - fVar9 * fVar24) - fVar12 * fVar7);
  local_124[3] = (((fVar2 * fVar14 * fVar4 + (fVar8 * fVar13 * fVar1 - fVar7 * fVar13 * fVar4)) -
                  fVar15 * fVar2 * fVar1) - fVar6 * fVar14 * fVar8) + fVar6 * fVar15 * fVar7;
  local_124[7] = (((fVar22 * fVar4 - fVar21 * fVar1) - fVar24 * fVar4) + fVar23 * fVar1 +
                 fVar19 * fVar8) - fVar18 * fVar7;
  local_124[0xb] =
       ((((fVar21 * fVar6 - fVar25 * fVar4) + fVar10 * fVar4) - fVar6 * fVar23) - fVar11 * fVar8) +
       fVar2 * fVar18;
  local_124[0xf] =
       (fVar11 * fVar7 + ((fVar25 * fVar1 - fVar22 * fVar6) - fVar1 * fVar10) + fVar24 * fVar6) -
       fVar19 * fVar2;
  fVar1 = local_124[0xc] * fVar15 +
          local_124[8] * fVar14 + local_124[0] * fVar16 + local_124[4] * fVar13;
  if (fVar1 == 0.0) {
    for (iVar28 = 0x10; iVar28 != 0; iVar28 = iVar28 + -1) {
      *param_2 = 0;
      param_2 = param_2 + 1;
    }
    uVar27 = 0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    if (param_3 == '\0') {
      uVar26 = 0;
      do {
        param_2[uVar26] = local_124[uVar26] * fVar1;
        uVar26 = uVar26 + 1;
      } while (uVar26 < 0x10);
    }
    else {
      uVar29 = 0;
      do {
        uVar30 = 0;
        do {
          uVar31 = uVar30 + 1;
          uVar26 = uVar30 * 4 + uVar29 * 0x10;
          param_2[uVar29 * 4 + uVar30] = local_124[uVar30 * 4 + uVar29] * fVar1;
          uVar30 = uVar31;
        } while (uVar31 < 4);
        uVar29 = uVar29 + 1;
      } while (uVar29 < 4);
    }
    uVar27 = CONCAT31((int3)(uVar26 >> 8),1);
  }
  return uVar27;
}

