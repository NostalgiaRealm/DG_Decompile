/*
 * FUN_10042d38 at 10042d38
 * undefined FUN_10042d38(void)
 * Address ranges: 10042d38-10044f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042d38(int *param_1,ushort *param_2,ushort param_3,undefined1 param_4,char param_5,
                 undefined4 param_6)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  undefined2 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  int *piVar21;
  byte *pbVar22;
  uint extraout_w10;
  uint extraout_w10_00;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar23;
  uint extraout_w12;
  uint extraout_w12_00;
  ulonglong extraout_x14;
  uint uVar24;
  float fVar25;
  float extraout_s0;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float extraout_s17;
  float extraout_s18;
  float extraout_s19;
  ushort local_6c;
  uint local_54;
  float local_48;
  
  uVar8 = param_2[1];
  puVar1 = param_2 + 2;
  if ((uVar8 & 0xdf0) == 0) {
LAB_10042db0:
    if ((uVar8 & 0xdf0) == 0) {
      uVar8 = *puVar1;
    }
LAB_10042dcc:
    uVar24 = (uint)uVar8;
    fVar25 = (float)FUN_1003e290(uVar24);
    if (((fVar25 != 0.0) && ((uVar8 & 0xff0) != 0x300)) || (uVar8 == 0)) goto LAB_10042df8;
  }
  else {
    if ((*puVar1 & 0xff0) == 0) goto LAB_10042dcc;
    if ((*puVar1 & 0xff0) == 0x200) goto LAB_10042db0;
LAB_10042df8:
    uVar13 = FUN_10041930(param_1,*param_2,param_2[3],0,0,param_4,1);
    uVar24 = uVar13 & 0xffff;
    uVar19 = FUN_100422d0(param_1,param_2[1],*puVar1,0,uVar24,0,param_4,param_5,param_6);
    if ((uVar19 & 1) == 0) {
      uVar24 = uVar13 & 0xffff | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  puVar1 = param_2 + 3;
  local_6c = *param_2;
  fVar25 = (float)FUN_1003e290(local_6c);
  if ((fVar25 != 0.0) && ((uVar24 & 0xff0) != 0x300)) {
    local_6c = FUN_10041930(param_1,uVar24,*puVar1,0,0,param_4,1);
    uVar19 = FUN_100422d0(param_1,*param_2,0,0,local_6c,0,param_4,param_5,param_6);
    if ((uVar19 & 1) == 0) {
      local_6c = local_6c | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  uVar18 = (uint)local_6c;
  fVar26 = 255.0;
  uVar8 = *puVar1;
  uVar14 = (uint)uVar8;
  uVar15 = (uint)uVar8;
  bVar10 = false;
  uVar13 = (uint)param_3;
  fVar25 = fVar26;
  if ((local_6c & 0x2000) == 0) {
    fVar25 = 1.0;
  }
  if ((uVar24 & 0x2000) == 0) {
    fVar26 = 1.0;
  }
  uVar23 = (uint)(byte)param_2[4];
  fVar25 = fVar25 * fVar26;
  fVar26 = (float)(1 << (ulonglong)((byte)param_2[4] & 0x1f));
  if (((uVar8 & 0xdf0) == 0) &&
     (uVar14 = FUN_1003e290(uVar14), uVar15 = extraout_w10, uVar23 = extraout_w11,
     uVar18 = extraout_w12, extraout_s0 == 0.0)) {
    fVar25 = extraout_s17 / extraout_s18;
    if (fVar25 != extraout_s19) {
      uVar13 = uVar24;
      if ((extraout_w12 & 0xf0) == 0x80 || (extraout_w12 & 0xf0) == 0xf0) {
        uVar13 = extraout_w12;
      }
      if ((uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0) {
        uVar13 = FUN_10041930(param_1,0,0,0,0,param_4,0);
        bVar10 = true;
        uVar13 = uVar13 & 0xffff;
      }
    }
    FUN_10041340(param_1,uVar13,param_4);
    uVar12 = FUN_10041a78(param_1,uVar13,param_5);
    FUN_100414d0(param_1,0,local_6c,uVar12,0,0);
    bVar11 = false;
    uVar15 = FUN_10041a78(param_1,uVar13,param_5);
    piVar21 = param_1 + 0x5d;
    piVar20 = param_1 + 0x55;
    if ((uVar24 & 0xff0) != 0x100) {
      bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar15 = uVar15 & 0xff;
    if ((uVar24 & 0x1000) != 0) {
      uVar15 = 0xff;
    }
    uVar18 = uVar24 & 0xf0;
    uVar14 = uVar24 & 0xf;
    if (uVar18 < 0x40) {
      if ((uVar18 - 0x20 & 0xffffffef) == 0) {
        iVar16 = 0x78;
        if (uVar18 == 0x20) {
          iVar16 = 0x6c;
        }
        uVar18 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
        if (uVar18 != 0) {
          *piVar21 = 2;
          iVar16 = FUN_10078520(uVar18,0,1,4,0,0);
          param_1[0x5e] = iVar16;
          param_1[0x5f] = uVar18 & 0xff;
          goto LAB_100432c8;
        }
      }
      else if ((uVar24 & 0xf0) != 0) {
        if (uVar18 != 0x10) goto LAB_100432c8;
        *piVar21 = 2;
        param_1[0x5e] = uVar15 << 4 | 0x100006;
        bVar7 = *(byte *)(param_1 + uVar14 + 0x21);
        goto LAB_10043260;
      }
      fVar26 = -0.5;
      if ((uVar24 & 0xf00) != 0x300) {
        fVar26 = 0.0;
      }
      fVar27 = 1.0;
      if ((uVar24 & 0xf00) != 0x100) {
        fVar27 = fVar26;
      }
      if ((uVar24 & 0x2000) != 0) {
        fVar27 = fVar27 * 255.0;
      }
      fVar26 = -fVar27;
      if (!bVar11) {
        fVar26 = fVar27;
      }
      bVar11 = uVar15 == 0xff;
      iVar16 = 5;
      if (bVar11) {
        iVar16 = 2;
      }
      *piVar21 = iVar16;
      iVar16 = 0x4000;
      if (bVar11) {
        iVar16 = 0x4001;
      }
      iVar17 = 0x4006;
      if (bVar11) {
        iVar17 = iVar16;
      }
      param_1[0x5e] = iVar17;
      param_1[0x62] = (int)fVar26;
      param_1[0x61] = (int)fVar26;
      param_1[0x60] = (int)fVar26;
      param_1[0x5f] = (int)fVar26;
    }
    else {
      if (uVar18 < 0x41) {
        param_1[0x5e] = uVar15 << 4 | 0x101006;
        param_1[0x5f] = 2;
        *piVar21 = 2;
      }
      else if (uVar18 < 0x80) {
        if (uVar18 == 0x50) {
          param_1[2] = param_1[2] | 1;
          if (*param_1 == 0x51) {
            param_1[0x61] = 5;
            uVar15 = uVar15 << 4 | 0x308006;
            iVar17 = 0;
            iVar16 = 4;
          }
          else {
            uVar15 = uVar15 << 4 | 0x208006;
            iVar17 = 5;
            iVar16 = 3;
          }
          *piVar21 = iVar16;
          param_1[0x5e] = uVar15;
          param_1[0x5f] = 0;
          param_1[0x60] = iVar17;
        }
        else if (uVar18 == 0x60) {
          param_1[2] = param_1[2] | 1;
          uVar18 = uVar14 * 0x250 + 0x180 >> 4;
          if (*param_1 == 0x51) {
            param_1[0x61] = uVar18;
            uVar18 = 0;
            iVar16 = 4;
          }
          else {
            iVar16 = 3;
          }
          *piVar21 = iVar16;
          param_1[0x5e] = uVar15 << 4 | 0x208006;
          param_1[0x5f] = 0;
          param_1[0x60] = uVar18;
        }
      }
      else {
        if (uVar18 < 0x81) {
          *piVar21 = 2;
          pbVar22 = (byte *)(param_1 + uVar14 + 0x24);
        }
        else {
          if (uVar18 != 0xf0) goto LAB_100432c8;
          *piVar21 = 2;
          pbVar22 = (byte *)(param_1 + 0x28);
        }
        iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar15,1,4,0,0);
        param_1[0x5e] = iVar16;
        bVar7 = *pbVar22;
LAB_10043260:
        param_1[0x5f] = (uint)bVar7;
      }
LAB_100432c8:
      if (bVar11) {
        for (iVar16 = *piVar21; iVar16 != 0; iVar16 = iVar16 + -1) {
          param_1[iVar16 + 0x5e] = piVar21[iVar16];
        }
        param_1[0x5e] = param_1[0x5e] | 0x80000000;
        param_1[0x5f] = 0x41;
        *piVar21 = *piVar21 + 1;
      }
    }
    piVar2 = param_1 + 0x4d;
    uVar15 = 0x38;
    if (fVar25 == 1.0) {
      uVar15 = 0x2038;
    }
    FUN_10078f18(param_6,(*piVar2 + *piVar20 + *piVar21 + 1U & 0x7f) << 0x18 | uVar15,piVar2,piVar20
                 ,piVar21,0);
    if (fVar25 == 1.0) goto LAB_10044f4c;
    FUN_10041340(param_1,param_3,param_4);
    FUN_100414d0(param_1,0,uVar13,param_5,0,0);
    bVar11 = param_5 == -1;
    iVar16 = 5;
    if (bVar11) {
      iVar16 = 2;
    }
    *piVar21 = iVar16;
    iVar17 = 0x4000;
    if (bVar11) {
      iVar17 = 0x4001;
    }
    iVar6 = 0x4006;
    if (bVar11) {
      iVar6 = iVar17;
    }
    param_1[0x5e] = iVar6;
    param_1[0x62] = (int)fVar25;
    param_1[0x61] = (int)fVar25;
    param_1[0x60] = (int)fVar25;
    param_1[0x5f] = (int)fVar25;
    iVar16 = iVar16 + *piVar2 + *piVar20;
LAB_10044f2c:
    uVar15 = 0x2038;
    piVar21 = (int *)0x0;
LAB_10044f3c:
    piVar20 = param_1 + 0x5d;
    uVar15 = (iVar16 + 1U & 0x7f) << 0x18 | uVar15;
  }
  else {
    if ((uVar15 & 0xf0) == 0) {
      local_48 = 0.0;
    }
    else {
      local_48 = (float)FUN_1003e290(uVar14);
      uVar15 = extraout_w10_00;
      uVar23 = extraout_w11_00;
      uVar18 = extraout_w12_00;
    }
    fVar27 = 255.0;
    if ((uVar15 & 0x2000) == 0) {
      fVar27 = 1.0;
    }
    if (fVar27 == fVar25) {
      if ((fVar27 == 1.0 && uVar23 == 0) && (local_48 == 0.0)) {
        local_54 = 0x2000;
      }
      else {
        uVar13 = uVar24;
        if ((uVar18 & 0xf0) == 0x80 || (uVar18 & 0xf0) == 0xf0) {
          uVar13 = (uint)local_6c;
        }
        bVar10 = (uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0;
        if (bVar10) {
          uVar13 = FUN_10041930(param_1,0,0,0,0,param_4,0);
          uVar13 = uVar13 & 0xffff;
        }
        local_54 = 0;
      }
      FUN_10041340(param_1,uVar13,param_4);
      uVar12 = FUN_10041a78(param_1,uVar13,param_5);
      FUN_100414d0(param_1,0,local_6c,uVar12,0,0);
      bVar11 = false;
      uVar15 = FUN_10041a78(param_1,uVar13,param_5);
      piVar21 = param_1 + 0x5d;
      if ((uVar24 & 0xff0) != 0x100) {
        bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
      }
      uVar15 = uVar15 & 0xff;
      if ((uVar24 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar18 = uVar24 & 0xf0;
      uVar14 = uVar24 & 0xf;
      if (uVar18 < 0x40) {
        if ((uVar18 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar18 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar18 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
          if (uVar18 != 0) {
            *piVar21 = 2;
            iVar16 = FUN_10078520(uVar18,0,1,4,0,0);
            param_1[0x5e] = iVar16;
            param_1[0x5f] = uVar18 & 0xff;
            goto LAB_10043834;
          }
        }
        else if ((uVar24 & 0xf0) != 0) {
          if (uVar18 != 0x10) goto LAB_10043834;
          *piVar21 = 2;
          param_1[0x5e] = uVar15 << 4 | 0x100006;
          bVar7 = *(byte *)(param_1 + uVar14 + 0x21);
          goto LAB_100437cc;
        }
        fVar25 = -0.5;
        if ((uVar24 & 0xf00) != 0x300) {
          fVar25 = 0.0;
        }
        fVar28 = 1.0;
        if ((uVar24 & 0xf00) != 0x100) {
          fVar28 = fVar25;
        }
        if ((uVar24 & 0x2000) != 0) {
          fVar28 = fVar28 * 255.0;
        }
        fVar25 = -fVar28;
        if (!bVar11) {
          fVar25 = fVar28;
        }
        bVar11 = uVar15 == 0xff;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        *piVar21 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar17 = 0x4006;
        if (bVar11) {
          iVar17 = iVar16;
        }
        param_1[0x5e] = iVar17;
        param_1[0x62] = (int)fVar25;
        param_1[0x61] = (int)fVar25;
        param_1[0x60] = (int)fVar25;
        param_1[0x5f] = (int)fVar25;
      }
      else {
        if (uVar18 < 0x41) {
          param_1[0x5e] = uVar15 << 4 | 0x101006;
          param_1[0x5f] = 2;
          *piVar21 = 2;
        }
        else if (uVar18 < 0x80) {
          if (uVar18 == 0x50) {
            param_1[2] = param_1[2] | 1;
            if (*param_1 == 0x51) {
              param_1[0x61] = 5;
              uVar15 = uVar15 << 4 | 0x308006;
              iVar17 = 0;
              iVar16 = 4;
            }
            else {
              uVar15 = uVar15 << 4 | 0x208006;
              iVar17 = 5;
              iVar16 = 3;
            }
            *piVar21 = iVar16;
            param_1[0x5e] = uVar15;
            param_1[0x5f] = 0;
            param_1[0x60] = iVar17;
          }
          else if (uVar18 == 0x60) {
            param_1[2] = param_1[2] | 1;
            uVar18 = uVar14 * 0x250 + 0x180 >> 4;
            if (*param_1 == 0x51) {
              param_1[0x61] = uVar18;
              uVar18 = 0;
              iVar16 = 4;
            }
            else {
              iVar16 = 3;
            }
            *piVar21 = iVar16;
            param_1[0x5e] = uVar15 << 4 | 0x208006;
            param_1[0x5f] = 0;
            param_1[0x60] = uVar18;
          }
        }
        else {
          if (uVar18 < 0x81) {
            *piVar21 = 2;
            pbVar22 = (byte *)(param_1 + uVar14 + 0x24);
          }
          else {
            if (uVar18 != 0xf0) goto LAB_10043834;
            *piVar21 = 2;
            pbVar22 = (byte *)(param_1 + 0x28);
          }
          iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar15,1,4,0,0);
          param_1[0x5e] = iVar16;
          bVar7 = *pbVar22;
LAB_100437cc:
          param_1[0x5f] = (uint)bVar7;
        }
LAB_10043834:
        if (bVar11) {
          for (iVar16 = *piVar21; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x5e] = piVar21[iVar16];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar21 = *piVar21 + 1;
        }
      }
      bVar11 = false;
      uVar15 = FUN_10041a78(param_1,uVar13,param_5);
      uVar8 = *puVar1;
      piVar21 = param_1 + 0x65;
      if ((uVar8 & 0xff0) != 0x100) {
        uVar18 = uVar8 & 0xf00;
        bVar11 = uVar18 != 0x600 && (uVar18 - 0x100 & 0xfffffaff) == 0;
      }
      uVar18 = (uint)uVar8;
      uVar15 = uVar15 & 0xff;
      if ((uVar8 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar14 = uVar18 & 0xf0;
      uVar23 = uVar18 & 0xf;
      if (uVar14 < 0x40) {
        if ((uVar14 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar14 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar14 = *(uint *)(iVar16 + uVar23 * 4 + (int)param_1);
          if (uVar14 == 0) goto LAB_10043bdc;
          *piVar21 = 2;
          iVar16 = FUN_10078520(uVar14,0,1,4,0,0);
          param_1[0x66] = iVar16;
          uVar14 = uVar14 & 0xff;
LAB_10043b80:
          param_1[0x67] = uVar14;
          goto LAB_10043b88;
        }
        if ((uVar8 & 0xf0) != 0) {
          if (uVar14 != 0x10) goto LAB_10043b88;
          *piVar21 = 2;
          param_1[0x66] = uVar15 << 4 | 0x100006;
          uVar14 = (uint)*(byte *)(param_1 + uVar23 + 0x21);
          goto LAB_10043b80;
        }
LAB_10043bdc:
        fVar25 = -0.5;
        if ((uVar18 & 0xf00) != 0x300) {
          fVar25 = 0.0;
        }
        fVar28 = 1.0;
        if ((uVar18 & 0xf00) != 0x100) {
          fVar28 = fVar25;
        }
        if ((uVar8 & 0x2000) != 0) {
          fVar28 = fVar28 * 255.0;
        }
        fVar25 = -fVar28;
        if (!bVar11) {
          fVar25 = fVar28;
        }
        bVar11 = uVar15 == 0xff;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        *piVar21 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar17 = 0x4006;
        if (bVar11) {
          iVar17 = iVar16;
        }
        param_1[0x66] = iVar17;
        param_1[0x6a] = (int)fVar25;
        param_1[0x69] = (int)fVar25;
        param_1[0x68] = (int)fVar25;
        param_1[0x67] = (int)fVar25;
      }
      else {
        if (uVar14 < 0x41) {
          param_1[0x66] = uVar15 << 4 | 0x101006;
          param_1[0x67] = 2;
          *piVar21 = 2;
        }
        else {
          if (0x7f < uVar14) {
            if (uVar14 < 0x81) {
              *piVar21 = 2;
              iVar16 = (uVar23 + 0x24) * 4;
            }
            else {
              if (uVar14 != 0xf0) goto LAB_10043b88;
              *piVar21 = 2;
              iVar16 = 0xa0;
            }
            iVar17 = FUN_10078520(*(undefined4 *)((int)param_1 + iVar16),(char)uVar15,1,4,0,0);
            param_1[0x66] = iVar17;
            uVar14 = (uint)*(byte *)((int)param_1 + iVar16);
            goto LAB_10043b80;
          }
          if (uVar14 == 0x50) {
            param_1[2] = param_1[2] | 1;
            if (*param_1 == 0x51) {
              param_1[0x69] = 5;
              uVar15 = uVar15 << 4 | 0x308006;
              iVar17 = 0;
              iVar16 = 4;
            }
            else {
              uVar15 = uVar15 << 4 | 0x208006;
              iVar17 = 5;
              iVar16 = 3;
            }
            *piVar21 = iVar16;
            param_1[0x66] = uVar15;
            param_1[0x67] = 0;
            param_1[0x68] = iVar17;
          }
          else if (uVar14 == 0x60) {
            param_1[2] = param_1[2] | 1;
            uVar18 = uVar23 * 0x250 + 0x180 >> 4;
            if (*param_1 == 0x51) {
              param_1[0x69] = uVar18;
              uVar18 = 0;
              iVar16 = 4;
            }
            else {
              iVar16 = 3;
            }
            *piVar21 = iVar16;
            param_1[0x66] = uVar15 << 4 | 0x208006;
            param_1[0x67] = 0;
            param_1[0x68] = uVar18;
          }
        }
LAB_10043b88:
        if (bVar11) {
          for (iVar16 = *piVar21; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x66] = piVar21[iVar16];
          }
          param_1[0x66] = param_1[0x66] | 0x80000000;
          param_1[0x67] = 0x41;
          *piVar21 = *piVar21 + 1;
        }
      }
      piVar21 = param_1 + 0x4d;
      piVar20 = param_1 + 0x65;
      FUN_10078f18(param_6,(param_1[0x5d] + param_1[0x55] + *piVar21 + param_1[0x65] + 1U & 0x7f) <<
                           0x18 | local_54 | 0x32,piVar21,param_1 + 0x55,param_1 + 0x5d,piVar20);
      FUN_10041340(param_1,param_3,param_4);
      FUN_100414d0(param_1,0,uVar13,param_5,0,0);
      bVar11 = param_5 == -1;
      iVar16 = 5;
      if (bVar11) {
        iVar16 = 2;
      }
      iVar17 = 0x4000;
      if (bVar11) {
        iVar17 = 0x4001;
      }
      fVar25 = fVar26 / fVar27;
      iVar6 = 0x4006;
      if (bVar11) {
        iVar6 = iVar17;
      }
      param_1[0x5d] = iVar16;
      param_1[0x5e] = iVar6;
      param_1[0x65] = iVar16;
      param_1[0x62] = (int)fVar25;
      param_1[0x61] = (int)fVar25;
      param_1[0x60] = (int)fVar25;
      param_1[0x5f] = (int)fVar25;
      param_1[0x66] = iVar6;
      fVar25 = (local_48 * fVar26) / fVar27;
      param_1[0x6a] = (int)fVar25;
      param_1[0x69] = (int)fVar25;
      param_1[0x68] = (int)fVar25;
      param_1[0x67] = (int)fVar25;
      iVar17 = -(uint)(local_48 == 0.0);
      if (((fVar27 != 1.0) || ((char)param_2[4] != '\0')) && (iVar17 = 0x32, local_48 == 0.0)) {
        iVar17 = 0x38;
      }
      if (iVar17 != 0) {
        if (iVar17 != 0x32) {
          if (iVar17 != 0x38) goto LAB_10044f4c;
          iVar16 = param_1[0x55] + iVar16 + *piVar21;
          goto LAB_10044f2c;
        }
        iVar16 = param_1[0x55] + iVar16 * 2;
        iVar17 = *piVar21;
LAB_10043e20:
        piVar21 = param_1 + 0x65;
        iVar16 = iVar16 + iVar17;
        uVar15 = 0x2032;
        goto LAB_10044f3c;
      }
      iVar16 = param_1[0x55] + iVar16 + *piVar21;
    }
    else {
      uVar13 = uVar24;
      if ((uVar18 & 0xf0) == 0x80 || (uVar18 & 0xf0) == 0xf0) {
        uVar13 = (uint)local_6c;
      }
      bVar10 = (uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0;
      if (bVar10) {
        uVar13 = FUN_10041930(param_1,0,0,0,0,param_4,0);
        uVar13 = uVar13 & 0xffff;
      }
      FUN_10041340(param_1,uVar13,param_4);
      uVar12 = FUN_10041a78(param_1,uVar13,param_5);
      FUN_100414d0(param_1,0,local_6c,uVar12,0,0);
      bVar11 = false;
      uVar15 = FUN_10041a78(param_1,uVar13,param_5);
      piVar21 = param_1 + 0x55;
      piVar20 = param_1 + 0x5d;
      if ((uVar24 & 0xff0) != 0x100) {
        bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
      }
      uVar15 = uVar15 & 0xff;
      if ((uVar24 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar18 = uVar24 & 0xf0;
      uVar14 = uVar24 & 0xf;
      if (uVar18 < 0x40) {
        if ((uVar18 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar18 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar18 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
          if (uVar18 == 0) goto LAB_100441d0;
          *piVar20 = 2;
          iVar16 = FUN_10078520(uVar18,0,1,4,0,0);
          param_1[0x5e] = iVar16;
          uVar18 = uVar18 & 0xff;
LAB_10044174:
          param_1[0x5f] = uVar18;
          goto LAB_1004417c;
        }
        if ((uVar24 & 0xf0) != 0) {
          if (uVar18 != 0x10) goto LAB_1004417c;
          *piVar20 = 2;
          param_1[0x5e] = uVar15 << 4 | 0x100006;
          uVar18 = (uint)*(byte *)(param_1 + uVar14 + 0x21);
          goto LAB_10044174;
        }
LAB_100441d0:
        fVar28 = -0.5;
        if ((uVar24 & 0xf00) != 0x300) {
          fVar28 = 0.0;
        }
        fVar29 = 1.0;
        if ((uVar24 & 0xf00) != 0x100) {
          fVar29 = fVar28;
        }
        if ((uVar24 & 0x2000) != 0) {
          fVar29 = fVar29 * 255.0;
        }
        fVar28 = -fVar29;
        if (!bVar11) {
          fVar28 = fVar29;
        }
        bVar11 = uVar15 == 0xff;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        *piVar20 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar17 = 0x4006;
        if (bVar11) {
          iVar17 = iVar16;
        }
        param_1[0x5e] = iVar17;
        param_1[0x62] = (int)fVar28;
        param_1[0x61] = (int)fVar28;
        param_1[0x60] = (int)fVar28;
        param_1[0x5f] = (int)fVar28;
      }
      else {
        if (uVar18 < 0x41) {
          param_1[0x5e] = uVar15 << 4 | 0x101006;
          param_1[0x5f] = 2;
          *piVar20 = 2;
        }
        else {
          if (0x7f < uVar18) {
            if (uVar18 < 0x81) {
              *piVar20 = 2;
              iVar16 = (uVar14 + 0x24) * 4;
            }
            else {
              if (uVar18 != 0xf0) goto LAB_1004417c;
              *piVar20 = 2;
              iVar16 = 0xa0;
            }
            iVar17 = FUN_10078520(*(undefined4 *)((int)param_1 + iVar16),(char)uVar15,1,4,0,0);
            param_1[0x5e] = iVar17;
            uVar18 = (uint)*(byte *)((int)param_1 + iVar16);
            goto LAB_10044174;
          }
          if (uVar18 == 0x50) {
            param_1[2] = param_1[2] | 1;
            if (*param_1 == 0x51) {
              param_1[0x61] = 5;
              uVar15 = uVar15 << 4 | 0x308006;
              iVar17 = 0;
              iVar16 = 4;
            }
            else {
              uVar15 = uVar15 << 4 | 0x208006;
              iVar17 = 5;
              iVar16 = 3;
            }
            *piVar20 = iVar16;
            param_1[0x5e] = uVar15;
            param_1[0x5f] = 0;
            param_1[0x60] = iVar17;
          }
          else if (uVar18 == 0x60) {
            param_1[2] = param_1[2] | 1;
            uVar18 = uVar14 * 0x250 + 0x180 >> 4;
            if (*param_1 == 0x51) {
              param_1[0x61] = uVar18;
              uVar18 = 0;
              iVar16 = 4;
            }
            else {
              iVar16 = 3;
            }
            *piVar20 = iVar16;
            param_1[0x5e] = uVar15 << 4 | 0x208006;
            param_1[0x5f] = 0;
            param_1[0x60] = uVar18;
          }
        }
LAB_1004417c:
        if (bVar11) {
          for (iVar16 = *piVar20; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x5e] = piVar20[iVar16];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar20 = *piVar20 + 1;
        }
      }
      piVar2 = param_1 + 0x4d;
      piVar20 = param_1 + 0x5d;
      FUN_10078f18(param_6,(param_1[0x5d] + param_1[0x55] + *piVar2 + 1U & 0x7f) << 0x18 | 0x38,
                   piVar2,piVar21,piVar20,0);
      if ((local_48 == 0.0) && ((char)param_2[4] == '\0')) {
        uVar15 = 0x2000;
      }
      else {
        uVar15 = 0;
      }
      uVar18 = uVar13;
      if (uVar15 != 0) {
        uVar18 = (uint)param_3;
      }
      uVar9 = (undefined2)uVar18;
      if (fVar25 == 1.0) {
LAB_100443d0:
        if (fVar27 != 1.0) {
          FUN_10041340(param_1,uVar9,param_4);
          uVar12 = FUN_10041a78(param_1,uVar9,param_5);
          FUN_100414d0(param_1,0,param_2[3],uVar12,0,0);
          bVar11 = param_5 == -1;
          iVar16 = 5;
          if (bVar11) {
            iVar16 = 2;
          }
          fVar28 = 1.0 / fVar27;
          param_1[0x5d] = iVar16;
          iVar16 = 0x4000;
          if (bVar11) {
            iVar16 = 0x4001;
          }
          iVar17 = 0x4006;
          if (bVar11) {
            iVar17 = iVar16;
          }
          param_1[0x5e] = iVar17;
          bVar11 = false;
          param_1[0x62] = (int)fVar28;
          param_1[0x61] = (int)fVar28;
          param_1[0x60] = (int)fVar28;
          param_1[0x5f] = (int)fVar28;
          uVar18 = FUN_10041a78(param_1,uVar9,param_5);
          piVar3 = param_1 + 0x65;
          if ((uVar13 & 0xff0) != 0x100) {
            bVar11 = (uVar13 & 0xf00) != 0x600 && ((uVar13 & 0xf00) - 0x100 & 0xfffffaff) == 0;
          }
          uVar18 = uVar18 & 0xff;
          if ((uVar13 & 0x1000) != 0) {
            uVar18 = 0xff;
          }
          uVar14 = uVar13 & 0xf0;
          uVar23 = uVar13 & 0xf;
          if (uVar14 < 0x40) {
            if ((uVar14 - 0x20 & 0xffffffef) == 0) {
              iVar16 = 0x78;
              if (uVar14 == 0x20) {
                iVar16 = 0x6c;
              }
              uVar14 = *(uint *)(iVar16 + uVar23 * 4 + (int)param_1);
              if (uVar14 == 0) goto LAB_10044794;
              *piVar3 = 2;
              iVar16 = FUN_10078520(uVar14,0,1,4,0,0);
              param_1[0x66] = iVar16;
              param_1[0x67] = uVar14 & 0xff;
              goto LAB_10044740;
            }
            if (uVar14 != 0) {
              if (uVar14 == 0x10) {
                *piVar3 = 2;
                param_1[0x66] = uVar18 << 4 | 0x100006;
                pbVar22 = (byte *)(param_1 + uVar23 + 0x21);
                goto LAB_100446d4;
              }
              goto LAB_10044740;
            }
LAB_10044794:
            fVar28 = -0.5;
            if ((uVar13 & 0xf00) != 0x300) {
              fVar28 = 0.0;
            }
            fVar29 = 1.0;
            if ((uVar13 & 0xf00) != 0x100) {
              fVar29 = fVar28;
            }
            if ((uVar13 & 0x2000) != 0) {
              fVar29 = fVar29 * 255.0;
            }
            fVar28 = -fVar29;
            if (!bVar11) {
              fVar28 = fVar29;
            }
            bVar11 = uVar18 == 0xff;
            iVar16 = 5;
            if (bVar11) {
              iVar16 = 2;
            }
            *piVar3 = iVar16;
            iVar16 = 0x4000;
            if (bVar11) {
              iVar16 = 0x4001;
            }
            iVar17 = 0x4006;
            if (bVar11) {
              iVar17 = iVar16;
            }
            param_1[0x66] = iVar17;
            param_1[0x6a] = (int)fVar28;
            param_1[0x69] = (int)fVar28;
            param_1[0x68] = (int)fVar28;
            param_1[0x67] = (int)fVar28;
          }
          else {
            if (uVar14 < 0x41) {
              param_1[0x66] = uVar18 << 4 | 0x101006;
              param_1[0x67] = 2;
              *piVar3 = 2;
            }
            else if (uVar14 < 0x80) {
              if (uVar14 == 0x50) {
                param_1[2] = param_1[2] | 1;
                if (*param_1 == 0x51) {
                  param_1[0x69] = 5;
                  uVar18 = uVar18 << 4 | 0x308006;
                  iVar17 = 0;
                  iVar16 = 4;
                }
                else {
                  uVar18 = uVar18 << 4 | 0x208006;
                  iVar17 = 5;
                  iVar16 = 3;
                }
                *piVar3 = iVar16;
                param_1[0x66] = uVar18;
                param_1[0x67] = 0;
                param_1[0x68] = iVar17;
              }
              else if (uVar14 == 0x60) {
                param_1[2] = param_1[2] | 1;
                uVar14 = uVar23 * 0x250 + 0x180 >> 4;
                if (*param_1 == 0x51) {
                  param_1[0x69] = uVar14;
                  uVar14 = 0;
                  iVar16 = 4;
                }
                else {
                  iVar16 = 3;
                }
                *piVar3 = iVar16;
                param_1[0x66] = uVar18 << 4 | 0x208006;
                param_1[0x67] = 0;
                param_1[0x68] = uVar14;
              }
            }
            else {
              if (uVar14 < 0x81) {
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + uVar23 + 0x24);
                iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar18,1,4,0,0);
                param_1[0x66] = iVar16;
              }
              else {
                if (uVar14 != 0xf0) goto LAB_10044740;
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + 0x28);
                iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar18,1,4,0,0);
                param_1[0x66] = iVar16;
              }
LAB_100446d4:
              param_1[0x67] = (uint)*pbVar22;
            }
LAB_10044740:
            if (bVar11) {
              for (iVar16 = *piVar3; iVar16 != 0; iVar16 = iVar16 + -1) {
                param_1[iVar16 + 0x66] = piVar3[iVar16];
              }
              param_1[0x66] = param_1[0x66] | 0x80000000;
              param_1[0x67] = 0x41;
              *piVar3 = *piVar3 + 1;
            }
          }
          FUN_10078f18(param_6,(param_1[0x5d] + param_1[0x55] + param_1[0x4d] + param_1[0x65] + 1U &
                               0x7f) << 0x18 | uVar15 | 0x32,piVar2,piVar21,piVar20,param_1 + 0x65);
        }
      }
      else if (fVar27 != 1.0) {
        FUN_10041340(param_1,uVar13,param_4);
        uVar12 = FUN_10041a78(param_1,extraout_x14 & 0xffffffff,param_5);
        FUN_100414d0(param_1,0,uVar13,uVar12,0,0);
        bVar11 = param_5 == -1;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        fVar28 = 1.0 / fVar25;
        iVar17 = 0x4000;
        if (bVar11) {
          iVar17 = 0x4001;
        }
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar17;
        }
        param_1[0x5d] = iVar16;
        param_1[0x5e] = iVar6;
        param_1[0x62] = (int)fVar28;
        param_1[0x61] = (int)fVar28;
        param_1[0x60] = (int)fVar28;
        param_1[0x5f] = (int)fVar28;
        FUN_10078f18(param_6,(param_1[0x55] + iVar16 + *piVar2 + 1U & 0x7f) << 0x18 | 0x38,piVar2,
                     piVar21,piVar20,0);
        goto LAB_100443d0;
      }
      piVar3 = param_1 + 0x65;
      if ((fVar25 != 1.0) && (fVar27 == 1.0)) {
        FUN_10041340(param_1,uVar9,param_4);
        uVar12 = FUN_10041a78(param_1,uVar9,param_5);
        FUN_100414d0(param_1,0,uVar13,uVar12,0,0);
        fVar25 = 1.0 / fVar25;
        bVar11 = param_5 == -1;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        param_1[0x5d] = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar17 = 0x4006;
        if (bVar11) {
          iVar17 = iVar16;
        }
        param_1[0x5e] = iVar17;
        bVar11 = false;
        param_1[0x62] = (int)fVar25;
        param_1[0x61] = (int)fVar25;
        param_1[0x60] = (int)fVar25;
        param_1[0x5f] = (int)fVar25;
        uVar18 = FUN_10041a78(param_1,uVar9,param_5);
        uVar8 = param_2[3];
        if ((uVar8 & 0xff0) != 0x100) {
          uVar14 = uVar8 & 0xf00;
          bVar11 = uVar14 != 0x600 && (uVar14 - 0x100 & 0xfffffaff) == 0;
        }
        uVar14 = (uint)uVar8;
        uVar18 = uVar18 & 0xff;
        if ((uVar8 & 0x1000) != 0) {
          uVar18 = 0xff;
        }
        uVar23 = uVar14 & 0xf0;
        uVar5 = uVar14 & 0xf;
        if (uVar23 < 0x40) {
          if ((uVar23 - 0x20 & 0xffffffef) == 0) {
            iVar16 = 0x78;
            if (uVar23 == 0x20) {
              iVar16 = 0x6c;
            }
            uVar23 = *(uint *)(iVar16 + uVar5 * 4 + (int)param_1);
            if (uVar23 == 0) goto LAB_10044c64;
            *piVar3 = 2;
            iVar16 = FUN_10078520(uVar23,0,1,4,0,0);
            param_1[0x66] = iVar16;
            param_1[0x67] = uVar23 & 0xff;
            goto LAB_10044c10;
          }
          if ((uVar8 & 0xf0) != 0) {
            if (uVar23 == 0x10) {
              *piVar3 = 2;
              param_1[0x66] = uVar18 << 4 | 0x100006;
              pbVar22 = (byte *)(param_1 + uVar5 + 0x21);
              goto LAB_10044ba4;
            }
            goto LAB_10044c10;
          }
LAB_10044c64:
          fVar25 = -0.5;
          if ((uVar14 & 0xf00) != 0x300) {
            fVar25 = 0.0;
          }
          fVar28 = 1.0;
          if ((uVar14 & 0xf00) != 0x100) {
            fVar28 = fVar25;
          }
          if ((uVar8 & 0x2000) != 0) {
            fVar28 = fVar28 * 255.0;
          }
          fVar25 = -fVar28;
          if (!bVar11) {
            fVar25 = fVar28;
          }
          bVar11 = uVar18 == 0xff;
          iVar16 = 5;
          if (bVar11) {
            iVar16 = 2;
          }
          *piVar3 = iVar16;
          iVar16 = 0x4000;
          if (bVar11) {
            iVar16 = 0x4001;
          }
          iVar17 = 0x4006;
          if (bVar11) {
            iVar17 = iVar16;
          }
          param_1[0x66] = iVar17;
          param_1[0x6a] = (int)fVar25;
          param_1[0x69] = (int)fVar25;
          param_1[0x68] = (int)fVar25;
          param_1[0x67] = (int)fVar25;
        }
        else {
          if (uVar23 < 0x41) {
            iVar17 = 2;
            param_1[0x66] = uVar18 << 4 | 0x101006;
            piVar4 = param_1 + 0x67;
            *piVar3 = 2;
LAB_100449ec:
            *piVar4 = iVar17;
          }
          else if (uVar23 < 0x80) {
            if (uVar23 == 0x50) {
              param_1[2] = param_1[2] | 1;
              if (*param_1 == 0x51) {
                param_1[0x69] = 5;
                uVar18 = uVar18 << 4 | 0x308006;
                iVar17 = 0;
                iVar16 = 4;
              }
              else {
                uVar18 = uVar18 << 4 | 0x208006;
                iVar17 = 5;
                iVar16 = 3;
              }
              *piVar3 = iVar16;
              param_1[0x66] = uVar18;
              param_1[0x67] = 0;
              piVar4 = param_1 + 0x68;
              goto LAB_100449ec;
            }
            if (uVar23 == 0x60) {
              param_1[2] = param_1[2] | 1;
              uVar14 = uVar5 * 0x250 + 0x180 >> 4;
              if (*param_1 == 0x51) {
                param_1[0x69] = uVar14;
                uVar14 = 0;
                iVar16 = 4;
              }
              else {
                iVar16 = 3;
              }
              *piVar3 = iVar16;
              param_1[0x66] = uVar18 << 4 | 0x208006;
              param_1[0x67] = 0;
              param_1[0x68] = uVar14;
            }
          }
          else {
            if (uVar23 < 0x81) {
              *piVar3 = 2;
              pbVar22 = (byte *)(param_1 + uVar5 + 0x24);
              iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar18,1,4,0,0);
              param_1[0x66] = iVar16;
            }
            else {
              if (uVar23 != 0xf0) goto LAB_10044c10;
              *piVar3 = 2;
              pbVar22 = (byte *)(param_1 + 0x28);
              iVar16 = FUN_10078520(*(int *)pbVar22,(char)uVar18,1,4,0,0);
              param_1[0x66] = iVar16;
            }
LAB_10044ba4:
            param_1[0x67] = (uint)*pbVar22;
          }
LAB_10044c10:
          if (bVar11) {
            for (iVar16 = *piVar3; iVar16 != 0; iVar16 = iVar16 + -1) {
              param_1[iVar16 + 0x66] = piVar3[iVar16];
            }
            param_1[0x66] = param_1[0x66] | 0x80000000;
            param_1[0x67] = 0x41;
            *piVar3 = *piVar3 + 1;
          }
        }
        FUN_10078f18(param_6,(param_1[0x5d] + param_1[0x55] + param_1[0x4d] + param_1[0x65] + 1U &
                             0x7f) << 0x18 | uVar15 | 0x32,piVar2,piVar21,piVar20,piVar3);
      }
      FUN_10041340(param_1,param_3,param_4);
      FUN_100414d0(param_1,0,uVar13,param_5,0,0);
      if (local_48 == 0.0) {
        if ((char)param_2[4] == '\0') goto LAB_10044f4c;
        bVar11 = param_5 == -1;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        iVar17 = 0x4000;
        if (bVar11) {
          iVar17 = 0x4001;
        }
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar17;
        }
        param_1[0x5d] = iVar16;
        param_1[0x5e] = iVar6;
        param_1[0x62] = (int)fVar26;
        param_1[0x61] = (int)fVar26;
        param_1[0x60] = (int)fVar26;
        param_1[0x5f] = (int)fVar26;
        iVar16 = param_1[0x55] + param_1[0x4d] + iVar16;
        goto LAB_10044f2c;
      }
      bVar11 = param_5 == -1;
      iVar16 = 5;
      if ((char)param_2[4] != '\0') {
        if (bVar11) {
          iVar16 = 2;
        }
        param_1[0x5d] = iVar16;
        iVar17 = 0x4000;
        if (bVar11) {
          iVar17 = 0x4001;
        }
        param_1[0x65] = iVar16;
        param_1[0x5f] = (int)fVar26;
        param_1[0x62] = (int)fVar26;
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar17;
        }
        param_1[0x61] = (int)fVar26;
        param_1[0x60] = (int)fVar26;
        param_1[0x66] = iVar6;
        param_1[0x5e] = iVar6;
        fVar27 = (local_48 * fVar26) / fVar27;
        param_1[0x6a] = (int)fVar27;
        param_1[0x69] = (int)fVar27;
        param_1[0x68] = (int)fVar27;
        param_1[0x67] = (int)fVar27;
        iVar16 = param_1[0x55] + iVar16 * 2;
        iVar17 = param_1[0x4d];
        goto LAB_10043e20;
      }
      if (bVar11) {
        iVar16 = 2;
      }
      param_1[0x5d] = iVar16;
      iVar17 = 0x4000;
      if (bVar11) {
        iVar17 = 0x4001;
      }
      local_48 = local_48 / fVar27;
      iVar6 = 0x4006;
      if (bVar11) {
        iVar6 = iVar17;
      }
      param_1[0x5e] = iVar6;
      param_1[0x5f] = (int)local_48;
      param_1[0x62] = (int)local_48;
      param_1[0x61] = (int)local_48;
      param_1[0x60] = (int)local_48;
      iVar16 = param_1[0x55] + param_1[0x4d] + iVar16;
    }
    uVar15 = (iVar16 + 1U & 0x7f) << 0x18 | 0x2000;
    piVar21 = (int *)0x0;
  }
  FUN_10078f18(param_6,uVar15,param_1 + 0x4d,param_1 + 0x55,piVar20,piVar21);
LAB_10044f4c:
  FUN_10041a38(param_1,local_6c);
  FUN_10041a38(param_1,uVar24);
  if (bVar10) {
    FUN_10041a38(param_1,uVar13);
  }
  return;
}

