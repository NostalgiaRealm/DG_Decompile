/*
 * FUN_100530e0 at 100530e0
 * undefined FUN_100530e0(void)
 * Address ranges: 100530e0-100539b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100530e0(int param_1,undefined4 param_2,undefined4 param_3)

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
      local_74 = FUN_10097b00;
      local_6c = FUN_10097b00;
      local_64 = FUN_10097b00;
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
        uVar10 = FUN_10083500(uVar6,s_version_100a0b70);
        pcVar13 = local_84;
        if ((int)uVar10 != 0) goto LAB_100532b4;
        cVar2 = cVar11;
        if (iVar7 == 0 && iVar4 != 0) {
          local_8c = FUN_1004f628(uVar10,uVar8,uVar14,uVar3,&local_88,iVar4);
          cVar2 = local_8c;
          cVar12 = local_8c;
        }
        uVar3 = uVar3 + 1;
        pcVar13 = local_84;
        cVar11 = cVar2;
      } while (cVar2 != '\0');
    }
    else {
      iVar7 = FUN_10083500(iVar4,s_general_100a1908);
      if (iVar7 == 0) {
        cVar2 = FUN_1004fcf0(local_80,param_1,uVar8,uVar14,local_88);
      }
      else {
        iVar7 = FUN_10083500(iVar4,s_glide_100a1910);
        if (iVar7 == 0) {
          cVar2 = FUN_10050488(local_80,param_1,uVar8,uVar14,local_88);
        }
        else {
          iVar7 = FUN_10083500(iVar4,s_directx_100a1918);
          if (iVar7 == 0) {
            cVar2 = FUN_10050aa0(local_80,param_1,uVar8,uVar14,local_88);
          }
          else {
            iVar7 = FUN_10083500(iVar4,s_glideext_100a1920);
            uVar6 = local_7c;
            if (iVar7 == 0) {
              cVar2 = '\x01';
              uVar3 = 0;
LAB_10053430:
              (*pcVar13)();
              uVar5 = (*extraout_w11_05)(uVar6,uVar14);
              if (uVar5 <= uVar3) goto LAB_10053984;
              (*pcVar13)();
              uVar8 = (*extraout_w11_06)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              uVar5 = (*extraout_w11_07)(uVar6,uVar14,uVar3);
              (*pcVar13)();
              iVar4 = (*extraout_w11_08)(uVar6,uVar14,uVar3);
              iVar7 = FUN_10083500(uVar8,s_ditheringeffect_100a0f98);
              if (iVar7 == 0) {
                if (iVar4 != 0) goto LAB_100532b4;
                if (uVar5 == 1) {
                  (*pcVar13)();
                  uVar8 = (*extraout_w11_09)(uVar6,uVar14,uVar3,0);
                  iVar4 = FUN_10083500(uVar8,s_pure32bit_100a0fa8);
                  if (iVar4 == 0) {
                    puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_1005361c:
                    *puVar1 = 0;
                  }
                  else {
                    iVar4 = FUN_10083500(uVar8,s_dither2x2_100a0fb8);
                    if (iVar4 == 0) {
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_10053640:
                      uVar8 = 1;
                    }
                    else {
                      iVar4 = FUN_10083500(uVar8,s_dither4x4_100a0fc8);
                      if (iVar4 != 0) goto LAB_10053678;
                      puVar1 = (undefined4 *)(param_1 + 0xe7);
LAB_10053664:
                      uVar8 = 2;
                    }
                    *puVar1 = uVar8;
                  }
                  cVar2 = '\x01';
                  uVar3 = uVar3 + 1;
                  goto LAB_10053430;
                }
LAB_10053674:
                cVar2 = '\x01';
                if (1 < uVar5) {
LAB_10053678:
                  cVar2 = '\0';
                }
LAB_100536c0:
                uVar3 = uVar3 + 1;
                if (cVar2 == '\0') goto LAB_10053984;
                goto LAB_10053430;
              }
              iVar7 = FUN_10083500(uVar8,s_dithering_100a0fd8);
              if (iVar7 != 0) {
                uVar10 = FUN_10083500(uVar8,s_ditherorderedmatrixsizescale_100a1008);
                if ((int)uVar10 == 0) {
                  if (iVar4 != 0) goto LAB_100532b4;
                  cVar2 = '\x01';
                  if (uVar5 != 0) {
                    cVar2 = FUN_1004f628(uVar10,uVar6,uVar14,uVar3,param_1 + 0xef,uVar5);
                  }
                }
                goto LAB_100536c0;
              }
              if (iVar4 == 0) {
                if (uVar5 != 1) goto LAB_10053674;
                (*pcVar13)();
                uVar8 = (*extraout_w11_10)(uVar6,uVar14,uVar3,0);
                iVar4 = FUN_10083500(uVar8,s_disabled_100a0fe8);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_1005361c;
                }
                iVar4 = FUN_10083500(uVar8,s_appdriven_100a0b50);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_10053640;
                }
                iVar4 = FUN_10083500(uVar8,s_forcealways_100a0ff8);
                if (iVar4 == 0) {
                  puVar1 = (undefined4 *)(param_1 + 0xeb);
                  goto LAB_10053664;
                }
                goto LAB_10053678;
              }
LAB_100532b4:
              cVar2 = '\0';
            }
            else {
              iVar7 = FUN_10083500(iVar4,s_directxext_100a1930);
              if (iVar7 == 0) {
                cVar2 = FUN_10051378(local_80,param_1,uVar8,uVar14,local_88);
              }
              else {
                iVar7 = FUN_10083500(iVar4,s_generalext_100a1940);
                if (iVar7 == 0) {
                  cVar2 = FUN_10052200(local_80,param_1,uVar8,uVar14,local_88);
                }
                else {
                  iVar4 = FUN_10083500(iVar4,s_debug_100a194c);
                  uVar8 = local_7c;
                  if (iVar4 != 0) {
                    return '\0';
                  }
                  local_60 = FUN_10097998;
                  local_68 = FUN_10097b00;
                  local_70 = FUN_10097b00;
                  local_78 = FUN_10097b00;
                  local_50 = param_1 + 0x203;
                  local_58 = param_1 + 0x1fb;
                  local_54 = param_1 + 0x1ff;
                  local_4c = FUN_10097c48;
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
                    uVar10 = FUN_10083500(uVar6,0x100a18cc);
                    if ((int)uVar10 == 0) {
                      iVar9 = local_58;
                      if (iVar7 == 0 && iVar4 != 0) {
LAB_10053878:
                        cVar2 = FUN_10053020(uVar10,uVar8,uVar14,uVar3,iVar9,iVar4);
                      }
                    }
                    else {
                      uVar10 = FUN_10083500(uVar6,s_warning_100a18d8);
                      if ((int)uVar10 == 0) {
                        iVar9 = local_54;
                        if (iVar7 == 0 && iVar4 != 0) goto LAB_10053878;
                      }
                      else {
                        uVar10 = FUN_10083500(uVar6,s_error_100a18e0);
                        if ((int)uVar10 == 0) {
                          iVar9 = local_50;
                          if (iVar7 == 0 && iVar4 != 0) goto LAB_10053878;
                        }
                        else {
                          iVar9 = FUN_10083500(uVar6,s_maxtracelevel_100a18e8);
                          if (iVar9 == 0) {
                            if (iVar7 == 0 && iVar4 == 1) {
                              (*local_48)();
                              cVar2 = (*extraout_w11_15)(uVar8,uVar14,uVar3,0,local_44);
                            }
                          }
                          else {
                            uVar10 = FUN_10083500(uVar6,s_logtofile_100a18f8);
                            if ((int)uVar10 != 0) {
                              cVar2 = '\0';
                              pcVar13 = local_84;
                              break;
                            }
                            if (iVar7 == 0 && iVar4 != 0) {
                              cVar2 = FUN_1004f510(uVar10,uVar8,uVar14,uVar3,param_1 + 0x20b,iVar4);
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
LAB_10053984:
    uVar14 = uVar14 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

