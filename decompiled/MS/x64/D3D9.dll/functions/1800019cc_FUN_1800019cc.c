/*
 * FUN_1800019cc at 1800019cc
 * undefined __fastcall FUN_1800019cc(longlong * param_1, ulonglong param_2, uint param_3, int param_4, int param_5, int param_6)
 * Address ranges: 1800019cc-180001f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800019cc(longlong *param_1,ulonglong param_2,uint param_3,int param_4,int param_5,
                  int param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  byte *pbVar19;
  byte bVar20;
  longlong lVar21;
  byte bVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  byte local_58 [24];
  
  local_70 = CONCAT44(param_4,param_3);
  uVar18 = param_4 >> 0x1f & 4;
  if (param_4 == -1) {
    uVar18 = 8;
  }
  uVar8 = param_3 >> 0x1f;
  if (param_3 == 0xffffffff) {
    uVar8 = 2;
  }
  uVar12 = (ulonglong)(uVar18 | uVar8);
  uVar10 = param_2 >> 8;
  local_68 = uVar10;
  if (((param_2 & 0x700) == 0x700) && ((uVar18 | uVar8) == 0)) {
    uVar12 = 0xf;
  }
  lVar4 = uVar12 * 3;
  local_60 = (ulonglong)((uint)param_2 & 3);
  cVar1 = (&DAT_180100b99)[lVar4];
  lVar21 = (longlong)cVar1;
  cVar2 = (&DAT_180100b98)[lVar4];
  lVar24 = (longlong)cVar2;
  cVar3 = (&UNK_180100b9a)[lVar4];
  bVar16 = (local_60 != 3) - 1U & 0x48;
  if (((cVar1 != -1) && ((*(byte *)((longlong)&local_70 + lVar21 * 4) & 0xf8) != 0)) &&
     (*(byte *)((longlong)&local_70 + lVar21 * 4) < 0x10)) {
    bVar16 = 0x4c;
    if (local_60 != 3) {
      bVar16 = 0x44;
    }
  }
  if (cVar2 != -1) {
    if (((*(byte *)((longlong)&local_70 + lVar24 * 4) & 0xf8) == 0) ||
       (0xf < *(byte *)((longlong)&local_70 + lVar24 * 4))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    bVar22 = bVar16 | 0x41;
    if (!bVar5) {
      bVar22 = bVar16;
    }
    bVar16 = bVar22 | 0x42;
    if (7 < (byte)(*(char *)((longlong)&local_70 + lVar24 * 4 + 1) - 8U)) {
      bVar16 = bVar22;
    }
  }
  if (cVar1 == -1) {
    bVar22 = 0;
  }
  else {
    bVar22 = (byte)*(undefined4 *)((longlong)&local_70 + lVar21 * 4) & 7;
  }
  bVar22 = bVar22 << 3;
  bVar20 = 0;
  bVar5 = false;
  bVar6 = false;
  if (cVar2 == -1) goto LAB_180001bce;
  uVar18 = *(uint *)((longlong)&local_70 + lVar24 * 4);
  bVar17 = (byte)uVar18;
  if (-1 < (int)uVar18) {
    bVar22 = bVar22 | bVar17 & 7 | 0xc0;
    goto LAB_180001bce;
  }
  if (((uVar18 & 0x40000000) != 0) || (bVar5 = false, (uVar18 + 0xfc & 0xf7) == 0)) {
    bVar5 = true;
  }
  bVar7 = bVar17 & 7;
  if (bVar5) {
    bVar7 = 4;
  }
  bVar22 = bVar22 | bVar7;
  if (param_5 == 0) {
    if (bVar17 == 5) goto LAB_180001b92;
    if (bVar17 == 0xd) goto LAB_180001b88;
  }
  else {
LAB_180001b88:
    if (param_5 + 0x80U < 0x100) {
LAB_180001b92:
      bVar22 = bVar22 | 0x40;
    }
    else {
      bVar22 = bVar22 | 0x80;
    }
    bVar6 = true;
  }
  if (bVar5) {
    if ((uVar18 & 0x40000000) == 0) {
      bVar20 = 0x24;
    }
    else {
      bVar20 = ((byte)(uVar18 >> 8) & 7) << 3 | (byte)(uVar18 >> 10) & 0xc0 | bVar17 & 7;
    }
  }
LAB_180001bce:
  if (local_60 == 2) {
    local_58[0] = 0x66;
  }
  uVar18 = 0;
  uVar12 = (ulonglong)(local_60 == 2);
  do {
    uVar11 = param_2 >> ((char)uVar18 * '\x04' + 0x14U & 0x3f);
    if ((uVar11 & 0xf) != 0) {
      bVar17 = (&DAT_180100b90)[((uint)uVar11 & 0xf) - 1];
      uVar11 = uVar12;
      if ((bVar17 == 0xf) && (bVar16 != 0)) {
        uVar11 = (ulonglong)((int)uVar12 + 1);
        local_58[uVar12] = bVar16;
        bVar16 = 0;
      }
      uVar12 = (ulonglong)((int)uVar11 + 1);
      local_58[uVar11] = bVar17;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 3);
  uVar11 = uVar12;
  if (bVar16 != 0) {
    uVar11 = (ulonglong)((int)uVar12 + 1);
    local_58[uVar12] = bVar16;
  }
  cVar28 = (char)(param_2 >> 0x20);
  uVar8 = (uint)(param_2 >> 0x20);
  uVar18 = uVar8 & 0xff;
  if ((cVar1 == -1) && (cVar2 == -1)) {
    uVar30 = uVar18 - 1;
  }
  else {
    uVar30 = uVar18 - 2;
  }
  uVar29 = uVar18 - 1;
  uVar9 = (uint)(param_2 >> 8) & 7;
  uVar27 = param_2 >> 4;
  uVar25 = param_2 >> 0xc;
  uVar26 = (uint)uVar27 & 7;
  uVar23 = (uint)uVar25 & 7;
  local_68 = (ulonglong)uVar9;
  local_70 = (ulonglong)uVar23;
  uVar12 = uVar11;
  if (param_6 < 0x80) {
    if (cVar28 != '\0') {
      uVar14 = 0;
      bVar16 = cVar3 << ((char)uVar9 - 1U & 0x1f);
      if (local_60 == 1) {
        do {
          bVar17 = 0;
          if (uVar14 == uVar29) {
            bVar17 = bVar22;
          }
          bVar17 = (byte)(uVar8 >> ((char)uVar14 * '\b' + 8U & 0x1f)) | bVar17;
          if (uVar14 == uVar30) {
            if ((uVar27 & 7) != 0) {
              bVar17 = bVar17 ^ (byte)(1 << (uVar26 - 1 & 0x1f));
            }
            if (((param_2 & 0x700) != 0) && (uVar9 != 7)) {
              bVar17 = bVar16 ^ bVar17;
            }
          }
          uVar14 = uVar14 + 1;
          uVar12 = (ulonglong)((int)uVar11 + 1);
          local_58[uVar11] = bVar17;
          uVar11 = uVar12;
        } while (uVar14 < uVar18);
      }
      else {
        do {
          bVar17 = 0;
          if (uVar14 == uVar29) {
            bVar17 = bVar22;
          }
          bVar17 = (byte)(uVar8 >> ((char)uVar14 * '\b' + 8U & 0x1f)) | bVar17;
          if (uVar14 == uVar30) {
            if (((param_2 & 0x700) != 0) && (uVar9 != 7)) {
              bVar17 = bVar16 ^ bVar17;
            }
            if (((uVar25 & 7) != 0) && (-0x81 < param_6)) {
              bVar17 = bVar17 ^ (byte)(1 << (uVar23 - 1 & 0x1f));
            }
          }
          uVar14 = uVar14 + 1;
          uVar12 = (ulonglong)((int)uVar11 + 1);
          local_58[uVar11] = bVar17;
          uVar11 = uVar12;
        } while (uVar14 < uVar18);
      }
    }
  }
  else if (cVar28 != '\0') {
    uVar23 = 0;
    bVar16 = cVar3 << ((char)uVar9 - 1U & 0x1f);
    if (local_60 == 1) {
      do {
        iVar13 = (int)uVar11;
        bVar17 = 0;
        if (uVar23 == uVar29) {
          bVar17 = bVar22;
        }
        bVar17 = (byte)(uVar8 >> ((char)uVar23 * '\b' + 8U & 0x1f)) | bVar17;
        if (uVar23 == uVar30) {
          if ((uVar27 & 7) != 0) {
            bVar17 = bVar17 ^ (byte)(1 << (uVar26 - 1 & 0x1f));
          }
          if (((uVar10 & 7) != 0) && (uVar9 != 7)) {
            bVar17 = bVar17 ^ bVar16;
          }
        }
        uVar23 = uVar23 + 1;
        local_58[uVar11] = bVar17;
        uVar11 = (ulonglong)(iVar13 + 1);
      } while (uVar23 < uVar18);
    }
    else {
      do {
        iVar13 = (int)uVar11;
        bVar17 = 0;
        if (uVar23 == uVar29) {
          bVar17 = bVar22;
        }
        bVar17 = (byte)(uVar8 >> ((char)uVar23 * '\b' + 8U & 0x1f)) | bVar17;
        if (((uVar23 == uVar30) && ((uVar10 & 7) != 0)) && (uVar9 != 7)) {
          bVar17 = bVar17 ^ bVar16;
        }
        uVar23 = uVar23 + 1;
        local_58[uVar11] = bVar17;
        uVar11 = (ulonglong)(iVar13 + 1);
      } while (uVar23 < uVar18);
    }
    uVar12 = (ulonglong)(iVar13 + 1);
  }
  uVar10 = uVar12;
  if (bVar5) {
    uVar10 = (ulonglong)((int)uVar12 + 1);
    local_58[uVar12] = bVar20;
  }
  uVar12 = uVar10;
  if (bVar6) {
    if ((bVar22 & 0xc0) == 0x40) {
      local_58[uVar10] = (byte)param_5;
      uVar12 = (ulonglong)((int)uVar10 + 1);
    }
    else if ((bVar22 & 0xc0) == 0x80) {
      uVar12 = (ulonglong)((int)uVar10 + 4);
      *(int *)(local_58 + uVar10) = param_5;
    }
  }
  uVar18 = (uint)uVar12;
  if ((param_2 >> 0x10 & 1) != 0) {
    if ((((param_2 >> 0x11 & 1) == 0) && (local_60 != 1)) &&
       (((uVar25 & 7) == 0 || (0xff < param_6 + 0x80U)))) {
      if (((param_2 >> 0x12 & 1) == 0) && (local_60 != 2)) {
        uVar18 = uVar18 + 4;
        *(int *)(local_58 + uVar12) = param_6;
      }
      else {
        uVar18 = uVar18 + 2;
        *(short *)(local_58 + uVar12) = (short)param_6;
      }
    }
    else {
      uVar18 = uVar18 + 1;
      local_58[uVar12] = (byte)param_6;
    }
  }
  uVar10 = (ulonglong)uVar18;
  if ((ulonglong)*(uint *)(param_1 + 2) < (param_1[1] - *param_1) + uVar10) {
    FUN_180001904(param_1,uVar18);
  }
  pbVar15 = local_58;
  pbVar19 = (byte *)param_1[1];
  for (uVar12 = uVar10; uVar12 != 0; uVar12 = uVar12 - 1) {
    *pbVar19 = *pbVar15;
    pbVar15 = pbVar15 + 1;
    pbVar19 = pbVar19 + 1;
  }
  param_1[1] = param_1[1] + uVar10;
  return;
}

