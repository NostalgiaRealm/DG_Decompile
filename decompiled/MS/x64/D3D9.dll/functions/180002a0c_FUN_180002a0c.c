/*
 * FUN_180002a0c at 180002a0c
 * int __fastcall FUN_180002a0c(longlong param_1, uint param_2, int param_3, int param_4, uint param_5, uint param_6, int param_7, int param_8, byte param_9)
 * Address ranges: 180002a0c-180003093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

int FUN_180002a0c(longlong param_1,uint param_2,int param_3,int param_4,uint param_5,uint param_6,
                 int param_7,int param_8,byte param_9)

{
  char *pcVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  int *piVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  bool bVar22;
  
  bVar4 = param_9;
  uVar11 = param_6 & 0xffc07fff;
  if (param_9 == 0) {
    uVar11 = param_6;
  }
  uVar17 = (ulonglong)uVar11;
  uVar7 = FUN_1800028ec(param_1,param_3);
  if ((char)uVar7 == '\0') {
    return -0x7789f794;
  }
  uVar11 = (uint)uVar17;
  if (param_7 == 1) {
    if (3 < uVar11) {
      return -0x7789f794;
    }
  }
  else {
    if (param_7 == 2) {
LAB_180002ad6:
      bVar22 = (uVar17 & 0xfffffdff) == 0;
    }
    else {
      if (param_7 != 3) {
        if (param_7 == 4) goto LAB_180002ad6;
        if (param_7 != 5) {
          if ((param_7 != 6) && (param_7 != 7)) {
            return -0x7789f794;
          }
          if ((uVar17 & 0xfffffc07) != 0) {
            return -0x7789f794;
          }
          goto LAB_180002ae8;
        }
      }
      if (((uVar11 < 4) || (uVar11 == 0x200)) || (uVar11 - 0x400 < 2)) goto LAB_180002ae8;
      bVar22 = uVar11 == 0x600;
    }
    if (!bVar22) {
      return -0x7789f794;
    }
  }
LAB_180002ae8:
  if (3 < param_5) {
    return -0x7789f794;
  }
  uVar17 = 0;
  iVar15 = (uint)(bVar4 ^ 1) * 2 + -0x7789f796;
  while (param_4 != (&DAT_180100c60)[uVar17]) {
    uVar11 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar11;
    if (0x42 < uVar11) {
      return iVar15;
    }
  }
  uVar5 = FUN_1800039d0(param_1,param_4);
  if ((char)uVar5 == '\0') {
    return iVar15;
  }
  uVar11 = FUN_18000223c(param_8);
  if (param_3 == 2) {
    puVar16 = &DAT_18010e150;
    puVar20 = &DAT_18010e288;
    puVar21 = &DAT_18010e2a0;
    puVar14 = &DAT_18010e298;
    piVar19 = &DAT_18010e2c8;
    pcVar18 = &DAT_18010e2c5;
    pcVar8 = &DAT_18010e2c6;
  }
  else {
    lVar9 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0;
    puVar16 = &DAT_18010e300 + lVar9;
    puVar20 = (undefined8 *)(&DAT_18010e438 + lVar9);
    puVar21 = (undefined8 *)(&DAT_18010e450 + lVar9);
    puVar14 = (undefined8 *)(&DAT_18010e448 + lVar9);
    pcVar18 = &DAT_18010e475 + lVar9;
    piVar19 = (int *)(&DAT_18010e478 + lVar9);
    pcVar8 = &DAT_18010e476 + lVar9;
  }
  if (param_7 == 1) {
    if (param_5 != 3) {
      uVar13 = 0;
      pcVar1 = *(char **)(puVar16 + (ulonglong)(-(uint)((param_6 & 2) != 0) & 0x10) + 0x130);
      cVar10 = *pcVar1;
      uVar17 = uVar13;
      while (cVar10 != -1) {
        if ((byte)pcVar1[uVar17] == uVar11) goto LAB_180002f6b;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        cVar10 = pcVar1[uVar17];
      }
      if ((param_5 == 2) && ((param_6 & 2) == 0)) {
        pcVar1 = (char *)*puVar20;
        cVar10 = *pcVar1;
        uVar17 = uVar13;
        while (cVar10 != -1) {
          if ((byte)pcVar1[uVar17] == uVar11) {
            bVar22 = true;
            goto LAB_180002f67;
          }
          uVar17 = (ulonglong)((int)uVar17 + 1);
          cVar10 = pcVar1[uVar17];
        }
        bVar22 = false;
LAB_180002f67:
        if (bVar22) {
LAB_180002f6b:
          if ((param_6 & 1) == 0) {
LAB_180002f94:
            if (((param_8 != 0x14) && (uVar11 != 0)) || ((param_5 == 2 && (param_6 == 0)))) {
              iVar15 = 0;
            }
          }
          else {
            do {
              if (uVar11 == (&DAT_180100bf0)[uVar13]) goto LAB_180002f94;
              uVar12 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar12;
            } while (uVar12 < 0x1c);
          }
        }
      }
      if (((param_6 & 0x3f8000) != 0) && ((param_6 & 0x3f8000) != 0x80000)) {
        iVar15 = -0x7789f796;
      }
      if ((*piVar19 != 0) && (*piVar19 != 0x10de)) {
        return iVar15;
      }
      if (param_8 == 0x434f5441) {
        if (*pcVar18 != '\0') {
          return 0;
        }
        return iVar15;
      }
      if (param_8 == 0x41415353) {
        if (*pcVar8 == '\0') {
          return iVar15;
        }
        plVar2 = *(longlong **)(&DAT_1801128f0 + (ulonglong)param_2 * 600);
        if (plVar2 == (longlong *)0x0) {
          iVar6 = (**(code **)(*DAT_180111f18 + 0x50))
                            (DAT_180111f18,(&DAT_1801128fc)[(ulonglong)param_2 * 0x96]);
          cVar10 = 1 < iVar6;
        }
        else {
          lVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,&param_9);
          cVar10 = *(char *)(lVar9 + 1);
        }
        if (cVar10 != '\0') {
          return 0;
        }
        return iVar15;
      }
      return iVar15;
    }
    if (param_6 != 0) {
      return iVar15;
    }
    iVar6 = FUN_180002500(param_8);
    if (0 < iVar6) {
      return 0;
    }
    goto LAB_18000306f;
  }
  if (param_7 == 2) {
LAB_180002e0d:
    if (param_5 != 3) {
      if (param_8 != 0x14) {
        pcVar8 = (char *)*puVar14;
        uVar17 = 0;
        cVar10 = *pcVar8;
        while (cVar10 != -1) {
          if ((byte)pcVar8[uVar17] == uVar11) {
            iVar15 = 0;
            break;
          }
          uVar17 = (ulonglong)((int)uVar17 + 1);
          cVar10 = pcVar8[uVar17];
        }
      }
      if (iVar15 < 0) {
        return iVar15;
      }
      if ((param_6 >> 10 & 1) != 0) {
        return 0x876086f;
      }
      uVar12 = param_6 & 0x3f8000;
      if (uVar12 == 0x8000) {
        return -0x7789f796;
      }
      if (uVar12 != 0x10000) {
        if (uVar12 == 0x40000) {
          uVar17 = 0;
          do {
            if (uVar11 == (&DAT_180100d90)[uVar17]) {
              return iVar15;
            }
            uVar12 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar12;
          } while (uVar12 < 9);
          return -0x7789f796;
        }
        if (uVar12 == 0x80000) {
          return -0x7789f796;
        }
        if (uVar12 != 0x100000) {
          return iVar15;
        }
        uVar17 = 0;
        do {
          if (uVar11 == (&DAT_180100d70)[uVar17]) {
            return -0x7789f796;
          }
          uVar12 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar12;
        } while (uVar12 < 8);
        return iVar15;
      }
      uVar17 = 0;
      do {
        if (uVar11 == (&DAT_180100dc0)[uVar17]) {
          return iVar15;
        }
        uVar12 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar12;
      } while (uVar12 < 0x11);
      return -0x7789f796;
    }
  }
  else {
    if (param_7 != 3) {
      if (param_7 == 4) goto LAB_180002e0d;
      if (param_7 != 5) {
        if (param_7 == 6) {
          if (param_8 != 100) {
            return iVar15;
          }
        }
        else {
          if (param_7 != 7) {
            return iVar15;
          }
          if (1 < param_8 - 0x65U) {
            return iVar15;
          }
        }
        if (((param_5 != 3) || (param_6 == 0)) && ((param_5 != 1 || ((param_6 >> 9 & 1) == 0)))) {
          iVar15 = 0;
        }
        if ((param_6 & 0x3f8000) != 0) {
          return -0x7789f796;
        }
        return iVar15;
      }
    }
    if (param_5 != 3) {
      if ((param_8 == 0x46) || ((param_8 == 0x14 && ((1 < param_5 - 1 || (param_6 != 0)))))) {
        bVar22 = false;
      }
      else {
        bVar22 = true;
      }
      if ((param_6 & 0x202) == 0x202 || (param_6 & 0x201) == 0x201) {
        return iVar15;
      }
      if (!bVar22) {
        return iVar15;
      }
      pcVar8 = (char *)*puVar20;
      uVar17 = 0;
      cVar10 = *pcVar8;
      while (cVar10 != -1) {
        if ((byte)pcVar8[uVar17] == uVar11) {
          if ((param_6 & 2) == 0) {
            bVar22 = true;
            goto LAB_180002cdd;
          }
          break;
        }
        uVar17 = (ulonglong)((int)uVar17 + 1);
        cVar10 = pcVar8[uVar17];
      }
      bVar22 = false;
LAB_180002cdd:
      pcVar8 = (char *)*puVar21;
      uVar17 = 0;
      cVar10 = *pcVar8;
      do {
        if (cVar10 == -1) {
LAB_180002cfb:
          bVar3 = false;
LAB_180002cfd:
          if (!bVar22) {
            if (param_7 != 3) {
              return iVar15;
            }
            if (!bVar3) {
              return iVar15;
            }
          }
          if ((param_6 & 3) != 0) {
            uVar17 = 0;
            while (uVar11 != (&DAT_180100bf0)[uVar17]) {
              uVar12 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar12;
              if (0x1b < uVar12) {
                return iVar15;
              }
            }
            if (param_5 != 0) {
              if (param_3 != 3) {
                return iVar15;
              }
              if (param_5 != 2) {
                return iVar15;
              }
            }
          }
          if ((param_6 >> 10 & 1) != 0) {
            return 0;
          }
          uVar12 = param_6 & 0x3f8000;
          if (uVar12 == 0x10000) {
            uVar17 = 0;
            do {
              if (uVar11 == (&DAT_180100dc0)[uVar17]) {
                return 0;
              }
              uVar12 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar12;
            } while (uVar12 < 0x11);
          }
          else if (uVar12 == 0x40000) {
            uVar17 = 0;
            do {
              if (uVar11 == (&DAT_180100d90)[uVar17]) {
                return 0;
              }
              uVar12 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar12;
            } while (uVar12 < 9);
          }
          else {
            if (uVar12 != 0x100000) {
              return 0;
            }
            uVar17 = 0;
            while (uVar11 != (&DAT_180100d70)[uVar17]) {
              uVar12 = (int)uVar17 + 1;
              uVar17 = (ulonglong)uVar12;
              if (7 < uVar12) {
                return 0;
              }
            }
          }
          return -0x7789f796;
        }
        if ((byte)pcVar8[uVar17] == uVar11) {
          if ((param_6 & 1) == 0) {
            bVar3 = true;
            goto LAB_180002cfd;
          }
          goto LAB_180002cfb;
        }
        uVar17 = (ulonglong)((int)uVar17 + 1);
        cVar10 = pcVar8[uVar17];
      } while( true );
    }
  }
  if (param_6 != 0) {
    return iVar15;
  }
  iVar6 = FUN_180002500(param_8);
  if (iVar6 != -1) {
    return 0;
  }
LAB_18000306f:
  uVar7 = FUN_1800026c0(param_8);
  if (0 < (int)uVar7) {
    return 0;
  }
  return iVar15;
}

