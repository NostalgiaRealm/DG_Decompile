/*
 * FUN_1800d2928 at 1800d2928
 * undefined FUN_1800d2928(void)
 * Address ranges: 1800d2928-1800d30db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d2928(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  char local_460 [4];
  int local_45c;
  undefined1 auStack_458 [1032];
  
  cVar2 = '\x01';
  uVar11 = 0;
  do {
    while( true ) {
      uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar3 <= uVar11) {
        return cVar2;
      }
      uVar6 = (**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
      iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
      uVar7 = func_0x000180222cb8(uVar6,s_disableandpassthru_18023a5a8);
      if ((int)uVar7 == 0) {
        if (iVar4 != 0) goto LAB_1800d2b14;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          lVar10 = param_2 + 0x80;
          goto LAB_1800d309c;
        }
        goto LAB_1800d2b18;
      }
      iVar5 = func_0x000180222cb8(uVar6,s_videocard_18023a348);
      if (iVar5 != 0) break;
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) goto LAB_1800d2b10;
      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = func_0x000180222cb8(uVar6,&DAT_18023a5bc);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x58) = 0;
      }
      else {
        iVar4 = func_0x000180222cb8(uVar6,s_internal3d_18023a5d8);
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x58) = 1;
        }
        else {
          iVar4 = func_0x000180222cb8(uVar6,s_geforce_ti_4800_18023a5c8);
          if (iVar4 == 0) {
            uVar9 = 2;
          }
          else {
            iVar4 = func_0x000180222cb8(uVar6,s_ati_radeon_8500_18023a600);
            if (iVar4 == 0) {
              uVar9 = 3;
            }
            else {
              iVar4 = func_0x000180222cb8(uVar6,s_matrox_parhelia_512_18023a5e8);
              if (iVar4 == 0) {
                uVar9 = 4;
              }
              else {
                iVar4 = func_0x000180222cb8(uVar6,s_geforce_fx_5700_ultra_18023a620);
                if (iVar4 == 0) {
                  uVar9 = 5;
                }
                else {
                  iVar4 = func_0x000180222cb8(uVar6,s_geforce_9800_gt_18023a610);
                  if (param_5 < 0x277 || iVar4 != 0) goto LAB_1800d2b14;
                  uVar9 = 6;
                }
              }
            }
          }
          *(undefined4 *)(param_2 + 0x58) = uVar9;
        }
      }
LAB_1800d2e2c:
      cVar2 = '\x01';
      uVar11 = uVar11 + 1;
    }
    iVar5 = func_0x000180222cb8(uVar6,&DAT_18023a638);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return '\0';
      }
      cVar2 = '\x01';
      if (uVar3 != 1) goto LAB_1800d2b18;
      *(undefined8 *)(param_2 + 0x5c) = 0;
      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = FUN_180103688(uVar6,s__d__s_18023a644,param_2 + 0x5c,auStack_458);
      if (iVar4 == 1) {
        lVar10 = *(longlong *)(param_2 + 0x5c) << 0x14;
      }
      else {
        if (iVar4 != 2) goto LAB_1800d2e2c;
        iVar4 = func_0x000180222cb8(auStack_458,&DAT_18023a640);
        if ((iVar4 == 0) || (iVar4 = func_0x000180222cb8(auStack_458,&DAT_18023a650), iVar4 == 0)) {
          *(longlong *)(param_2 + 0x5c) = *(longlong *)(param_2 + 0x5c) << 0x14;
          goto LAB_1800d2b18;
        }
        iVar4 = func_0x000180222cb8(auStack_458,&DAT_180233848);
        if ((iVar4 != 0) && (iVar4 = func_0x000180222cb8(auStack_458,&DAT_18023a64c), iVar4 != 0)) {
          return '\0';
        }
        lVar10 = *(longlong *)(param_2 + 0x5c) << 0x1e;
      }
      *(longlong *)(param_2 + 0x5c) = lVar10;
      goto LAB_1800d2e2c;
    }
    iVar5 = func_0x000180222cb8(uVar6,s_filtering_18023a658);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) {
LAB_1800d2b10:
        cVar2 = '\x01';
        if (1 < uVar3) goto LAB_1800d2b14;
        goto LAB_1800d2b18;
      }
      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = func_0x000180222cb8(uVar6,s_appdriven_18023a0d0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x78) = 0;
      }
      else {
        iVar4 = func_0x000180222cb8(uVar6,s_pointsampled_18023a410);
        if (iVar4 == 0) {
          uVar9 = 0x100;
        }
        else {
          iVar4 = func_0x000180222cb8(uVar6,s_bilinear_18023a400);
          if (iVar4 == 0) {
            uVar9 = 0x200;
          }
          else {
            iVar4 = func_0x000180222cb8(uVar6,s_pointmip_18023a678);
            if (param_5 < 0x282 || iVar4 != 0) {
              iVar4 = func_0x000180222cb8(uVar6,s_linearmip_18023a668);
              if (iVar4 == 0) {
                uVar9 = 0x300;
              }
              else {
                iVar4 = func_0x000180222cb8(uVar6,s_trilinear_18023a698);
                if (iVar4 != 0) {
                  local_45c = 0;
                  cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,&local_45c);
                  cVar2 = cVar1;
                  if (cVar1 != '\0') {
                    *(int *)(param_2 + 0x78) = local_45c;
                    cVar2 = '\0';
                    if (local_45c - 1U < 0x10) {
                      cVar2 = cVar1;
                    }
                  }
                  goto LAB_1800d2b18;
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
      goto LAB_1800d2e2c;
    }
    if ((0x281 < param_5) && (iVar5 = func_0x000180222cb8(uVar6,s_mipmapping_18023a688), iVar5 == 0)
       ) {
      if (iVar4 != 0) {
        return '\0';
      }
      if (uVar3 != 1) goto LAB_1800d2b10;
      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = func_0x000180222cb8(uVar6,s_appdriven_18023a0d0);
      if (iVar4 == 0) {
        *(undefined4 *)(param_2 + 0x7c) = 0;
      }
      else {
        iVar4 = func_0x000180222cb8(uVar6,s_disabled_18023a578);
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x7c) = 1;
        }
        else {
          iVar4 = func_0x000180222cb8(uVar6,s_autogen_point_18023a6a8);
          if (iVar4 == 0) {
            uVar9 = 2;
          }
          else {
            iVar4 = func_0x000180222cb8(uVar6,s_autogen_bilinear_18023a6c8);
            if ((((iVar4 != 0) &&
                 (iVar4 = func_0x000180222cb8(uVar6,s_autogen_bicubic_18023a6b8), iVar4 != 0)) &&
                (iVar4 = func_0x000180222cb8(uVar6,s_autogen_lanczos_2_18023a6f8), iVar4 != 0)) &&
               (iVar4 = func_0x000180222cb8(uVar6,s_autogen_lanczos_3_18023a6e0), cVar2 = '\x01',
               iVar4 != 0)) goto LAB_1800d2b18;
            uVar9 = 3;
          }
          *(undefined4 *)(param_2 + 0x7c) = uVar9;
        }
      }
      goto LAB_1800d2e2c;
    }
    uVar7 = func_0x000180222cb8(uVar6,s_keepfilterifpointsampled_18023a710);
    if (param_5 < 0x276 || (int)uVar7 != 0) {
      if ((param_5 < 0x282) &&
         (uVar7 = func_0x000180222cb8(uVar6,s_disablemipmapping_18023a420), (int)uVar7 == 0)) {
        if (iVar4 != 0) goto LAB_1800d2b14;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          local_460[0] = '\0';
          cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar11,local_460,uVar3);
          *(uint *)(param_2 + 0x7c) = (uint)(local_460[0] != '\0');
        }
      }
      else {
        uVar7 = func_0x000180222cb8(uVar6,s_resolution_18023a438);
        if ((int)uVar7 == 0) {
          cVar2 = FUN_1800d19e8(uVar7,param_3,param_4,uVar11,param_2 + 100,param_2 + 0x68,
                                param_2 + 0x70,param_2 + 0x74,uVar3);
        }
        else {
          uVar7 = func_0x000180222cb8(uVar6,s_antialiasing_18023a448);
          if ((int)uVar7 == 0) {
            if (iVar4 != 0) goto LAB_1800d2b14;
            cVar2 = '\x01';
            if (uVar3 != 0) {
              cVar2 = FUN_1800d1bf8(uVar7,param_3,param_4,uVar11,param_2 + 0x6c,uVar3);
            }
          }
          else {
            uVar7 = func_0x000180222cb8(uVar6,s_appcontrolledscreenmode_18023a730);
            if ((int)uVar7 == 0) {
              if (iVar4 != 0) goto LAB_1800d2b14;
              cVar2 = '\x01';
              if (uVar3 == 0) goto LAB_1800d2b18;
              lVar10 = param_2 + 0x81;
LAB_1800d309c:
              cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar11,lVar10,uVar3);
            }
            else {
              uVar7 = func_0x000180222cb8(uVar6,s_disablealtentertotogglescreenmod_18023a748);
              if ((int)uVar7 == 0) {
                if (iVar4 == 0) {
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    lVar10 = param_2 + 0x82;
                    goto LAB_1800d309c;
                  }
                  goto LAB_1800d2b18;
                }
LAB_1800d2b14:
                cVar2 = '\0';
              }
              else {
                if (param_5 < 0x27a) {
                  pcVar8 = s_bilinearblitstretch_18023a770;
LAB_1800d2f9c:
                  uVar7 = func_0x000180222cb8(uVar6,pcVar8);
                  if ((int)uVar7 == 0) {
                    if (iVar4 == 0) {
                      cVar2 = '\x01';
                      if (uVar3 == 0) goto LAB_1800d2b18;
                      lVar10 = param_2 + 0x84;
                      goto LAB_1800d309c;
                    }
                    goto LAB_1800d2b14;
                  }
                }
                else if (0x27f < param_5) {
                  pcVar8 = s_bilinear2doperations_18023a788;
                  goto LAB_1800d2f9c;
                }
                uVar7 = func_0x000180222cb8(uVar6,s_phongshadingwhenpossible_18023a7a0);
                if ((int)uVar7 == 0) {
                  if (iVar4 != 0) goto LAB_1800d2b14;
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    lVar10 = param_2 + 0x85;
                    goto LAB_1800d309c;
                  }
                }
                else {
                  uVar7 = func_0x000180222cb8(uVar6,s_forceverticalsync_18023a470);
                  if ((int)uVar7 == 0) {
                    if (iVar4 != 0) goto LAB_1800d2b14;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      lVar10 = param_2 + 0x86;
                      goto LAB_1800d309c;
                    }
                  }
                  else {
                    uVar7 = func_0x000180222cb8(uVar6,s_dgvoodoowatermark_18023a7c0);
                    if ((int)uVar7 == 0) {
                      if (iVar4 != 0) goto LAB_1800d2b14;
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        lVar10 = param_2 + 0x83;
                        goto LAB_1800d309c;
                      }
                    }
                    else {
                      uVar7 = func_0x000180222cb8(uVar6,s_fastvideomemoryaccess_18023a7d8);
                      if ((int)uVar7 == 0) {
                        if (iVar4 != 0) goto LAB_1800d2b14;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          lVar10 = param_2 + 0x88;
                          goto LAB_1800d309c;
                        }
                      }
                      else {
                        if ((param_5 < 0x286) ||
                           (uVar7 = func_0x000180222cb8(uVar6,s_disabled3dtnldevice_18023a7f0),
                           (int)uVar7 != 0)) {
                          return '\0';
                        }
                        if (iVar4 != 0) goto LAB_1800d2b14;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          lVar10 = param_2 + 0x89;
                          goto LAB_1800d309c;
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
      if (iVar4 != 0) goto LAB_1800d2b14;
      cVar2 = '\x01';
      if (uVar3 != 0) {
        lVar10 = param_2 + 0x87;
        goto LAB_1800d309c;
      }
    }
LAB_1800d2b18:
    uVar11 = uVar11 + 1;
    if (cVar2 == '\0') {
      return '\0';
    }
  } while( true );
}

