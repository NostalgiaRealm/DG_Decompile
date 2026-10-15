/*
 * FUN_100f5cb0 at 100f5cb0
 * undefined FUN_100f5cb0(void)
 * Address ranges: 100f5cb0-100f6587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100f5cb0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

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
      uVar10 = FUN_10132680(uVar7,s_disableandpassthru_10164698);
      if ((int)uVar10 == 0) {
        if (iVar8 != 0) {
          return '\0';
        }
        cVar5 = '\x01';
        if (uVar6 != 0) {
          iVar8 = param_2 + 0x80;
          goto LAB_100f653c;
        }
        goto LAB_100f6554;
      }
      iVar9 = FUN_10132680(uVar7,s_videocard_10164438);
      if (iVar9 != 0) break;
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 != 1) goto LAB_100f62b8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_03)(param_3,param_4,uVar13,0);
      iVar8 = FUN_10132680(uVar7,&DAT_101646ac);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
        goto LAB_100f620c;
      }
      iVar8 = FUN_10132680(uVar7,s_internal3d_101646b8);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100f622c:
        uVar7 = 1;
      }
      else {
        iVar8 = FUN_10132680(uVar7,s_geforce_ti_4800_101646c8);
        if (iVar8 == 0) {
          puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100f624c:
          uVar7 = 2;
        }
        else {
          iVar8 = FUN_10132680(uVar7,s_ati_radeon_8500_101646d8);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x58);
LAB_100f62a8:
            uVar7 = 3;
          }
          else {
            iVar8 = FUN_10132680(uVar7,s_matrox_parhelia_512_101646e8);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x58);
              uVar7 = 4;
            }
            else {
              iVar8 = FUN_10132680(uVar7,s_geforce_fx_5700_ultra_10164700);
              if (iVar8 == 0) {
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 5;
              }
              else {
                iVar8 = FUN_10132680(uVar7,s_geforce_9800_gt_10164718);
                if (local_44c < 0x277 || iVar8 != 0) goto LAB_100f62bc;
                puVar11 = (undefined4 *)(param_2 + 0x58);
                uVar7 = 6;
              }
            }
          }
        }
      }
LAB_100f62ac:
      *puVar11 = uVar7;
LAB_100f62b0:
      cVar5 = '\x01';
      uVar13 = uVar13 + 1;
    }
    iVar9 = FUN_10132680(uVar7,&DAT_10164728);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_100f6554;
      plVar1 = (longlong *)(param_2 + 0x5c);
      *plVar1 = 0;
      (*pcVar3)();
      local_480 = (*extraout_w11_04)(param_3,param_4,uVar13,0);
      puStack_474 = auStack_440;
      pcStack_47c = s__d__s_10164730;
      local_478 = plVar1;
      iVar8 = FUN_10132ca0(&local_480,0x10);
      if (iVar8 == 1) {
        lVar12 = *plVar1 << 0x14;
      }
      else {
        if (iVar8 != 2) goto LAB_100f62b0;
        iVar8 = FUN_10132680(auStack_440,0x10164738);
        if ((iVar8 == 0) || (iVar8 = FUN_10132680(auStack_440,0x1016473c), iVar8 == 0)) {
          *plVar1 = *plVar1 << 0x14;
          goto LAB_100f6554;
        }
        iVar8 = FUN_10132680(auStack_440,0x10160b4c);
        if ((iVar8 != 0) && (iVar8 = FUN_10132680(auStack_440,0x10164740), iVar8 != 0)) {
          return '\0';
        }
        lVar12 = *plVar1 << 0x1e;
      }
      *plVar1 = lVar12;
      goto LAB_100f62b0;
    }
    iVar9 = FUN_10132680(uVar7,s_filtering_10164748);
    if (iVar9 == 0) {
      if (iVar8 != 0) {
        return '\0';
      }
      if (uVar6 == 1) {
        (*pcVar3)();
        uVar7 = (*extraout_w11_05)(param_3,param_4,uVar13,0);
        iVar8 = FUN_10132680(uVar7,s_appdriven_101641c8);
        if (iVar8 != 0) {
          iVar8 = FUN_10132680(uVar7,s_pointsampled_101644f0);
          if (iVar8 == 0) {
            puVar11 = (undefined4 *)(param_2 + 0x78);
            uVar7 = 0x100;
          }
          else {
            iVar8 = FUN_10132680(uVar7,s_bilinear_10164500);
            if (iVar8 == 0) {
              puVar11 = (undefined4 *)(param_2 + 0x78);
              uVar7 = 0x200;
            }
            else {
              iVar8 = FUN_10132680(uVar7,s_pointmip_10164758);
              if (local_44c < 0x282 || iVar8 != 0) {
                iVar8 = FUN_10132680(uVar7,s_linearmip_10164768);
                if (iVar8 == 0) {
                  puVar11 = (undefined4 *)(param_2 + 0x78);
                  uVar7 = 0x300;
                }
                else {
                  iVar8 = FUN_10132680(uVar7,s_trilinear_10164778);
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
                    goto LAB_100f6554;
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
          goto LAB_100f62ac;
        }
        puVar11 = (undefined4 *)(param_2 + 0x78);
LAB_100f620c:
        *puVar11 = 0;
        goto LAB_100f62b0;
      }
LAB_100f62b8:
      cVar5 = '\x01';
      if (1 < uVar6) {
LAB_100f62bc:
        cVar5 = '\0';
      }
    }
    else if ((local_44c < 0x282) || (iVar9 = FUN_10132680(uVar7,s_mipmapping_10164788), iVar9 != 0))
    {
      uVar10 = FUN_10132680(uVar7,s_keepfilterifpointsampled_10164800);
      if (local_44c < 0x276 || (int)uVar10 != 0) {
        if ((local_44c < 0x282) &&
           (uVar10 = FUN_10132680(uVar7,s_disablemipmapping_10164510), (int)uVar10 == 0)) {
          if (iVar8 != 0) {
            return '\0';
          }
          cVar5 = '\x01';
          if (uVar6 != 0) {
            local_450[0] = '\0';
            cVar5 = FUN_100f4720(uVar10,param_3,param_4,uVar13,local_450,uVar6);
            *(uint *)(param_2 + 0x7c) = (uint)(local_450[0] != '\0');
          }
        }
        else {
          uVar10 = FUN_10132680(uVar7,s_resolution_10164528);
          if ((int)uVar10 == 0) {
            local_470 = local_44c;
            local_480 = uVar6;
            cVar5 = FUN_100f4958(uVar10,param_3,param_4,uVar13,param_2 + 100,param_2 + 0x68,
                                 param_2 + 0x70,param_2 + 0x74);
          }
          else {
            uVar10 = FUN_10132680(uVar7,s_antialiasing_10164538);
            if ((int)uVar10 == 0) {
              if (iVar8 != 0) {
                return '\0';
              }
              cVar5 = '\x01';
              if (uVar6 != 0) {
                cVar5 = FUN_100f4dd8(uVar10,param_3,param_4,uVar13,param_2 + 0x6c,uVar6);
              }
            }
            else {
              uVar10 = FUN_10132680(uVar7,s_appcontrolledscreenmode_10164820);
              if ((int)uVar10 == 0) {
                if (iVar8 != 0) {
                  return '\0';
                }
                cVar5 = '\x01';
                if (uVar6 == 0) goto LAB_100f6554;
                iVar8 = param_2 + 0x81;
LAB_100f653c:
                cVar5 = FUN_100f4720(uVar10,param_3,param_4,uVar13,iVar8,uVar6);
              }
              else {
                uVar10 = FUN_10132680(uVar7,s_disablealtentertotogglescreenmod_10164838);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x82;
                    goto LAB_100f653c;
                  }
                  goto LAB_100f6554;
                }
                if (local_44c < 0x27a) {
                  pcVar2 = s_bilinearblitstretch_10164860;
LAB_100f6438:
                  uVar10 = FUN_10132680(uVar7,pcVar2);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 == 0) goto LAB_100f6554;
                    iVar8 = param_2 + 0x84;
                    goto LAB_100f653c;
                  }
                }
                else if (0x27f < local_44c) {
                  pcVar2 = s_bilinear2doperations_10164878;
                  goto LAB_100f6438;
                }
                uVar10 = FUN_10132680(uVar7,s_phongshadingwhenpossible_10164890);
                if ((int)uVar10 == 0) {
                  if (iVar8 != 0) {
                    return '\0';
                  }
                  cVar5 = '\x01';
                  if (uVar6 != 0) {
                    iVar8 = param_2 + 0x85;
                    goto LAB_100f653c;
                  }
                }
                else {
                  uVar10 = FUN_10132680(uVar7,s_forceverticalsync_10164560);
                  if ((int)uVar10 == 0) {
                    if (iVar8 != 0) {
                      return '\0';
                    }
                    cVar5 = '\x01';
                    if (uVar6 != 0) {
                      iVar8 = param_2 + 0x86;
                      goto LAB_100f653c;
                    }
                  }
                  else {
                    uVar10 = FUN_10132680(uVar7,s_dgvoodoowatermark_101648b0);
                    if ((int)uVar10 == 0) {
                      if (iVar8 != 0) {
                        return '\0';
                      }
                      cVar5 = '\x01';
                      if (uVar6 != 0) {
                        iVar8 = param_2 + 0x83;
                        goto LAB_100f653c;
                      }
                    }
                    else {
                      uVar10 = FUN_10132680(uVar7,s_fastvideomemoryaccess_101648c8);
                      if ((int)uVar10 == 0) {
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x88;
                          goto LAB_100f653c;
                        }
                      }
                      else {
                        if (local_44c < 0x286) {
                          return '\0';
                        }
                        uVar10 = FUN_10132680(uVar7,s_disabled3dtnldevice_101648e0);
                        if ((int)uVar10 != 0) {
                          return '\0';
                        }
                        if (iVar8 != 0) {
                          return '\0';
                        }
                        cVar5 = '\x01';
                        if (uVar6 != 0) {
                          iVar8 = param_2 + 0x89;
                          goto LAB_100f653c;
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
          goto LAB_100f653c;
        }
      }
    }
    else {
      if (iVar8 != 0) {
        return '\0';
      }
      cVar5 = '\x01';
      if (uVar6 != 1) goto LAB_100f62b8;
      (*pcVar3)();
      uVar7 = (*extraout_w11_07)(param_3,param_4,uVar13,0);
      iVar8 = FUN_10132680(uVar7,s_appdriven_101641c8);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100f620c;
      }
      iVar8 = FUN_10132680(uVar7,s_disabled_10164658);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100f622c;
      }
      iVar8 = FUN_10132680(uVar7,s_autogen_point_10164798);
      if (iVar8 == 0) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100f624c;
      }
      iVar8 = FUN_10132680(uVar7,s_autogen_bilinear_101647a8);
      if ((((iVar8 == 0) || (iVar8 = FUN_10132680(uVar7,s_autogen_bicubic_101647c0), iVar8 == 0)) ||
          (iVar8 = FUN_10132680(uVar7,s_autogen_lanczos_2_101647d0), iVar8 == 0)) ||
         (iVar8 = FUN_10132680(uVar7,s_autogen_lanczos_3_101647e8), iVar8 == 0)) {
        puVar11 = (undefined4 *)(param_2 + 0x7c);
        goto LAB_100f62a8;
      }
    }
LAB_100f6554:
    uVar13 = uVar13 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
  } while( true );
}

