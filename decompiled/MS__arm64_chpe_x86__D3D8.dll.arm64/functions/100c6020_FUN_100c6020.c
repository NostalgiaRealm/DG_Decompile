/*
 * FUN_100c6020 at 100c6020
 * undefined FUN_100c6020(void)
 * Address ranges: 100c6020-100c68f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100c6020(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  char cVar11;
  char cVar12;
  code *pcVar13;
  uint uVar14;
  char local_8c;
  int local_88;
  code *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  code *local_74;
  code *local_70;
  code *local_6c;
  code *local_68;
  code *local_64;
  code *local_60;
  code *local_5c;
  int local_58;
  int local_54;
  int local_50;
  code *local_4c;
  code *local_48;
  int local_44;
  
  local_88 = 0;
  cVar2 = '\x01';
  uVar14 = 0;
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_80 = param_3;
  local_7c = param_2;
  do {
    uVar8 = local_7c;
    (*pcVar13)();
    uVar3 = (*extraout_w11)(uVar8);
    if (uVar3 <= uVar14) {
      return cVar2;
    }
    (*pcVar13)();
    iVar4 = (*extraout_w11_00)(uVar8,uVar14);
    if (iVar4 == 0) {
      local_8c = '\0';
      local_74 = FUN_1011fc08;
      local_6c = FUN_1011fc08;
      local_64 = FUN_1011fc08;
      cVar12 = '\x01';
      uVar3 = 0;
      local_84 = pcVar13;
      local_78 = pcVar13;
      local_70 = pcVar13;
      local_68 = pcVar13;
      local_60 = pcVar13;
      cVar11 = '\x01';
      do {
        (*local_78)();
        uVar5 = (*extraout_w11_01)(uVar8,uVar14);
        if (uVar5 <= uVar3) {
          pcVar13 = local_84;
          cVar2 = cVar12;
          if (local_8c == '\0') {
            local_88 = 0x287;
          }
          else if (((((((local_88 != 0x287) && (local_88 != 0x286)) && (local_88 != 0x285)) &&
                     ((local_88 != 0x283 && (local_88 != 0x282)))) &&
                    (((local_88 != 0x281 && ((local_88 != 0x280 && (local_88 != 0x279)))) &&
                     (local_88 != 0x278)))) &&
                   ((((local_88 != 0x277 && (local_88 != 0x276)) && (local_88 != 0x275)) &&
                    (((local_88 != 0x274 && (local_88 != 0x273)) &&
                     ((local_88 != 0x270 && ((local_88 != 0x263 && (local_88 != 0x262)))))))))) &&
                  ((local_88 != 0x261 && ((local_88 != 0x260 && (cVar2 = '\0', local_88 == 0x255))))
                  )) {
            cVar2 = cVar11;
          }
          break;
        }
        (*local_70)();
        uVar6 = (*extraout_w11_02)(uVar8,uVar14,uVar3);
        (*local_68)();
        iVar4 = (*extraout_w11_03)(uVar8,uVar14,uVar3);
        (*local_60)();
        iVar7 = (*extraout_w11_04)(uVar8,uVar14,uVar3);
        uVar10 = FUN_100fef80(uVar6,s_version_1012d3b0);
        pcVar13 = local_84;
        if ((int)uVar10 != 0) goto LAB_100c61f4;
        cVar2 = cVar11;
        if (iVar7 == 0 && iVar4 != 0) {
          local_8c = FUN_100c2568(uVar10,uVar8,uVar14,uVar3,&local_88,iVar4);
          cVar2 = local_8c;
          cVar12 = local_8c;
        }
        uVar3 = uVar3 + 1;
        pcVar13 = local_84;
        cVar11 = cVar2;
      } while (cVar2 != '\0');
    }
    else {
      iVar7 = FUN_100fef80(iVar4,s_general_1012e148);
      if (iVar7 == 0) {
        cVar2 = FUN_100c2c30(local_80,param_1,uVar8,uVar14,local_88);
      }
      else {
        iVar7 = FUN_100fef80(iVar4,s_glide_1012e150);
        if (iVar7 == 0) {
          cVar2 = FUN_100c33c8(local_80,param_1,uVar8,uVar14,local_88);
        }
        else {
          iVar7 = FUN_100fef80(iVar4,s_directx_1012e158);
          if (iVar7 == 0) {
            cVar2 = FUN_100c39e0(local_80,param_1,uVar8,uVar14,local_88);
          }
          else {
            iVar7 = FUN_100fef80(iVar4,s_glideext_1012e160);
            uVar6 = local_7c;
            if (iVar7 == 0) {
              cVar2 = '\x01';
              uVar3 = 0;
LAB_100c6370:
              (*pcVar13)();
              uVar5 = (*extraout_w11_05)(uVar6,uVar14);
              if (uVar5 <= uVar3) goto LAB_100c68c4;
              (*pcVar13)();
              uVar8 = (*extraout_w11_06)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              uVar5 = (*extraout_w11_07)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              iVar4 = (*extraout_w11_08)(uVar6,uVar14,uVar3);
              iVar7 = FUN_100fef80(uVar8,s_ditheringeffect_1012d7d0);
              if (iVar7 == 0) {
                if (iVar4 != 0) goto LAB_100c61f4;
                if (uVar5 == 1) {
                  (*pcVar13)();
                  uVar8 = (*extraout_w11_09)(uVar6,uVar14,uVar3,0);
                  iVar4 = FUN_100fef80(uVar8,s_pure32bit_1012d7e0);
                  if (iVar4 == 0) {
                    puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_100c655c:
                    *puVar1 = 0;
                  }
                  else {
                    iVar4 = FUN_100fef80(uVar8,s_dither2x2_1012d7f0);
                    if (iVar4 == 0) {
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_100c6580:
                      uVar8 = 1;
                    }
                    else {
                      iVar4 = FUN_100fef80(uVar8,s_dither4x4_1012d800);
                      if (iVar4 != 0) goto LAB_100c65b8;
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_100c65a4:
                      uVar8 = 2;
                    }
                    *puVar1 = uVar8;
                  }
                  cVar2 = '\x01';
                  uVar3 = uVar3 + 1;
                  goto LAB_100c6370;
                }
LAB_100c65b4:
                cVar2 = '\x01';
                if (1 < uVar5) {
LAB_100c65b8:
                  cVar2 = '\0';
                }
LAB_100c6600:
                uVar3 = uVar3 + 1;
                if (cVar2 == '\0') goto LAB_100c68c4;
                goto LAB_100c6370;
              }
              iVar7 = FUN_100fef80(uVar8,s_dithering_1012d810);
              if (iVar7 != 0) {
                uVar10 = FUN_100fef80(uVar8,s_ditherorderedmatrixsizescale_1012d840);
                if ((int)uVar10 == 0) {
                  if (iVar4 != 0) goto LAB_100c61f4;
                  cVar2 = '\x01';
                  if (uVar5 != 0) {
                    cVar2 = FUN_100c2568(uVar10,uVar6,uVar14,uVar3,param_1 + 0xef,uVar5);
                  }
                }
                goto LAB_100c6600;
              }
              if (iVar4 == 0) {
                if (uVar5 != 1) goto LAB_100c65b4;
                (*pcVar13)();
                uVar8 = (*extraout_w11_10)(uVar6,uVar14,uVar3,0);
                iVar4 = FUN_100fef80(uVar8,s_disabled_1012d820);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_100c655c;
                }
                iVar4 = FUN_100fef80(uVar8,s_appdriven_1012d390);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_100c6580;
                }
                iVar4 = FUN_100fef80(uVar8,s_forcealways_1012d830);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_100c65a4;
                }
                goto LAB_100c65b8;
              }
LAB_100c61f4:
              cVar2 = '\0';
            }
            else {
              iVar7 = FUN_100fef80(iVar4,s_directxext_1012e170);
              if (iVar7 == 0) {
                cVar2 = FUN_100c42b8(local_80,param_1,uVar8,uVar14,local_88);
              }
              else {
                iVar7 = FUN_100fef80(iVar4,s_generalext_1012e180);
                if (iVar7 == 0) {
                  cVar2 = FUN_100c5140(local_80,param_1,uVar8,uVar14,local_88);
                }
                else {
                  iVar4 = FUN_100fef80(iVar4,s_debug_1012e18c);
                  uVar8 = local_7c;
                  if (iVar4 != 0) {
                    return '\0';
                  }
                  local_60 = FUN_1011fac0;
                  local_68 = FUN_1011fc08;
                  local_70 = FUN_1011fc08;
                  local_78 = FUN_1011fc08;
                  local_50 = param_1 + 0x203;
                  local_58 = param_1 + 0x1fb;
                  local_54 = param_1 + 0x1ff;
                  local_4c = FUN_1011fdf8;
                  local_44 = param_1 + 0x207;
                  cVar2 = '\x01';
                  uVar3 = 0;
                  local_84 = pcVar13;
                  local_74 = pcVar13;
                  local_6c = pcVar13;
                  local_64 = pcVar13;
                  local_5c = pcVar13;
                  local_48 = pcVar13;
                  do {
                    (*local_64)();
                    uVar5 = (*extraout_w11_11)(uVar8,uVar14);
                    pcVar13 = local_84;
                    if (uVar5 <= uVar3) break;
                    (*local_6c)();
                    uVar6 = (*extraout_w11_12)(uVar8,uVar14,uVar3);
                    (*local_74)();
                    iVar4 = (*extraout_w11_13)(uVar8,uVar14,uVar3);
                    (*local_5c)();
                    iVar7 = (*extraout_w11_14)(uVar8,uVar14,uVar3);
                    uVar10 = FUN_100fef80(uVar6,0x1012e10c);
                    if ((int)uVar10 == 0) {
                      iVar9 = local_58;
                      if (iVar7 == 0 && iVar4 != 0) {
LAB_100c67b8:
                        cVar2 = FUN_100c5f60(uVar10,uVar8,uVar14,uVar3,iVar9,iVar4);
                      }
                    }
                    else {
                      uVar10 = FUN_100fef80(uVar6,s_warning_1012e118);
                      if ((int)uVar10 == 0) {
                        iVar9 = local_54;
                        if (iVar7 == 0 && iVar4 != 0) goto LAB_100c67b8;
                      }
                      else {
                        uVar10 = FUN_100fef80(uVar6,s_error_1012e120);
                        if ((int)uVar10 == 0) {
                          iVar9 = local_50;
                          if (iVar7 == 0 && iVar4 != 0) goto LAB_100c67b8;
                        }
                        else {
                          iVar9 = FUN_100fef80(uVar6,s_maxtracelevel_1012e128);
                          if (iVar9 == 0) {
                            if (iVar7 == 0 && iVar4 == 1) {
                              (*local_48)();
                              cVar2 = (*extraout_w11_15)(uVar8,uVar14,uVar3,0,local_44);
                            }
                          }
                          else {
                            uVar10 = FUN_100fef80(uVar6,s_logtofile_1012e138);
                            if ((int)uVar10 != 0) {
                              cVar2 = '\0';
                              pcVar13 = local_84;
                              break;
                            }
                            if (iVar7 == 0 && iVar4 != 0) {
                              cVar2 = FUN_100c2450(uVar10,uVar8,uVar14,uVar3,param_1 + 0x20b,iVar4);
                            }
                          }
                        }
                      }
                    }
                    uVar3 = uVar3 + 1;
                    pcVar13 = local_84;
                  } while (cVar2 != '\0');
                }
              }
            }
          }
        }
      }
    }
LAB_100c68c4:
    uVar14 = uVar14 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

