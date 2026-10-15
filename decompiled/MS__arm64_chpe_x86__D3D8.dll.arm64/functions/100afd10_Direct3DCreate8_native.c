/*
 * Direct3DCreate8_native at 100afd10
 * undefined Direct3DCreate8_native(void)
 * Address ranges: 100afd10-100b049b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 Direct3DCreate8_native(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 extraout_x1;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  int extraout_w13;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [16];
  
  local_60 = 0;
  uVar10 = 0;
  if ((DAT_1013cfdc != 0) ||
     (DAT_1013cfdc = FUN_100aef10(s_Direct3DCreate8_1012d028), DAT_1013cfdc != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar10 = (*extraout_w11_05)(param_1);
    return uVar10;
  }
  if ((param_1 != 0x78) && (99 < param_1 - 0xdcU)) {
    return 0;
  }
  if (DAT_1013cf00 == '\0') {
    FUN_100fed00(_DAT_101387a8 & 0xffffffff);
    _DAT_101387a8 = 0;
    DAT_101387b0 = 0;
    FUN_100fed00(0);
    DAT_1013cf00 = '\x01';
  }
  FUN_10121020(auStack_5c);
  if (DAT_1013cee8 == (int *)0x0) {
    DAT_1013ceec = FUN_100fac78();
    if (DAT_1013ceec == 0) goto LAB_100b0448;
    bVar5 = false;
    if ((*(uint *)(DAT_1013ceec + 0x764) < 7) &&
       ((0x69U >> (ulonglong)(*(uint *)(DAT_1013ceec + 0x764) & 0x1f) & 1) != 0)) {
      *(undefined1 *)(DAT_1013ceec + 0x78a) = 1;
    }
    pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    iVar8 = *(int *)(DAT_1013ceec + 0x764);
    if (iVar8 - 5U < 2) {
      bVar4 = false;
      if ((iVar8 != 6) && (bVar4 = false, iVar8 != 5)) goto LAB_100afe30;
LAB_100afe34:
      local_58._0_4_ = DAT_1013d010;
      switch(*(undefined4 *)(DAT_1013ceec + 0x836)) {
      default:
        uVar16 = 0;
        break;
      case 2:
        uVar16 = 1;
        break;
      case 3:
        uVar16 = 2;
        break;
      case 4:
        uVar16 = 3;
      }
      iVar8 = FUN_100febf0(0x3b0);
      if (iVar8 != 0) {
        FUN_100d5608(iVar8,local_58._0_8_ & 0xffffffff,uVar16);
        *extraout_w11 = (int)&PTR_FUN_1012a7f0;
        DAT_1013cee8 = extraout_w11;
        extraout_w11[0xea] = 0;
        extraout_w11[0xeb] = 0xc000;
        *(undefined1 *)(extraout_w11 + 0xe9) = 0;
        local_58._0_4_ = *extraout_w11 + 4;
        iVar8 = DAT_1013ceec + 0x764;
        uVar9 = (*pcVar6)();
        auVar17 = (*extraout_w11_00)(uVar9,&DAT_10129060);
        (*pcVar6)(auVar17._0_8_,auVar17._8_8_,auVar17._0_8_ & 0xffffffff);
        cVar7 = (*extraout_w11_01)(DAT_1013cee8,iVar8);
        if (cVar7 == '\0') {
          if (DAT_1013cee8 != (int *)0x0) {
            uVar9 = (*pcVar6)();
            (*extraout_w11_02)(uVar9,1);
          }
          DAT_1013cee8 = (int *)0x0;
        }
        else {
          bVar5 = true;
        }
        goto LAB_100aff74;
      }
      DAT_1013cee8 = (int *)0x0;
LAB_100aff84:
      uVar9 = DAT_1013d010;
      if (bVar4) {
        local_58 = FUN_100d4110(DAT_1013ceec + 0x764);
        switch(*(undefined4 *)(extraout_w13 + 0xd2)) {
        default:
          uVar16 = 0;
          break;
        case 2:
          uVar16 = 1;
          break;
        case 3:
          uVar16 = 2;
          break;
        case 4:
          uVar16 = 3;
        }
        uVar11 = FUN_100febf0(0x3bc);
        uVar13 = uVar11 & 0xffffffff;
        if ((int)uVar11 == 0) {
          DAT_1013cee8 = (int *)0x0;
        }
        else {
          FUN_100d5608(uVar11 & 0xffffffff,uVar9,uVar16);
          piVar12 = (int *)uVar13;
          DAT_1013cee8 = piVar12;
          *piVar12 = (int)&PTR_FUN_1012a798;
          piVar12[0xea] = 0;
          *(undefined1 (*) [16])(piVar12 + 0xeb) = local_58;
          piVar12[0xda] = -1;
          piVar12[0xdb] = -1;
          piVar12[0xd8] = -1;
          piVar12[0xd9] = -1;
          piVar12[0xde] = -1;
          piVar12[0xdf] = -1;
          piVar12[0xdc] = -1;
          piVar12[0xdd] = -1;
          piVar12[0xe2] = -1;
          piVar12[0xe3] = -1;
          piVar12[0xe0] = -1;
          piVar12[0xe1] = -1;
          piVar12[0xe6] = -1;
          piVar12[0xe7] = -1;
          piVar12[0xe4] = -1;
          piVar12[0xe5] = -1;
          *(bool *)(piVar12 + 0xe9) = *(int *)*(undefined1 (*) [16])(piVar12 + 0xeb) == 5;
          (*pcVar6)(local_58._0_8_,DAT_1013ceec + 0x764);
          cVar7 = (*extraout_w11_03)(uVar13 & 0xffffffff,extraout_x1,0);
          if (cVar7 != '\0') goto LAB_100b008c;
        }
      }
    }
    else {
      bVar4 = true;
LAB_100afe30:
      if (iVar8 == 0) goto LAB_100afe34;
LAB_100aff74:
      if (DAT_1013cee8 == (int *)0x0) goto LAB_100aff84;
    }
    if (!bVar5) {
      if (DAT_1013cee8 != (int *)0x0) {
        uVar9 = (*pcVar6)();
        (*extraout_w11_04)(uVar9,1);
      }
      DAT_1013cee8 = (int *)0x0;
      FUN_100fb680(DAT_1013ceec);
      goto LAB_100b0448;
    }
  }
LAB_100b008c:
  iVar8 = FUN_100fac78();
  if (iVar8 != 0) {
    _DAT_10137b58 = *(undefined8 *)(iVar8 + 0xa4);
    DAT_10137b50 = *(undefined8 *)(iVar8 + 0x9c);
    DAT_10137b60 = *(undefined8 *)(iVar8 + 0xac);
    FUN_100fb680(iVar8);
  }
  iVar8 = FUN_100fac78();
  if (iVar8 != 0) {
    piVar12 = (int *)(iVar8 + 0x54);
    puVar1 = (uint *)(iVar8 + 0x58);
    uVar3 = *puVar1;
    if (uVar3 != 0) {
      uVar14 = 0;
      do {
        if (*(undefined ***)(*piVar12 + uVar14 * 4) == &PTR_PTR_10137390) {
          if (uVar14 != 0xffffffff) goto LAB_100b01dc;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar3);
    }
    puVar2 = (uint *)(iVar8 + 0x5c);
    uVar14 = *puVar2;
    if (uVar3 == uVar14) {
      uVar3 = uVar14 << 1;
      if (uVar14 == 0) {
        uVar3 = 0x10;
      }
      iVar15 = uVar3 * 4;
      if (uVar3 >> 0x1e != 0) {
        iVar15 = -1;
      }
      iVar15 = FUN_100fece0(iVar15);
      if (iVar15 != 0) {
        FUN_100ff660(iVar15,*piVar12,((ulonglong)*puVar2 & 0x3fffffff) << 2);
        FUN_100fed00(*piVar12);
        *piVar12 = iVar15;
        *puVar2 = uVar3;
        goto LAB_100b01b8;
      }
    }
    else {
LAB_100b01b8:
      *(undefined ***)(*piVar12 + *puVar1 * 4) = &PTR_PTR_10137390;
      *puVar1 = *puVar1 + 1;
    }
LAB_100b01dc:
    FUN_100fb680(iVar8);
  }
  PTR_DAT_10135394 = &DAT_10135d20;
  PTR_DAT_10135398 = &DAT_10135d70;
  PTR_DAT_1013539c = &DAT_10135d64;
  PTR_DAT_101353a0 = &DAT_10135c28;
  PTR_DAT_101353a4 = &DAT_10135b94;
  PTR_DAT_101353a8 = &DAT_10135b60;
  PTR_DAT_101354c8 = &DAT_10135d10;
  PTR_DAT_101354cc = &DAT_10135ca8;
  PTR_DAT_101354d0 = &DAT_10135c40;
  PTR_DAT_101354d4 = &DAT_10135c10;
  PTR_DAT_101354d8 = &DAT_10135b8c;
  PTR_DAT_101354dc = &DAT_10135b58;
  PTR_DAT_101355fc = &DAT_10135d00;
  PTR_DAT_10135600 = &DAT_10135d50;
  PTR_DAT_10135604 = &DAT_10135d44;
  PTR_DAT_10135608 = &DAT_10135c00;
  PTR_DAT_1013560c = &DAT_10135b84;
  PTR_DAT_10135610 = &DAT_10135b50;
  PTR_DAT_10135730 = &DAT_10135cf0;
  PTR_DAT_10135734 = &DAT_10135c90;
  PTR_DAT_10135738 = &DAT_10135d3c;
  PTR_DAT_1013573c = &DAT_10135be8;
  PTR_DAT_10135740 = &DAT_10135b80;
  PTR_DAT_10135744 = &DAT_10135b48;
  PTR_DAT_10135864 = &DAT_10135ce0;
  PTR_DAT_10135868 = &DAT_10135c60;
  PTR_DAT_1013586c = &DAT_10135c38;
  PTR_DAT_10135870 = &DAT_10135bd0;
  PTR_DAT_10135874 = &DAT_10135b78;
  PTR_DAT_10135878 = &DAT_10135b40;
  PTR_DAT_10135998 = &DAT_10135cd0;
  PTR_DAT_1013599c = &DAT_10135c78;
  PTR_DAT_101359a0 = &DAT_10135d34;
  PTR_DAT_101359a4 = &DAT_10135bb8;
  PTR_DAT_101359a8 = &DAT_10135b70;
  PTR_DAT_101359ac = &DAT_10135b38;
  PTR_DAT_10135acc = &DAT_10135cc0;
  PTR_DAT_10135ad0 = &DAT_10135c48;
  PTR_DAT_10135ad4 = &DAT_10135d2c;
  PTR_DAT_10135ad8 = &DAT_10135ba0;
  PTR_DAT_10135adc = &DAT_10135b68;
  PTR_DAT_10135ae0 = &DAT_10135b30;
  PTR_DAT_10135254 = &DAT_10135d10;
  PTR_DAT_10135258 = &DAT_10135ca8;
  PTR_DAT_1013525c = &DAT_10135c40;
  PTR_DAT_10135260 = &DAT_10135c10;
  PTR_DAT_10135264 = &DAT_10135b8c;
  PTR_DAT_10135268 = &DAT_10135b58;
  iVar8 = FUN_100febf0(0x8c);
  if (iVar8 != 0) {
    iVar8 = FUN_100af150(iVar8,param_1);
    if (iVar8 != 0) {
      uVar11 = FUN_100af3e0(iVar8);
      if ((uVar11 & 1) != 0) {
        iVar15 = FUN_100afb60(iVar8 + 0x74,&DAT_101290b0,&local_60,0);
        if (-1 < iVar15) {
          FUN_10120f70(auStack_5c);
          return local_60;
        }
        FUN_100018c0(iVar8);
        FUN_10005740(iVar8);
        uVar10 = local_60;
      }
      FUN_100af1e0(iVar8);
      FUN_100fec90(iVar8,0x8c);
    }
  }
  uVar11 = FUN_10002b38();
  if ((uVar11 & 1) != 0) {
    FUN_100b08d0();
  }
LAB_100b0448:
  FUN_10120f70(auStack_5c);
  return uVar10;
}

