/*
 * FUN_1004b3f0 at 1004b3f0
 * undefined FUN_1004b3f0(void)
 * Address ranges: 1004b3f0-1004bcc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1004b3f0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  longlong *plVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint uVar13;
  uint local_480;
  char *pcStack_47c;
  longlong *local_478;
  undefined1 *puStack_474;
  uint local_470;
  char local_450 [4];
  uint local_44c;
  int local_448 [2];
  undefined1 auStack_440 [1024];
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  cVar5 = '\x01';
  uVar13 = 0;
  local_44c = param_5;
  do {
    while( true ) {
      (*pcVar3)();
      uVar6 = (*extraout_w11)(param_3,param_4);
      if (uVar6 <= uVar13) {
        return cVar5;
      }
      (*pcVar3)();
      uVar7 = (*extraout_w11_00)(param_3,param_4,uVar13);
      (*pcVar3)();
      uVar6 = (*extraout_w11_01)(param_3,param_4,uVar13);
      (*pcVar3)();
      iVar8 = (*extraout_w11_02)(param_3,param_4,uVar13);
      uVar10 = FUN_1007de60(uVar7,s_disableandpassthru_1009a7d8);
      if ((int)uVar10 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x80;
          goto LAB_1004bc7c;
        }
        goto LAB_1004bc94;
      }
      iVar9 = FUN_1007de60(uVar7,s_videocard_1009a578);
      if (iVar9 != 0) break;
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 != 1) goto LAB_1004b9f8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_03)(param_3,param_4,uVar13,0);
      iVar8 = FUN_1007de60(uVar7,&DAT_1009a7ec);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
        goto LAB_1004b94c;
      }
      iVar8 = FUN_1007de60(uVar7,s_internal3d_1009a7f8);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1004b96c:
        uVar7 = 1;
      }
      else {
        iVar8 = FUN_1007de60(uVar7,s_geforce_ti_4800_1009a808);
        if (iVar8 == 0) {
          puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1004b98c:
          uVar7 = 2;
        }
        else {
          iVar8 = FUN_1007de60(uVar7,s_ati_radeon_8500_1009a818);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1004b9e8:
            uVar7 = 3;
          }
          else {
            iVar8 = FUN_1007de60(uVar7,s_matrox_parhelia_512_1009a828);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x58);
              uVar7 = 4;
            }
            else {
              iVar8 = FUN_1007de60(uVar7,s_geforce_fx_5700_ultra_1009a840);
              if (iVar8 == 0) {
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 5;
              }
              else {
                iVar8 = FUN_1007de60(uVar7,s_geforce_9800_gt_1009a858);
                if (local_44c < 0x277 || iVar8 != 0) goto LAB_1004b9fc;
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 6;
              }
            }
          }
        }
      }
LAB_1004b9ec:
      *puVar11 = uVar7;
LAB_1004b9f0:
      cVar5 = '\x01';
      uVar13 = uVar13 + 1;
    }
    iVar9 = FUN_1007de60(uVar7,&DAT_1009a868);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_1004bc94;
      plVar1 = (longlong *)(param_2 + 0x5c);
      *plVar1 = 0;
      (*pcVar3)();
      local_480 = (*extraout_w11_04)(param_3,param_4,uVar13,0);
      puStack_474 = auStack_440;
      pcStack_47c = s__d__s_1009a870;
      local_478 = plVar1;
      iVar8 = FUN_10080b70(&local_480,0x10);
      if (iVar8 == 1) {
        lVar12 = *plVar1 << 0x14;
      }
      else {
        if (iVar8 != 2) goto LAB_1004b9f0;
        iVar8 = FUN_1007de60(auStack_440,0x1009a878);
        if ((iVar8 == 0) || (iVar8 = FUN_1007de60(auStack_440,0x1009a87c), iVar8 == 0)) {
          *plVar1 = *plVar1 << 0x14;
          goto LAB_1004bc94;
        }
        iVar8 = FUN_1007de60(auStack_440,0x1009a880);
        if ((iVar8 != 0) && (iVar8 = FUN_1007de60(auStack_440,0x1009a884), iVar8 != 0)) {
          return '\0';
        }
        lVar12 = *plVar1 << 0x1e;
      }
      *plVar1 = lVar12;
      goto LAB_1004b9f0;
    }
    iVar9 = FUN_1007de60(uVar7,s_filtering_1009a888);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 1) {
        (*pcVar3)();
        uVar7 = (*extraout_w11_05)(param_3,param_4,uVar13,0);
        iVar8 = FUN_1007de60(uVar7,s_appdriven_1009a300);
        if (iVar8 != 0) {
          iVar8 = FUN_1007de60(uVar7,s_pointsampled_1009a630);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x78);
            uVar7 = 0x100;
          }
          else {
            iVar8 = FUN_1007de60(uVar7,s_bilinear_1009a640);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x78);
              uVar7 = 0x200;
            }
            else {
              iVar8 = FUN_1007de60(uVar7,s_pointmip_1009a898);
              if (local_44c < 0x282 || iVar8 != 0) {
                iVar8 = FUN_1007de60(uVar7,s_linearmip_1009a8a8);
                if (iVar8 == 0) {
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x300;
                }
                else {
                  iVar8 = FUN_1007de60(uVar7,s_trilinear_1009a8b8);
                  if (iVar8 != 0) {
                    local_448[0] = 0;
                    (*pcVar3)();
                    cVar5 = (*extraout_w11_06)(param_3,param_4,uVar13,0,local_448);
                    if (cVar5 != '\0') {
                      cVar4 = '\0';
                      if (local_448[0] - 1U < 0x10) {
                        cVar4 = cVar5;
                      }
                      cVar5 = cVar4;
                      *(int *)(param_2 + 0x78) = local_448[0];
                    }
                    goto LAB_1004bc94;
                  }
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x400;
                }
              }
              else {
                puVar11 = (undefined4 *)(param_2 + 0x78);
                uVar7 = 0x500;
              }
            }
          }
          goto LAB_1004b9ec;
        }
        puVar11 = (undefined4 *)(param_2 + 0x78);
LAB_1004b94c:
        *puVar11 = 0;
        goto LAB_1004b9f0;
      }
LAB_1004b9f8:
      cVar5 = '\x01';
      if (1 < uVar6) {
LAB_1004b9fc:
        cVar5 = '\0';
      }
    }
    else if ((local_44c < 0x282) || (iVar9 = FUN_1007de60(uVar7,s_mipmapping_1009a8c8), iVar9 != 0))
    {
      uVar10 = FUN_1007de60(uVar7,s_keepfilterifpointsampled_1009a940);
      if (local_44c < 0x276 || (int)uVar10 != 0) {
        if ((local_44c < 0x282) &&
           (uVar10 = FUN_1007de60(uVar7,s_disablemipmapping_1009a650), (int)uVar10 == 0)) {
          if (iVar8 != 0) {
            return '\0';
          }
          cVar5 = '\x01';
          if (uVar6 != 0) {
            local_450[0] = '\0';
            cVar5 = FUN_10049e60(uVar10,param_3,param_4,uVar13,local_450,uVar6);
            *(uint *)(param_2 + 0x7c) = (uint)(local_450[0] != '\0');
          }
        }
        else {
          uVar10 = FUN_1007de60(uVar7,s_resolution_1009a668);
          if ((int)uVar10 == 0) {
            local_470 = local_44c;
            local_480 = uVar6;
            cVar5 = FUN_1004a098(uVar10,param_3,param_4,uVar13,param_2 + 100,param_2 + 0x68,
                                 param_2 + 0x70,param_2 + 0x74);
          }
          else {
            uVar10 = FUN_1007de60(uVar7,s_antialiasing_1009a678);
            if ((int)uVar10 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              cVar5 = '\x01';
              if (uVar6 != 0) {
                cVar5 = FUN_1004a518(uVar10,param_3,param_4,uVar13,param_2 + 0x6c,uVar6);
              }
            }
            else {
              uVar10 = FUN_1007de60(uVar7,s_appcontrolledscreenmode_1009a960);
              if ((int)uVar10 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                cVar5 = '\x01';
                if (uVar6 == 0) goto LAB_1004bc94;
                iVar8 = param_2 + 0x81;
LAB_1004bc7c:
                cVar5 = FUN_10049e60(uVar10,param_3,param_4,uVar13,iVar8,uVar6);
              }
              else {
                uVar10 = FUN_1007de60(uVar7,s_disablealtentertotogglescreenmod_1009a978);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x82;
                    goto LAB_1004bc7c;
                  }
                  goto LAB_1004bc94;
                }
                if (local_44c < 0x27a) {
                  pcVar2 = s_bilinearblitstretch_1009a9a0;
LAB_1004bb78:
                  uVar10 = FUN_1007de60(uVar7,pcVar2);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 == 0) goto LAB_1004bc94;
                    iVar8 = param_2 + 0x84;
                    goto LAB_1004bc7c;
                  }
                }
                else if (0x27f < local_44c) {
                  pcVar2 = s_bilinear2doperations_1009a9b8;
                  goto LAB_1004bb78;
                }
                uVar10 = FUN_1007de60(uVar7,s_phongshadingwhenpossible_1009a9d0);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x85;
                    goto LAB_1004bc7c;
                  }
                }
                else {
                  uVar10 = FUN_1007de60(uVar7,s_forceverticalsync_1009a6a0);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 != 0) {
                      iVar8 = param_2 + 0x86;
                      goto LAB_1004bc7c;
                    }
                  }
                  else {
                    uVar10 = FUN_1007de60(uVar7,s_dgvoodoowatermark_1009a9f0);
                    if ((int)uVar10 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      cVar5 = '\x01';
                      if (uVar6 != 0) {
                        iVar8 = param_2 + 0x83;
                        goto LAB_1004bc7c;
                      }
                    }
                    else {
                      uVar10 = FUN_1007de60(uVar7,s_fastvideomemoryaccess_1009aa08);
                      if ((int)uVar10 == 0) {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x88;
                          goto LAB_1004bc7c;
                        }
                      }
                      else {
                        if (local_44c < 0x286) {
                          return '\0';
                        }
                        uVar10 = FUN_1007de60(uVar7,s_disabled3dtnldevice_1009aa20);
                        if ((int)uVar10 != 0) {
                          return '\0';
                        }
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x89;
                          goto LAB_1004bc7c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x87;
          goto LAB_1004bc7c;
        }
      }
    }
    else {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_1004b9f8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_07)(param_3,param_4,uVar13,0);
      iVar8 = FUN_1007de60(uVar7,s_appdriven_1009a300);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1004b94c;
      }
      iVar8 = FUN_1007de60(uVar7,s_disabled_1009a798);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1004b96c;
      }
      iVar8 = FUN_1007de60(uVar7,s_autogen_point_1009a8d8);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1004b98c;
      }
      iVar8 = FUN_1007de60(uVar7,s_autogen_bilinear_1009a8e8);
      if ((((iVar8 == 0) || (iVar8 = FUN_1007de60(uVar7,s_autogen_bicubic_1009a900), iVar8 == 0)) ||
          (iVar8 = FUN_1007de60(uVar7,s_autogen_lanczos_2_1009a910), iVar8 == 0)) ||
         (iVar8 = FUN_1007de60(uVar7,s_autogen_lanczos_3_1009a928), iVar8 == 0)) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1004b9e8;
      }
    }
LAB_1004bc94:
    uVar13 = uVar13 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
  } while( true );
}

