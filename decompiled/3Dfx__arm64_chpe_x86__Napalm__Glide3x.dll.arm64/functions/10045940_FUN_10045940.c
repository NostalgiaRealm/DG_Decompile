/*
 * FUN_10045940 at 10045940
 * undefined FUN_10045940(void)
 * Address ranges: 10045940-10047127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045940(undefined2 *param_1,ushort param_2,ushort param_3,int param_4,int param_5,
                 undefined4 param_6,int *param_7,undefined4 param_8)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int *piVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 extraout_x1;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  ushort local_78;
  
  uVar8 = FUN_10041930(param_7,*param_1,param_1[1],param_1[2],param_1[3],7,1);
  uVar3 = (ushort)uVar8;
  FUN_10041340(param_7,uVar3,7);
  if ((param_2 & 0xf0) == 0) {
    uVar18 = param_2 | 0x2000;
  }
  else {
    uVar18 = uVar8 & 0xffff;
    FUN_10044fb0(0x3c23d70a,param_7,param_8,param_2,0xa4,uVar3,uVar8 & 0xffff,7,1);
  }
  local_78 = 0;
  if (param_5 == 0) {
    if (param_4 != 0) goto LAB_1004602c;
  }
  else {
    uVar9 = uVar8 & 0xffff;
    if (uVar18 == uVar9) {
      uVar9 = FUN_10041930(param_7,0,0,0,0,7,0);
      uVar9 = uVar9 & 0xffff;
    }
    uVar10 = FUN_10041930(param_7,0,0,0,0,7,0);
    uVar4 = (undefined2)uVar10;
    local_78 = (ushort)uVar9;
    if (param_4 == 0) {
      local_78 = uVar3;
    }
    FUN_10041340(param_7,uVar4,7);
    uVar7 = FUN_10041a78(param_7,uVar4,0xa4);
    FUN_100414d0(param_7,0,uVar18,uVar7,0,1);
    uVar7 = FUN_10041a78(param_7,uVar4,0xa4);
    iVar11 = FUN_10077c30(param_7,param_7 + 0x5e,param_7[0x12],param_6,uVar7,0,0);
    piVar15 = param_7 + 0x4d;
    piVar21 = param_7 + 0x55;
    piVar5 = param_7 + 0x5d;
    *piVar5 = iVar11;
    FUN_10078f18(param_8,(*piVar15 + *piVar21 + iVar11 + 1U & 0x7f) << 0x18 | 0x50,piVar15,piVar5,
                 piVar21,0);
    FUN_10041340(param_7,uVar9,7);
    uVar7 = FUN_10041a78(param_7,uVar9,0xa4);
    FUN_100414d0(param_7,0,uVar18,uVar7,0,1);
    uVar7 = FUN_10041a78(param_7,uVar9,0xa4);
    iVar11 = FUN_10077c30(param_7,param_7 + 0x5e,param_7[0x12],param_5,uVar7,0,0);
    *piVar5 = iVar11;
    FUN_10078f18(param_8,(*piVar15 + *piVar21 + iVar11 + 1U & 0x7f) << 0x18 | 0x50,piVar15,piVar21,
                 piVar5,0);
    FUN_10041340(param_7,local_78,7);
    uVar7 = FUN_10041a78(param_7,local_78,0xa4);
    FUN_100414d0(param_7,0,uVar9,uVar7,0,0);
    bVar6 = false;
    uVar12 = FUN_10041a78(param_7,local_78,0xa4);
    if ((uVar10 & 0xff0) != 0x100) {
      bVar6 = (uVar10 & 0xf00) != 0x600 && ((uVar10 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar12 = uVar12 & 0xff;
    if ((uVar10 & 0x1000) != 0) {
      uVar12 = 0xff;
    }
    uVar17 = uVar10 & 0xf0;
    uVar1 = uVar10 & 0xf;
    if (uVar17 < 0x40) {
      if ((uVar17 - 0x20 & 0xffffffef) == 0) {
        iVar11 = 0x78;
        if (uVar17 == 0x20) {
          iVar11 = 0x6c;
        }
        uVar17 = *(uint *)(iVar11 + uVar1 * 4 + (int)param_7);
        if (uVar17 == 0) goto LAB_10045f1c;
        *piVar5 = 2;
        iVar11 = FUN_10078520(uVar17,0,1,4,0,0);
        param_7[0x5e] = iVar11;
        uVar17 = uVar17 & 0xff;
LAB_10045ec0:
        param_7[0x5f] = uVar17;
        goto LAB_10045ec8;
      }
      if (uVar17 != 0) {
        if (uVar17 != 0x10) goto LAB_10045ec8;
        *piVar5 = 2;
        param_7[0x5e] = uVar12 << 4 | 0x100006;
        uVar17 = (uint)*(byte *)(param_7 + uVar1 + 0x21);
        goto LAB_10045ec0;
      }
LAB_10045f1c:
      fVar23 = -0.5;
      if ((uVar10 & 0xf00) != 0x300) {
        fVar23 = 0.0;
      }
      fVar22 = 1.0;
      if ((uVar10 & 0xf00) != 0x100) {
        fVar22 = fVar23;
      }
      if ((uVar10 & 0x2000) != 0) {
        fVar22 = fVar22 * 255.0;
      }
      fVar23 = -fVar22;
      if (!bVar6) {
        fVar23 = fVar22;
      }
      bVar6 = uVar12 == 0xff;
      iVar11 = 5;
      if (bVar6) {
        iVar11 = 2;
      }
      *piVar5 = iVar11;
      iVar11 = 0x4000;
      if (bVar6) {
        iVar11 = 0x4001;
      }
      iVar13 = 0x4006;
      if (bVar6) {
        iVar13 = iVar11;
      }
      param_7[0x5e] = iVar13;
      param_7[0x62] = (int)fVar23;
      param_7[0x61] = (int)fVar23;
      param_7[0x60] = (int)fVar23;
      param_7[0x5f] = (int)fVar23;
    }
    else {
      if (uVar17 < 0x41) {
        param_7[0x5e] = uVar12 << 4 | 0x101006;
        param_7[0x5f] = 2;
        *piVar5 = 2;
      }
      else {
        if (0x7f < uVar17) {
          if (uVar17 < 0x81) {
            *piVar5 = 2;
            iVar11 = (uVar1 + 0x24) * 4;
          }
          else {
            if (uVar17 != 0xf0) goto LAB_10045ec8;
            *piVar5 = 2;
            iVar11 = 0xa0;
          }
          iVar13 = FUN_10078520(*(undefined4 *)((int)param_7 + iVar11),(char)uVar12,1,4,0,0);
          param_7[0x5e] = iVar13;
          uVar17 = (uint)*(byte *)((int)param_7 + iVar11);
          goto LAB_10045ec0;
        }
        if (uVar17 == 0x50) {
          param_7[2] = param_7[2] | 1;
          if (*param_7 == 0x51) {
            param_7[0x61] = 5;
            uVar12 = uVar12 << 4 | 0x308006;
            iVar13 = 0;
            iVar11 = 4;
          }
          else {
            uVar12 = uVar12 << 4 | 0x208006;
            iVar13 = 5;
            iVar11 = 3;
          }
          *piVar5 = iVar11;
          param_7[0x5e] = uVar12;
          param_7[0x5f] = 0;
          param_7[0x60] = iVar13;
        }
        else if (uVar17 == 0x60) {
          param_7[2] = param_7[2] | 1;
          uVar17 = uVar1 * 0x250 + 0x180 >> 4;
          if (*param_7 == 0x51) {
            param_7[0x61] = uVar17;
            uVar17 = 0;
            iVar11 = 4;
          }
          else {
            iVar11 = 3;
          }
          *piVar5 = iVar11;
          param_7[0x5e] = uVar12 << 4 | 0x208006;
          param_7[0x5f] = 0;
          param_7[0x60] = uVar17;
        }
      }
LAB_10045ec8:
      if (bVar6) {
        for (iVar11 = *piVar5; iVar11 != 0; iVar11 = iVar11 + -1) {
          param_7[iVar11 + 0x5e] = piVar5[iVar11];
        }
        param_7[0x5e] = param_7[0x5e] | 0x80000000;
        param_7[0x5f] = 0x41;
        *piVar5 = *piVar5 + 1;
      }
    }
    FUN_10078f18(param_8,(*piVar5 + *piVar15 + *piVar21 + 1U & 0x7f) << 0x18 | 1,piVar15,piVar21,
                 piVar5,0);
    FUN_10041a38(param_7,uVar10 & 0xffff);
    if (param_4 == 0) {
      if (uVar9 == (uVar8 & 0xffff)) goto LAB_1004651c;
    }
    else {
LAB_1004602c:
      uVar9 = uVar8 & 0xffff;
      if (local_78 == uVar9) {
        uVar9 = FUN_10041930(param_7,0,0,0,0,7,0);
        uVar9 = uVar9 & 0xffff;
      }
      FUN_10041340(param_7,uVar9,7);
      uVar7 = FUN_10041a78(param_7,uVar9,0xa4);
      FUN_100414d0(param_7,0,uVar18,uVar7,0,1);
      uVar7 = FUN_10041a78(param_7,uVar9,0xe4);
      iVar11 = FUN_10077c30(param_7,param_7 + 0x5e,param_7[0x12],param_4,uVar7,0,0);
      piVar15 = param_7 + 0x55;
      piVar21 = param_7 + 0x4d;
      piVar5 = param_7 + 0x5d;
      *piVar5 = iVar11;
      FUN_10078f18(param_8,(*piVar21 + *piVar15 + iVar11 + 1U & 0x7f) << 0x18 | 0x20,piVar21,piVar15
                   ,piVar5,0);
      if (local_78 != 0) {
        FUN_10041340(param_7,uVar3,7);
        uVar7 = FUN_10041a78(param_7,uVar3,0xa4);
        FUN_100414d0(param_7,0,local_78,uVar7,0,0);
        bVar6 = false;
        uVar18 = FUN_10041a78(param_7,uVar3,0xa4);
        if ((uVar9 & 0xff0) != 0x100) {
          bVar6 = (uVar9 & 0xf00) != 0x600 && ((uVar9 & 0xf00) - 0x100 & 0xfffffaff) == 0;
        }
        uVar18 = uVar18 & 0xff;
        if ((uVar9 & 0x1000) != 0) {
          uVar18 = 0xff;
        }
        uVar10 = uVar9 & 0xf0;
        uVar12 = uVar9 & 0xf;
        if (uVar10 < 0x40) {
          if ((uVar10 - 0x20 & 0xffffffef) == 0) {
            iVar11 = 0x78;
            if (uVar10 == 0x20) {
              iVar11 = 0x6c;
            }
            uVar10 = *(uint *)(iVar11 + uVar12 * 4 + (int)param_7);
            if (uVar10 == 0) goto LAB_10046430;
            *piVar5 = 2;
            iVar11 = FUN_10078520(uVar10,0,1,4,0,0);
            param_7[0x5e] = iVar11;
            uVar10 = uVar10 & 0xff;
LAB_100463d4:
            param_7[0x5f] = uVar10;
            goto LAB_100463dc;
          }
          if (uVar10 != 0) {
            if (uVar10 != 0x10) goto LAB_100463dc;
            *piVar5 = 2;
            param_7[0x5e] = uVar18 << 4 | 0x100006;
            uVar10 = (uint)*(byte *)(param_7 + uVar12 + 0x21);
            goto LAB_100463d4;
          }
LAB_10046430:
          fVar23 = -0.5;
          if ((uVar9 & 0xf00) != 0x300) {
            fVar23 = 0.0;
          }
          fVar22 = 1.0;
          if ((uVar9 & 0xf00) != 0x100) {
            fVar22 = fVar23;
          }
          if ((uVar9 & 0x2000) != 0) {
            fVar22 = fVar22 * 255.0;
          }
          fVar23 = -fVar22;
          if (!bVar6) {
            fVar23 = fVar22;
          }
          bVar6 = uVar18 == 0xff;
          iVar11 = 5;
          if (bVar6) {
            iVar11 = 2;
          }
          *piVar5 = iVar11;
          iVar11 = 0x4000;
          if (bVar6) {
            iVar11 = 0x4001;
          }
          iVar13 = 0x4006;
          if (bVar6) {
            iVar13 = iVar11;
          }
          param_7[0x5e] = iVar13;
          param_7[0x62] = (int)fVar23;
          param_7[0x61] = (int)fVar23;
          param_7[0x60] = (int)fVar23;
          param_7[0x5f] = (int)fVar23;
        }
        else {
          if (uVar10 < 0x41) {
            param_7[0x5e] = uVar18 << 4 | 0x101006;
            param_7[0x5f] = 2;
            *piVar5 = 2;
          }
          else {
            if (0x7f < uVar10) {
              if (uVar10 < 0x81) {
                *piVar5 = 2;
                iVar11 = (uVar12 + 0x24) * 4;
              }
              else {
                if (uVar10 != 0xf0) goto LAB_100463dc;
                *piVar5 = 2;
                iVar11 = 0xa0;
              }
              iVar13 = FUN_10078520(*(undefined4 *)((int)param_7 + iVar11),(char)uVar18,1,4,0,0);
              param_7[0x5e] = iVar13;
              uVar10 = (uint)*(byte *)((int)param_7 + iVar11);
              goto LAB_100463d4;
            }
            if (uVar10 == 0x50) {
              param_7[2] = param_7[2] | 1;
              if (*param_7 == 0x51) {
                param_7[0x61] = 5;
                uVar18 = uVar18 << 4 | 0x308006;
                iVar13 = 0;
                iVar11 = 4;
              }
              else {
                uVar18 = uVar18 << 4 | 0x208006;
                iVar13 = 5;
                iVar11 = 3;
              }
              *piVar5 = iVar11;
              param_7[0x5e] = uVar18;
              param_7[0x5f] = 0;
              param_7[0x60] = iVar13;
            }
            else if (uVar10 == 0x60) {
              param_7[2] = param_7[2] | 1;
              uVar10 = uVar12 * 0x250 + 0x180 >> 4;
              if (*param_7 == 0x51) {
                param_7[0x61] = uVar10;
                uVar10 = 0;
                iVar11 = 4;
              }
              else {
                iVar11 = 3;
              }
              *piVar5 = iVar11;
              param_7[0x5e] = uVar18 << 4 | 0x208006;
              param_7[0x5f] = 0;
              param_7[0x60] = uVar10;
            }
          }
LAB_100463dc:
          if (bVar6) {
            for (iVar11 = *piVar5; iVar11 != 0; iVar11 = iVar11 + -1) {
              param_7[iVar11 + 0x5e] = piVar5[iVar11];
            }
            param_7[0x5e] = param_7[0x5e] | 0x80000000;
            param_7[0x5f] = 0x41;
            *piVar5 = *piVar5 + 1;
          }
        }
        FUN_10078f18(param_8,(*piVar5 + *piVar21 + *piVar15 + 1U & 0x7f) << 0x18 | 0x3c,piVar21,
                     piVar15,piVar5,0);
      }
      if ((uint)local_78 != (uVar8 & 0xffff)) goto LAB_1004651c;
    }
    FUN_10041a38(param_7,uVar9);
  }
LAB_1004651c:
  piVar15 = param_7 + 0x5d;
  piVar21 = param_7 + 0x55;
  FUN_10041340(param_7,uVar3,1);
  FUN_100414d0(param_7,0,uVar3,0,0,0);
  sVar2 = (short)(uVar8 & 0xff0);
  bVar6 = false;
  if ((uVar8 & 0xff0) != 0x100) {
    bVar6 = (uVar8 & 0xf00) != 0x600 && ((uVar8 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  uVar18 = uVar8 & 0xf0;
  uVar9 = uVar8 & 0xf;
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar11 = 0x78;
      if (uVar18 == 0x20) {
        iVar11 = 0x6c;
      }
      uVar10 = *(uint *)(iVar11 + uVar9 * 4 + (int)param_7);
      if (uVar10 == 0) goto LAB_10046838;
      *piVar15 = 2;
      iVar11 = FUN_10078520(uVar10,0,1,4,0,0);
      param_7[0x5e] = iVar11;
      uVar10 = uVar10 & 0xff;
LAB_100467dc:
      param_7[0x5f] = uVar10;
      goto LAB_100467e4;
    }
    if ((uVar8 & 0xf0) != 0) {
      if (uVar18 != 0x10) goto LAB_100467e4;
      *piVar15 = 2;
      iVar11 = 0x100556;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x100ff6;
      }
      param_7[0x5e] = iVar11;
      uVar10 = (uint)*(byte *)(param_7 + uVar9 + 0x21);
      goto LAB_100467dc;
    }
LAB_10046838:
    fVar23 = -0.5;
    if ((uVar8 & 0xf00) != 0x300) {
      fVar23 = 0.0;
    }
    fVar22 = 1.0;
    if ((uVar8 & 0xf00) != 0x100) {
      fVar22 = fVar23;
    }
    if ((uVar8 & 0x2000) != 0) {
      fVar22 = fVar22 * 255.0;
    }
    fVar23 = -fVar22;
    if (!bVar6) {
      fVar23 = fVar22;
    }
    bVar6 = (uVar8 & 0x1000) != 0;
    iVar11 = 5;
    if (bVar6) {
      iVar11 = 2;
    }
    *piVar15 = iVar11;
    iVar11 = 0x4000;
    if (bVar6) {
      iVar11 = 0x4001;
    }
    iVar13 = 0x4006;
    if (bVar6) {
      iVar13 = iVar11;
    }
    param_7[0x5e] = iVar13;
    param_7[0x62] = (int)fVar23;
    param_7[0x61] = (int)fVar23;
    param_7[0x60] = (int)fVar23;
    param_7[0x5f] = (int)fVar23;
  }
  else {
    if (uVar18 < 0x41) {
      iVar11 = 0x101556;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x101ff6;
      }
      param_7[0x5e] = iVar11;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (0x7f < uVar18) {
        if (uVar18 < 0x81) {
          *piVar15 = 2;
          iVar11 = (uVar9 + 0x24) * 4;
        }
        else {
          if (uVar18 != 0xf0) goto LAB_100467e4;
          *piVar15 = 2;
          iVar11 = 0xa0;
        }
        uVar16 = 0x55;
        if ((uVar8 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar13 = FUN_10078520(*(undefined4 *)((int)param_7 + iVar11),uVar16,1,4,0,0);
        param_7[0x5e] = iVar13;
        uVar10 = (uint)*(byte *)((int)param_7 + iVar11);
        goto LAB_100467dc;
      }
      if (uVar18 == 0x50) {
        param_7[2] = param_7[2] | 1;
        if (*param_7 == 0x51) {
          param_7[0x61] = 5;
          iVar11 = 0x308556;
          if ((uVar8 & 0x1000) != 0) {
            iVar11 = 0x308ff6;
          }
          iVar20 = 0;
          iVar13 = 4;
        }
        else {
          iVar11 = 0x208556;
          if ((uVar8 & 0x1000) != 0) {
            iVar11 = 0x208ff6;
          }
          iVar20 = 5;
          iVar13 = 3;
        }
        *piVar15 = iVar13;
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = iVar20;
      }
      else if (uVar18 == 0x60) {
        param_7[2] = param_7[2] | 1;
        iVar11 = 0x208556;
        if ((uVar8 & 0x1000) != 0) {
          iVar11 = 0x208ff6;
        }
        uVar10 = uVar9 * 0x250 + 0x180 >> 4;
        if (*param_7 == 0x51) {
          param_7[0x61] = uVar10;
          uVar10 = 0;
          iVar13 = 4;
        }
        else {
          iVar13 = 3;
        }
        *piVar15 = iVar13;
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = uVar10;
      }
    }
LAB_100467e4:
    if (bVar6) {
      for (iVar11 = *piVar15; iVar11 != 0; iVar11 = iVar11 + -1) {
        param_7[iVar11 + 0x5e] = piVar15[iVar11];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  piVar5 = param_7 + 0x4d;
  uVar10 = (*piVar5 + *piVar15 + *piVar21 + 1U & 0x7f) << 0x18 | 1;
  FUN_10078f18(param_8,uVar10,piVar5,piVar21,piVar15,0);
  bVar6 = false;
  if (sVar2 != 0x100) {
    bVar6 = (uVar8 & 0xf00) != 0x600 && ((uVar8 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar11 = 0x78;
      if (uVar18 == 0x20) {
        iVar11 = 0x6c;
      }
      uVar12 = *(uint *)(iVar11 + uVar9 * 4 + (int)param_7);
      if (uVar12 == 0) goto LAB_10046be0;
      *piVar15 = 2;
      iVar11 = FUN_10078520(uVar12,0,1,4,0,0);
      param_7[0x5e] = iVar11;
      uVar12 = uVar12 & 0xff;
LAB_10046b84:
      param_7[0x5f] = uVar12;
      goto LAB_10046b8c;
    }
    if (uVar18 != 0) {
      if (uVar18 != 0x10) goto LAB_10046b8c;
      *piVar15 = 2;
      iVar11 = 0x100aa6;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x100ff6;
      }
      param_7[0x5e] = iVar11;
      uVar12 = (uint)*(byte *)(param_7 + uVar9 + 0x21);
      goto LAB_10046b84;
    }
LAB_10046be0:
    fVar23 = -0.5;
    if ((uVar8 & 0xf00) != 0x300) {
      fVar23 = 0.0;
    }
    fVar22 = 1.0;
    if ((uVar8 & 0xf00) != 0x100) {
      fVar22 = fVar23;
    }
    if ((uVar8 & 0x2000) != 0) {
      fVar22 = fVar22 * 255.0;
    }
    fVar23 = -fVar22;
    if (!bVar6) {
      fVar23 = fVar22;
    }
    bVar6 = (uVar8 & 0x1000) != 0;
    iVar11 = 5;
    if (bVar6) {
      iVar11 = 2;
    }
    *piVar15 = iVar11;
    iVar11 = 0x4000;
    if (bVar6) {
      iVar11 = 0x4001;
    }
    iVar13 = 0x4006;
    if (bVar6) {
      iVar13 = iVar11;
    }
    param_7[0x5e] = iVar13;
    param_7[0x62] = (int)fVar23;
    param_7[0x61] = (int)fVar23;
    param_7[0x60] = (int)fVar23;
    param_7[0x5f] = (int)fVar23;
  }
  else {
    if (uVar18 < 0x41) {
      iVar11 = 0x101aa6;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x101ff6;
      }
      param_7[0x5e] = iVar11;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (0x7f < uVar18) {
        if (uVar18 < 0x81) {
          *piVar15 = 2;
          iVar11 = (uVar9 + 0x24) * 4;
        }
        else {
          if (uVar18 != 0xf0) goto LAB_10046b8c;
          *piVar15 = 2;
          iVar11 = 0xa0;
        }
        uVar16 = 0xaa;
        if ((uVar8 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar13 = FUN_10078520(*(undefined4 *)((int)param_7 + iVar11),uVar16,1,4,0,0);
        param_7[0x5e] = iVar13;
        uVar12 = (uint)*(byte *)((int)param_7 + iVar11);
        goto LAB_10046b84;
      }
      if (uVar18 == 0x50) {
        param_7[2] = param_7[2] | 1;
        if (*param_7 == 0x51) {
          param_7[0x61] = 5;
          iVar19 = 0;
          iVar11 = 0x308aa6;
          iVar13 = 0x308ff6;
          iVar20 = 4;
        }
        else {
          iVar19 = 5;
          iVar20 = 3;
          iVar11 = 0x208aa6;
          iVar13 = 0x208ff6;
        }
        *piVar15 = iVar20;
        if ((uVar8 & 0x1000) != 0) {
          iVar11 = iVar13;
        }
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = iVar19;
      }
      else if (uVar18 == 0x60) {
        param_7[2] = param_7[2] | 1;
        iVar11 = 0x208aa6;
        if ((uVar8 & 0x1000) != 0) {
          iVar11 = 0x208ff6;
        }
        uVar12 = uVar9 * 0x250 + 0x180 >> 4;
        if (*param_7 == 0x51) {
          param_7[0x61] = uVar12;
          uVar12 = 0;
          iVar13 = 4;
        }
        else {
          iVar13 = 3;
        }
        *piVar15 = iVar13;
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = uVar12;
      }
    }
LAB_10046b8c:
    if (bVar6) {
      for (iVar11 = *piVar15; iVar11 != 0; iVar11 = iVar11 + -1) {
        param_7[iVar11 + 0x5e] = piVar15[iVar11];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  FUN_10078f18(param_8,uVar10,piVar5,piVar21,piVar15,0);
  if ((param_3 & 0xf0) != 0x10) {
    FUN_100418a8(param_7,extraout_x1,uVar3,0);
    piVar15 = (int *)0x0;
    piVar14 = (int *)0x0;
    uVar8 = (param_7[0x55] + 1U & 0x7f) << 0x18 | 0x4000d;
    piVar5 = piVar21;
    goto LAB_100470e4;
  }
  FUN_10078f18(param_8,(param_7[0x4d] + param_7[0x55] + 1U & 0x7f) << 0x18 | 0x3b,piVar5,piVar21,0,0
              );
  FUN_10041340(param_7,param_3,0xf);
  FUN_100414d0(param_7,0,param_3,0xe4,0,0);
  bVar6 = false;
  if (sVar2 != 0x100) {
    bVar6 = (uVar8 & 0xf00) != 0x600 && ((uVar8 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  if (uVar18 < 0x40) {
    if ((uVar18 - 0x20 & 0xffffffef) == 0) {
      iVar11 = 0x78;
      if (uVar18 == 0x20) {
        iVar11 = 0x6c;
      }
      uVar18 = *(uint *)(iVar11 + uVar9 * 4 + (int)param_7);
      if (uVar18 == 0) goto LAB_10046fe4;
      *piVar15 = 2;
      iVar11 = FUN_10078520(uVar18,0,1,4,0,0);
      param_7[0x5e] = iVar11;
      uVar18 = uVar18 & 0xff;
LAB_10046f88:
      param_7[0x5f] = uVar18;
      goto LAB_10046f90;
    }
    if (uVar18 != 0) {
      if (uVar18 != 0x10) goto LAB_10046f90;
      *piVar15 = 2;
      iVar11 = 0x100006;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x100ff6;
      }
      param_7[0x5e] = iVar11;
      uVar18 = (uint)*(byte *)(param_7 + uVar9 + 0x21);
      goto LAB_10046f88;
    }
LAB_10046fe4:
    fVar23 = -0.5;
    if ((uVar8 & 0xf00) != 0x300) {
      fVar23 = 0.0;
    }
    fVar22 = 1.0;
    if ((uVar8 & 0xf00) != 0x100) {
      fVar22 = fVar23;
    }
    if ((uVar8 & 0x2000) != 0) {
      fVar22 = fVar22 * 255.0;
    }
    fVar23 = -fVar22;
    if (!bVar6) {
      fVar23 = fVar22;
    }
    bVar6 = (uVar8 & 0x1000) != 0;
    iVar11 = 5;
    if (bVar6) {
      iVar11 = 2;
    }
    *piVar15 = iVar11;
    iVar11 = 0x4000;
    if (bVar6) {
      iVar11 = 0x4001;
    }
    iVar13 = 0x4006;
    if (bVar6) {
      iVar13 = iVar11;
    }
    param_7[0x5e] = iVar13;
    param_7[0x62] = (int)fVar23;
    param_7[0x61] = (int)fVar23;
    param_7[0x60] = (int)fVar23;
    param_7[0x5f] = (int)fVar23;
  }
  else {
    if (uVar18 < 0x41) {
      iVar11 = 0x101006;
      if ((uVar8 & 0x1000) != 0) {
        iVar11 = 0x101ff6;
      }
      param_7[0x5e] = iVar11;
      *piVar15 = 2;
      param_7[0x5f] = 2;
    }
    else {
      if (0x7f < uVar18) {
        if (uVar18 < 0x81) {
          *piVar15 = 2;
          iVar11 = (uVar9 + 0x24) * 4;
        }
        else {
          if (uVar18 != 0xf0) goto LAB_10046f90;
          *piVar15 = 2;
          iVar11 = 0xa0;
        }
        uVar16 = 0;
        if ((uVar8 & 0x1000) != 0) {
          uVar16 = 0xff;
        }
        iVar13 = FUN_10078520(*(undefined4 *)((int)param_7 + iVar11),uVar16,1,4,0,0);
        param_7[0x5e] = iVar13;
        uVar18 = (uint)*(byte *)((int)param_7 + iVar11);
        goto LAB_10046f88;
      }
      if (uVar18 == 0x50) {
        param_7[2] = param_7[2] | 1;
        if (*param_7 == 0x51) {
          param_7[0x61] = 5;
          iVar19 = 0;
          iVar11 = 0x308006;
          iVar13 = 0x308ff6;
          iVar20 = 4;
        }
        else {
          iVar19 = 5;
          iVar20 = 3;
          iVar11 = 0x208006;
          iVar13 = 0x208ff6;
        }
        *piVar15 = iVar20;
        if ((uVar8 & 0x1000) != 0) {
          iVar11 = iVar13;
        }
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = iVar19;
      }
      else if (uVar18 == 0x60) {
        param_7[2] = param_7[2] | 1;
        iVar11 = 0x208006;
        if ((uVar8 & 0x1000) != 0) {
          iVar11 = 0x208ff6;
        }
        uVar8 = uVar9 * 0x250 + 0x180 >> 4;
        if (*param_7 == 0x51) {
          param_7[0x61] = uVar8;
          uVar8 = 0;
          iVar13 = 4;
        }
        else {
          iVar13 = 3;
        }
        *piVar15 = iVar13;
        param_7[0x5e] = iVar11;
        param_7[0x5f] = 0;
        param_7[0x60] = uVar8;
      }
    }
LAB_10046f90:
    if (bVar6) {
      for (iVar11 = *piVar15; iVar11 != 0; iVar11 = iVar11 + -1) {
        param_7[iVar11 + 0x5e] = piVar15[iVar11];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      param_7[0x5f] = 0x41;
      *piVar15 = *piVar15 + 1;
    }
  }
  uVar8 = (param_7[0x5d] + param_7[0x55] + param_7[0x4d] + 1U & 0x7f) << 0x18 | 1;
  piVar14 = piVar21;
LAB_100470e4:
  FUN_10078f18(param_8,uVar8,piVar5,piVar14,piVar15,0);
  FUN_10041a38(param_7,local_78);
  FUN_10041a38(param_7,uVar3);
  *(undefined1 *)(param_7 + 0x29) = 0;
  return;
}

