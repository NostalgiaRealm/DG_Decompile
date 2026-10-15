/*
 * FUN_100c39e0 at 100c39e0
 * undefined FUN_100c39e0(void)
 * Address ranges: 100c39e0-100c42b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100c39e0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
      uVar10 = FUN_100fef80(uVar7,s_disableandpassthru_1012d860);
      if ((int)uVar10 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x80;
          goto LAB_100c426c;
        }
        goto LAB_100c4284;
      }
      iVar9 = FUN_100fef80(uVar7,s_videocard_1012d600);
      if (iVar9 != 0) break;
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 != 1) goto LAB_100c3fe8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_03)(param_3,param_4,uVar13,0);
      iVar8 = FUN_100fef80(uVar7,&DAT_1012d874);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
        goto LAB_100c3f3c;
      }
      iVar8 = FUN_100fef80(uVar7,s_internal3d_1012d880);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100c3f5c:
        uVar7 = 1;
      }
      else {
        iVar8 = FUN_100fef80(uVar7,s_geforce_ti_4800_1012d890);
        if (iVar8 == 0) {
          puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100c3f7c:
          uVar7 = 2;
        }
        else {
          iVar8 = FUN_100fef80(uVar7,s_ati_radeon_8500_1012d8a0);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100c3fd8:
            uVar7 = 3;
          }
          else {
            iVar8 = FUN_100fef80(uVar7,s_matrox_parhelia_512_1012d8b0);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x58);
              uVar7 = 4;
            }
            else {
              iVar8 = FUN_100fef80(uVar7,s_geforce_fx_5700_ultra_1012d8c8);
              if (iVar8 == 0) {
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 5;
              }
              else {
                iVar8 = FUN_100fef80(uVar7,s_geforce_9800_gt_1012d8e0);
                if (local_44c < 0x277 || iVar8 != 0) goto LAB_100c3fec;
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 6;
              }
            }
          }
        }
      }
LAB_100c3fdc:
      *puVar11 = uVar7;
LAB_100c3fe0:
      cVar5 = '\x01';
      uVar13 = uVar13 + 1;
    }
    iVar9 = FUN_100fef80(uVar7,&DAT_1012d8f0);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_100c4284;
      plVar1 = (longlong *)(param_2 + 0x5c);
      *plVar1 = 0;
      (*pcVar3)();
      local_480 = (*extraout_w11_04)(param_3,param_4,uVar13,0);
      puStack_474 = auStack_440;
      pcStack_47c = s__d__s_1012d8f8;
      local_478 = plVar1;
      iVar8 = FUN_100ff6d0(&local_480,0x10);
      if (iVar8 == 1) {
        lVar12 = *plVar1 << 0x14;
      }
      else {
        if (iVar8 != 2) goto LAB_100c3fe0;
        iVar8 = FUN_100fef80(auStack_440,0x1012d900);
        if ((iVar8 == 0) || (iVar8 = FUN_100fef80(auStack_440,0x1012d904), iVar8 == 0)) {
          *plVar1 = *plVar1 << 0x14;
          goto LAB_100c4284;
        }
        iVar8 = FUN_100fef80(auStack_440,0x1012b1c4);
        if ((iVar8 != 0) && (iVar8 = FUN_100fef80(auStack_440,0x1012d908), iVar8 != 0)) {
          return '\0';
        }
        lVar12 = *plVar1 << 0x1e;
      }
      *plVar1 = lVar12;
      goto LAB_100c3fe0;
    }
    iVar9 = FUN_100fef80(uVar7,s_filtering_1012d910);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 1) {
        (*pcVar3)();
        uVar7 = (*extraout_w11_05)(param_3,param_4,uVar13,0);
        iVar8 = FUN_100fef80(uVar7,s_appdriven_1012d390);
        if (iVar8 != 0) {
          iVar8 = FUN_100fef80(uVar7,s_pointsampled_1012d6b8);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x78);
            uVar7 = 0x100;
          }
          else {
            iVar8 = FUN_100fef80(uVar7,s_bilinear_1012d6c8);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x78);
              uVar7 = 0x200;
            }
            else {
              iVar8 = FUN_100fef80(uVar7,s_pointmip_1012d920);
              if (local_44c < 0x282 || iVar8 != 0) {
                iVar8 = FUN_100fef80(uVar7,s_linearmip_1012d930);
                if (iVar8 == 0) {
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x300;
                }
                else {
                  iVar8 = FUN_100fef80(uVar7,s_trilinear_1012d940);
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
                    goto LAB_100c4284;
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
          goto LAB_100c3fdc;
        }
        puVar11 = (undefined4 *)(param_2 + 0x78);
LAB_100c3f3c:
        *puVar11 = 0;
        goto LAB_100c3fe0;
      }
LAB_100c3fe8:
      cVar5 = '\x01';
      if (1 < uVar6) {
LAB_100c3fec:
        cVar5 = '\0';
      }
    }
    else if ((local_44c < 0x282) || (iVar9 = FUN_100fef80(uVar7,s_mipmapping_1012d950), iVar9 != 0))
    {
      uVar10 = FUN_100fef80(uVar7,s_keepfilterifpointsampled_1012d9c8);
      if (local_44c < 0x276 || (int)uVar10 != 0) {
        if ((local_44c < 0x282) &&
           (uVar10 = FUN_100fef80(uVar7,s_disablemipmapping_1012d6d8), (int)uVar10 == 0)) {
          if (iVar8 != 0) {
            return '\0';
          }
          cVar5 = '\x01';
          if (uVar6 != 0) {
            local_450[0] = '\0';
            cVar5 = FUN_100c2450(uVar10,param_3,param_4,uVar13,local_450,uVar6);
            *(uint *)(param_2 + 0x7c) = (uint)(local_450[0] != '\0');
          }
        }
        else {
          uVar10 = FUN_100fef80(uVar7,s_resolution_1012d6f0);
          if ((int)uVar10 == 0) {
            local_470 = local_44c;
            local_480 = uVar6;
            cVar5 = FUN_100c2688(uVar10,param_3,param_4,uVar13,param_2 + 100,param_2 + 0x68,
                                 param_2 + 0x70,param_2 + 0x74);
          }
          else {
            uVar10 = FUN_100fef80(uVar7,s_antialiasing_1012d700);
            if ((int)uVar10 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              cVar5 = '\x01';
              if (uVar6 != 0) {
                cVar5 = FUN_100c2b08(uVar10,param_3,param_4,uVar13,param_2 + 0x6c,uVar6);
              }
            }
            else {
              uVar10 = FUN_100fef80(uVar7,s_appcontrolledscreenmode_1012d9e8);
              if ((int)uVar10 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                cVar5 = '\x01';
                if (uVar6 == 0) goto LAB_100c4284;
                iVar8 = param_2 + 0x81;
LAB_100c426c:
                cVar5 = FUN_100c2450(uVar10,param_3,param_4,uVar13,iVar8,uVar6);
              }
              else {
                uVar10 = FUN_100fef80(uVar7,s_disablealtentertotogglescreenmod_1012da00);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x82;
                    goto LAB_100c426c;
                  }
                  goto LAB_100c4284;
                }
                if (local_44c < 0x27a) {
                  pcVar2 = s_bilinearblitstretch_1012da28;
LAB_100c4168:
                  uVar10 = FUN_100fef80(uVar7,pcVar2);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 == 0) goto LAB_100c4284;
                    iVar8 = param_2 + 0x84;
                    goto LAB_100c426c;
                  }
                }
                else if (0x27f < local_44c) {
                  pcVar2 = s_bilinear2doperations_1012da40;
                  goto LAB_100c4168;
                }
                uVar10 = FUN_100fef80(uVar7,s_phongshadingwhenpossible_1012da58);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x85;
                    goto LAB_100c426c;
                  }
                }
                else {
                  uVar10 = FUN_100fef80(uVar7,s_forceverticalsync_1012d728);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 != 0) {
                      iVar8 = param_2 + 0x86;
                      goto LAB_100c426c;
                    }
                  }
                  else {
                    uVar10 = FUN_100fef80(uVar7,s_dgvoodoowatermark_1012da78);
                    if ((int)uVar10 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      cVar5 = '\x01';
                      if (uVar6 != 0) {
                        iVar8 = param_2 + 0x83;
                        goto LAB_100c426c;
                      }
                    }
                    else {
                      uVar10 = FUN_100fef80(uVar7,s_fastvideomemoryaccess_1012da90);
                      if ((int)uVar10 == 0) {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x88;
                          goto LAB_100c426c;
                        }
                      }
                      else {
                        if (local_44c < 0x286) {
                          return '\0';
                        }
                        uVar10 = FUN_100fef80(uVar7,s_disabled3dtnldevice_1012daa8);
                        if ((int)uVar10 != 0) {
                          return '\0';
                        }
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x89;
                          goto LAB_100c426c;
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
          goto LAB_100c426c;
        }
      }
    }
    else {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_100c3fe8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_07)(param_3,param_4,uVar13,0);
      iVar8 = FUN_100fef80(uVar7,s_appdriven_1012d390);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100c3f3c;
      }
      iVar8 = FUN_100fef80(uVar7,s_disabled_1012d820);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100c3f5c;
      }
      iVar8 = FUN_100fef80(uVar7,s_autogen_point_1012d960);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100c3f7c;
      }
      iVar8 = FUN_100fef80(uVar7,s_autogen_bilinear_1012d970);
      if ((((iVar8 == 0) || (iVar8 = FUN_100fef80(uVar7,s_autogen_bicubic_1012d988), iVar8 == 0)) ||
          (iVar8 = FUN_100fef80(uVar7,s_autogen_lanczos_2_1012d998), iVar8 == 0)) ||
         (iVar8 = FUN_100fef80(uVar7,s_autogen_lanczos_3_1012d9b0), iVar8 == 0)) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100c3fd8;
      }
    }
LAB_100c4284:
    uVar13 = uVar13 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
  } while( true );
}

