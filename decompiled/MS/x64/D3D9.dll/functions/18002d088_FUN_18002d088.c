/*
 * FUN_18002d088 at 18002d088
 * void * __fastcall FUN_18002d088(float * param_1, undefined8 * param_2, char param_3)
 * Address ranges: 18002d088-18002d8ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void * FUN_18002d088(float *param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_e8 [56];
  
  fVar14 = param_1[0xb];
  fVar18 = param_1[7];
  fVar25 = param_1[0xc];
  fVar3 = param_1[6];
  fVar4 = param_1[0xf];
  fVar5 = param_1[0xe];
  fVar6 = param_1[0xd];
  fVar28 = param_1[8];
  fVar7 = param_1[4];
  local_e8[0] = (((param_1[10] * param_1[5] * fVar4 - fVar14 * param_1[5] * fVar5) -
                 param_1[9] * fVar3 * fVar4) + param_1[9] * fVar18 * fVar5 + fVar6 * fVar3 * fVar14)
                - fVar6 * fVar18 * param_1[10];
  local_e8[4] = ((((fVar5 * fVar14 * fVar7 - fVar4 * param_1[10] * fVar7) + fVar4 * fVar28 * fVar3)
                 - fVar5 * fVar28 * fVar18) - fVar14 * fVar25 * fVar3) +
                param_1[10] * fVar25 * fVar18;
  fVar16 = fVar25 * param_1[5];
  fVar15 = fVar28 * param_1[5];
  fVar13 = param_1[10];
  local_e8[8] = (((fVar4 * param_1[9] * fVar7 - fVar6 * fVar14 * fVar7) - fVar4 * fVar15) +
                 fVar6 * fVar28 * fVar18 + param_1[0xb] * fVar16) - param_1[9] * fVar25 * fVar18;
  fVar14 = param_1[2];
  fVar18 = param_1[0xb];
  fVar8 = param_1[9];
  local_e8[0xc] =
       ((((fVar6 * param_1[10] * fVar7 - fVar5 * param_1[9] * fVar7) + fVar5 * fVar15) -
        fVar6 * fVar28 * fVar3) - fVar13 * fVar16) + fVar8 * fVar25 * fVar3;
  fVar3 = param_1[3];
  fVar29 = fVar25 * fVar14;
  fVar28 = fVar25 * fVar3;
  local_e8[1] = ((((fVar18 * param_1[1] * fVar5 - fVar13 * param_1[1] * fVar4) +
                  fVar4 * fVar8 * fVar14) - fVar5 * fVar8 * fVar3) - fVar18 * fVar6 * fVar14) +
                fVar13 * fVar6 * fVar3;
  fVar4 = *param_1;
  fVar20 = param_1[8] * fVar3;
  fVar22 = param_1[8] * fVar14;
  fVar5 = param_1[0xf];
  fVar25 = fVar25 * param_1[1];
  fVar13 = param_1[8] * param_1[1];
  local_e8[5] = (((param_1[0xf] * param_1[10] * fVar4 - param_1[0xe] * fVar18 * fVar4) -
                 param_1[0xf] * fVar22) + param_1[0xe] * fVar20 + param_1[0xb] * fVar29) -
                param_1[10] * fVar28;
  local_e8[9] = ((((param_1[0xd] * fVar18 * fVar4 - fVar5 * param_1[9] * fVar4) + fVar5 * fVar13) -
                 param_1[0xd] * fVar20) - param_1[0xb] * fVar25) + param_1[9] * fVar28;
  local_e8[0xd] =
       (((param_1[0xe] * param_1[9] * fVar4 - param_1[0xd] * param_1[10] * fVar4) -
        param_1[0xe] * fVar13) + param_1[0xd] * fVar22 + param_1[10] * fVar25) - param_1[9] * fVar29
  ;
  fVar23 = param_1[5] * param_1[3];
  fVar16 = param_1[6] * param_1[1];
  fVar21 = param_1[5] * fVar14;
  fVar17 = param_1[7] * param_1[1];
  fVar27 = param_1[4] * param_1[2];
  fVar24 = param_1[4] * param_1[3];
  fVar18 = *param_1;
  local_e8[2] = (((fVar5 * fVar16 - param_1[0xe] * fVar17) - fVar5 * fVar21) + param_1[0xe] * fVar23
                + param_1[7] * fVar6 * fVar14) - param_1[6] * fVar6 * fVar3;
  fVar19 = param_1[7] * fVar18;
  fVar26 = param_1[6] * fVar18;
  fVar18 = param_1[5] * fVar18;
  fVar4 = param_1[0xd];
  fVar15 = param_1[4] * param_1[1];
  local_e8[6] = ((((param_1[0xe] * fVar19 - param_1[0xf] * fVar26) + param_1[0xf] * fVar27) -
                 param_1[0xe] * fVar24) - param_1[7] * fVar29) + param_1[6] * fVar28;
  local_e8[10] = (((param_1[0xf] * fVar18 - fVar4 * fVar19) - param_1[0xf] * fVar15) +
                  fVar4 * fVar24 + param_1[7] * fVar25) - param_1[5] * fVar28;
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  fVar28 = param_1[7];
  fVar7 = param_1[9];
  local_e8[0xe] =
       ((((fVar4 * fVar26 - param_1[0xe] * fVar18) + param_1[0xe] * fVar15) - fVar4 * fVar27) -
       param_1[6] * fVar25) + param_1[5] * fVar29;
  fVar25 = param_1[6];
  local_e8[3] = ((((fVar5 * fVar17 - fVar6 * fVar16) + fVar6 * fVar21) - fVar5 * fVar23) -
                fVar28 * fVar8 * fVar14) + fVar25 * fVar8 * fVar3;
  local_e8[7] = (((fVar6 * fVar26 - fVar5 * fVar19) - fVar6 * fVar27) + fVar5 * fVar24 +
                fVar28 * fVar22) - fVar25 * fVar20;
  local_e8[0xb] =
       ((((fVar7 * fVar19 - fVar6 * fVar18) + fVar6 * fVar15) - fVar7 * fVar24) - fVar28 * fVar13) +
       param_1[5] * fVar20;
  fVar14 = param_1[1] * local_e8[4] + *param_1 * local_e8[0] + param_1[2] * local_e8[8] +
           param_1[3] * local_e8[0xc];
  local_e8[0xf] =
       (((fVar5 * fVar18 - fVar7 * fVar26) - fVar5 * fVar15) + fVar7 * fVar27 + fVar25 * fVar13) -
       param_1[5] * fVar22;
  if (fVar14 == 0.0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  else {
    fVar14 = 1.0 / fVar14;
    if (param_3 == '\0') {
      lVar10 = 0;
      do {
        fVar18 = local_e8[lVar10 + 1];
        fVar25 = local_e8[lVar10 + 2];
        fVar3 = local_e8[lVar10 + 3];
        pfVar2 = (float *)((longlong)param_2 + lVar10 * 4);
        *pfVar2 = local_e8[lVar10] * fVar14;
        pfVar2[1] = fVar18 * fVar14;
        pfVar2[2] = fVar25 * fVar14;
        pfVar2[3] = fVar3 * fVar14;
        lVar10 = lVar10 + 4;
        puVar9 = (undefined1 *)register0x00000020;
      } while (lVar10 != 0x10);
    }
    else {
      uVar11 = 0;
      do {
        uVar12 = 0;
        do {
          iVar1 = uVar12 * 4;
          puVar9 = (undefined1 *)(ulonglong)(uVar11 * 4 + uVar12);
          uVar12 = uVar12 + 1;
          *(float *)((longlong)param_2 + (longlong)puVar9 * 4) = fVar14 * local_e8[uVar11 + iVar1];
        } while (uVar12 < 4);
        uVar11 = uVar11 + 1;
      } while (uVar11 < 4);
    }
    register0x00000020 = (BADSPACEBASE *)CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
  }
  return register0x00000020;
}

