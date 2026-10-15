/*
 * FUN_1801060c0 at 1801060c0
 * undefined FUN_1801060c0(void)
 * Address ranges: 1801060c0-180106603;180106620-180106653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801060c0(longlong *param_1,ulonglong param_2,uint param_3,int param_4,int param_5,
                  int param_6)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  ulonglong uVar23;
  byte bVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined4 local_60;
  int iStack_5c;
  byte local_58 [24];
  uint uVar16;
  
  local_60 = param_3;
  iStack_5c = param_4;
  uVar17 = 8;
  if (param_4 != -1) {
    uVar17 = param_4 >> 0x1f & 4;
  }
  uVar16 = 2;
  if (param_3 != 0xffffffff) {
    uVar16 = param_3 >> 0x1f;
  }
  uVar17 = uVar17 | uVar16;
  uVar16 = uVar17;
  if (uVar17 == 0) {
    uVar16 = 0xf;
  }
  if ((param_2 & 0x700) == 0x700) {
    uVar17 = uVar16;
  }
  lVar11 = (ulonglong)uVar17 * 3;
  cVar4 = (&DAT_180229800)[lVar11];
  cVar3 = (&DAT_180229801)[lVar11];
  cVar1 = (&DAT_180229802)[lVar11];
  uVar19 = param_2 & 3;
  bVar24 = 0;
  if (uVar19 == 3) {
    bVar24 = 0x48;
  }
  if ((((cVar3 != -1) && (((&local_60)[(int)cVar3] & 0xf8) != 0)) &&
      (((&local_60)[(int)cVar3] & 0xff) < 0x10)) && (bVar24 = 0x44, uVar19 == 3)) {
    bVar24 = 0x4c;
  }
  if (cVar4 != -1) {
    uVar23 = -((ulonglong)(longlong)cVar4 >> 0x1f & 1) & 0xfffffffc00000000 |
             ((longlong)cVar4 & 0xffffffffU) << 2;
    bVar22 = *(byte *)((longlong)&local_60 + uVar23);
    if (((bVar22 & 0xf8) != 0) && (bVar22 < 0x10)) {
      bVar24 = bVar24 | 0x41;
    }
    if ((byte)(*(char *)((longlong)&local_60 + uVar23 + 1) - 8U) < 8) {
      bVar24 = bVar24 | 0x42;
    }
  }
  iVar20 = (int)cVar3;
  if (iVar20 == -1) {
    uVar17 = 0;
  }
  else {
    uVar17 = (&local_60)[iVar20] & 7;
  }
  uVar16 = uVar17 << 3;
  bVar12 = false;
  bVar22 = 0;
  bVar10 = false;
  if (cVar4 == -1) goto LAB_1801062b0;
  uVar18 = (&local_60)[(int)cVar4];
  if (-1 < (int)uVar18) {
    uVar16 = uVar17 << 3 | uVar18 & 7 | 0xc0;
    goto LAB_1801062b0;
  }
  if (((uVar18 & 0x40000000) != 0) || (bVar12 = false, (uVar18 + 0xfc & 0xf7) == 0)) {
    bVar12 = true;
  }
  uVar17 = 4;
  if (!bVar12) {
    uVar17 = uVar18 & 7;
  }
  uVar16 = uVar17 | uVar16;
  if (param_5 == 0) {
    if ((uVar18 & 0xff) == 5) goto LAB_180106280;
    if ((uVar18 & 0xff) == 0xd) goto LAB_180106274;
  }
  else {
LAB_180106274:
    if (param_5 + 0x80U < 0x100) {
LAB_180106280:
      uVar16 = uVar16 | 0x40;
    }
    else {
      uVar16 = uVar16 | 0x80;
    }
    bVar10 = true;
  }
  if (bVar12) {
    if ((uVar18 & 0x40000000) == 0) {
      bVar22 = 0x24;
    }
    else {
      bVar22 = (byte)(uVar18 & 7) | (byte)((uVar18 >> 8 & 7 | (uVar18 >> 0x10) << 3) << 3);
    }
  }
LAB_1801062b0:
  bVar15 = (byte)uVar16;
  bVar2 = 0x66;
  if (uVar19 != 2) {
    bVar2 = local_58[0];
  }
  uVar17 = 0;
  uVar23 = (ulonglong)(uVar19 == 2);
  local_58[0] = bVar2;
  do {
    uVar26 = param_2 >> (((ulonglong)(uVar17 + 5) & 0xf) << 2);
    if ((uVar26 & 0xf) != 0) {
      bVar2 = (&DAT_1802297f8)[((uint)uVar26 & 0xf) - 1];
      if (bVar2 == 0xf && bVar24 != 0) {
        local_58[uVar23] = bVar24;
        uVar23 = (ulonglong)((int)uVar23 + 1);
        bVar24 = 0;
      }
      local_58[uVar23] = bVar2;
      uVar23 = (ulonglong)((int)uVar23 + 1);
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 3);
  if (bVar24 != 0) {
    local_58[uVar23] = bVar24;
    uVar23 = (ulonglong)((int)uVar23 + 1);
  }
  uVar18 = (uint)(param_2 >> 0x20);
  uVar17 = uVar18 & 0xff;
  iVar9 = -1;
  if (iVar20 != -1 || cVar4 != -1) {
    iVar9 = -2;
  }
  uVar5 = uVar17 + iVar9;
  uVar14 = (uint)param_2;
  uVar21 = uVar14 >> 4 & 7;
  uVar7 = uVar14 >> 8 & 7;
  uVar8 = uVar14 >> 0xc & 7;
  if ((param_2 & 0xff00000000) != 0) {
    uVar25 = 0;
    uVar6 = uVar7 - 1;
    if (param_6 < 0x80) {
      if ((param_2 & 3) == 1) {
        do {
          bVar24 = bVar15;
          if (uVar25 != uVar17 - 1) {
            bVar24 = 0;
          }
          bVar24 = (byte)(uVar18 >> (ulonglong)(uVar25 * 8 + 8 & 0x1f)) | bVar24;
          if (uVar25 == uVar5) {
            if (uVar21 != 0) {
              bVar24 = bVar24 ^ (byte)(1 << (ulonglong)(uVar21 - 1 & 0x1f));
            }
            if ((uVar7 != 0) && (uVar7 != 7)) {
              bVar24 = cVar1 << (ulonglong)(uVar6 & 0x1f) ^ bVar24;
            }
          }
          uVar25 = uVar25 + 1;
          local_58[uVar23] = bVar24;
          uVar23 = (ulonglong)((int)uVar23 + 1);
        } while (uVar25 < uVar17);
      }
      else {
        uVar21 = 0;
        do {
          bVar24 = bVar15;
          if (uVar21 != uVar17 - 1) {
            bVar24 = 0;
          }
          bVar24 = (byte)(uVar18 >> (ulonglong)(uVar21 * 8 + 8 & 0x1f)) | bVar24;
          if (uVar21 == uVar5) {
            if ((uVar7 != 0) && (uVar7 != 7)) {
              bVar24 = cVar1 << (ulonglong)(uVar6 & 0x1f) ^ bVar24;
            }
            if ((uVar8 != 0) && (-0x81 < param_6)) {
              bVar24 = bVar24 ^ (byte)(1 << (ulonglong)(uVar8 - 1 & 0x1f));
            }
          }
          uVar21 = uVar21 + 1;
          local_58[uVar23] = bVar24;
          uVar23 = (ulonglong)((int)uVar23 + 1);
        } while (uVar21 < uVar17);
      }
    }
    else {
      if ((param_2 & 3) == 1) {
        do {
          bVar24 = bVar15;
          if (uVar25 != uVar17 - 1) {
            bVar24 = 0;
          }
          bVar24 = (byte)(uVar18 >> (ulonglong)(uVar25 * 8 + 8 & 0x1f)) | bVar24;
          iVar20 = (int)uVar23;
          if (uVar25 == uVar5) {
            if (uVar21 != 0) {
              bVar24 = bVar24 ^ (byte)(1 << (ulonglong)(uVar21 - 1 & 0x1f));
            }
            if (uVar7 != 0 && uVar7 != 7) {
              bVar24 = cVar1 << (ulonglong)(uVar6 & 0x1f) ^ bVar24;
            }
          }
          uVar25 = uVar25 + 1;
          local_58[uVar23] = bVar24;
          uVar23 = (ulonglong)(iVar20 + 1);
        } while (uVar25 < uVar17);
      }
      else {
        uVar21 = 0;
        do {
          bVar24 = bVar15;
          if (uVar21 != uVar17 - 1) {
            bVar24 = 0;
          }
          iVar20 = (int)uVar23;
          bVar24 = (byte)(uVar18 >> (ulonglong)(uVar21 * 8 + 8 & 0x1f)) | bVar24;
          if ((uVar21 == uVar5 && uVar7 != 0) && uVar7 != 7) {
            bVar24 = cVar1 << (ulonglong)(uVar6 & 0x1f) ^ bVar24;
          }
          uVar21 = uVar21 + 1;
          local_58[uVar23] = bVar24;
          uVar23 = (ulonglong)(iVar20 + 1);
        } while (uVar21 < uVar17);
      }
      uVar23 = (ulonglong)(iVar20 + 1);
    }
  }
  if (bVar12) {
    local_58[uVar23] = bVar22;
    uVar23 = (ulonglong)((int)uVar23 + 1);
  }
  if (bVar10) {
    if ((uVar16 & 0xc0) == 0x40) {
      local_58[uVar23] = (byte)param_5;
      uVar23 = (ulonglong)((int)uVar23 + 1);
    }
    else if ((uVar16 & 0xc0) == 0x80) {
      *(int *)(local_58 + uVar23) = param_5;
      uVar23 = (ulonglong)((int)uVar23 + 4);
    }
  }
  if ((uVar14 >> 0x10 & 1) != 0) {
    iVar20 = (int)uVar23;
    if (((param_2 & 0x20000) == 0 && uVar19 != 1) && ((uVar8 == 0 || (0xff < param_6 + 0x80U)))) {
      if ((param_2 & 0x40000) == 0 && uVar19 != 2) {
        *(int *)(local_58 + uVar23) = param_6;
        uVar23 = (ulonglong)(iVar20 + 4);
      }
      else {
        *(short *)(local_58 + uVar23) = (short)param_6;
        uVar23 = (ulonglong)(iVar20 + 2);
      }
    }
    else {
      local_58[uVar23] = (byte)param_6;
      uVar23 = (ulonglong)(iVar20 + 1);
    }
  }
  if ((ulonglong)*(uint *)(param_1 + 2) < (param_1[1] - *param_1) + uVar23) {
    uVar13 = FUN_1802229a8((int)uVar23 + *(uint *)(param_1 + 2) * 2);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_1[1],uVar13,*param_1,(int)param_1[2]);
  }
  if ((int)uVar23 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_1[1],local_58,uVar23);
  }
  param_1[1] = param_1[1] + uVar23;
  return;
}

