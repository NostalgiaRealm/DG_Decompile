/*
 * FUN_10056dc0 at 10056dc0
 * undefined FUN_10056dc0(void)
 * Address ranges: 10056dc0-10057697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10056dc0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
      uVar10 = FUN_10091880(uVar7,s_disableandpassthru_100b4400);
      if ((int)uVar10 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x80;
          goto LAB_1005764c;
        }
        goto LAB_10057664;
      }
      iVar9 = FUN_10091880(uVar7,s_videocard_100b41a0);
      if (iVar9 != 0) break;
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 != 1) goto LAB_100573c8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_03)(param_3,param_4,uVar13,0);
      iVar8 = FUN_10091880(uVar7,&DAT_100b4414);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
        goto LAB_1005731c;
      }
      iVar8 = FUN_10091880(uVar7,s_internal3d_100b4420);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1005733c:
        uVar7 = 1;
      }
      else {
        iVar8 = FUN_10091880(uVar7,s_geforce_ti_4800_100b4430);
        if (iVar8 == 0) {
          puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1005735c:
          uVar7 = 2;
        }
        else {
          iVar8 = FUN_10091880(uVar7,s_ati_radeon_8500_100b4440);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100573b8:
            uVar7 = 3;
          }
          else {
            iVar8 = FUN_10091880(uVar7,s_matrox_parhelia_512_100b4450);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x58);
              uVar7 = 4;
            }
            else {
              iVar8 = FUN_10091880(uVar7,s_geforce_fx_5700_ultra_100b4468);
              if (iVar8 == 0) {
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 5;
              }
              else {
                iVar8 = FUN_10091880(uVar7,s_geforce_9800_gt_100b4480);
                if (local_44c < 0x277 || iVar8 != 0) goto LAB_100573cc;
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 6;
              }
            }
          }
        }
      }
LAB_100573bc:
      *puVar11 = uVar7;
LAB_100573c0:
      cVar5 = '\x01';
      uVar13 = uVar13 + 1;
    }
    iVar9 = FUN_10091880(uVar7,&DAT_100b4490);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_10057664;
      plVar1 = (longlong *)(param_2 + 0x5c);
      *plVar1 = 0;
      (*pcVar3)();
      local_480 = (*extraout_w11_04)(param_3,param_4,uVar13,0);
      puStack_474 = auStack_440;
      pcStack_47c = s__d__s_100b4498;
      local_478 = plVar1;
      iVar8 = FUN_10091e70(&local_480,0x10);
      if (iVar8 == 1) {
        lVar12 = *plVar1 << 0x14;
      }
      else {
        if (iVar8 != 2) goto LAB_100573c0;
        iVar8 = FUN_10091880(auStack_440,0x100b44a0);
        if ((iVar8 == 0) || (iVar8 = FUN_10091880(auStack_440,0x100b44a4), iVar8 == 0)) {
          *plVar1 = *plVar1 << 0x14;
          goto LAB_10057664;
        }
        iVar8 = FUN_10091880(auStack_440,0x100b44a8);
        if ((iVar8 != 0) && (iVar8 = FUN_10091880(auStack_440,0x100b44ac), iVar8 != 0)) {
          return '\0';
        }
        lVar12 = *plVar1 << 0x1e;
      }
      *plVar1 = lVar12;
      goto LAB_100573c0;
    }
    iVar9 = FUN_10091880(uVar7,s_filtering_100b44b0);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 1) {
        (*pcVar3)();
        uVar7 = (*extraout_w11_05)(param_3,param_4,uVar13,0);
        iVar8 = FUN_10091880(uVar7,s_appdriven_100b3f28);
        if (iVar8 != 0) {
          iVar8 = FUN_10091880(uVar7,s_pointsampled_100b4258);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x78);
            uVar7 = 0x100;
          }
          else {
            iVar8 = FUN_10091880(uVar7,s_bilinear_100b4268);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x78);
              uVar7 = 0x200;
            }
            else {
              iVar8 = FUN_10091880(uVar7,s_pointmip_100b44c0);
              if (local_44c < 0x282 || iVar8 != 0) {
                iVar8 = FUN_10091880(uVar7,s_linearmip_100b44d0);
                if (iVar8 == 0) {
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x300;
                }
                else {
                  iVar8 = FUN_10091880(uVar7,s_trilinear_100b44e0);
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
                    goto LAB_10057664;
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
          goto LAB_100573bc;
        }
        puVar11 = (undefined4 *)(param_2 + 0x78);
LAB_1005731c:
        *puVar11 = 0;
        goto LAB_100573c0;
      }
LAB_100573c8:
      cVar5 = '\x01';
      if (1 < uVar6) {
LAB_100573cc:
        cVar5 = '\0';
      }
    }
    else if ((local_44c < 0x282) || (iVar9 = FUN_10091880(uVar7,s_mipmapping_100b44f0), iVar9 != 0))
    {
      uVar10 = FUN_10091880(uVar7,s_keepfilterifpointsampled_100b4568);
      if (local_44c < 0x276 || (int)uVar10 != 0) {
        if ((local_44c < 0x282) &&
           (uVar10 = FUN_10091880(uVar7,s_disablemipmapping_100b4278), (int)uVar10 == 0)) {
          if (iVar8 != 0) {
            return '\0';
          }
          cVar5 = '\x01';
          if (uVar6 != 0) {
            local_450[0] = '\0';
            cVar5 = FUN_10055830(uVar10,param_3,param_4,uVar13,local_450,uVar6);
            *(uint *)(param_2 + 0x7c) = (uint)(local_450[0] != '\0');
          }
        }
        else {
          uVar10 = FUN_10091880(uVar7,s_resolution_100b4290);
          if ((int)uVar10 == 0) {
            local_470 = local_44c;
            local_480 = uVar6;
            cVar5 = FUN_10055a68(uVar10,param_3,param_4,uVar13,param_2 + 100,param_2 + 0x68,
                                 param_2 + 0x70,param_2 + 0x74);
          }
          else {
            uVar10 = FUN_10091880(uVar7,s_antialiasing_100b42a0);
            if ((int)uVar10 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              cVar5 = '\x01';
              if (uVar6 != 0) {
                cVar5 = FUN_10055ee8(uVar10,param_3,param_4,uVar13,param_2 + 0x6c,uVar6);
              }
            }
            else {
              uVar10 = FUN_10091880(uVar7,s_appcontrolledscreenmode_100b4588);
              if ((int)uVar10 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                cVar5 = '\x01';
                if (uVar6 == 0) goto LAB_10057664;
                iVar8 = param_2 + 0x81;
LAB_1005764c:
                cVar5 = FUN_10055830(uVar10,param_3,param_4,uVar13,iVar8,uVar6);
              }
              else {
                uVar10 = FUN_10091880(uVar7,s_disablealtentertotogglescreenmod_100b45a0);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x82;
                    goto LAB_1005764c;
                  }
                  goto LAB_10057664;
                }
                if (local_44c < 0x27a) {
                  pcVar2 = s_bilinearblitstretch_100b45c8;
LAB_10057548:
                  uVar10 = FUN_10091880(uVar7,pcVar2);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 == 0) goto LAB_10057664;
                    iVar8 = param_2 + 0x84;
                    goto LAB_1005764c;
                  }
                }
                else if (0x27f < local_44c) {
                  pcVar2 = s_bilinear2doperations_100b45e0;
                  goto LAB_10057548;
                }
                uVar10 = FUN_10091880(uVar7,s_phongshadingwhenpossible_100b45f8);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x85;
                    goto LAB_1005764c;
                  }
                }
                else {
                  uVar10 = FUN_10091880(uVar7,s_forceverticalsync_100b42c8);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 != 0) {
                      iVar8 = param_2 + 0x86;
                      goto LAB_1005764c;
                    }
                  }
                  else {
                    uVar10 = FUN_10091880(uVar7,s_dgvoodoowatermark_100b4618);
                    if ((int)uVar10 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      cVar5 = '\x01';
                      if (uVar6 != 0) {
                        iVar8 = param_2 + 0x83;
                        goto LAB_1005764c;
                      }
                    }
                    else {
                      uVar10 = FUN_10091880(uVar7,s_fastvideomemoryaccess_100b4630);
                      if ((int)uVar10 == 0) {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x88;
                          goto LAB_1005764c;
                        }
                      }
                      else {
                        if (local_44c < 0x286) {
                          return '\0';
                        }
                        uVar10 = FUN_10091880(uVar7,s_disabled3dtnldevice_100b4648);
                        if ((int)uVar10 != 0) {
                          return '\0';
                        }
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x89;
                          goto LAB_1005764c;
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
          goto LAB_1005764c;
        }
      }
    }
    else {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_100573c8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_07)(param_3,param_4,uVar13,0);
      iVar8 = FUN_10091880(uVar7,s_appdriven_100b3f28);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1005731c;
      }
      iVar8 = FUN_10091880(uVar7,s_disabled_100b43c0);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1005733c;
      }
      iVar8 = FUN_10091880(uVar7,s_autogen_point_100b4500);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1005735c;
      }
      iVar8 = FUN_10091880(uVar7,s_autogen_bilinear_100b4510);
      if ((((iVar8 == 0) || (iVar8 = FUN_10091880(uVar7,s_autogen_bicubic_100b4528), iVar8 == 0)) ||
          (iVar8 = FUN_10091880(uVar7,s_autogen_lanczos_2_100b4538), iVar8 == 0)) ||
         (iVar8 = FUN_10091880(uVar7,s_autogen_lanczos_3_100b4550), iVar8 == 0)) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100573b8;
      }
    }
LAB_10057664:
    uVar13 = uVar13 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
  } while( true );
}

