/*
 * FUN_18003e830 at 18003e830
 * undefined __cdecl FUN_18003e830(int * param_1, ushort * param_2, uint param_3, undefined4 param_4, byte param_5, longlong * param_6)
 * Address ranges: 18003e830-18003f3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003e830(int *param_1,ushort *param_2,uint param_3,undefined4 param_4,byte param_5,
                  longlong *param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint extraout_w0;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong extraout_x0;
  int *piVar12;
  ulonglong extraout_x0_00;
  longlong lVar13;
  ushort uVar14;
  uint *puVar15;
  byte bVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  uint extraout_w9;
  uint extraout_w9_00;
  longlong extraout_x14;
  longlong extraout_x14_00;
  longlong extraout_x14_01;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_s18;
  float extraout_s18_00;
  undefined1 auVar25 [12];
  uint local_88;
  
  uVar14 = param_2[1];
  uVar5 = (uint)uVar14;
  bVar16 = (byte)param_4;
  if ((uVar14 & 0xdf0) == 0) {
LAB_18003e8a4:
    if ((uVar14 & 0xdf0) == 0) {
      uVar5 = (uint)param_2[2];
    }
LAB_18003e8cc:
    fVar20 = FUN_18003b1a8(uVar5);
    uVar5 = extraout_w0;
    if ((fVar20 != 0.0) && ((extraout_w0 & 0xff0) != 0x300)) {
      uVar5 = 0;
    }
    if (uVar5 == 0) goto LAB_18003e8f0;
  }
  else {
    if ((param_2[2] & 0xff0) == 0) goto LAB_18003e8cc;
    if ((param_2[2] & 0xff0) == 0x200) goto LAB_18003e8a4;
LAB_18003e8f0:
    uVar14 = 0;
    uVar5 = FUN_18003da90((longlong)param_1,(uint)*param_2,(uint)param_2[3],0,0,bVar16,1);
    uVar6 = FUN_18003e208(param_1,param_2[1],param_2[2],uVar14,uVar5,0,param_4,param_5,param_6,'\0',
                          0);
    if ((uVar6 & 1) == 0) {
      uVar5 = uVar5 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  uVar6 = (uint)*param_2;
  fVar20 = FUN_18003b1a8((uint)*param_2);
  if ((fVar20 != 0.0) && ((uVar5 & 0xff0) != 0x300)) {
    uVar14 = 0;
    uVar6 = FUN_18003da90((longlong)param_1,uVar5,(uint)param_2[3],0,0,bVar16,1);
    uVar7 = FUN_18003e208(param_1,*param_2,0,uVar14,uVar6,0,param_4,param_5,param_6,'\0',0);
    if ((uVar7 & 1) == 0) {
      uVar6 = uVar6 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  uVar7 = (uint)(byte)param_2[4];
  fVar24 = 255.0;
  uVar14 = param_2[3];
  uVar11 = (ulonglong)uVar14;
  bVar3 = false;
  fVar20 = fVar24;
  if ((uVar5 & 0x2000) == 0) {
    fVar20 = 1.0;
  }
  fVar21 = (float)(1 << (ulonglong)((byte)param_2[4] & 0x1f));
  fVar22 = fVar24;
  if ((uVar6 & 0x2000) == 0) {
    fVar22 = 1.0;
  }
  fVar20 = fVar20 * fVar22;
  uVar8 = param_3;
  if (((uVar14 & 0xdf0) == 0) &&
     (fVar22 = FUN_18003b1a8((uint)uVar14), uVar11 = extraout_x0, fVar24 = extraout_s18,
     uVar7 = extraout_w9, fVar22 == 0.0)) {
    fVar21 = fVar21 / fVar20;
    if (fVar21 != 1.0) {
      uVar8 = uVar5;
      if ((uVar6 & 0xf0) == 0x80 || (uVar6 & 0xf0) == 0xf0) {
        uVar8 = uVar6;
      }
      if ((uVar8 & 0xf0) != 0x80 && (uVar8 & 0xf0) != 0xf0) {
        uVar8 = FUN_18003da90((longlong)param_1,0,0,0,0,bVar16,0);
        bVar3 = true;
      }
    }
    auVar25 = FUN_18003d4b8((longlong)param_1,uVar8,bVar16);
    uVar7 = FUN_18003dba8(auVar25._0_8_,auVar25._8_4_,(uint)param_5);
    FUN_18003d598(param_1,0,uVar6,(byte)uVar7,0,0);
    uVar7 = FUN_18003dba8((longlong)param_1,uVar8,(uint)param_5);
    FUN_18003d598(param_1,1,uVar5,(byte)uVar7,0,0);
    uVar7 = 0x38;
    if (fVar21 == 1.0) {
      uVar7 = 0x2038;
    }
    FUN_180056e08(param_6,(param_1[0x5f] + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U &
                          0x7f000000 | uVar7,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                  (uint *)(param_1 + 0x5f),(uint *)0x0);
    if (fVar21 == 1.0) goto LAB_18003f320;
    piVar12 = (int *)FUN_18003d4b8((longlong)param_1,param_3,bVar16);
    FUN_18003d598(piVar12,0,uVar8,param_5,0,0);
    bVar4 = param_5 == 0xff;
    iVar18 = 5;
    if (bVar4) {
      iVar18 = 2;
    }
    iVar19 = 0x4000;
    if (bVar4) {
      iVar19 = 0x4001;
    }
    iVar2 = 0x4006;
    if (bVar4) {
      iVar2 = iVar19;
    }
    param_1[0x5f] = iVar18;
    param_1[0x60] = iVar2;
    param_1[99] = (int)fVar21;
    param_1[100] = (int)fVar21;
    param_1[0x61] = (int)fVar21;
    param_1[0x62] = (int)fVar21;
    iVar18 = iVar18 + param_1[0x57] + param_1[0x4f];
LAB_18003f308:
    uVar7 = iVar18 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
    puVar17 = (uint *)0x0;
LAB_18003f30c:
    puVar15 = (uint *)(param_1 + 0x5f);
  }
  else {
    if ((uVar11 & 0xf0) == 0) {
      fVar22 = 0.0;
    }
    else {
      fVar22 = FUN_18003b1a8((uint)uVar11);
      uVar11 = extraout_x0_00;
      fVar24 = extraout_s18_00;
      uVar7 = extraout_w9_00;
    }
    if ((uVar11 & 0x2000) == 0) {
      fVar24 = 1.0;
    }
    uVar10 = (uint)param_5;
    if (fVar24 == fVar20) {
      if ((fVar24 == 1.0 && uVar7 == 0) && (fVar22 == 0.0)) {
        local_88 = 0x2000;
      }
      else {
        uVar8 = uVar5;
        if ((uVar6 & 0xf0) == 0x80 || (uVar6 & 0xf0) == 0xf0) {
          uVar8 = uVar6;
        }
        uVar7 = uVar8 & 0xf0;
        if (uVar7 != 0x80 && uVar7 != 0xf0) {
          uVar8 = FUN_18003da90((longlong)param_1,0,0,0,0,bVar16,0);
        }
        bVar3 = uVar7 != 0x80 && uVar7 != 0xf0;
        local_88 = 0;
      }
      auVar25 = FUN_18003d4b8((longlong)param_1,uVar8,bVar16);
      uVar7 = FUN_18003dba8(auVar25._0_8_,auVar25._8_4_,(uint)param_5);
      FUN_18003d598(param_1,0,uVar6,(byte)uVar7,0,0);
      uVar7 = FUN_18003dba8((longlong)param_1,uVar8,uVar10);
      FUN_18003d598(param_1,1,uVar5,(byte)uVar7,0,0);
      uVar7 = FUN_18003dba8((longlong)param_1,uVar8,uVar10);
      FUN_18003d598(param_1,2,(uint)param_2[3],(byte)uVar7,0,0);
      FUN_180056e08(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                            0x1000000 + 0x1000000U & 0x7f000000 | local_88 | 0x32,
                    (uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),
                    (uint *)(param_1 + 0x67));
      piVar12 = (int *)FUN_18003d4b8((longlong)param_1,param_3,bVar16);
      FUN_18003d598(piVar12,0,uVar8,param_5,0,0);
      fVar20 = fVar21 / fVar24;
      bVar4 = param_5 == 0xff;
      iVar18 = 5;
      if (bVar4) {
        iVar18 = 2;
      }
      iVar19 = 0x4000;
      if (bVar4) {
        iVar19 = 0x4001;
      }
      iVar2 = 0x4006;
      if (bVar4) {
        iVar2 = iVar19;
      }
      param_1[0x5f] = iVar18;
      param_1[0x60] = iVar2;
      param_1[0x67] = iVar18;
      param_1[0x68] = iVar2;
      param_1[99] = (int)fVar20;
      param_1[100] = (int)fVar20;
      param_1[0x61] = (int)fVar20;
      param_1[0x62] = (int)fVar20;
      fVar20 = (fVar22 * fVar21) / fVar24;
      param_1[0x6b] = (int)fVar20;
      param_1[0x6c] = (int)fVar20;
      param_1[0x69] = (int)fVar20;
      param_1[0x6a] = (int)fVar20;
      iVar19 = -(uint)(fVar22 == 0.0);
      if (((fVar24 != 1.0) || ((char)param_2[4] != '\0')) && (iVar19 = 0x32, fVar22 == 0.0)) {
        iVar19 = 0x38;
      }
      if (iVar19 != 0) {
        if (iVar19 != 0x32) {
          if (iVar19 != 0x38) goto LAB_18003f320;
          goto LAB_18003f2e8;
        }
        iVar18 = 10;
        if (param_5 == 0xff) {
          iVar18 = 4;
        }
        puVar17 = (uint *)(param_1 + 0x67);
        uVar7 = (iVar18 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                0x2032;
        goto LAB_18003f30c;
      }
      puVar17 = (uint *)0x0;
      puVar15 = (uint *)(param_1 + 0x67);
      uVar7 = (iVar18 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
              0x2000;
    }
    else {
      uVar8 = uVar5;
      if ((uVar6 & 0xf0) == 0x80 || (uVar6 & 0xf0) == 0xf0) {
        uVar8 = uVar6;
      }
      uVar7 = uVar8 & 0xf0;
      if (uVar7 != 0x80 && uVar7 != 0xf0) {
        uVar8 = FUN_18003da90((longlong)param_1,0,0,0,0,bVar16,0);
      }
      bVar3 = uVar7 != 0x80 && uVar7 != 0xf0;
      auVar25 = FUN_18003d4b8((longlong)param_1,uVar8,bVar16);
      uVar7 = FUN_18003dba8(auVar25._0_8_,auVar25._8_4_,(uint)param_5);
      FUN_18003d598(param_1,0,uVar6,(byte)uVar7,0,0);
      uVar7 = FUN_18003dba8((longlong)param_1,uVar8,(uint)param_5);
      FUN_18003d598(param_1,1,uVar5,(byte)uVar7,0,0);
      FUN_180056e08(param_6,(param_1[0x5f] + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U
                            & 0x7f000000 | 0x38,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                    (uint *)(param_1 + 0x5f),(uint *)0x0);
      if ((fVar22 == 0.0) && ((char)param_2[4] == '\0')) {
        bVar4 = true;
        uVar7 = 0x2032;
      }
      else {
        bVar4 = false;
        uVar7 = 0x32;
      }
      uVar1 = uVar8;
      if (bVar4) {
        uVar1 = param_3;
      }
      if (fVar20 == 1.0) {
LAB_18003eff4:
        if (fVar24 != 1.0) {
          auVar25 = FUN_18003d4b8((longlong)param_1,uVar1,bVar16);
          uVar9 = FUN_18003dba8(auVar25._0_8_,auVar25._8_4_,(uint)param_5);
          FUN_18003d598(param_1,0,(uint)param_2[3],(byte)uVar9,0,0);
          fVar23 = 1.0 / fVar24;
          bVar4 = param_5 == 0xff;
          iVar18 = 5;
          if (bVar4) {
            iVar18 = 2;
          }
          iVar19 = 0x4000;
          if (bVar4) {
            iVar19 = 0x4001;
          }
          iVar2 = 0x4006;
          if (bVar4) {
            iVar2 = iVar19;
          }
          param_1[0x5f] = iVar18;
          param_1[0x60] = iVar2;
          param_1[99] = (int)fVar23;
          param_1[100] = (int)fVar23;
          param_1[0x61] = (int)fVar23;
          param_1[0x62] = (int)fVar23;
          uVar9 = FUN_18003dba8((longlong)param_1,uVar1,(uint)param_5);
          FUN_18003d598(param_1,2,uVar8,(byte)uVar9,0,0);
          FUN_180056e08(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                                0x1000000 + 0x1000000U & 0x7f000000 | uVar7,(uint *)(param_1 + 0x4f)
                        ,(uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),(uint *)(param_1 + 0x67))
          ;
        }
      }
      else if (fVar24 != 1.0) {
        lVar13 = FUN_18003d4b8((longlong)param_1,uVar8,bVar16);
        uVar9 = FUN_18003dba8(lVar13,uVar1,(uint)param_5);
        FUN_18003d598(param_1,0,uVar8,(byte)uVar9,0,0);
        fVar23 = 1.0 / fVar20;
        bVar4 = param_5 == 0xff;
        iVar18 = 5;
        if (bVar4) {
          iVar18 = 2;
        }
        iVar19 = 0x4000;
        if (bVar4) {
          iVar19 = 0x4001;
        }
        iVar2 = 0x4006;
        if (bVar4) {
          iVar2 = iVar19;
        }
        param_1[0x5f] = iVar18;
        param_1[0x60] = iVar2;
        param_1[99] = (int)fVar23;
        param_1[100] = (int)fVar23;
        param_1[0x61] = (int)fVar23;
        param_1[0x62] = (int)fVar23;
        FUN_180056e08(param_6,(iVar18 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U &
                              0x7f000000 | 0x38,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),
                      (uint *)(param_1 + 0x5f),(uint *)0x0);
        goto LAB_18003eff4;
      }
      if ((fVar20 != 1.0) && (fVar24 == 1.0)) {
        auVar25 = FUN_18003d4b8((longlong)param_1,uVar1,bVar16);
        uVar9 = FUN_18003dba8(auVar25._0_8_,auVar25._8_4_,uVar10);
        FUN_18003d598(param_1,0,uVar8,(byte)uVar9,0,0);
        fVar20 = 1.0 / fVar20;
        bVar4 = uVar10 == 0xff;
        iVar18 = 5;
        if (bVar4) {
          iVar18 = 2;
        }
        iVar19 = 0x4000;
        if (bVar4) {
          iVar19 = 0x4001;
        }
        iVar2 = 0x4006;
        if (bVar4) {
          iVar2 = iVar19;
        }
        param_1[0x5f] = iVar18;
        param_1[0x60] = iVar2;
        param_1[99] = (int)fVar20;
        param_1[100] = (int)fVar20;
        param_1[0x61] = (int)fVar20;
        param_1[0x62] = (int)fVar20;
        uVar10 = FUN_18003dba8((longlong)param_1,uVar1,(uint)param_5);
        FUN_18003d598(param_1,2,(uint)param_2[3],(byte)uVar10,0,0);
        FUN_180056e08(param_6,(param_1[0x67] + param_1[0x5f] + param_1[0x57] + param_1[0x4f]) *
                              0x1000000 + 0x1000000U & 0x7f000000 | uVar7,(uint *)(param_1 + 0x4f),
                      (uint *)(param_1 + 0x57),(uint *)(param_1 + 0x5f),(uint *)(param_1 + 0x67));
      }
      piVar12 = (int *)FUN_18003d4b8((longlong)param_1,param_3,bVar16);
      FUN_18003d598(piVar12,0,uVar8,param_5,0,0);
      uVar14 = param_2[4];
      if (fVar22 == 0.0) {
        if ((char)uVar14 == '\0') goto LAB_18003f320;
        bVar4 = param_5 == 0xff;
        iVar18 = 5;
        if (bVar4) {
          iVar18 = 2;
        }
        iVar19 = 0x4000;
        if (bVar4) {
          iVar19 = 0x4001;
        }
        iVar2 = 0x4006;
        if (bVar4) {
          iVar2 = iVar19;
        }
        param_1[0x5f] = iVar18;
        param_1[0x60] = iVar2;
        param_1[99] = (int)fVar21;
        param_1[100] = (int)fVar21;
        param_1[0x61] = (int)fVar21;
        param_1[0x62] = (int)fVar21;
LAB_18003f2e8:
        iVar18 = iVar18 + param_1[0x57] + param_1[0x4f];
        goto LAB_18003f308;
      }
      bVar4 = param_5 == 0xff;
      iVar18 = 5;
      if (bVar4) {
        iVar18 = 2;
      }
      iVar19 = 0x4000;
      if (bVar4) {
        iVar19 = 0x4001;
      }
      iVar2 = 0x4006;
      if (bVar4) {
        iVar2 = iVar19;
      }
      puVar15 = (uint *)(param_1 + 0x5f);
      param_1[0x5f] = iVar18;
      param_1[0x60] = iVar2;
      if ((char)uVar14 == '\0') {
        fVar22 = fVar22 / fVar24;
        puVar17 = (uint *)0x0;
        param_1[99] = (int)fVar22;
        param_1[100] = (int)fVar22;
        param_1[0x61] = (int)fVar22;
        param_1[0x62] = (int)fVar22;
        uVar7 = (iVar18 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                0x2000;
      }
      else {
        param_1[0x67] = iVar18;
        param_1[0x68] = iVar2;
        param_1[99] = (int)fVar21;
        param_1[100] = (int)fVar21;
        param_1[0x61] = (int)fVar21;
        param_1[0x62] = (int)fVar21;
        puVar17 = (uint *)(param_1 + 0x67);
        fVar24 = (fVar22 * fVar21) / fVar24;
        param_1[0x6b] = (int)fVar24;
        param_1[0x6c] = (int)fVar24;
        param_1[0x69] = (int)fVar24;
        param_1[0x6a] = (int)fVar24;
        iVar18 = 10;
        if (param_5 == 0xff) {
          iVar18 = 4;
        }
        uVar7 = (iVar18 + param_1[0x57] + param_1[0x4f]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                0x2032;
      }
    }
  }
  FUN_180056e08(param_6,uVar7,(uint *)(param_1 + 0x4f),(uint *)(param_1 + 0x57),puVar15,puVar17);
LAB_18003f320:
  if ((uVar6 & 0xf0) == 0x80) {
    FUN_180055de0((longlong)param_1,param_1[(ulonglong)(uVar6 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14 + 0x98) = 0;
  }
  if ((uVar5 & 0xf0) == 0x80) {
    FUN_180055de0((longlong)param_1,param_1[(ulonglong)(uVar5 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_00 + 0x98) = 0;
  }
  if ((bVar3) && ((uVar8 & 0xf0) == 0x80)) {
    FUN_180055de0((longlong)param_1,param_1[(ulonglong)(uVar8 & 0xf) + 0x26]);
    *(undefined4 *)(extraout_x14_01 + 0x98) = 0;
  }
  return;
}

