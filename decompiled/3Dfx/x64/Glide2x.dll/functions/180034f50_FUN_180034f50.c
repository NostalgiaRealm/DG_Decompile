/*
 * FUN_180034f50 at 180034f50
 * undefined __fastcall FUN_180034f50(undefined1 * param_1, int param_2)
 * Address ranges: 180034f50-180035510
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034f50(undefined1 *param_1,int param_2)

{
  ulonglong uVar1;
  sbyte sVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  float fVar18;
  uint local_res10;
  uint local_res20;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  
  uVar13 = 0;
  puVar14 = (uint *)&DAT_00000008;
  if ((param_2 == 9) || (param_2 == 10)) {
    local_68 = (undefined4 *)&DAT_18006bbb4;
    puVar8 = (uint *)&DAT_18006b9b0;
    local_60 = (undefined4 *)&DAT_18006bab4;
    puVar17 = (undefined4 *)&DAT_18006bab0;
    local_58 = (undefined4 *)&DAT_18006bbb8;
    puVar16 = (undefined4 *)&DAT_18006bbb0;
    local_50 = (undefined4 *)&DAT_18006bab8;
    puVar10 = (uint *)&DAT_18006b9b4;
    local_48 = (undefined4 *)&DAT_18006bbbc;
    puVar14 = (uint *)&DAT_18006b9b8;
    local_40 = (undefined4 *)&DAT_18006babc;
    puVar9 = (uint *)&DAT_18006b9bc;
    puVar15 = (uint *)&DAT_18006b6b4;
  }
  else if ((param_2 == 0xb) || (param_2 == 0xc)) {
    local_68 = (undefined4 *)&DAT_18006bbc4;
    puVar8 = (uint *)&DAT_18006b9c0;
    local_60 = (undefined4 *)&DAT_18006bac4;
    puVar17 = (undefined4 *)&DAT_18006bac0;
    local_58 = (undefined4 *)&DAT_18006bbc8;
    puVar16 = (undefined4 *)&DAT_18006bbc0;
    local_50 = (undefined4 *)&DAT_18006bac8;
    puVar10 = (uint *)&DAT_18006b9c4;
    local_48 = (undefined4 *)&DAT_18006bbcc;
    puVar14 = (uint *)&DAT_18006b9c8;
    local_40 = (undefined4 *)&DAT_18006bacc;
    puVar9 = (uint *)&DAT_18006b9cc;
    puVar15 = (uint *)&DAT_18006b6c4;
  }
  else if ((param_2 == 0xd) || (param_2 == 0xe)) {
    local_68 = (undefined4 *)&DAT_18006bbd4;
    puVar8 = (uint *)&DAT_18006b9d0;
    local_60 = (undefined4 *)&DAT_18006bad4;
    puVar17 = (undefined4 *)&DAT_18006bad0;
    local_58 = (undefined4 *)&DAT_18006bbd8;
    puVar16 = (undefined4 *)&DAT_18006bbd0;
    local_50 = (undefined4 *)&DAT_18006bad8;
    puVar10 = (uint *)&DAT_18006b9d4;
    local_48 = (undefined4 *)&DAT_18006bbdc;
    puVar14 = (uint *)&DAT_18006b9d8;
    local_40 = (undefined4 *)&DAT_18006badc;
    puVar9 = (uint *)&DAT_18006b9dc;
    puVar15 = (uint *)&DAT_18006b6d4;
  }
  else {
    puVar10 = (uint *)&DAT_00000004;
    local_58 = (undefined4 *)&DAT_00000008;
    puVar9 = (uint *)&DAT_0000000c;
    local_68 = (undefined4 *)&DAT_00000004;
    local_48 = (undefined4 *)&DAT_0000000c;
    puVar8 = (uint *)0x0;
    local_40 = (undefined4 *)&DAT_0000000c;
    puVar16 = (undefined4 *)0x0;
    puVar17 = (undefined4 *)0x0;
    local_60 = (undefined4 *)&DAT_00000004;
    local_50 = (undefined4 *)&DAT_00000008;
    puVar15 = (uint *)&DAT_00000004;
  }
  if (param_2 < 8) {
    if (param_2 == 7) {
      uVar13 = 0;
      do {
        uVar6 = uVar13 * 4;
        uVar11 = uVar13 + 1;
        fVar18 = (float)uVar13;
        *(float *)(param_1 + (ulonglong)(uVar6 + 2) * 4) = fVar18;
        *(float *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = fVar18;
        *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = 0x437f0000;
        *(float *)(param_1 + (ulonglong)uVar6 * 4) = fVar18;
        uVar13 = uVar11;
      } while (uVar11 < 0x100);
      return;
    }
    if (param_2 != 0) {
      if (param_2 == 1) {
        uVar13 = 0;
        do {
          uVar6 = uVar13 * 4;
          *(undefined4 *)(param_1 + (ulonglong)uVar6 * 4) = 0;
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 2) * 4) = 0;
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = 0;
          uVar11 = uVar13 + 1;
          *(float *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = (float)uVar13;
          uVar13 = uVar11;
        } while (uVar11 < 0x100);
        return;
      }
      if (((param_2 == 2) || (param_2 == 3)) || (param_2 == 4)) {
        uVar13 = 0;
        do {
          uVar6 = uVar13 * 4;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(param_1 + (ulonglong)uVar6 * 4) = 0;
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 2) * 4) = 0;
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = 0;
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = 0x437f0000;
        } while (uVar13 < 0x100);
        return;
      }
      if (param_2 == 5) {
        do {
          uVar6 = uVar13 * 4;
          uVar11 = uVar13 & 0xe0;
          uVar7 = uVar13 >> 3;
          uVar4 = uVar13 & 0x1c;
          uVar5 = uVar13 & 3;
          uVar13 = uVar13 + 1;
          *(float *)(param_1 + (ulonglong)uVar6 * 4) =
               (float)((uVar7 & 0x18 | uVar11) >> 3 | uVar11);
          *(float *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = (float)(uVar4 * 8 | uVar7 & 3 | uVar4);
          *(float *)(param_1 + (ulonglong)(uVar6 + 2) * 4) =
               (float)(((uVar5 * 4 | uVar5) << 2 | uVar5) << 2 | uVar5);
          *(undefined4 *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = 0x437f0000;
        } while (uVar13 < 0x100);
        return;
      }
      if (param_2 == 6) {
        uVar13 = 0;
        do {
          uVar6 = uVar13 * 4;
          uVar11 = uVar13 + 1;
          fVar18 = (float)uVar13;
          *(float *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = fVar18;
          *(float *)(param_1 + (ulonglong)(uVar6 + 2) * 4) = fVar18;
          *(float *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = fVar18;
          *(float *)(param_1 + (ulonglong)uVar6 * 4) = fVar18;
          uVar13 = uVar11;
        } while (uVar11 < 0x100);
        return;
      }
    }
LAB_180035368:
    FUN_18005f374(param_1,0,0x1000);
    return;
  }
  uVar13 = 0xffffffff;
  sVar3 = 0;
  local_res20 = 0xffffffff;
  sVar2 = 0;
  if (param_2 == 8) {
    uVar12 = 0;
    do {
      uVar13 = (uint)uVar12;
      uVar6 = uVar13 * 4;
      uVar1 = uVar12 >> 4;
      fVar18 = (float)((uVar13 & 0xf) << 4 | uVar13 & 0xf);
      *(float *)(param_1 + (ulonglong)(uVar6 + 2) * 4) = fVar18;
      *(float *)(param_1 + (ulonglong)(uVar6 + 1) * 4) = fVar18;
      *(float *)(param_1 + (ulonglong)uVar6 * 4) = fVar18;
      uVar12 = (ulonglong)(uVar13 + 1);
      *(float *)(param_1 + (ulonglong)(uVar6 + 3) * 4) = (float)(uVar13 & 0xf0 | (uint)uVar1 & 0xf);
    } while (uVar13 + 1 < 0x100);
    return;
  }
  uVar6 = 0xffffffff;
  if (param_2 != 9) {
    if (param_2 == 10) {
      uVar6 = 0;
      local_res20 = 0;
    }
    else {
      uVar6 = uVar13;
      if (param_2 == 0xb) goto LAB_180035392;
      uVar6 = 0xffffffff;
      if (param_2 != 0xc) {
        uVar6 = uVar13;
        if (param_2 == 0xd) goto LAB_180035392;
        if (param_2 != 0xe) goto LAB_180035368;
      }
    }
    sVar3 = 8;
    sVar2 = 8;
  }
LAB_180035392:
  local_res10 = 0;
  do {
    uVar5 = local_res10 << sVar3;
    uVar13 = *puVar10;
    uVar11 = *puVar14;
    uVar6 = ((int)(short)uVar5 & *puVar9 | *puVar15) & uVar6;
    uVar4 = local_res10 * 4;
    *(float *)(param_1 + (ulonglong)uVar4 * 4) =
         (float)((uVar5 & *puVar8) >> ((byte)*puVar17 & 0x1f) |
                (uVar5 & *puVar8) >> ((byte)*puVar16 & 0x1f));
    *(float *)(param_1 + (ulonglong)(uVar4 + 1) * 4) =
         (float)((uVar5 & uVar13) >> ((byte)*local_68 & 0x1f) |
                (uVar5 & uVar13) >> ((byte)*local_60 & 0x1f));
    *(float *)(param_1 + (ulonglong)(uVar4 + 2) * 4) =
         (float)((uVar5 & uVar11) >> ((byte)*local_58 & 0x1f) |
                (uVar5 & uVar11) << ((byte)*local_50 & 0x1f));
    *(float *)(param_1 + (ulonglong)(uVar4 + 3) * 4) =
         (float)(uVar6 >> ((byte)*local_48 & 0x1f) | uVar6 >> ((byte)*local_40 & 0x1f));
    local_res10 = local_res10 + 1;
    uVar6 = local_res20;
    sVar3 = sVar2;
  } while (local_res10 < 0x100);
  return;
}

