/*
 * FUN_1801f2e70 at 1801f2e70
 * undefined FUN_1801f2e70(void)
 * Address ranges: 1801f2e70-1801f3673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801f2e70(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  uint uVar13;
  int local_70;
  uint local_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  
  local_70 = 0;
  local_6c = 0;
  uVar7 = 1;
  local_50 = (code *)__hybrid_os_arm64x_dispatch_icall;
  local_58 = param_3;
LAB_1801f2ea4:
  pcVar1 = local_50;
  (*local_50)(0x180224000);
  uVar3 = (*extraout_x11)(param_2);
  uVar13 = local_6c;
  if (uVar3 <= local_6c) {
    return uVar7;
  }
  (*pcVar1)(0x180224000);
  lVar10 = (*extraout_x11_00)(param_2,uVar13);
  if (lVar10 == 0) {
    uVar3 = 1;
    local_68 = (code *)((ulonglong)local_68 & 0xffffffff00000000);
    uVar13 = 0;
    local_60 = param_1;
    do {
      pcVar1 = local_50;
      (*local_50)(0x180224000);
      uVar7 = local_6c;
      uVar4 = (*extraout_x11_01)(param_2,local_6c);
      if (uVar4 <= uVar13) {
        param_1 = local_60;
        uVar7 = uVar3;
        if ((int)local_68 == 0) {
          local_70 = 0x287;
        }
        else if (((((((local_70 != 0x287) && (local_70 != 0x286)) && (local_70 != 0x285)) &&
                   ((local_70 != 0x283 && (local_70 != 0x282)))) &&
                  (((local_70 != 0x281 && ((local_70 != 0x280 && (local_70 != 0x279)))) &&
                   (local_70 != 0x278)))) &&
                 ((((local_70 != 0x277 && (local_70 != 0x276)) && (local_70 != 0x275)) &&
                  (((local_70 != 0x274 && (local_70 != 0x273)) &&
                   ((local_70 != 0x270 && ((local_70 != 0x263 && (local_70 != 0x262)))))))))) &&
                ((local_70 != 0x261 && ((local_70 != 0x260 && (uVar7 = 0, local_70 == 0x255)))))) {
          uVar7 = uVar3;
        }
        break;
      }
      (*pcVar1)(0x180224000);
      uVar11 = (*extraout_x11_02)(param_2,uVar7,uVar13);
      (*pcVar1)(0x180224000);
      iVar5 = (*extraout_x11_03)(param_2,uVar7,uVar13);
      (*pcVar1)(0x180224000);
      iVar6 = (*extraout_x11_04)(param_2,uVar7,uVar13);
      uVar11 = FUN_180222cb8(uVar11,s_version_180236ed8);
      if ((int)uVar11 != 0) goto LAB_1801f3638;
      if (iVar6 == 0 && iVar5 != 0) {
        uVar7 = FUN_1801ef980(uVar11,param_2,uVar7,uVar13,&local_70,iVar5);
        uVar3 = uVar7 & 0xff;
        local_68 = (code *)(CONCAT44(local_68._4_4_,uVar7) & 0xffffffff000000ff);
      }
      uVar13 = uVar13 + 1;
      param_1 = local_60;
      uVar7 = uVar3;
    } while (uVar3 != 0);
    goto LAB_1801f3640;
  }
  iVar5 = FUN_180222cb8(lVar10,s_general_180237c80);
  if (iVar5 == 0) {
    uVar7 = FUN_1801efe20(local_58,param_1,param_2,uVar13,local_70);
LAB_1801f3430:
    uVar7 = uVar7 & 0xff;
  }
  else {
    iVar5 = FUN_180222cb8(lVar10,s_glide_180237c90);
    if (iVar5 == 0) {
      uVar7 = FUN_1801f04f8(local_58,param_1,param_2,uVar13,local_70);
      goto LAB_1801f3430;
    }
    iVar5 = FUN_180222cb8(lVar10,s_directx_180237c88);
    if (iVar5 == 0) {
      uVar7 = FUN_1801f0b18(local_58,param_1,param_2,uVar13,local_70);
      goto LAB_1801f3430;
    }
    iVar5 = FUN_180222cb8(lVar10,s_glideext_180237ca8);
    if (iVar5 != 0) {
      iVar5 = FUN_180222cb8(lVar10,s_directxext_180237c98);
      if (iVar5 == 0) {
        uVar7 = FUN_1801f1398(local_58,param_1,param_2,uVar13,local_70);
      }
      else {
        iVar5 = FUN_180222cb8(lVar10,s_generalext_180237cc0);
        if (iVar5 != 0) {
          iVar5 = FUN_180222cb8(lVar10,s_debug_180237cb4);
          if (iVar5 != 0) {
            return 0;
          }
          uVar7 = 1;
          uVar13 = 0;
          local_60 = param_1;
          do {
            pcVar1 = local_50;
            local_68 = local_50;
            (*local_50)(0x180224000);
            uVar3 = local_6c;
            uVar4 = (*extraout_x11_11)(param_2,local_6c);
            param_1 = local_60;
            if (uVar4 <= uVar13) break;
            (*pcVar1)(0x180224000);
            local_48 = (*extraout_x11_12)(param_2,uVar3,uVar13);
            (*pcVar1)(0x180224000);
            iVar5 = (*extraout_x11_13)(param_2,uVar3,uVar13);
            (*pcVar1)(0x180224000);
            iVar6 = (*extraout_x11_14)(param_2,uVar3,uVar13);
            uVar11 = local_48;
            uVar12 = FUN_180222cb8(local_48,&DAT_180237c38);
            if ((int)uVar12 == 0) {
              if ((iVar6 == 0) && (iVar5 != 0)) {
                lVar10 = local_60 + 0x1fb;
LAB_1801f352c:
                uVar7 = FUN_1801f2db8(uVar12,param_2,uVar3,uVar13,lVar10,iVar5);
                goto LAB_1801f3628;
              }
            }
            else {
              uVar12 = FUN_180222cb8(uVar11,s_warning_180237c50);
              uVar11 = local_48;
              if ((int)uVar12 == 0) {
                if ((iVar6 == 0) && (iVar5 != 0)) {
                  lVar10 = local_60 + 0x1ff;
                  goto LAB_1801f352c;
                }
              }
              else {
                uVar12 = FUN_180222cb8(local_48,s_error_180237c58);
                if ((int)uVar12 == 0) {
                  if ((iVar6 == 0) && (iVar5 != 0)) {
                    lVar10 = local_60 + 0x203;
                    goto LAB_1801f352c;
                  }
                }
                else {
                  iVar9 = FUN_180222cb8(uVar11,s_maxtracelevel_180237c60);
                  if (iVar9 == 0) {
                    if ((iVar6 == 0) && (iVar5 == 1)) {
                      (*local_68)(0x180224000);
                      uVar7 = (*extraout_x11_15)(param_2,uVar3,uVar13,0,local_60 + 0x207);
LAB_1801f3628:
                      uVar7 = uVar7 & 0xff;
                    }
                  }
                  else {
                    uVar11 = FUN_180222cb8(local_48,s_logtofile_180237c70);
                    if ((int)uVar11 != 0) goto LAB_1801f3638;
                    if ((iVar6 == 0) && (iVar5 != 0)) {
                      uVar7 = FUN_1801ef878(uVar11,param_2,uVar3,uVar13,local_60 + 0x20b,iVar5);
                      goto LAB_1801f3628;
                    }
                  }
                }
              }
            }
            uVar13 = uVar13 + 1;
            param_1 = local_60;
          } while (uVar7 != 0);
          goto LAB_1801f3640;
        }
        uVar7 = FUN_1801f2160(local_58,param_1,param_2,uVar13,local_70);
      }
      goto LAB_1801f3430;
    }
    uVar7 = 1;
    uVar13 = 0;
    local_60 = param_2;
    do {
      while( true ) {
        pcVar1 = local_50;
        lVar10 = local_60;
        (*local_50)(0x180224000);
        uVar3 = local_6c;
        uVar4 = (*extraout_x11_05)(lVar10,local_6c);
        param_2 = local_60;
        if (uVar4 <= uVar13) goto LAB_1801f3640;
        (*pcVar1)(0x180224000);
        local_48 = (*extraout_x11_06)(lVar10,uVar3,uVar13);
        (*pcVar1)(0x180224000);
        uVar8 = (*extraout_x11_07)(lVar10,uVar3,uVar13);
        local_68 = (code *)CONCAT44(local_68._4_4_,uVar8);
        (*pcVar1)(0x180224000);
        iVar5 = (*extraout_x11_08)(lVar10,uVar3,uVar13);
        iVar6 = FUN_180222cb8(local_48,s_ditheringeffect_180237308);
        if (iVar6 != 0) break;
        if (iVar5 != 0) {
LAB_1801f33c8:
          param_2 = local_60;
          uVar7 = 0;
          goto LAB_1801f3640;
        }
        bVar2 = (int)local_68 == 1;
        if (!bVar2) {
LAB_1801f336c:
          uVar7 = 1;
          if ((int)local_68 == 0 || bVar2) goto LAB_1801f33b8;
LAB_1801f3370:
          uVar7 = 0;
          goto LAB_1801f33b8;
        }
        (*pcVar1)(0x180224000);
        uVar11 = (*extraout_x11_09)(lVar10,uVar3,uVar13,0);
        iVar5 = FUN_180222cb8(uVar11,s_pure32bit_180237318);
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0xe7) = 0;
        }
        else {
          iVar5 = FUN_180222cb8(uVar11,s_dither2x2_180237338);
          if (iVar5 == 0) {
            uVar8 = 1;
          }
          else {
            iVar5 = FUN_180222cb8(uVar11,s_dither4x4_180237328);
            if (iVar5 != 0) goto LAB_1801f3370;
            uVar8 = 2;
          }
          *(undefined4 *)(param_1 + 0xe7) = uVar8;
        }
LAB_1801f3364:
        uVar7 = 1;
        uVar13 = uVar13 + 1;
      }
      iVar6 = FUN_180222cb8(local_48,s_dithering_180237348);
      if (iVar6 == 0) {
        if (iVar5 == 0) {
          bVar2 = false;
          if ((int)local_68 == 1) {
            (*pcVar1)(0x180224000);
            uVar11 = (*extraout_x11_10)(lVar10,uVar3,uVar13,0);
            iVar5 = FUN_180222cb8(uVar11,s_disabled_180237368);
            if (iVar5 == 0) {
              *(undefined4 *)(param_1 + 0xeb) = 0;
            }
            else {
              iVar5 = FUN_180222cb8(uVar11,s_appdriven_180236ec0);
              if (iVar5 == 0) {
                uVar8 = 1;
              }
              else {
                iVar5 = FUN_180222cb8(uVar11,s_forcealways_180237358);
                if (iVar5 != 0) goto LAB_1801f3370;
                uVar8 = 2;
              }
              *(undefined4 *)(param_1 + 0xeb) = uVar8;
            }
            goto LAB_1801f3364;
          }
          goto LAB_1801f336c;
        }
        goto LAB_1801f33c8;
      }
      iVar6 = FUN_180222cb8(local_48,s_ditherorderedmatrixsizescale_180237378);
      if (iVar6 == 0) {
        if (iVar5 != 0) goto LAB_1801f33c8;
        uVar7 = 1;
        if ((int)local_68 != 0) {
          uVar7 = FUN_1801ef980((ulonglong)local_68 & 0xffffffff,lVar10,uVar3,uVar13,param_1 + 0xef,
                                (ulonglong)local_68 & 0xffffffff);
          uVar7 = uVar7 & 0xff;
        }
      }
LAB_1801f33b8:
      uVar13 = uVar13 + 1;
      param_2 = local_60;
    } while (uVar7 != 0);
  }
  goto LAB_1801f3640;
LAB_1801f3638:
  param_1 = local_60;
  uVar7 = 0;
LAB_1801f3640:
  local_6c = local_6c + 1;
  if (uVar7 == 0) {
    return 0;
  }
  goto LAB_1801f2ea4;
}

