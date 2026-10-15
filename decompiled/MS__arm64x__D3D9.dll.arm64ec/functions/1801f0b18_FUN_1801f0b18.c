/*
 * FUN_1801f0b18 at 1801f0b18
 * undefined FUN_1801f0b18(void)
 * Address ranges: 1801f0b18-1801f1393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1801f0b18(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  longlong lVar10;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  uint uVar11;
  uint local_490 [4];
  uint local_480;
  char local_460 [4];
  uint local_45c;
  code *local_458;
  ulonglong local_450;
  undefined1 auStack_448 [1032];
  
  local_458 = (code *)__hybrid_os_arm64x_dispatch_icall;
  cVar2 = '\x01';
  uVar11 = 0;
  local_45c = param_5;
  do {
    while( true ) {
      (*local_458)();
      uVar3 = (*extraout_x11)(param_3,param_4);
      if (uVar3 <= uVar11) {
        return cVar2;
      }
      (*local_458)();
      uVar6 = (*extraout_x11_00)(param_3,param_4,uVar11);
      local_450 = uVar6;
      (*local_458)();
      uVar3 = (*extraout_x11_01)(param_3,param_4,uVar11);
      (*local_458)();
      iVar4 = (*extraout_x11_02)(param_3,param_4,uVar11);
      uVar7 = FUN_180222cb8(uVar6,s_disableandpassthru_180237398);
      if ((int)uVar7 == 0) {
        if (iVar4 != 0) goto LAB_1801f0d5c;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          lVar10 = param_2 + 0x80;
          goto LAB_1801f1358;
        }
        goto LAB_1801f0d60;
      }
      iVar5 = FUN_180222cb8(uVar6,s_videocard_180237138);
      if (iVar5 != 0) break;
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) goto LAB_1801f0d58;
      (*local_458)();
      uVar7 = (*extraout_x11_03)(param_3,param_4,uVar11,0);
      iVar4 = FUN_180222cb8(uVar7,&DAT_1802373ac);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x58) = 0;
      }
      else {
        iVar4 = FUN_180222cb8(uVar7,s_internal3d_1802373c8);
        if (iVar4 == 0) {
          uVar9 = 1;
        }
        else {
          iVar4 = FUN_180222cb8(uVar7,s_geforce_ti_4800_1802373b8);
          if (iVar4 == 0) {
            uVar9 = 2;
          }
          else {
            iVar4 = FUN_180222cb8(uVar7,s_ati_radeon_8500_1802373f0);
            if (iVar4 == 0) {
              uVar9 = 3;
            }
            else {
              iVar4 = FUN_180222cb8(uVar7,s_matrox_parhelia_512_1802373d8);
              if (iVar4 == 0) {
                uVar9 = 4;
              }
              else {
                iVar4 = FUN_180222cb8(uVar7,s_geforce_fx_5700_ultra_180237410);
                if (iVar4 == 0) {
                  uVar9 = 5;
                }
                else {
                  iVar4 = FUN_180222cb8(uVar7,s_geforce_9800_gt_180237400);
                  if (local_45c < 0x277 || iVar4 != 0) goto LAB_1801f0d5c;
                  uVar9 = 6;
                }
              }
            }
          }
        }
        *(undefined4 *)(param_2 + 0x58) = uVar9;
      }
LAB_1801f10cc:
      cVar2 = '\x01';
      uVar11 = uVar11 + 1;
    }
    iVar5 = FUN_180222cb8(uVar6,&DAT_180237428);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return '\0';
      }
      cVar2 = '\x01';
      if (uVar3 != 1) goto LAB_1801f0d60;
      *(undefined8 *)(param_2 + 0x5c) = 0;
      (*local_458)();
      uVar7 = (*extraout_x11_04)(param_3,param_4,uVar11,0);
      iVar4 = FUN_180223228(uVar7,s__d__s_180237434,param_2 + 0x5c,auStack_448,local_490,0);
      if (iVar4 == 1) {
        lVar10 = *(longlong *)(param_2 + 0x5c) << 0x14;
      }
      else {
        if (iVar4 != 2) goto LAB_1801f10cc;
        iVar4 = FUN_180222cb8(auStack_448,&DAT_180237430);
        if ((iVar4 == 0) || (iVar4 = FUN_180222cb8(auStack_448,&DAT_180237440), iVar4 == 0)) {
          *(longlong *)(param_2 + 0x5c) = *(longlong *)(param_2 + 0x5c) << 0x14;
          goto LAB_1801f0d60;
        }
        iVar4 = FUN_180222cb8(auStack_448,&DAT_180229fb4);
        if ((iVar4 != 0) && (iVar4 = FUN_180222cb8(auStack_448,&DAT_18023743c), iVar4 != 0)) {
          return '\0';
        }
        lVar10 = *(longlong *)(param_2 + 0x5c) << 0x1e;
      }
      *(longlong *)(param_2 + 0x5c) = lVar10;
      goto LAB_1801f10cc;
    }
    iVar5 = FUN_180222cb8(uVar6,s_filtering_180237448);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) {
LAB_1801f0d58:
        cVar2 = '\x01';
        if (1 < uVar3) goto LAB_1801f0d5c;
        goto LAB_1801f0d60;
      }
      (*local_458)();
      uVar7 = (*extraout_x11_05)(param_3,param_4,uVar11,0);
      iVar4 = FUN_180222cb8(uVar7,s_appdriven_180236ec0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x78) = 0;
      }
      else {
        iVar4 = FUN_180222cb8(uVar7,s_pointsampled_180237200);
        if (iVar4 == 0) {
          uVar9 = 0x100;
        }
        else {
          iVar4 = FUN_180222cb8(uVar7,s_bilinear_1802371f0);
          if (iVar4 == 0) {
            uVar9 = 0x200;
          }
          else {
            iVar4 = FUN_180222cb8(uVar7,s_pointmip_180237468);
            if (local_45c < 0x282 || iVar4 != 0) {
              iVar4 = FUN_180222cb8(uVar7,s_linearmip_180237458);
              if (iVar4 == 0) {
                uVar9 = 0x300;
              }
              else {
                iVar4 = FUN_180222cb8(uVar7,s_trilinear_180237488);
                if (iVar4 != 0) {
                  local_450 = local_450 & 0xffffffff00000000;
                  (*local_458)();
                  cVar1 = (*extraout_x11_06)(param_3,param_4,uVar11,0,&local_450);
                  cVar2 = cVar1;
                  if (cVar1 != '\0') {
                    *(int *)(param_2 + 0x78) = (int)local_450;
                    cVar2 = '\0';
                    if ((int)local_450 - 1U < 0x10) {
                      cVar2 = cVar1;
                    }
                  }
                  goto LAB_1801f0d60;
                }
                uVar9 = 0x400;
              }
            }
            else {
              uVar9 = 0x500;
            }
          }
        }
        *(undefined4 *)(param_2 + 0x78) = uVar9;
      }
      goto LAB_1801f10cc;
    }
    if ((0x281 < local_45c) && (iVar5 = FUN_180222cb8(local_450,s_mipmapping_180237478), iVar5 == 0)
       ) {
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) goto LAB_1801f0d58;
      (*local_458)();
      uVar7 = (*extraout_x11_07)(param_3,param_4,uVar11,0);
      iVar4 = FUN_180222cb8(uVar7,s_appdriven_180236ec0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x7c) = 0;
      }
      else {
        iVar4 = FUN_180222cb8(uVar7,s_disabled_180237368);
        if (iVar4 == 0) {
          uVar9 = 1;
        }
        else {
          iVar4 = FUN_180222cb8(uVar7,s_autogen_point_180237498);
          if (iVar4 == 0) {
            uVar9 = 2;
          }
          else {
            iVar4 = FUN_180222cb8(uVar7,s_autogen_bilinear_1802374b8);
            if ((((iVar4 != 0) &&
                 (iVar4 = FUN_180222cb8(uVar7,s_autogen_bicubic_1802374a8), iVar4 != 0)) &&
                (iVar4 = FUN_180222cb8(uVar7,s_autogen_lanczos_2_1802374e8), iVar4 != 0)) &&
               (iVar4 = FUN_180222cb8(uVar7,s_autogen_lanczos_3_1802374d0), cVar2 = '\x01',
               iVar4 != 0)) goto LAB_1801f0d60;
            uVar9 = 3;
          }
        }
        *(undefined4 *)(param_2 + 0x7c) = uVar9;
      }
      goto LAB_1801f10cc;
    }
    uVar6 = local_450;
    uVar7 = FUN_180222cb8(local_450,s_keepfilterifpointsampled_180237500);
    if (local_45c < 0x276 || (int)uVar7 != 0) {
      if ((local_45c < 0x282) &&
         (uVar7 = FUN_180222cb8(uVar6,s_disablemipmapping_180237210), (int)uVar7 == 0)) {
        if (iVar4 != 0) goto LAB_1801f0d5c;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          local_460[0] = '\0';
          cVar2 = FUN_1801ef878(uVar7,param_3,param_4,uVar11,local_460,uVar3);
          *(uint *)(param_2 + 0x7c) = (uint)(local_460[0] != '\0');
        }
      }
      else {
        uVar6 = local_450;
        uVar7 = FUN_180222cb8(local_450,s_resolution_180237228);
        if ((int)uVar7 == 0) {
          local_480 = local_45c;
          local_490[0] = uVar3;
          cVar2 = FUN_1801efa90(uVar7,param_3,param_4,uVar11,param_2 + 100,param_2 + 0x68,
                                param_2 + 0x70,param_2 + 0x74);
        }
        else {
          uVar7 = FUN_180222cb8(uVar6,s_antialiasing_180237238);
          if ((int)uVar7 == 0) {
            if (iVar4 != 0) goto LAB_1801f0d5c;
            cVar2 = '\x01';
            if (uVar3 != 0) {
              cVar2 = FUN_1801efd00(uVar7,param_3,param_4,uVar11,param_2 + 0x6c,uVar3);
            }
          }
          else {
            uVar7 = FUN_180222cb8(uVar6,s_appcontrolledscreenmode_180237520);
            if ((int)uVar7 == 0) {
              if (iVar4 != 0) goto LAB_1801f0d5c;
              cVar2 = '\x01';
              if (uVar3 == 0) goto LAB_1801f0d60;
              lVar10 = param_2 + 0x81;
LAB_1801f1358:
              cVar2 = FUN_1801ef878(uVar7,param_3,param_4,uVar11,lVar10,uVar3);
            }
            else {
              uVar7 = FUN_180222cb8(uVar6,s_disablealtentertotogglescreenmod_180237538);
              if ((int)uVar7 == 0) {
                if (iVar4 == 0) {
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    lVar10 = param_2 + 0x82;
                    goto LAB_1801f1358;
                  }
                  goto LAB_1801f0d60;
                }
LAB_1801f0d5c:
                cVar2 = '\0';
              }
              else {
                if (local_45c < 0x27a) {
                  pcVar8 = s_bilinearblitstretch_180237560;
LAB_1801f1250:
                  uVar7 = FUN_180222cb8(uVar6,pcVar8);
                  if ((int)uVar7 == 0) {
                    if (iVar4 == 0) {
                      cVar2 = '\x01';
                      if (uVar3 == 0) goto LAB_1801f0d60;
                      lVar10 = param_2 + 0x84;
                      goto LAB_1801f1358;
                    }
                    goto LAB_1801f0d5c;
                  }
                }
                else if (0x27f < local_45c) {
                  pcVar8 = s_bilinear2doperations_180237578;
                  goto LAB_1801f1250;
                }
                uVar6 = local_450;
                uVar7 = FUN_180222cb8(local_450,s_phongshadingwhenpossible_180237590);
                if ((int)uVar7 == 0) {
                  if (iVar4 != 0) goto LAB_1801f0d5c;
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    lVar10 = param_2 + 0x85;
                    goto LAB_1801f1358;
                  }
                }
                else {
                  uVar7 = FUN_180222cb8(uVar6,s_forceverticalsync_180237260);
                  if ((int)uVar7 == 0) {
                    if (iVar4 != 0) goto LAB_1801f0d5c;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      lVar10 = param_2 + 0x86;
                      goto LAB_1801f1358;
                    }
                  }
                  else {
                    uVar7 = FUN_180222cb8(uVar6,s_dgvoodoowatermark_1802375b0);
                    if ((int)uVar7 == 0) {
                      if (iVar4 != 0) goto LAB_1801f0d5c;
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        lVar10 = param_2 + 0x83;
                        goto LAB_1801f1358;
                      }
                    }
                    else {
                      uVar7 = FUN_180222cb8(uVar6,s_fastvideomemoryaccess_1802375c8);
                      if ((int)uVar7 == 0) {
                        if (iVar4 != 0) goto LAB_1801f0d5c;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          lVar10 = param_2 + 0x88;
                          goto LAB_1801f1358;
                        }
                      }
                      else {
                        if ((local_45c < 0x286) ||
                           (uVar7 = FUN_180222cb8(uVar6,s_disabled3dtnldevice_1802375e0),
                           (int)uVar7 != 0)) {
                          return '\0';
                        }
                        if (iVar4 != 0) goto LAB_1801f0d5c;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          lVar10 = param_2 + 0x89;
                          goto LAB_1801f1358;
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
    }
    else {
      if (iVar4 != 0) goto LAB_1801f0d5c;
      cVar2 = '\x01';
      if (uVar3 != 0) {
        lVar10 = param_2 + 0x87;
        goto LAB_1801f1358;
      }
    }
LAB_1801f0d60:
    uVar11 = uVar11 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

