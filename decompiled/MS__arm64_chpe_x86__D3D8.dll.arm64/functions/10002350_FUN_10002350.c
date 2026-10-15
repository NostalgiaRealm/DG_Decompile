/*
 * FUN_10002350 at 10002350
 * undefined FUN_10002350(void)
 * Address ranges: 10002350-100028a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002350(int *param_1,ulonglong param_2,uint param_3,ulonglong param_4,int param_5,
                 int param_6)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  undefined4 local_58;
  int iStack_54;
  byte local_50 [16];
  
  local_58 = param_3;
  iStack_54 = (int)param_4;
  uVar17 = 8;
  if ((int)param_4 != -1) {
    uVar17 = (uint)(param_4 >> 0x1d) & 4;
  }
  uVar23 = 2;
  if (param_3 != 0xffffffff) {
    uVar23 = param_3 >> 0x1f;
  }
  uVar17 = uVar17 | uVar23;
  uVar23 = uVar17;
  if (uVar17 == 0) {
    uVar23 = 0xf;
  }
  if ((param_2 >> 8 & 7) == 7) {
    uVar17 = uVar23;
  }
  iVar20 = uVar17 * 3;
  cVar3 = *(char *)(iVar20 + 0x1012ae11);
  cVar4 = *(char *)(iVar20 + 0x1012ae10);
  uVar16 = param_2 & 3;
  cVar2 = *(char *)(iVar20 + 0x1012ae12);
  bVar24 = 0;
  if (uVar16 == 3) {
    bVar24 = 0x48;
  }
  if ((cVar3 != -1) && (*(byte *)(&local_58 + cVar3) - 8 < 8)) {
    bVar24 = bVar24 | 0x44;
  }
  iVar20 = (int)cVar4;
  if (cVar4 != -1) {
    if (*(byte *)(&local_58 + cVar4) - 8 < 8) {
      bVar24 = bVar24 | 0x41;
    }
    if ((byte)(*(char *)((int)&local_58 + iVar20 * 4 + 1) - 8U) < 8) {
      bVar24 = bVar24 | 0x42;
    }
  }
  iVar21 = (int)cVar3;
  if (iVar21 == -1) {
    uVar17 = 0;
  }
  else {
    uVar17 = (&local_58)[iVar21] & 7;
  }
  uVar17 = uVar17 << 3;
  bVar26 = 0;
  bVar10 = false;
  bVar9 = false;
  if (iVar20 == -1) goto LAB_10002558;
  uVar23 = (&local_58)[iVar20];
  if (-1 < (int)uVar23) {
    uVar17 = uVar17 | uVar23 & 7 | 0xc0;
    goto LAB_10002558;
  }
  if (((uVar23 & 0x40000000) != 0) || (bVar10 = false, ((uVar23 & 0xff) - 4 & 0xf7) == 0)) {
    bVar10 = true;
  }
  uVar18 = 4;
  if (!bVar10) {
    uVar18 = uVar23 & 7;
  }
  uVar17 = uVar18 | uVar17;
  if (param_5 == 0) {
    if ((uVar23 & 0xff) == 5) goto LAB_10002528;
    if ((uVar23 & 0xff) == 0xd) goto LAB_1000251c;
  }
  else {
LAB_1000251c:
    if (param_5 + 0x80U < 0x100) {
LAB_10002528:
      uVar17 = uVar17 | 0x40;
    }
    else {
      uVar17 = uVar17 | 0x80;
    }
    bVar9 = true;
  }
  if (bVar10) {
    if ((uVar23 & 0x40000000) == 0) {
      bVar26 = 0x24;
    }
    else {
      bVar26 = (byte)(uVar23 & 7) | (byte)((uVar23 >> 8 & 7 | (uVar23 >> 0x10) << 3) << 3);
    }
  }
LAB_10002558:
  bVar15 = (byte)uVar17;
  bVar25 = 0x66;
  if (uVar16 != 2) {
    bVar25 = local_50[0];
  }
  uVar18 = 0;
  uVar23 = (uint)(uVar16 == 2);
  local_50[0] = bVar25;
  do {
    uVar14 = param_2 >> (((ulonglong)(uVar18 + 5) & 0xf) << 2);
    if ((uVar14 & 0xf) != 0) {
      bVar25 = *(byte *)(((uint)uVar14 & 0xf) + 0x1012ae07);
      if (bVar25 == 0xf && bVar24 != 0) {
        local_50[uVar23] = bVar24;
        uVar23 = uVar23 + 1;
        bVar24 = 0;
      }
      local_50[uVar23] = bVar25;
      uVar23 = uVar23 + 1;
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 3);
  if (bVar24 != 0) {
    local_50[uVar23] = bVar24;
    uVar23 = uVar23 + 1;
  }
  uVar19 = (uint)(param_2 >> 0x20);
  uVar18 = uVar19 & 0xff;
  uVar5 = uVar18 - 1;
  uVar6 = uVar5;
  if (iVar21 != -1 || iVar20 != -1) {
    uVar6 = uVar18 - 2;
  }
  uVar11 = (uint)param_2;
  uVar22 = uVar11 >> 4 & 7;
  uVar7 = uVar11 >> 8 & 7;
  uVar8 = uVar11 >> 0xc & 7;
  if ((param_2 & 0xff00000000) != 0) {
    uVar12 = 0;
    if (param_6 < 0x80) {
      pbVar13 = local_50 + uVar23;
      do {
        bVar24 = bVar15;
        if (uVar12 != uVar5) {
          bVar24 = 0;
        }
        bVar24 = (byte)(uVar19 >> (ulonglong)((uVar12 + 1) * 8 & 0x1f)) | bVar24;
        if (uVar12 == uVar6) {
          if (uVar22 != 0 && uVar16 == 1) {
            bVar24 = (byte)(1 << (ulonglong)(uVar22 - 1 & 0x1f)) ^ bVar24;
          }
          if (uVar7 != 0 && uVar7 != 7) {
            bVar24 = cVar2 << (ulonglong)(uVar7 - 1 & 0x1f) ^ bVar24;
          }
          if ((uVar8 != 0 && uVar16 != 1) && -0x81 < param_6) {
            bVar24 = (byte)(1 << (ulonglong)(uVar8 - 1 & 0x1f)) ^ bVar24;
          }
        }
        uVar12 = uVar12 + 1;
        *pbVar13 = bVar24;
        uVar23 = uVar23 + 1;
        pbVar13 = pbVar13 + 1;
      } while (uVar12 < uVar18);
    }
    else {
      bVar24 = cVar2 << (ulonglong)(uVar7 - 1 & 0x1f);
      if (uVar16 == 1) {
        pbVar13 = local_50 + uVar23;
        do {
          bVar25 = bVar15;
          if (uVar12 != uVar5) {
            bVar25 = 0;
          }
          bVar25 = (byte)(uVar19 >> (ulonglong)((uVar12 + 1) * 8 & 0x1f)) | bVar25;
          if (uVar12 == uVar6) {
            if (uVar22 != 0) {
              bVar25 = (byte)(1 << (ulonglong)(uVar22 - 1 & 0x1f)) ^ bVar25;
            }
            if (uVar7 != 0 && uVar7 != 7) {
              bVar25 = bVar24 ^ bVar25;
            }
          }
          uVar12 = uVar12 + 1;
          *pbVar13 = bVar25;
          uVar23 = uVar23 + 1;
          pbVar13 = pbVar13 + 1;
        } while (uVar12 < uVar18);
      }
      else {
        pbVar13 = local_50 + uVar23;
        uVar22 = 0;
        do {
          bVar25 = bVar15;
          if (uVar22 != uVar5) {
            bVar25 = 0;
          }
          bVar25 = (byte)(uVar19 >> (ulonglong)((uVar22 + 1) * 8 & 0x1f)) | bVar25;
          if ((uVar22 == uVar6 && uVar7 != 0) && uVar7 != 7) {
            bVar25 = bVar24 ^ bVar25;
          }
          uVar22 = uVar22 + 1;
          *pbVar13 = bVar25;
          uVar23 = uVar23 + 1;
          pbVar13 = pbVar13 + 1;
        } while (uVar22 < uVar18);
      }
    }
  }
  if (bVar10) {
    local_50[uVar23] = bVar26;
    uVar23 = uVar23 + 1;
  }
  if (bVar9) {
    if ((uVar17 & 0xc0) == 0x40) {
      local_50[uVar23] = (byte)param_5;
      uVar23 = uVar23 + 1;
    }
    else if ((uVar17 & 0xc0) == 0x80) {
      *(int *)(local_50 + uVar23) = param_5;
      uVar23 = uVar23 + 4;
    }
  }
  if ((uVar11 >> 0x10 & 1) != 0) {
    if (((param_2 & 0x20000) == 0 && uVar16 != 1) && ((uVar8 == 0 || (0xff < param_6 + 0x80U)))) {
      if ((param_2 & 0x40000) == 0 && uVar16 != 2) {
        *(int *)(local_50 + uVar23) = param_6;
        uVar23 = uVar23 + 4;
      }
      else {
        *(short *)(local_50 + uVar23) = (short)param_6;
        uVar23 = uVar23 + 2;
      }
    }
    else {
      local_50[uVar23] = (byte)param_6;
      uVar23 = uVar23 + 1;
    }
  }
  piVar1 = param_1 + 1;
  if ((uint)param_1[2] < (*piVar1 - *param_1) + uVar23) {
    FUN_100022c8(param_1,uVar23);
  }
  if (uVar23 != 0) {
    FUN_100ff660(*piVar1,local_50,uVar23);
  }
  *piVar1 = *piVar1 + uVar23;
  return;
}

