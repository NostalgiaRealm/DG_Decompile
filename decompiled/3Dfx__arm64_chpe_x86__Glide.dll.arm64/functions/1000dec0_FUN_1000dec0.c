/*
 * FUN_1000dec0 at 1000dec0
 * undefined FUN_1000dec0(void)
 * Address ranges: 1000dec0-1000e797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1000dec0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
      uVar10 = FUN_1007a5c0(uVar7,s_disableandpassthru_10096000);
      if ((int)uVar10 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x80;
          goto LAB_1000e74c;
        }
        goto LAB_1000e764;
      }
      iVar9 = FUN_1007a5c0(uVar7,s_videocard_10095da0);
      if (iVar9 != 0) break;
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 != 1) goto LAB_1000e4c8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_03)(param_3,param_4,uVar13,0);
      iVar8 = FUN_1007a5c0(uVar7,&DAT_10096014);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
        goto LAB_1000e41c;
      }
      iVar8 = FUN_1007a5c0(uVar7,s_internal3d_10096020);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1000e43c:
        uVar7 = 1;
      }
      else {
        iVar8 = FUN_1007a5c0(uVar7,s_geforce_ti_4800_10096030);
        if (iVar8 == 0) {
          puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1000e45c:
          uVar7 = 2;
        }
        else {
          iVar8 = FUN_1007a5c0(uVar7,s_ati_radeon_8500_10096040);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_1000e4b8:
            uVar7 = 3;
          }
          else {
            iVar8 = FUN_1007a5c0(uVar7,s_matrox_parhelia_512_10096050);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x58);
              uVar7 = 4;
            }
            else {
              iVar8 = FUN_1007a5c0(uVar7,s_geforce_fx_5700_ultra_10096068);
              if (iVar8 == 0) {
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 5;
              }
              else {
                iVar8 = FUN_1007a5c0(uVar7,s_geforce_9800_gt_10096080);
                if (local_44c < 0x277 || iVar8 != 0) goto LAB_1000e4cc;
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 6;
              }
            }
          }
        }
      }
LAB_1000e4bc:
      *puVar11 = uVar7;
LAB_1000e4c0:
      cVar5 = '\x01';
      uVar13 = uVar13 + 1;
    }
    iVar9 = FUN_1007a5c0(uVar7,&DAT_10096090);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_1000e764;
      plVar1 = (longlong *)(param_2 + 0x5c);
      *plVar1 = 0;
      (*pcVar3)();
      local_480 = (*extraout_w11_04)(param_3,param_4,uVar13,0);
      puStack_474 = auStack_440;
      pcStack_47c = s__d__s_10096098;
      local_478 = plVar1;
      iVar8 = FUN_1007c740(&local_480,0x10);
      if (iVar8 == 1) {
        lVar12 = *plVar1 << 0x14;
      }
      else {
        if (iVar8 != 2) goto LAB_1000e4c0;
        iVar8 = FUN_1007a5c0(auStack_440,0x100960a0);
        if ((iVar8 == 0) || (iVar8 = FUN_1007a5c0(auStack_440,0x100960a4), iVar8 == 0)) {
          *plVar1 = *plVar1 << 0x14;
          goto LAB_1000e764;
        }
        iVar8 = FUN_1007a5c0(auStack_440,0x100960a8);
        if ((iVar8 != 0) && (iVar8 = FUN_1007a5c0(auStack_440,0x100960ac), iVar8 != 0)) {
          return '\0';
        }
        lVar12 = *plVar1 << 0x1e;
      }
      *plVar1 = lVar12;
      goto LAB_1000e4c0;
    }
    iVar9 = FUN_1007a5c0(uVar7,s_filtering_100960b0);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 1) {
        (*pcVar3)();
        uVar7 = (*extraout_w11_05)(param_3,param_4,uVar13,0);
        iVar8 = FUN_1007a5c0(uVar7,s_appdriven_10095b28);
        if (iVar8 != 0) {
          iVar8 = FUN_1007a5c0(uVar7,s_pointsampled_10095e58);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x78);
            uVar7 = 0x100;
          }
          else {
            iVar8 = FUN_1007a5c0(uVar7,s_bilinear_10095e68);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x78);
              uVar7 = 0x200;
            }
            else {
              iVar8 = FUN_1007a5c0(uVar7,s_pointmip_100960c0);
              if (local_44c < 0x282 || iVar8 != 0) {
                iVar8 = FUN_1007a5c0(uVar7,s_linearmip_100960d0);
                if (iVar8 == 0) {
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x300;
                }
                else {
                  iVar8 = FUN_1007a5c0(uVar7,s_trilinear_100960e0);
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
                    goto LAB_1000e764;
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
          goto LAB_1000e4bc;
        }
        puVar11 = (undefined4 *)(param_2 + 0x78);
LAB_1000e41c:
        *puVar11 = 0;
        goto LAB_1000e4c0;
      }
LAB_1000e4c8:
      cVar5 = '\x01';
      if (1 < uVar6) {
LAB_1000e4cc:
        cVar5 = '\0';
      }
    }
    else if ((local_44c < 0x282) || (iVar9 = FUN_1007a5c0(uVar7,s_mipmapping_100960f0), iVar9 != 0))
    {
      uVar10 = FUN_1007a5c0(uVar7,s_keepfilterifpointsampled_10096168);
      if (local_44c < 0x276 || (int)uVar10 != 0) {
        if ((local_44c < 0x282) &&
           (uVar10 = FUN_1007a5c0(uVar7,s_disablemipmapping_10095e78), (int)uVar10 == 0)) {
          if (iVar8 != 0) {
            return '\0';
          }
          cVar5 = '\x01';
          if (uVar6 != 0) {
            local_450[0] = '\0';
            cVar5 = FUN_1000c930(uVar10,param_3,param_4,uVar13,local_450,uVar6);
            *(uint *)(param_2 + 0x7c) = (uint)(local_450[0] != '\0');
          }
        }
        else {
          uVar10 = FUN_1007a5c0(uVar7,s_resolution_10095e90);
          if ((int)uVar10 == 0) {
            local_470 = local_44c;
            local_480 = uVar6;
            cVar5 = FUN_1000cb68(uVar10,param_3,param_4,uVar13,param_2 + 100,param_2 + 0x68,
                                 param_2 + 0x70,param_2 + 0x74);
          }
          else {
            uVar10 = FUN_1007a5c0(uVar7,s_antialiasing_10095ea0);
            if ((int)uVar10 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              cVar5 = '\x01';
              if (uVar6 != 0) {
                cVar5 = FUN_1000cfe8(uVar10,param_3,param_4,uVar13,param_2 + 0x6c,uVar6);
              }
            }
            else {
              uVar10 = FUN_1007a5c0(uVar7,s_appcontrolledscreenmode_10096188);
              if ((int)uVar10 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                cVar5 = '\x01';
                if (uVar6 == 0) goto LAB_1000e764;
                iVar8 = param_2 + 0x81;
LAB_1000e74c:
                cVar5 = FUN_1000c930(uVar10,param_3,param_4,uVar13,iVar8,uVar6);
              }
              else {
                uVar10 = FUN_1007a5c0(uVar7,s_disablealtentertotogglescreenmod_100961a0);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x82;
                    goto LAB_1000e74c;
                  }
                  goto LAB_1000e764;
                }
                if (local_44c < 0x27a) {
                  pcVar2 = s_bilinearblitstretch_100961c8;
LAB_1000e648:
                  uVar10 = FUN_1007a5c0(uVar7,pcVar2);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 == 0) goto LAB_1000e764;
                    iVar8 = param_2 + 0x84;
                    goto LAB_1000e74c;
                  }
                }
                else if (0x27f < local_44c) {
                  pcVar2 = s_bilinear2doperations_100961e0;
                  goto LAB_1000e648;
                }
                uVar10 = FUN_1007a5c0(uVar7,s_phongshadingwhenpossible_100961f8);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x85;
                    goto LAB_1000e74c;
                  }
                }
                else {
                  uVar10 = FUN_1007a5c0(uVar7,s_forceverticalsync_10095ec8);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 != 0) {
                      iVar8 = param_2 + 0x86;
                      goto LAB_1000e74c;
                    }
                  }
                  else {
                    uVar10 = FUN_1007a5c0(uVar7,s_dgvoodoowatermark_10096218);
                    if ((int)uVar10 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      cVar5 = '\x01';
                      if (uVar6 != 0) {
                        iVar8 = param_2 + 0x83;
                        goto LAB_1000e74c;
                      }
                    }
                    else {
                      uVar10 = FUN_1007a5c0(uVar7,s_fastvideomemoryaccess_10096230);
                      if ((int)uVar10 == 0) {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x88;
                          goto LAB_1000e74c;
                        }
                      }
                      else {
                        if (local_44c < 0x286) {
                          return '\0';
                        }
                        uVar10 = FUN_1007a5c0(uVar7,s_disabled3dtnldevice_10096248);
                        if ((int)uVar10 != 0) {
                          return '\0';
                        }
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x89;
                          goto LAB_1000e74c;
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
          goto LAB_1000e74c;
        }
      }
    }
    else {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_1000e4c8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_07)(param_3,param_4,uVar13,0);
      iVar8 = FUN_1007a5c0(uVar7,s_appdriven_10095b28);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1000e41c;
      }
      iVar8 = FUN_1007a5c0(uVar7,s_disabled_10095fc0);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1000e43c;
      }
      iVar8 = FUN_1007a5c0(uVar7,s_autogen_point_10096100);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1000e45c;
      }
      iVar8 = FUN_1007a5c0(uVar7,s_autogen_bilinear_10096110);
      if ((((iVar8 == 0) || (iVar8 = FUN_1007a5c0(uVar7,s_autogen_bicubic_10096128), iVar8 == 0)) ||
          (iVar8 = FUN_1007a5c0(uVar7,s_autogen_lanczos_2_10096138), iVar8 == 0)) ||
         (iVar8 = FUN_1007a5c0(uVar7,s_autogen_lanczos_3_10096150), iVar8 == 0)) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_1000e4b8;
      }
    }
LAB_1000e764:
    uVar13 = uVar13 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
  } while( true );
}

