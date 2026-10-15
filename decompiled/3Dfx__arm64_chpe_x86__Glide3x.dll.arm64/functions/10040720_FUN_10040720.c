/*
 * FUN_10040720 at 10040720
 * undefined FUN_10040720(void)
 * Address ranges: 10040720-10041c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040720(undefined2 *param_1,ushort param_2,ushort param_3,int param_4,int param_5,
                 undefined4 param_6,int *param_7,undefined4 param_8)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 extraout_x1;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  ushort local_6e;
  
  uVar9 = FUN_1003ca78(param_7,*param_1,param_1[1],param_1[2],param_1[3],7,1);
  uVar3 = (ushort)uVar9;
  FUN_1003c500(param_7,uVar3,7);
  if ((param_2 & 0xf0) == 0) {
    uVar18 = param_2 | 0x2000;
  }
  else {
    uVar18 = uVar9 & 0xffff;
    FUN_1003fd90(0x3c23d70a,param_7,param_8,param_2,0xa4,uVar3,uVar9 & 0xffff,7,1);
  }
  local_6e = 0;
  if (param_5 == 0) {
    if (param_4 != 0) goto LAB_10040d94;
  }
  else {
    uVar10 = uVar9 & 0xffff;
    if (uVar18 == uVar10) {
      uVar10 = FUN_1003ca78(param_7,0,0,0,0,7,0);
      uVar10 = uVar10 & 0xffff;
    }
    uVar11 = FUN_1003ca78(param_7,0,0,0,0,7,0);
    uVar4 = (undefined2)uVar11;
    local_6e = (ushort)uVar10;
    if (param_4 == 0) {
      local_6e = uVar3;
    }
    FUN_1003c500(param_7,uVar4,7);
    uVar8 = FUN_1003cbc0(param_7,uVar4,0xa4);
    FUN_1003c690(param_7,0,uVar18,uVar8,0,1);
    uVar8 = FUN_1003cbc0(param_7,uVar4,0xa4);
    iVar12 = FUN_10072590(param_7,param_7 + 0x5e,param_7[0x12],param_6,uVar8,0,0);
    piVar15 = param_7 + 0x4d;
    piVar22 = param_7 + 0x55;
    piVar6 = param_7 + 0x5d;
    *piVar6 = iVar12;
    FUN_10073878(param_8,(iVar12 + *piVar15 + *piVar22 + 1U & 0x7f) << 0x18 | 0x50,piVar15,piVar6,
                 piVar22,0);
    FUN_1003c500(param_7,uVar10,7);
    uVar8 = FUN_1003cbc0(param_7,uVar10,0xa4);
    FUN_1003c690(param_7,0,uVar18,uVar8,0,1);
    uVar8 = FUN_1003cbc0(param_7,uVar10,0xa4);
    iVar12 = FUN_10072590(param_7,param_7 + 0x5e,param_7[0x12],param_5,uVar8,0,0);
    *piVar6 = iVar12;
    FUN_10073878(param_8,(iVar12 + *piVar15 + *piVar22 + 1U & 0x7f) << 0x18 | 0x50,piVar15,piVar22,
                 piVar6,0);
    FUN_1003c500(param_7,local_6e,7);
    uVar8 = FUN_1003cbc0(param_7,local_6e,0xa4);
    FUN_1003c690(param_7,0,uVar10,uVar8,0,0);
    bVar7 = false;
    uVar13 = FUN_1003cbc0(param_7,local_6e,0xa4);
    if ((uVar11 & 0xff0) != 0x100) {
      bVar7 = (uVar11 & 0xf00) != 0x600 && ((uVar11 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar13 = uVar13 & 0xff;
    if ((uVar11 & 0x1000) != 0) {
      uVar13 = 0xff;
    }
    uVar17 = uVar11 & 0xf0;
    uVar1 = uVar11 & 0xf;
    if (uVar17 < 0x40) {
      if ((uVar17 - 0x20 & 0xffffffef) == 0) {
        iVar12 = 0x78;
        if (uVar17 == 0x20) {
          iVar12 = 0x6c;
        }
        uVar17 = *(uint *)(iVar12 + uVar1 * 4 + (int)param_7);
        if (uVar17 == 0) goto LAB_10040c78;
        *piVar6 = 2;
        iVar12 = FUN_10072e80(uVar17,0,1,4,0,0);
        param_7[0x5e] = iVar12;
        uVar17 = uVar17 & 0xff;
LAB_10040c1c:
        param_7[0x5f] = uVar17;
        goto LAB_10040c24;
      }
      if (uVar17 != 0) {
        if (uVar17 != 0x10) goto LAB_10040c24;
        *piVar6 = 2;
        param_7[0x5e] = uVar13 << 4 | 0x100006;
        uVar17 = (uint)*(byte *)(param_7 + uVar1 + 0x21);
        goto LAB_10040c1c;
      }
LAB_10040c78:
      fVar24 = -0.5;
      if ((uVar11 & 0xf00) != 0x300) {
        fVar24 = 0.0;
      }
      fVar23 = 1.0;
      if ((uVar11 & 0xf00) != 0x100) {
        fVar23 = fVar24;
      }
      if ((uVar11 & 0x2000) != 0) {
        fVar23 = fVar23 * 255.0;
      }
      fVar24 = -fVar23;
      if (!bVar7) {
        fVar24 = fVar23;
      }
      bVar7 = uVar13 == 0xff;
      iVar12 = 5;
      if (bVar7) {
        iVar12 = 2;
      }
      *piVar6 = iVar12;
      iVar12 = 0x4000;
      if (bVar7) {
        iVar12 = 0x4001;
      }
      iVar19 = 0x4006;
      if (bVar7) {
        iVar19 = iVar12;
      }
      param_7[0x5e] = iVar19;
      param_7[0x62] = (int)fVar24;
      param_7[0x61] = (int)fVar24;
      param_7[0x60] = (int)fVar24;
      param_7[0x5f] = (int)fVar24;
    }
    else {
      if (uVar17 < 0x41) {
        param_7[0x5e] = uVar13 << 4 | 0x101006;
        param_7[0x5f] = 2;
        *piVar6 = 2;
      }
      else {
        if (uVar17 != 0x50) {
          if (uVar17 == 0x80) {
            *piVar6 = 2;
            pbVar5 = (byte *)(param_7 + uVar1 + 0x24);
          }
          else {
            if (uVar17 != 0xf0) goto LAB_10040c24;
            *piVar6 = 2;
            pbVar5 = (byte *)(param_7 + 0x28);
          }
          iVar12 = FUN_10072e80(*(int *)pbVar5,(char)uVar13,1,4,0,0);
          param_7[0x5e] = iVar12;
          uVar17 = (uint)*pbVar5;
          goto LAB_10040c1c;
        }
        param_7[2] = param_7[2] | 1;
        if (*param_7 == 0x51) {
          param_7[0x61] = 5;
          uVar13 = uVar13 << 4 | 0x308006;
          iVar19 = 0;
          iVar12 = 4;
        }
        else {
          uVar13 = uVar13 << 4 | 0x208006;
          iVar19 = 5;
          iVar12 = 3;
        }
        *piVar6 = iVar12;
        param_7[0x5e] = uVar13;
        param_7[0x5f] = 0;
        param_7[0x60] = iVar19;
      }
LAB_10040c24:
      if (bVar7) {
        for (iVar12 = *piVar6; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_7[iVar12 + 0x5e] = piVar6[iVar12];
        }
        param_7[0x5e] = param_7[0x5e] | 0x80000000;
        param_7[0x5f] = 0x41;
        *piVar6 = *piVar6 + 1;
      }
    }
    FUN_10073878(param_8,(*piVar15 + *piVar22 + *piVar6 + 1U & 0x7f) << 0x18 | 1,piVar15,piVar22,
                 piVar6,0);
    FUN_1003cb80(param_7,uVar11 & 0xffff);
    if (param_4 == 0) {
      if (uVar10 != (uVar9 & 0xffff)) {
        FUN_1003cb80(param_7,uVar10);
      }
    }
    else {
LAB_10040d94:
      uVar10 = uVar9 & 0xffff;
      if (local_6e == uVar10) {
        uVar10 = FUN_1003ca78(param_7,0,0,0,0,7,0);
        uVar10 = uVar10 & 0xffff;
      }
      FUN_1003c500(param_7,uVar10,7);
      uVar8 = FUN_1003cbc0(param_7,uVar10,0xa4);
      FUN_1003c690(param_7,0,uVar18,uVar8,0,1);
      uVar8 = FUN_1003cbc0(param_7,uVar10,0xe4);
      iVar12 = FUN_10072590(param_7,param_7 + 0x5e,param_7[0x12],param_4,uVar8,0,0);
      piVar15 = param_7 + 0x4d;
      piVar22 = param_7 + 0x55;
      piVar6 = param_7 + 0x5d;
      *piVar6 = iVar12;
      FUN_10073878(param_8,(iVar12 + *piVar15 + *piVar22 + 1U & 0x7f) << 0x18 | 0x20,piVar15,piVar22
                   ,piVar6,0);
      if (local_6e != 0) {
        FUN_1003c500(param_7,uVar3,7);
        uVar8 = FUN_1003cbc0(param_7,uVar3,0xa4);
        FUN_1003c690(param_7,0,local_6e,uVar8,0,0);
        bVar7 = false;
        uVar18 = FUN_1003cbc0(param_7,uVar3,0xa4);
        if ((uVar10 & 0xff0) != 0x100) {
          bVar7 = (uVar10 & 0xf00) != 0x600 && ((uVar10 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar18 = uVar18 & 0xff;
        if ((uVar10 & 0x1000) != 0) {
          uVar18 = 0xff;
        }
        uVar11 = uVar10 & 0xf0;
        uVar13 = uVar10 & 0xf;
        if (uVar11 < 0x40) {
          if ((uVar11 - 0x20 & 0xffffffef) == 0) {
            iVar12 = 0x78;
            if (uVar11 == 0x20) {
              iVar12 = 0x6c;
            }
            uVar11 = *(uint *)(iVar12 + uVar13 * 4 + (int)param_7);
            if (uVar11 == 0) goto LAB_1004111c;
            *piVar6 = 2;
            iVar12 = FUN_10072e80(uVar11,0,1,4,0,0);
            param_7[0x5e] = iVar12;
            uVar11 = uVar11 & 0xff;
LAB_100410c0:
            param_7[0x5f] = uVar11;
            goto LAB_100410c8;
          }
          if (uVar11 != 0) {
            if (uVar11 != 0x10) goto LAB_100410c8;
            *piVar6 = 2;
            param_7[0x5e] = uVar18 << 4 | 0x100006;
            uVar11 = (uint)*(byte *)(param_7 + uVar13 + 0x21);
            goto LAB_100410c0;
          }
LAB_1004111c:
          fVar24 = -0.5;
          if ((uVar10 & 0xf00) != 0x300) {
            fVar24 = 0.0;
          }
          fVar23 = 1.0;
          if ((uVar10 & 0xf00) != 0x100) {
            fVar23 = fVar24;
          }
          if ((uVar10 & 0x2000) != 0) {
            fVar23 = fVar23 * 255.0;
          }
          fVar24 = -fVar23;
          if (!bVar7) {
            fVar24 = fVar23;
          }
          bVar7 = uVar18 == 0xff;
          iVar12 = 5;
          if (bVar7) {
            iVar12 = 2;
          }
          *piVar6 = iVar12;
          iVar12 = 0x4000;
          if (bVar7) {
            iVar12 = 0x4001;
          }
          iVar19 = 0x4006;
          if (bVar7) {
            iVar19 = iVar12;
          }
          param_7[0x5e] = iVar19;
          param_7[0x62] = (int)fVar24;
          param_7[0x61] = (int)fVar24;
          param_7[0x60] = (int)fVar24;
          param_7[0x5f] = (int)fVar24;
        }
        else {
          if (uVar11 < 0x41) {
            param_7[0x5e] = uVar18 << 4 | 0x101006;
            param_7[0x5f] = 2;
            *piVar6 = 2;
          }
          else {
            if (uVar11 != 0x50) {
              if (uVar11 == 0x80) {
                *piVar6 = 2;
                pbVar5 = (byte *)(param_7 + uVar13 + 0x24);
              }
              else {
                if (uVar11 != 0xf0) goto LAB_100410c8;
                *piVar6 = 2;
                pbVar5 = (byte *)(param_7 + 0x28);
              }
              iVar12 = FUN_10072e80(*(int *)pbVar5,(char)uVar18,1,4,0,0);
              param_7[0x5e] = iVar12;
              uVar11 = (uint)*pbVar5;
              goto LAB_100410c0;
            }
            param_7[2] = param_7[2] | 1;
            if (*param_7 == 0x51) {
              param_7[0x61] = 5;
              uVar18 = uVar18 << 4 | 0x308006;
              iVar19 = 0;
              iVar12 = 4;
            }
            else {
              uVar18 = uVar18 << 4 | 0x208006;
              iVar19 = 5;
              iVar12 = 3;
            }
            *piVar6 = iVar12;
            param_7[0x5e] = uVar18;
            param_7[0x5f] = 0;
            param_7[0x60] = iVar19;
          }
LAB_100410c8:
          if (bVar7) {
            for (iVar12 = *piVar6; iVar12 != 0; iVar12 = iVar12 + -1) {
              param_7[iVar12 + 0x5e] = piVar6[iVar12];
            }
            param_7[0x5e] = param_7[0x5e] | 0x80000000;
            param_7[0x5f] = 0x41;
            *piVar6 = *piVar6 + 1;
          }
        }
        FUN_10073878(param_8,(*piVar22 + *piVar6 + *piVar15 + 1U & 0x7f) << 0x18 | 0x3c,piVar15,
                     piVar22,piVar6,0);
      }
      if ((uint)local_6e == (uVar9 & 0xffff)) {
        FUN_1003cb80(param_7,uVar10);
      }
    }
  }
  piVar15 = param_7 + 0x5d;
  piVar22 = param_7 + 0x55;
  FUN_1003c500(param_7,uVar3,1);
  FUN_1003c690(param_7,0,uVar3,0,0,0);
  sVar2 = (short)(uVar9 & 0xff0);
  bVar7 = false;
  if ((uVar9 & 0xff0) != 0x100) {
    bVar7 = (uVar9 & 0xf00) != 0x600 && ((uVar9 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  uVar18 = uVar9 & 0xf0;
  uVar10 = uVar9 & 0xf;
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar12 = 0x78;
      if (uVar18 == 0x20) {
        iVar12 = 0x6c;
      }
      uVar11 = *(uint *)(iVar12 + uVar10 * 4 + (int)param_7);
      if (uVar11 == 0) goto LAB_10041498;
      *piVar15 = 2;
      iVar12 = FUN_10072e80(uVar11,0,1,4,0,0);
      param_7[0x5e] = iVar12;
      uVar11 = uVar11 & 0xff;
LAB_1004143c:
      param_7[0x5f] = uVar11;
      goto LAB_10041444;
    }
    if ((uVar9 & 0xf0) != 0) {
      if (uVar18 != 0x10) goto LAB_10041444;
      *piVar15 = 2;
      iVar12 = 0x100556;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x100ff6;
      }
      param_7[0x5e] = iVar12;
      uVar11 = (uint)*(byte *)(param_7 + uVar10 + 0x21);
      goto LAB_1004143c;
    }
LAB_10041498:
    fVar24 = -0.5;
    if ((uVar9 & 0xf00) != 0x300) {
      fVar24 = 0.0;
    }
    fVar23 = 1.0;
    if ((uVar9 & 0xf00) != 0x100) {
      fVar23 = fVar24;
    }
    if ((uVar9 & 0x2000) != 0) {
      fVar23 = fVar23 * 255.0;
    }
    fVar24 = -fVar23;
    if (!bVar7) {
      fVar24 = fVar23;
    }
    bVar7 = (uVar9 & 0x1000) != 0;
    iVar12 = 5;
    if (bVar7) {
      iVar12 = 2;
    }
    *piVar15 = iVar12;
    iVar12 = 0x4000;
    if (bVar7) {
      iVar12 = 0x4001;
    }
    iVar19 = 0x4006;
    if (bVar7) {
      iVar19 = iVar12;
    }
    param_7[0x5e] = iVar19;
    param_7[0x62] = (int)fVar24;
    param_7[0x61] = (int)fVar24;
    param_7[0x60] = (int)fVar24;
    param_7[0x5f] = (int)fVar24;
  }
  else {
    if (uVar18 < 0x41) {
      iVar12 = 0x101556;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x101ff6;
      }
      param_7[0x5e] = iVar12;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (uVar18 != 0x50) {
        if (uVar18 == 0x80) {
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + uVar10 + 0x24);
        }
        else {
          if (uVar18 != 0xf0) goto LAB_10041444;
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + 0x28);
        }
        uVar16 = 0x55;
        if ((uVar9 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar12 = FUN_10072e80(*(int *)pbVar5,uVar16,1,4,0,0);
        param_7[0x5e] = iVar12;
        uVar11 = (uint)*pbVar5;
        goto LAB_1004143c;
      }
      param_7[2] = param_7[2] | 1;
      if (*param_7 == 0x51) {
        param_7[0x61] = 5;
        iVar21 = 0;
        iVar12 = 0x308556;
        iVar19 = 0x308ff6;
        iVar20 = 4;
      }
      else {
        iVar21 = 5;
        iVar20 = 3;
        iVar12 = 0x208556;
        iVar19 = 0x208ff6;
      }
      *piVar15 = iVar20;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = iVar19;
      }
      param_7[0x5e] = iVar12;
      param_7[0x5f] = 0;
      param_7[0x60] = iVar21;
    }
LAB_10041444:
    if (bVar7) {
      for (iVar12 = *piVar15; iVar12 != 0; iVar12 = iVar12 + -1) {
        param_7[iVar12 + 0x5e] = piVar15[iVar12];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  piVar6 = param_7 + 0x4d;
  uVar11 = (*piVar22 + *piVar6 + *piVar15 + 1U & 0x7f) << 0x18 | 1;
  FUN_10073878(param_8,uVar11,piVar6,piVar22,piVar15,0);
  bVar7 = false;
  if (sVar2 != 0x100) {
    bVar7 = (uVar9 & 0xf00) != 0x600 && ((uVar9 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar12 = 0x78;
      if (uVar18 == 0x20) {
        iVar12 = 0x6c;
      }
      uVar13 = *(uint *)(iVar12 + uVar10 * 4 + (int)param_7);
      if (uVar13 == 0) goto LAB_100417b8;
      *piVar15 = 2;
      iVar12 = FUN_10072e80(uVar13,0,1,4,0,0);
      param_7[0x5e] = iVar12;
      uVar13 = uVar13 & 0xff;
LAB_1004175c:
      param_7[0x5f] = uVar13;
      goto LAB_10041764;
    }
    if (uVar18 != 0) {
      if (uVar18 != 0x10) goto LAB_10041764;
      *piVar15 = 2;
      iVar12 = 0x100aa6;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x100ff6;
      }
      param_7[0x5e] = iVar12;
      uVar13 = (uint)*(byte *)(param_7 + uVar10 + 0x21);
      goto LAB_1004175c;
    }
LAB_100417b8:
    fVar24 = -0.5;
    if ((uVar9 & 0xf00) != 0x300) {
      fVar24 = 0.0;
    }
    fVar23 = 1.0;
    if ((uVar9 & 0xf00) != 0x100) {
      fVar23 = fVar24;
    }
    if ((uVar9 & 0x2000) != 0) {
      fVar23 = fVar23 * 255.0;
    }
    fVar24 = -fVar23;
    if (!bVar7) {
      fVar24 = fVar23;
    }
    bVar7 = (uVar9 & 0x1000) != 0;
    iVar12 = 5;
    if (bVar7) {
      iVar12 = 2;
    }
    *piVar15 = iVar12;
    iVar12 = 0x4000;
    if (bVar7) {
      iVar12 = 0x4001;
    }
    iVar19 = 0x4006;
    if (bVar7) {
      iVar19 = iVar12;
    }
    param_7[0x5e] = iVar19;
    param_7[0x62] = (int)fVar24;
    param_7[0x61] = (int)fVar24;
    param_7[0x60] = (int)fVar24;
    param_7[0x5f] = (int)fVar24;
  }
  else {
    if (uVar18 < 0x41) {
      iVar12 = 0x101aa6;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x101ff6;
      }
      param_7[0x5e] = iVar12;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (uVar18 != 0x50) {
        if (uVar18 == 0x80) {
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + uVar10 + 0x24);
        }
        else {
          if (uVar18 != 0xf0) goto LAB_10041764;
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + 0x28);
        }
        uVar16 = 0xaa;
        if ((uVar9 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar12 = FUN_10072e80(*(int *)pbVar5,uVar16,1,4,0,0);
        param_7[0x5e] = iVar12;
        uVar13 = (uint)*pbVar5;
        goto LAB_1004175c;
      }
      param_7[2] = param_7[2] | 1;
      if (*param_7 == 0x51) {
        param_7[0x61] = 5;
        iVar21 = 0;
        iVar12 = 0x308aa6;
        iVar19 = 0x308ff6;
        iVar20 = 4;
      }
      else {
        iVar21 = 5;
        iVar20 = 3;
        iVar12 = 0x208aa6;
        iVar19 = 0x208ff6;
      }
      *piVar15 = iVar20;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = iVar19;
      }
      param_7[0x5e] = iVar12;
      param_7[0x5f] = 0;
      param_7[0x60] = iVar21;
    }
LAB_10041764:
    if (bVar7) {
      for (iVar12 = *piVar15; iVar12 != 0; iVar12 = iVar12 + -1) {
        param_7[iVar12 + 0x5e] = piVar15[iVar12];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  FUN_10073878(param_8,uVar11,piVar6,piVar22,piVar15,0);
  if ((param_3 & 0xf0) != 0x10) {
    FUN_1003c9f0(param_7,extraout_x1,uVar3,0);
    piVar15 = (int *)0x0;
    piVar14 = (int *)0x0;
    uVar9 = (param_7[0x55] + 1U & 0x7f) << 0x18 | 0x4000d;
    piVar6 = piVar22;
    goto LAB_10041c34;
  }
  FUN_10073878(param_8,(param_7[0x4d] + param_7[0x55] + 1U & 0x7f) << 0x18 | 0x3b,piVar6,piVar22,0,0
              );
  FUN_1003c500(param_7,param_3,0xf);
  FUN_1003c690(param_7,0,param_3,0xe4,0,0);
  bVar7 = false;
  if (sVar2 != 0x100) {
    bVar7 = (uVar9 & 0xf00) != 0x600 && ((uVar9 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar12 = 0x78;
      if (uVar18 == 0x20) {
        iVar12 = 0x6c;
      }
      uVar18 = *(uint *)(iVar12 + uVar10 * 4 + (int)param_7);
      if (uVar18 == 0) goto LAB_10041b34;
      *piVar15 = 2;
      iVar12 = FUN_10072e80(uVar18,0,1,4,0,0);
      param_7[0x5e] = iVar12;
      uVar18 = uVar18 & 0xff;
LAB_10041ad8:
      param_7[0x5f] = uVar18;
      goto LAB_10041ae0;
    }
    if (uVar18 != 0) {
      if (uVar18 != 0x10) goto LAB_10041ae0;
      *piVar15 = 2;
      iVar12 = 0x100006;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x100ff6;
      }
      param_7[0x5e] = iVar12;
      uVar18 = (uint)*(byte *)(param_7 + uVar10 + 0x21);
      goto LAB_10041ad8;
    }
LAB_10041b34:
    fVar24 = -0.5;
    if ((uVar9 & 0xf00) != 0x300) {
      fVar24 = 0.0;
    }
    fVar23 = 1.0;
    if ((uVar9 & 0xf00) != 0x100) {
      fVar23 = fVar24;
    }
    if ((uVar9 & 0x2000) != 0) {
      fVar23 = fVar23 * 255.0;
    }
    fVar24 = -fVar23;
    if (!bVar7) {
      fVar24 = fVar23;
    }
    bVar7 = (uVar9 & 0x1000) != 0;
    iVar12 = 5;
    if (bVar7) {
      iVar12 = 2;
    }
    *piVar15 = iVar12;
    iVar12 = 0x4000;
    if (bVar7) {
      iVar12 = 0x4001;
    }
    iVar19 = 0x4006;
    if (bVar7) {
      iVar19 = iVar12;
    }
    param_7[0x5e] = iVar19;
    param_7[0x62] = (int)fVar24;
    param_7[0x61] = (int)fVar24;
    param_7[0x60] = (int)fVar24;
    param_7[0x5f] = (int)fVar24;
  }
  else {
    if (uVar18 < 0x41) {
      iVar12 = 0x101006;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = 0x101ff6;
      }
      param_7[0x5e] = iVar12;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (uVar18 != 0x50) {
        if (uVar18 == 0x80) {
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + uVar10 + 0x24);
        }
        else {
          if (uVar18 != 0xf0) goto LAB_10041ae0;
          *piVar15 = 2;
          pbVar5 = (byte *)(param_7 + 0x28);
        }
        uVar16 = 0;
        if ((uVar9 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar12 = FUN_10072e80(*(int *)pbVar5,uVar16,1,4,0,0);
        param_7[0x5e] = iVar12;
        uVar18 = (uint)*pbVar5;
        goto LAB_10041ad8;
      }
      param_7[2] = param_7[2] | 1;
      if (*param_7 == 0x51) {
        param_7[0x61] = 5;
        iVar21 = 0;
        iVar12 = 0x308006;
        iVar19 = 0x308ff6;
        iVar20 = 4;
      }
      else {
        iVar21 = 5;
        iVar20 = 3;
        iVar12 = 0x208006;
        iVar19 = 0x208ff6;
      }
      *piVar15 = iVar20;
      if ((uVar9 & 0x1000) != 0) {
        iVar12 = iVar19;
      }
      param_7[0x5e] = iVar12;
      param_7[0x5f] = 0;
      param_7[0x60] = iVar21;
    }
LAB_10041ae0:
    if (bVar7) {
      for (iVar12 = *piVar15; iVar12 != 0; iVar12 = iVar12 + -1) {
        param_7[iVar12 + 0x5e] = piVar15[iVar12];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  uVar9 = (param_7[0x5d] + param_7[0x55] + param_7[0x4d] + 1U & 0x7f) << 0x18 | 1;
  piVar14 = piVar22;
LAB_10041c34:
  FUN_10073878(param_8,uVar9,piVar6,piVar14,piVar15,0);
  FUN_1003cb80(param_7,local_6e);
  FUN_1003cb80(param_7,uVar3);
  *(undefined1 *)(param_7 + 0x29) = 0;
  return;
}

