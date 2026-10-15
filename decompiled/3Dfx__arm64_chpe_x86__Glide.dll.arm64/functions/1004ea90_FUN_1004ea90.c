/*
 * FUN_1004ea90 at 1004ea90
 * undefined FUN_1004ea90(void)
 * Address ranges: 1004ea90-10050a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ea90(int *param_1,ushort *param_2,ushort param_3,undefined1 param_4,char param_5,
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
  uint uVar17;
  ulonglong uVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
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
LAB_1004eb08:
    if ((uVar8 & 0xdf0) == 0) {
      uVar8 = *puVar1;
    }
LAB_1004eb24:
    uVar24 = (uint)uVar8;
    fVar25 = (float)FUN_1004aa98(uVar24);
    if (((fVar25 != 0.0) && ((uVar8 & 0xff0) != 0x300)) || (uVar8 == 0)) goto LAB_1004eb50;
  }
  else {
    if ((*puVar1 & 0xff0) == 0) goto LAB_1004eb24;
    if ((*puVar1 & 0xff0) == 0x200) goto LAB_1004eb08;
LAB_1004eb50:
    uVar13 = FUN_1004d708(param_1,*param_2,param_2[3],0,0,param_4,1);
    uVar24 = uVar13 & 0xffff;
    uVar18 = FUN_1004e0a8(param_1,param_2[1],*puVar1,0,uVar24,0,param_4,param_5,param_6);
    if ((uVar18 & 1) == 0) {
      uVar24 = uVar13 & 0xffff | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  puVar1 = param_2 + 3;
  local_6c = *param_2;
  fVar25 = (float)FUN_1004aa98(local_6c);
  if ((fVar25 != 0.0) && ((uVar24 & 0xff0) != 0x300)) {
    local_6c = FUN_1004d708(param_1,uVar24,*puVar1,0,0,param_4,1);
    uVar18 = FUN_1004e0a8(param_1,*param_2,0,0,local_6c,0,param_4,param_5,param_6);
    if ((uVar18 & 1) == 0) {
      local_6c = local_6c | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  uVar17 = (uint)local_6c;
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
     (uVar14 = FUN_1004aa98(uVar14), uVar15 = extraout_w10, uVar23 = extraout_w11,
     uVar17 = extraout_w12, extraout_s0 == 0.0)) {
    fVar25 = extraout_s17 / extraout_s18;
    if (fVar25 != extraout_s19) {
      uVar13 = uVar24;
      if ((extraout_w12 & 0xf0) == 0x80 || (extraout_w12 & 0xf0) == 0xf0) {
        uVar13 = extraout_w12;
      }
      if ((uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0) {
        uVar13 = FUN_1004d708(param_1,0,0,0,0,param_4,0);
        bVar10 = true;
        uVar13 = uVar13 & 0xffff;
      }
    }
    FUN_1004d210(param_1,uVar13,param_4);
    uVar12 = FUN_1004d850(param_1,uVar13,param_5);
    FUN_1004d320(param_1,0,local_6c,uVar12,0,0);
    bVar11 = false;
    uVar15 = FUN_1004d850(param_1,uVar13,param_5);
    piVar20 = param_1 + 0x5d;
    piVar19 = param_1 + 0x55;
    if ((uVar24 & 0xff0) != 0x100) {
      bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
    }
    uVar15 = uVar15 & 0xff;
    if ((uVar24 & 0x1000) != 0) {
      uVar15 = 0xff;
    }
    uVar17 = uVar24 & 0xf0;
    uVar14 = uVar24 & 0xf;
    if (uVar17 < 0x40) {
      if ((uVar17 - 0x20 & 0xffffffef) == 0) {
        iVar16 = 0x78;
        if (uVar17 == 0x20) {
          iVar16 = 0x6c;
        }
        uVar17 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
        if (uVar17 != 0) {
          *piVar20 = 2;
          iVar16 = FUN_1006f660(uVar17,0,1,4,0,0);
          param_1[0x5e] = iVar16;
          param_1[0x5f] = uVar17 & 0xff;
          goto LAB_1004efa4;
        }
      }
      else if ((uVar24 & 0xf0) != 0) {
        if (uVar17 != 0x10) goto LAB_1004efa4;
        *piVar20 = 2;
        param_1[0x5e] = uVar15 << 4 | 0x100006;
        bVar7 = *(byte *)(param_1 + uVar14 + 0x21);
        goto LAB_1004ef3c;
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
      *piVar20 = iVar16;
      iVar16 = 0x4000;
      if (bVar11) {
        iVar16 = 0x4001;
      }
      iVar21 = 0x4006;
      if (bVar11) {
        iVar21 = iVar16;
      }
      param_1[0x5e] = iVar21;
      param_1[0x62] = (int)fVar26;
      param_1[0x61] = (int)fVar26;
      param_1[0x60] = (int)fVar26;
      param_1[0x5f] = (int)fVar26;
    }
    else {
      if (uVar17 < 0x41) {
        param_1[0x5e] = uVar15 << 4 | 0x101006;
        param_1[0x5f] = 2;
        *piVar20 = 2;
      }
      else if (uVar17 == 0x50) {
        param_1[2] = param_1[2] | 1;
        if (*param_1 == 0x51) {
          param_1[0x61] = 5;
          uVar15 = uVar15 << 4 | 0x308006;
          iVar21 = 0;
          iVar16 = 4;
        }
        else {
          uVar15 = uVar15 << 4 | 0x208006;
          iVar21 = 5;
          iVar16 = 3;
        }
        *piVar20 = iVar16;
        param_1[0x5e] = uVar15;
        param_1[0x5f] = 0;
        param_1[0x60] = iVar21;
      }
      else {
        if (uVar17 == 0x80) {
          *piVar20 = 2;
          pbVar22 = (byte *)(param_1 + uVar14 + 0x24);
        }
        else {
          if (uVar17 != 0xf0) goto LAB_1004efa4;
          *piVar20 = 2;
          pbVar22 = (byte *)(param_1 + 0x28);
        }
        iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar15,1,4,0,0);
        param_1[0x5e] = iVar16;
        bVar7 = *pbVar22;
LAB_1004ef3c:
        param_1[0x5f] = (uint)bVar7;
      }
LAB_1004efa4:
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
    uVar15 = 0x38;
    if (fVar25 == 1.0) {
      uVar15 = 0x2038;
    }
    FUN_10070058(param_6,(*piVar20 + *piVar19 + *piVar2 + 1U & 0x7f) << 0x18 | uVar15,piVar2,piVar19
                 ,piVar20,0);
    if (fVar25 == 1.0) goto LAB_100509bc;
    FUN_1004d210(param_1,param_3,param_4);
    FUN_1004d320(param_1,0,uVar13,param_5,0,0);
    bVar11 = param_5 == -1;
    iVar16 = 5;
    if (bVar11) {
      iVar16 = 2;
    }
    *piVar20 = iVar16;
    iVar21 = 0x4000;
    if (bVar11) {
      iVar21 = 0x4001;
    }
    iVar6 = 0x4006;
    if (bVar11) {
      iVar6 = iVar21;
    }
    param_1[0x5e] = iVar6;
    param_1[0x62] = (int)fVar25;
    param_1[0x61] = (int)fVar25;
    param_1[0x60] = (int)fVar25;
    param_1[0x5f] = (int)fVar25;
    iVar16 = iVar16 + *piVar19 + *piVar2;
LAB_1005099c:
    uVar15 = 0x2038;
    piVar20 = (int *)0x0;
LAB_100509ac:
    piVar19 = param_1 + 0x5d;
    uVar15 = (iVar16 + 1U & 0x7f) << 0x18 | uVar15;
  }
  else {
    if ((uVar15 & 0xf0) == 0) {
      local_48 = 0.0;
    }
    else {
      local_48 = (float)FUN_1004aa98(uVar14);
      uVar15 = extraout_w10_00;
      uVar23 = extraout_w11_00;
      uVar17 = extraout_w12_00;
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
        if ((uVar17 & 0xf0) == 0x80 || (uVar17 & 0xf0) == 0xf0) {
          uVar13 = (uint)local_6c;
        }
        bVar10 = (uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0;
        if (bVar10) {
          uVar13 = FUN_1004d708(param_1,0,0,0,0,param_4,0);
          uVar13 = uVar13 & 0xffff;
        }
        local_54 = 0;
      }
      FUN_1004d210(param_1,uVar13,param_4);
      uVar12 = FUN_1004d850(param_1,uVar13,param_5);
      FUN_1004d320(param_1,0,local_6c,uVar12,0,0);
      bVar11 = false;
      uVar15 = FUN_1004d850(param_1,uVar13,param_5);
      piVar20 = param_1 + 0x5d;
      if ((uVar24 & 0xff0) != 0x100) {
        bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
      }
      uVar15 = uVar15 & 0xff;
      if ((uVar24 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar17 = uVar24 & 0xf0;
      uVar14 = uVar24 & 0xf;
      if (uVar17 < 0x40) {
        if ((uVar17 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar17 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar17 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
          if (uVar17 != 0) {
            *piVar20 = 2;
            iVar16 = FUN_1006f660(uVar17,0,1,4,0,0);
            param_1[0x5e] = iVar16;
            param_1[0x5f] = uVar17 & 0xff;
            goto LAB_1004f494;
          }
        }
        else if ((uVar24 & 0xf0) != 0) {
          if (uVar17 != 0x10) goto LAB_1004f494;
          *piVar20 = 2;
          param_1[0x5e] = uVar15 << 4 | 0x100006;
          bVar7 = *(byte *)(param_1 + uVar14 + 0x21);
          goto LAB_1004f42c;
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
        *piVar20 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar21 = 0x4006;
        if (bVar11) {
          iVar21 = iVar16;
        }
        param_1[0x5e] = iVar21;
        param_1[0x62] = (int)fVar25;
        param_1[0x61] = (int)fVar25;
        param_1[0x60] = (int)fVar25;
        param_1[0x5f] = (int)fVar25;
      }
      else {
        if (uVar17 < 0x41) {
          param_1[0x5e] = uVar15 << 4 | 0x101006;
          param_1[0x5f] = 2;
          *piVar20 = 2;
        }
        else if (uVar17 == 0x50) {
          param_1[2] = param_1[2] | 1;
          if (*param_1 == 0x51) {
            param_1[0x61] = 5;
            uVar15 = uVar15 << 4 | 0x308006;
            iVar21 = 0;
            iVar16 = 4;
          }
          else {
            uVar15 = uVar15 << 4 | 0x208006;
            iVar21 = 5;
            iVar16 = 3;
          }
          *piVar20 = iVar16;
          param_1[0x5e] = uVar15;
          param_1[0x5f] = 0;
          param_1[0x60] = iVar21;
        }
        else {
          if (uVar17 == 0x80) {
            *piVar20 = 2;
            pbVar22 = (byte *)(param_1 + uVar14 + 0x24);
          }
          else {
            if (uVar17 != 0xf0) goto LAB_1004f494;
            *piVar20 = 2;
            pbVar22 = (byte *)(param_1 + 0x28);
          }
          iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar15,1,4,0,0);
          param_1[0x5e] = iVar16;
          bVar7 = *pbVar22;
LAB_1004f42c:
          param_1[0x5f] = (uint)bVar7;
        }
LAB_1004f494:
        if (bVar11) {
          for (iVar16 = *piVar20; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x5e] = piVar20[iVar16];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar20 = *piVar20 + 1;
        }
      }
      bVar11 = false;
      uVar15 = FUN_1004d850(param_1,uVar13,param_5);
      uVar8 = *puVar1;
      piVar20 = param_1 + 0x65;
      if ((uVar8 & 0xff0) != 0x100) {
        uVar17 = uVar8 & 0xf00;
        bVar11 = uVar17 != 0x600 && (uVar17 - 0x100 & 0xfffffaff) == 0;
      }
      uVar17 = (uint)uVar8;
      uVar15 = uVar15 & 0xff;
      if ((uVar8 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar14 = uVar17 & 0xf0;
      uVar23 = uVar17 & 0xf;
      if (uVar14 < 0x40) {
        if ((uVar14 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar14 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar14 = *(uint *)(iVar16 + uVar23 * 4 + (int)param_1);
          if (uVar14 == 0) goto LAB_1004f7c0;
          *piVar20 = 2;
          iVar16 = FUN_1006f660(uVar14,0,1,4,0,0);
          param_1[0x66] = iVar16;
          uVar14 = uVar14 & 0xff;
LAB_1004f764:
          param_1[0x67] = uVar14;
          goto LAB_1004f76c;
        }
        if ((uVar8 & 0xf0) != 0) {
          if (uVar14 != 0x10) goto LAB_1004f76c;
          *piVar20 = 2;
          param_1[0x66] = uVar15 << 4 | 0x100006;
          uVar14 = (uint)*(byte *)(param_1 + uVar23 + 0x21);
          goto LAB_1004f764;
        }
LAB_1004f7c0:
        fVar25 = -0.5;
        if ((uVar17 & 0xf00) != 0x300) {
          fVar25 = 0.0;
        }
        fVar28 = 1.0;
        if ((uVar17 & 0xf00) != 0x100) {
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
        *piVar20 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar21 = 0x4006;
        if (bVar11) {
          iVar21 = iVar16;
        }
        param_1[0x66] = iVar21;
        param_1[0x6a] = (int)fVar25;
        param_1[0x69] = (int)fVar25;
        param_1[0x68] = (int)fVar25;
        param_1[0x67] = (int)fVar25;
      }
      else {
        if (uVar14 < 0x41) {
          param_1[0x66] = uVar15 << 4 | 0x101006;
          param_1[0x67] = 2;
          *piVar20 = 2;
        }
        else {
          if (uVar14 != 0x50) {
            if (uVar14 == 0x80) {
              *piVar20 = 2;
              pbVar22 = (byte *)(param_1 + uVar23 + 0x24);
            }
            else {
              if (uVar14 != 0xf0) goto LAB_1004f76c;
              *piVar20 = 2;
              pbVar22 = (byte *)(param_1 + 0x28);
            }
            iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar15,1,4,0,0);
            param_1[0x66] = iVar16;
            uVar14 = (uint)*pbVar22;
            goto LAB_1004f764;
          }
          param_1[2] = param_1[2] | 1;
          if (*param_1 == 0x51) {
            param_1[0x69] = 5;
            uVar15 = uVar15 << 4 | 0x308006;
            iVar21 = 0;
            iVar16 = 4;
          }
          else {
            uVar15 = uVar15 << 4 | 0x208006;
            iVar21 = 5;
            iVar16 = 3;
          }
          *piVar20 = iVar16;
          param_1[0x66] = uVar15;
          param_1[0x67] = 0;
          param_1[0x68] = iVar21;
        }
LAB_1004f76c:
        if (bVar11) {
          for (iVar16 = *piVar20; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x66] = piVar20[iVar16];
          }
          param_1[0x66] = param_1[0x66] | 0x80000000;
          param_1[0x67] = 0x41;
          *piVar20 = *piVar20 + 1;
        }
      }
      piVar20 = param_1 + 0x4d;
      piVar19 = param_1 + 0x65;
      FUN_10070058(param_6,(param_1[0x5d] + param_1[0x55] + param_1[0x65] + *piVar20 + 1U & 0x7f) <<
                           0x18 | local_54 | 0x32,piVar20,param_1 + 0x55,param_1 + 0x5d,piVar19);
      FUN_1004d210(param_1,param_3,param_4);
      FUN_1004d320(param_1,0,uVar13,param_5,0,0);
      bVar11 = param_5 == -1;
      iVar16 = 5;
      if (bVar11) {
        iVar16 = 2;
      }
      iVar21 = 0x4000;
      if (bVar11) {
        iVar21 = 0x4001;
      }
      fVar25 = fVar26 / fVar27;
      iVar6 = 0x4006;
      if (bVar11) {
        iVar6 = iVar21;
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
      iVar21 = -(uint)(local_48 == 0.0);
      if (((fVar27 != 1.0) || ((char)param_2[4] != '\0')) && (iVar21 = 0x32, local_48 == 0.0)) {
        iVar21 = 0x38;
      }
      if (iVar21 != 0) {
        if (iVar21 != 0x32) {
          if (iVar21 != 0x38) goto LAB_100509bc;
          iVar16 = param_1[0x55] + iVar16 + *piVar20;
          goto LAB_1005099c;
        }
        iVar16 = param_1[0x55] + iVar16 * 2;
        iVar21 = *piVar20;
LAB_1004fa04:
        piVar20 = param_1 + 0x65;
        iVar16 = iVar16 + iVar21;
        uVar15 = 0x2032;
        goto LAB_100509ac;
      }
      iVar16 = param_1[0x55] + iVar16 + *piVar20;
    }
    else {
      uVar13 = uVar24;
      if ((uVar17 & 0xf0) == 0x80 || (uVar17 & 0xf0) == 0xf0) {
        uVar13 = (uint)local_6c;
      }
      bVar10 = (uVar13 & 0xf0) != 0x80 && (uVar13 & 0xf0) != 0xf0;
      if (bVar10) {
        uVar13 = FUN_1004d708(param_1,0,0,0,0,param_4,0);
        uVar13 = uVar13 & 0xffff;
      }
      FUN_1004d210(param_1,uVar13,param_4);
      uVar12 = FUN_1004d850(param_1,uVar13,param_5);
      FUN_1004d320(param_1,0,local_6c,uVar12,0,0);
      bVar11 = false;
      uVar15 = FUN_1004d850(param_1,uVar13,param_5);
      piVar20 = param_1 + 0x55;
      piVar19 = param_1 + 0x5d;
      if ((uVar24 & 0xff0) != 0x100) {
        bVar11 = (uVar24 & 0xf00) != 0x600 && ((uVar24 & 0xf00) - 0x100 & 0xfffffaff) == 0;
      }
      uVar15 = uVar15 & 0xff;
      if ((uVar24 & 0x1000) != 0) {
        uVar15 = 0xff;
      }
      uVar17 = uVar24 & 0xf0;
      uVar14 = uVar24 & 0xf;
      if (uVar17 < 0x40) {
        if ((uVar17 - 0x20 & 0xffffffef) == 0) {
          iVar16 = 0x78;
          if (uVar17 == 0x20) {
            iVar16 = 0x6c;
          }
          uVar17 = *(uint *)(iVar16 + uVar14 * 4 + (int)param_1);
          if (uVar17 == 0) goto LAB_1004fd38;
          *piVar19 = 2;
          iVar16 = FUN_1006f660(uVar17,0,1,4,0,0);
          param_1[0x5e] = iVar16;
          uVar17 = uVar17 & 0xff;
LAB_1004fcdc:
          param_1[0x5f] = uVar17;
          goto LAB_1004fce4;
        }
        if ((uVar24 & 0xf0) != 0) {
          if (uVar17 != 0x10) goto LAB_1004fce4;
          *piVar19 = 2;
          param_1[0x5e] = uVar15 << 4 | 0x100006;
          uVar17 = (uint)*(byte *)(param_1 + uVar14 + 0x21);
          goto LAB_1004fcdc;
        }
LAB_1004fd38:
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
        *piVar19 = iVar16;
        iVar16 = 0x4000;
        if (bVar11) {
          iVar16 = 0x4001;
        }
        iVar21 = 0x4006;
        if (bVar11) {
          iVar21 = iVar16;
        }
        param_1[0x5e] = iVar21;
        param_1[0x62] = (int)fVar28;
        param_1[0x61] = (int)fVar28;
        param_1[0x60] = (int)fVar28;
        param_1[0x5f] = (int)fVar28;
      }
      else {
        if (uVar17 < 0x41) {
          param_1[0x5e] = uVar15 << 4 | 0x101006;
          param_1[0x5f] = 2;
          *piVar19 = 2;
        }
        else {
          if (uVar17 != 0x50) {
            if (uVar17 == 0x80) {
              *piVar19 = 2;
              pbVar22 = (byte *)(param_1 + uVar14 + 0x24);
            }
            else {
              if (uVar17 != 0xf0) goto LAB_1004fce4;
              *piVar19 = 2;
              pbVar22 = (byte *)(param_1 + 0x28);
            }
            iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar15,1,4,0,0);
            param_1[0x5e] = iVar16;
            uVar17 = (uint)*pbVar22;
            goto LAB_1004fcdc;
          }
          param_1[2] = param_1[2] | 1;
          if (*param_1 == 0x51) {
            param_1[0x61] = 5;
            uVar15 = uVar15 << 4 | 0x308006;
            iVar21 = 0;
            iVar16 = 4;
          }
          else {
            uVar15 = uVar15 << 4 | 0x208006;
            iVar21 = 5;
            iVar16 = 3;
          }
          *piVar19 = iVar16;
          param_1[0x5e] = uVar15;
          param_1[0x5f] = 0;
          param_1[0x60] = iVar21;
        }
LAB_1004fce4:
        if (bVar11) {
          for (iVar16 = *piVar19; iVar16 != 0; iVar16 = iVar16 + -1) {
            param_1[iVar16 + 0x5e] = piVar19[iVar16];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          param_1[0x5f] = 0x41;
          *piVar19 = *piVar19 + 1;
        }
      }
      piVar2 = param_1 + 0x4d;
      piVar19 = param_1 + 0x5d;
      FUN_10070058(param_6,(param_1[0x5d] + param_1[0x55] + *piVar2 + 1U & 0x7f) << 0x18 | 0x38,
                   piVar2,piVar20,piVar19,0);
      if ((local_48 == 0.0) && ((char)param_2[4] == '\0')) {
        uVar15 = 0x2000;
      }
      else {
        uVar15 = 0;
      }
      uVar17 = uVar13;
      if (uVar15 != 0) {
        uVar17 = (uint)param_3;
      }
      uVar9 = (undefined2)uVar17;
      if (fVar25 == 1.0) {
LAB_1004ff38:
        if (fVar27 != 1.0) {
          FUN_1004d210(param_1,uVar9,param_4);
          uVar12 = FUN_1004d850(param_1,uVar9,param_5);
          FUN_1004d320(param_1,0,param_2[3],uVar12,0,0);
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
          iVar21 = 0x4006;
          if (bVar11) {
            iVar21 = iVar16;
          }
          param_1[0x5e] = iVar21;
          bVar11 = false;
          param_1[0x62] = (int)fVar28;
          param_1[0x61] = (int)fVar28;
          param_1[0x60] = (int)fVar28;
          param_1[0x5f] = (int)fVar28;
          uVar17 = FUN_1004d850(param_1,uVar9,param_5);
          piVar3 = param_1 + 0x65;
          if ((uVar13 & 0xff0) != 0x100) {
            bVar11 = (uVar13 & 0xf00) != 0x600 && ((uVar13 & 0xf00) - 0x100 & 0xfffffaff) == 0;
          }
          uVar17 = uVar17 & 0xff;
          if ((uVar13 & 0x1000) != 0) {
            uVar17 = 0xff;
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
              if (uVar14 == 0) goto LAB_10050280;
              *piVar3 = 2;
              iVar16 = FUN_1006f660(uVar14,0,1,4,0,0);
              param_1[0x66] = iVar16;
              param_1[0x67] = uVar14 & 0xff;
              goto LAB_1005022c;
            }
            if (uVar14 != 0) {
              if (uVar14 == 0x10) {
                *piVar3 = 2;
                param_1[0x66] = uVar17 << 4 | 0x100006;
                pbVar22 = (byte *)(param_1 + uVar23 + 0x21);
                goto LAB_100501c0;
              }
              goto LAB_1005022c;
            }
LAB_10050280:
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
            bVar11 = uVar17 == 0xff;
            iVar16 = 5;
            if (bVar11) {
              iVar16 = 2;
            }
            *piVar3 = iVar16;
            iVar16 = 0x4000;
            if (bVar11) {
              iVar16 = 0x4001;
            }
            iVar21 = 0x4006;
            if (bVar11) {
              iVar21 = iVar16;
            }
            param_1[0x66] = iVar21;
            param_1[0x6a] = (int)fVar28;
            param_1[0x69] = (int)fVar28;
            param_1[0x68] = (int)fVar28;
            param_1[0x67] = (int)fVar28;
          }
          else {
            if (uVar14 < 0x41) {
              param_1[0x66] = uVar17 << 4 | 0x101006;
              param_1[0x67] = 2;
              *piVar3 = 2;
            }
            else if (uVar14 == 0x50) {
              param_1[2] = param_1[2] | 1;
              if (*param_1 == 0x51) {
                param_1[0x69] = 5;
                uVar17 = uVar17 << 4 | 0x308006;
                iVar21 = 0;
                iVar16 = 4;
              }
              else {
                uVar17 = uVar17 << 4 | 0x208006;
                iVar21 = 5;
                iVar16 = 3;
              }
              *piVar3 = iVar16;
              param_1[0x66] = uVar17;
              param_1[0x67] = 0;
              param_1[0x68] = iVar21;
            }
            else {
              if (uVar14 == 0x80) {
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + uVar23 + 0x24);
                iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar17,1,4,0,0);
                param_1[0x66] = iVar16;
              }
              else {
                if (uVar14 != 0xf0) goto LAB_1005022c;
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + 0x28);
                iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar17,1,4,0,0);
                param_1[0x66] = iVar16;
              }
LAB_100501c0:
              param_1[0x67] = (uint)*pbVar22;
            }
LAB_1005022c:
            if (bVar11) {
              for (iVar16 = *piVar3; iVar16 != 0; iVar16 = iVar16 + -1) {
                param_1[iVar16 + 0x66] = piVar3[iVar16];
              }
              param_1[0x66] = param_1[0x66] | 0x80000000;
              param_1[0x67] = 0x41;
              *piVar3 = *piVar3 + 1;
            }
          }
          FUN_10070058(param_6,(param_1[0x5d] + param_1[0x55] + param_1[0x4d] + param_1[0x65] + 1U &
                               0x7f) << 0x18 | uVar15 | 0x32,piVar2,piVar20,piVar19,param_1 + 0x65);
        }
      }
      else if (fVar27 != 1.0) {
        FUN_1004d210(param_1,uVar13,param_4);
        uVar12 = FUN_1004d850(param_1,extraout_x14 & 0xffffffff,param_5);
        FUN_1004d320(param_1,0,uVar13,uVar12,0,0);
        bVar11 = param_5 == -1;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        fVar28 = 1.0 / fVar25;
        iVar21 = 0x4000;
        if (bVar11) {
          iVar21 = 0x4001;
        }
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar21;
        }
        param_1[0x5d] = iVar16;
        param_1[0x5e] = iVar6;
        param_1[0x62] = (int)fVar28;
        param_1[0x61] = (int)fVar28;
        param_1[0x60] = (int)fVar28;
        param_1[0x5f] = (int)fVar28;
        FUN_10070058(param_6,(param_1[0x55] + iVar16 + *piVar2 + 1U & 0x7f) << 0x18 | 0x38,piVar2,
                     piVar20,piVar19,0);
        goto LAB_1004ff38;
      }
      piVar3 = param_1 + 0x65;
      if ((fVar25 != 1.0) && (fVar27 == 1.0)) {
        FUN_1004d210(param_1,uVar9,param_4);
        uVar12 = FUN_1004d850(param_1,uVar9,param_5);
        FUN_1004d320(param_1,0,uVar13,uVar12,0,0);
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
        iVar21 = 0x4006;
        if (bVar11) {
          iVar21 = iVar16;
        }
        param_1[0x5e] = iVar21;
        bVar11 = false;
        param_1[0x62] = (int)fVar25;
        param_1[0x61] = (int)fVar25;
        param_1[0x60] = (int)fVar25;
        param_1[0x5f] = (int)fVar25;
        uVar17 = FUN_1004d850(param_1,uVar9,param_5);
        uVar8 = param_2[3];
        if ((uVar8 & 0xff0) != 0x100) {
          uVar14 = uVar8 & 0xf00;
          bVar11 = uVar14 != 0x600 && (uVar14 - 0x100 & 0xfffffaff) == 0;
        }
        uVar14 = (uint)uVar8;
        uVar17 = uVar17 & 0xff;
        if ((uVar8 & 0x1000) != 0) {
          uVar17 = 0xff;
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
            if (uVar23 == 0) goto LAB_100506d4;
            *piVar3 = 2;
            iVar16 = FUN_1006f660(uVar23,0,1,4,0,0);
            param_1[0x66] = iVar16;
            param_1[0x67] = uVar23 & 0xff;
            goto LAB_10050680;
          }
          if ((uVar8 & 0xf0) != 0) {
            if (uVar23 == 0x10) {
              *piVar3 = 2;
              param_1[0x66] = uVar17 << 4 | 0x100006;
              pbVar22 = (byte *)(param_1 + uVar5 + 0x21);
              goto LAB_10050614;
            }
            goto LAB_10050680;
          }
LAB_100506d4:
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
          bVar11 = uVar17 == 0xff;
          iVar16 = 5;
          if (bVar11) {
            iVar16 = 2;
          }
          *piVar3 = iVar16;
          iVar16 = 0x4000;
          if (bVar11) {
            iVar16 = 0x4001;
          }
          iVar21 = 0x4006;
          if (bVar11) {
            iVar21 = iVar16;
          }
          param_1[0x66] = iVar21;
          param_1[0x6a] = (int)fVar25;
          param_1[0x69] = (int)fVar25;
          param_1[0x68] = (int)fVar25;
          param_1[0x67] = (int)fVar25;
        }
        else {
          if (uVar23 < 0x41) {
            iVar21 = 2;
            param_1[0x66] = uVar17 << 4 | 0x101006;
            piVar4 = param_1 + 0x67;
            *piVar3 = 2;
          }
          else {
            if (uVar23 != 0x50) {
              if (uVar23 == 0x80) {
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + uVar5 + 0x24);
                iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar17,1,4,0,0);
                param_1[0x66] = iVar16;
              }
              else {
                if (uVar23 != 0xf0) goto LAB_10050680;
                *piVar3 = 2;
                pbVar22 = (byte *)(param_1 + 0x28);
                iVar16 = FUN_1006f660(*(int *)pbVar22,(char)uVar17,1,4,0,0);
                param_1[0x66] = iVar16;
              }
LAB_10050614:
              param_1[0x67] = (uint)*pbVar22;
              goto LAB_10050680;
            }
            param_1[2] = param_1[2] | 1;
            if (*param_1 == 0x51) {
              param_1[0x69] = 5;
              uVar17 = uVar17 << 4 | 0x308006;
              iVar21 = 0;
              iVar16 = 4;
            }
            else {
              uVar17 = uVar17 << 4 | 0x208006;
              iVar21 = 5;
              iVar16 = 3;
            }
            *piVar3 = iVar16;
            param_1[0x66] = uVar17;
            param_1[0x67] = 0;
            piVar4 = param_1 + 0x68;
          }
          *piVar4 = iVar21;
LAB_10050680:
          if (bVar11) {
            for (iVar16 = *piVar3; iVar16 != 0; iVar16 = iVar16 + -1) {
              param_1[iVar16 + 0x66] = piVar3[iVar16];
            }
            param_1[0x66] = param_1[0x66] | 0x80000000;
            param_1[0x67] = 0x41;
            *piVar3 = *piVar3 + 1;
          }
        }
        FUN_10070058(param_6,(param_1[0x5d] + param_1[0x55] + param_1[0x4d] + param_1[0x65] + 1U &
                             0x7f) << 0x18 | uVar15 | 0x32,piVar2,piVar20,piVar19,piVar3);
      }
      FUN_1004d210(param_1,param_3,param_4);
      FUN_1004d320(param_1,0,uVar13,param_5,0,0);
      if (local_48 == 0.0) {
        if ((char)param_2[4] == '\0') goto LAB_100509bc;
        bVar11 = param_5 == -1;
        iVar16 = 5;
        if (bVar11) {
          iVar16 = 2;
        }
        iVar21 = 0x4000;
        if (bVar11) {
          iVar21 = 0x4001;
        }
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar21;
        }
        param_1[0x5d] = iVar16;
        param_1[0x5e] = iVar6;
        param_1[0x62] = (int)fVar26;
        param_1[0x61] = (int)fVar26;
        param_1[0x60] = (int)fVar26;
        param_1[0x5f] = (int)fVar26;
        iVar16 = param_1[0x55] + param_1[0x4d] + iVar16;
        goto LAB_1005099c;
      }
      bVar11 = param_5 == -1;
      iVar16 = 5;
      if ((char)param_2[4] != '\0') {
        if (bVar11) {
          iVar16 = 2;
        }
        param_1[0x5d] = iVar16;
        iVar21 = 0x4000;
        if (bVar11) {
          iVar21 = 0x4001;
        }
        param_1[0x65] = iVar16;
        param_1[0x5f] = (int)fVar26;
        param_1[0x62] = (int)fVar26;
        iVar6 = 0x4006;
        if (bVar11) {
          iVar6 = iVar21;
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
        iVar21 = param_1[0x4d];
        goto LAB_1004fa04;
      }
      if (bVar11) {
        iVar16 = 2;
      }
      param_1[0x5d] = iVar16;
      iVar21 = 0x4000;
      if (bVar11) {
        iVar21 = 0x4001;
      }
      local_48 = local_48 / fVar27;
      iVar6 = 0x4006;
      if (bVar11) {
        iVar6 = iVar21;
      }
      param_1[0x5e] = iVar6;
      param_1[0x5f] = (int)local_48;
      param_1[0x62] = (int)local_48;
      param_1[0x61] = (int)local_48;
      param_1[0x60] = (int)local_48;
      iVar16 = param_1[0x55] + param_1[0x4d] + iVar16;
    }
    uVar15 = (iVar16 + 1U & 0x7f) << 0x18 | 0x2000;
    piVar20 = (int *)0x0;
  }
  FUN_10070058(param_6,uVar15,param_1 + 0x4d,param_1 + 0x55,piVar19,piVar20);
LAB_100509bc:
  FUN_1004d810(param_1,local_6c);
  FUN_1004d810(param_1,uVar24);
  if (bVar10) {
    FUN_1004d810(param_1,uVar13);
  }
  return;
}

