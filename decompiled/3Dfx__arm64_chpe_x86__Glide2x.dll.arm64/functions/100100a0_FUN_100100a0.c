/*
 * FUN_100100a0 at 100100a0
 * undefined FUN_100100a0(void)
 * Address ranges: 100100a0-10010973
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100100a0(int param_1,undefined4 param_2,undefined4 param_3)

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
      local_74 = FUN_1008d968;
      local_6c = FUN_1008d968;
      local_64 = FUN_1008d968;
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
        uVar10 = FUN_1007a140(uVar6,s_version_10095b18);
        pcVar13 = local_84;
        if ((int)uVar10 != 0) goto LAB_10010274;
        cVar2 = cVar11;
        if (iVar7 == 0 && iVar4 != 0) {
          local_8c = FUN_1000c5e8(uVar10,uVar8,uVar14,uVar3,&local_88,iVar4);
          cVar2 = local_8c;
          cVar12 = local_8c;
        }
        uVar3 = uVar3 + 1;
        pcVar13 = local_84;
        cVar11 = cVar2;
      } while (cVar2 != '\0');
    }
    else {
      iVar7 = FUN_1007a140(iVar4,s_general_100968b0);
      if (iVar7 == 0) {
        cVar2 = FUN_1000ccb0(local_80,param_1,uVar8,uVar14,local_88);
      }
      else {
        iVar7 = FUN_1007a140(iVar4,s_glide_100968b8);
        if (iVar7 == 0) {
          cVar2 = FUN_1000d448(local_80,param_1,uVar8,uVar14,local_88);
        }
        else {
          iVar7 = FUN_1007a140(iVar4,s_directx_100968c0);
          if (iVar7 == 0) {
            cVar2 = FUN_1000da60(local_80,param_1,uVar8,uVar14,local_88);
          }
          else {
            iVar7 = FUN_1007a140(iVar4,s_glideext_100968c8);
            uVar6 = local_7c;
            if (iVar7 == 0) {
              cVar2 = '\x01';
              uVar3 = 0;
LAB_100103f0:
              (*pcVar13)();
              uVar5 = (*extraout_w11_05)(uVar6,uVar14);
              if (uVar5 <= uVar3) goto LAB_10010944;
              (*pcVar13)();
              uVar8 = (*extraout_w11_06)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              uVar5 = (*extraout_w11_07)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              iVar4 = (*extraout_w11_08)(uVar6,uVar14,uVar3);
              iVar7 = FUN_1007a140(uVar8,s_ditheringeffect_10095f40);
              if (iVar7 == 0) {
                if (iVar4 != 0) goto LAB_10010274;
                if (uVar5 == 1) {
                  (*pcVar13)();
                  uVar8 = (*extraout_w11_09)(uVar6,uVar14,uVar3,0);
                  iVar4 = FUN_1007a140(uVar8,s_pure32bit_10095f50);
                  if (iVar4 == 0) {
                    puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_100105dc:
                    *puVar1 = 0;
                  }
                  else {
                    iVar4 = FUN_1007a140(uVar8,s_dither2x2_10095f60);
                    if (iVar4 == 0) {
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_10010600:
                      uVar8 = 1;
                    }
                    else {
                      iVar4 = FUN_1007a140(uVar8,s_dither4x4_10095f70);
                      if (iVar4 != 0) goto LAB_10010638;
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_10010624:
                      uVar8 = 2;
                    }
                    *puVar1 = uVar8;
                  }
                  cVar2 = '\x01';
                  uVar3 = uVar3 + 1;
                  goto LAB_100103f0;
                }
LAB_10010634:
                cVar2 = '\x01';
                if (1 < uVar5) {
LAB_10010638:
                  cVar2 = '\0';
                }
LAB_10010680:
                uVar3 = uVar3 + 1;
                if (cVar2 == '\0') goto LAB_10010944;
                goto LAB_100103f0;
              }
              iVar7 = FUN_1007a140(uVar8,s_dithering_10095f80);
              if (iVar7 != 0) {
                uVar10 = FUN_1007a140(uVar8,s_ditherorderedmatrixsizescale_10095fb0);
                if ((int)uVar10 == 0) {
                  if (iVar4 != 0) goto LAB_10010274;
                  cVar2 = '\x01';
                  if (uVar5 != 0) {
                    cVar2 = FUN_1000c5e8(uVar10,uVar6,uVar14,uVar3,param_1 + 0xef,uVar5);
                  }
                }
                goto LAB_10010680;
              }
              if (iVar4 == 0) {
                if (uVar5 != 1) goto LAB_10010634;
                (*pcVar13)();
                uVar8 = (*extraout_w11_10)(uVar6,uVar14,uVar3,0);
                iVar4 = FUN_1007a140(uVar8,s_disabled_10095f90);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_100105dc;
                }
                iVar4 = FUN_1007a140(uVar8,s_appdriven_10095af8);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_10010600;
                }
                iVar4 = FUN_1007a140(uVar8,s_forcealways_10095fa0);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_10010624;
                }
                goto LAB_10010638;
              }
LAB_10010274:
              cVar2 = '\0';
            }
            else {
              iVar7 = FUN_1007a140(iVar4,s_directxext_100968d8);
              if (iVar7 == 0) {
                cVar2 = FUN_1000e338(local_80,param_1,uVar8,uVar14,local_88);
              }
              else {
                iVar7 = FUN_1007a140(iVar4,s_generalext_100968e8);
                if (iVar7 == 0) {
                  cVar2 = FUN_1000f1c0(local_80,param_1,uVar8,uVar14,local_88);
                }
                else {
                  iVar4 = FUN_1007a140(iVar4,s_debug_100968f4);
                  uVar8 = local_7c;
                  if (iVar4 != 0) {
                    return '\0';
                  }
                  local_60 = FUN_1008d8c8;
                  local_68 = FUN_1008d968;
                  local_70 = FUN_1008d968;
                  local_78 = FUN_1008d968;
                  local_50 = param_1 + 0x203;
                  local_58 = param_1 + 0x1fb;
                  local_54 = param_1 + 0x1ff;
                  local_4c = FUN_1008dab0;
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
                    uVar10 = FUN_1007a140(uVar6,0x10096874);
                    if ((int)uVar10 == 0) {
                      iVar9 = local_58;
                      if (iVar7 == 0 && iVar4 != 0) {
LAB_10010838:
                        cVar2 = FUN_1000ffe0(uVar10,uVar8,uVar14,uVar3,iVar9,iVar4);
                      }
                    }
                    else {
                      uVar10 = FUN_1007a140(uVar6,s_warning_10096880);
                      if ((int)uVar10 == 0) {
                        iVar9 = local_54;
                        if (iVar7 == 0 && iVar4 != 0) goto LAB_10010838;
                      }
                      else {
                        uVar10 = FUN_1007a140(uVar6,s_error_10096888);
                        if ((int)uVar10 == 0) {
                          iVar9 = local_50;
                          if (iVar7 == 0 && iVar4 != 0) goto LAB_10010838;
                        }
                        else {
                          iVar9 = FUN_1007a140(uVar6,s_maxtracelevel_10096890);
                          if (iVar9 == 0) {
                            if (iVar7 == 0 && iVar4 == 1) {
                              (*local_48)();
                              cVar2 = (*extraout_w11_15)(uVar8,uVar14,uVar3,0,local_44);
                            }
                          }
                          else {
                            uVar10 = FUN_1007a140(uVar6,s_logtofile_100968a0);
                            if ((int)uVar10 != 0) {
                              cVar2 = '\0';
                              pcVar13 = local_84;
                              break;
                            }
                            if (iVar7 == 0 && iVar4 != 0) {
                              cVar2 = FUN_1000c4d0(uVar10,uVar8,uVar14,uVar3,param_1 + 0x20b,iVar4);
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
LAB_10010944:
    uVar14 = uVar14 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

