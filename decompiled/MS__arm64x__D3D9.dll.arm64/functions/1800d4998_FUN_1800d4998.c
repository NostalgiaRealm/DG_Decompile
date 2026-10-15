/*
 * FUN_1800d4998 at 1800d4998
 * undefined FUN_1800d4998(void)
 * Address ranges: 1800d4998-1800d508f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d4998(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  int local_60 [2];
  undefined8 local_58;
  
  local_60[0] = 0;
  cVar1 = '\x01';
  uVar12 = 0;
  local_58 = param_3;
LAB_1800d49cc:
  uVar3 = (**(code **)(*param_2 + 0x28))(param_2);
  if (uVar3 <= uVar12) {
    return cVar1;
  }
  lVar8 = (**(code **)(*param_2 + 0x30))(param_2,uVar12);
  if (lVar8 == 0) {
    cVar2 = '\0';
    uVar3 = 0;
    cVar11 = '\x01';
    do {
      uVar4 = (**(code **)(*param_2 + 0x38))(param_2,uVar12);
      cVar1 = cVar11;
      if (uVar4 <= uVar3) {
        if (cVar2 == '\0') {
          local_60[0] = 0x287;
        }
        else if ((((((local_60[0] != 0x287) && (local_60[0] != 0x286)) && (local_60[0] != 0x285)) &&
                  ((local_60[0] != 0x283 && (local_60[0] != 0x282)))) &&
                 ((((local_60[0] != 0x281 && ((local_60[0] != 0x280 && (local_60[0] != 0x279)))) &&
                   (local_60[0] != 0x278)) &&
                  ((((local_60[0] != 0x277 && (local_60[0] != 0x276)) && (local_60[0] != 0x275)) &&
                   (((local_60[0] != 0x274 && (local_60[0] != 0x273)) &&
                    ((local_60[0] != 0x270 && ((local_60[0] != 0x263 && (local_60[0] != 0x262)))))))
                   ))))) &&
                ((local_60[0] != 0x261 &&
                 ((local_60[0] != 0x260 && (cVar1 = '\0', local_60[0] == 0x255)))))) {
          cVar1 = cVar11;
        }
        break;
      }
      uVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar12,uVar3);
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2,uVar12,uVar3);
      iVar6 = (**(code **)(*param_2 + 0x60))(param_2,uVar12,uVar3);
      iVar7 = func_0x000180222cb8(uVar9,s_version_18023a0e8);
      if (iVar7 != 0) goto LAB_1800d505c;
      if (iVar6 == 0 && iVar5 != 0) {
        if ((iVar5 == 1) &&
           (cVar1 = (**(code **)(*param_2 + 0x58))(param_2,uVar12,uVar3,0,local_60), cVar1 != '\0'))
        {
          cVar1 = '\x01';
          cVar2 = cVar1;
        }
        else {
          cVar1 = '\0';
          cVar2 = cVar1;
        }
      }
      uVar3 = uVar3 + 1;
      cVar11 = cVar1;
    } while (cVar1 != '\0');
  }
  else {
    iVar5 = func_0x000180222cb8(lVar8,s_general_18023ae90);
    if (iVar5 == 0) {
      cVar1 = FUN_1800d1d00(local_58,param_1,param_2,uVar12,local_60[0]);
    }
    else {
      iVar5 = func_0x000180222cb8(lVar8,s_glide_18023aea0);
      if (iVar5 == 0) {
        cVar1 = FUN_1800d2368(local_58,param_1,param_2,uVar12,local_60[0]);
      }
      else {
        iVar5 = func_0x000180222cb8(lVar8,s_directx_18023ae98);
        if (iVar5 == 0) {
          cVar1 = FUN_1800d2928(local_58,param_1,param_2,uVar12,local_60[0]);
        }
        else {
          iVar5 = func_0x000180222cb8(lVar8,s_glideext_18023aeb8);
          if (iVar5 == 0) {
            cVar1 = '\x01';
            uVar3 = 0;
            do {
              while( true ) {
                uVar4 = (**(code **)(*param_2 + 0x38))(param_2,uVar12);
                if (uVar4 <= uVar3) goto LAB_1800d5060;
                uVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar12,uVar3);
                uVar4 = (**(code **)(*param_2 + 0x48))(param_2,uVar12,uVar3);
                iVar5 = (**(code **)(*param_2 + 0x60))(param_2,uVar12,uVar3);
                iVar6 = func_0x000180222cb8(uVar9,s_ditheringeffect_18023a518);
                if (iVar6 != 0) break;
                if (iVar5 != 0) {
LAB_1800d4e58:
                  cVar1 = '\0';
                  goto LAB_1800d5060;
                }
                if (uVar4 != 1) {
LAB_1800d4d58:
                  cVar1 = '\x01';
                  if (1 < uVar4) {
LAB_1800d4d5c:
                    cVar1 = '\0';
                  }
                  goto LAB_1800d4d60;
                }
                uVar9 = (**(code **)(*param_2 + 0x50))(param_2,uVar12,uVar3,0);
                iVar5 = func_0x000180222cb8(uVar9,s_pure32bit_18023a528);
                if (iVar5 == 0) {
                  *(undefined4 *)(param_1 + 0xe7) = 0;
                }
                else {
                  iVar5 = func_0x000180222cb8(uVar9,s_dither2x2_18023a548);
                  if (iVar5 == 0) {
                    *(undefined4 *)(param_1 + 0xe7) = 1;
                  }
                  else {
                    iVar5 = func_0x000180222cb8(uVar9,s_dither4x4_18023a538);
                    if (iVar5 != 0) goto LAB_1800d4d5c;
                    *(undefined4 *)(param_1 + 0xe7) = 2;
                  }
                }
LAB_1800d4dfc:
                cVar1 = '\x01';
                uVar3 = uVar3 + 1;
              }
              iVar6 = func_0x000180222cb8(uVar9,s_dithering_18023a558);
              if (iVar6 == 0) {
                if (iVar5 != 0) goto LAB_1800d4e58;
                if (uVar4 != 1) goto LAB_1800d4d58;
                uVar9 = (**(code **)(*param_2 + 0x50))(param_2,uVar12,uVar3,0);
                iVar5 = func_0x000180222cb8(uVar9,s_disabled_18023a578);
                if (iVar5 == 0) {
                  *(undefined4 *)(param_1 + 0xeb) = 0;
                }
                else {
                  iVar5 = func_0x000180222cb8(uVar9,s_appdriven_18023a0d0);
                  if (iVar5 == 0) {
                    *(undefined4 *)(param_1 + 0xeb) = 1;
                  }
                  else {
                    iVar5 = func_0x000180222cb8(uVar9,s_forcealways_18023a568);
                    if (iVar5 != 0) goto LAB_1800d4d5c;
                    *(undefined4 *)(param_1 + 0xeb) = 2;
                  }
                }
                goto LAB_1800d4dfc;
              }
              iVar6 = func_0x000180222cb8(uVar9,s_ditherorderedmatrixsizescale_18023a588);
              if (iVar6 == 0) {
                if (iVar5 != 0) goto LAB_1800d4e58;
                cVar1 = '\x01';
                if ((uVar4 != 0) &&
                   ((uVar4 != 1 ||
                    (cVar2 = (**(code **)(*param_2 + 0x58))(param_2,uVar12,uVar3,0,param_1 + 0xef),
                    cVar2 == '\0')))) goto LAB_1800d4d5c;
              }
LAB_1800d4d60:
              uVar3 = uVar3 + 1;
            } while (cVar1 != '\0');
          }
          else {
            iVar5 = func_0x000180222cb8(lVar8,s_directxext_18023aea8);
            if (iVar5 == 0) {
              cVar1 = FUN_1800d30e0(local_58,param_1,param_2,uVar12,local_60[0]);
            }
            else {
              iVar5 = func_0x000180222cb8(lVar8,s_generalext_18023aed0);
              if (iVar5 == 0) {
                cVar1 = FUN_1800d3e08(local_58,param_1,param_2,uVar12,local_60[0]);
              }
              else {
                iVar5 = func_0x000180222cb8(lVar8,s_debug_18023aec4);
                if (iVar5 != 0) {
                  return '\0';
                }
                cVar1 = '\x01';
                uVar3 = 0;
                do {
                  uVar4 = (**(code **)(*param_2 + 0x38))(param_2,uVar12);
                  if (uVar4 <= uVar3) break;
                  uVar9 = (**(code **)(*param_2 + 0x40))(param_2,uVar12,uVar3);
                  iVar5 = (**(code **)(*param_2 + 0x48))(param_2,uVar12,uVar3);
                  iVar6 = (**(code **)(*param_2 + 0x60))(param_2,uVar12,uVar3);
                  uVar10 = func_0x000180222cb8(uVar9,&DAT_18023ae48);
                  if ((int)uVar10 == 0) {
                    if ((iVar6 == 0) && (iVar5 != 0)) {
                      lVar8 = param_1 + 0x1fb;
LAB_1800d4f74:
                      cVar1 = FUN_1800d48f8(uVar10,param_2,uVar12,uVar3,lVar8,iVar5);
                    }
                  }
                  else {
                    uVar10 = func_0x000180222cb8(uVar9,s_warning_18023ae60);
                    if ((int)uVar10 == 0) {
                      if ((iVar6 == 0) && (iVar5 != 0)) {
                        lVar8 = param_1 + 0x1ff;
                        goto LAB_1800d4f74;
                      }
                    }
                    else {
                      uVar10 = func_0x000180222cb8(uVar9,s_error_18023ae68);
                      if ((int)uVar10 == 0) {
                        if ((iVar6 == 0) && (iVar5 != 0)) {
                          lVar8 = param_1 + 0x203;
                          goto LAB_1800d4f74;
                        }
                      }
                      else {
                        iVar7 = func_0x000180222cb8(uVar9,s_maxtracelevel_18023ae70);
                        if (iVar7 == 0) {
                          if ((iVar6 == 0) && (iVar5 == 1)) {
                            cVar1 = (**(code **)(*param_2 + 0x58))
                                              (param_2,uVar12,uVar3,0,param_1 + 0x207);
                          }
                        }
                        else {
                          uVar9 = func_0x000180222cb8(uVar9,s_logtofile_18023ae80);
                          if ((int)uVar9 != 0) goto LAB_1800d505c;
                          if ((iVar6 == 0) && (iVar5 != 0)) {
                            cVar1 = FUN_1800d1868(uVar9,param_2,uVar12,uVar3,param_1 + 0x20b,iVar5);
                          }
                        }
                      }
                    }
                  }
                  uVar3 = uVar3 + 1;
                } while (cVar1 != '\0');
              }
            }
          }
        }
      }
    }
  }
  goto LAB_1800d5060;
LAB_1800d505c:
  cVar1 = '\0';
LAB_1800d5060:
  uVar12 = uVar12 + 1;
  if (cVar1 == '\0') {
    return '\0';
  }
  goto LAB_1800d49cc;
}

