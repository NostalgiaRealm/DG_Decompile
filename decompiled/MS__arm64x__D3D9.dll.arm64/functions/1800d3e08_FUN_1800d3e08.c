/*
 * FUN_1800d3e08 at 1800d3e08
 * undefined FUN_1800d3e08(void)
 * Address ranges: 1800d3e08-1800d48f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800d3e08(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  char local_170;
  undefined1 uStack_16f;
  undefined1 auStack_16e [2];
  uint local_16c;
  uint uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 auStack_150 [256];
  
  local_154 = 3;
  if (param_5 != 0x279) {
    local_154 = 1;
  }
  cVar2 = '\x01';
  uVar13 = 0;
LAB_1800d3e50:
  uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
  if (uVar3 <= uVar13) {
    return cVar2;
  }
  uVar6 = (**(code **)(*param_3 + 0x40))(param_3,param_4,uVar13);
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar13);
  uVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar13);
  if (param_5 < 0x263) {
    uVar7 = func_0x000180222cb8(uVar6,s_forcenearestpointfilter_18023abb0);
    if ((int)uVar7 == 0) {
      if ((uVar4 == 0) && (uVar3 != 0)) {
        local_170 = '\0';
        cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar13,&local_170,uVar3);
        *(uint *)(param_2 + 0xca) = (uint)(local_170 == '\0');
      }
    }
    else {
LAB_1800d41f8:
      iVar5 = func_0x000180222cb8(uVar6,s_deframersize_18023acc0);
      if (iVar5 == 0) {
        if (uVar4 == 0 && uVar3 != 0) {
          if (uVar3 != 1) goto LAB_1800d44d4;
          lVar9 = param_2 + 0x9e;
LAB_1800d41cc:
          cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar13,0,lVar9);
          if (cVar2 == '\0') goto LAB_1800d44d4;
LAB_1800d41f0:
          cVar2 = '\x01';
        }
      }
      else {
        iVar5 = func_0x000180222cb8(uVar6,s_imagescalefactor_18023acd0);
        if (iVar5 == 0) {
          if (uVar3 == 0) {
            uVar3 = 0;
            if (uVar4 != 0) {
              do {
                uVar6 = (**(code **)(*param_3 + 0x68))(param_3,param_4,uVar13,uVar3);
                iVar5 = func_0x000180222cb8(uVar6,&DAT_180233854);
                if (iVar5 == 0) {
                  lVar9 = param_2 + 0xa2;
LAB_1800d42e4:
                  cVar2 = (**(code **)(*param_3 + 0x78))(param_3,param_4,uVar13,uVar3,lVar9);
                }
                else {
                  iVar5 = func_0x000180222cb8(uVar6,&DAT_180233858);
                  if (iVar5 == 0) {
                    lVar9 = param_2 + 0xa6;
                    goto LAB_1800d42e4;
                  }
                  cVar2 = '\0';
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar4);
            }
          }
          else if (uVar4 == 0) {
            if ((uVar3 == 1) &&
               (cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar13,0,param_2 + 0xa2),
               cVar2 != '\0')) {
              cVar2 = '\x01';
            }
            else {
              cVar2 = '\0';
            }
            *(undefined4 *)(param_2 + 0xa6) = *(undefined4 *)(param_2 + 0xa2);
          }
        }
        else if (param_5 < 0x274) {
          if (0x261 < param_5) goto LAB_1800d435c;
LAB_1800d44dc:
          iVar5 = func_0x000180222cb8(uVar6,s_desktopresolution_18023ad30);
          if (iVar5 == 0) {
            if (uVar4 != 0) {
              return '\0';
            }
            cVar2 = '\x01';
            if (uVar3 == 1) {
              uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
              local_164 = 0;
              uVar8 = FUN_1800d1950(uVar6,&local_160,&uStack_15c,&local_164,&local_158);
              if ((uVar8 & 1) == 0) goto LAB_1800d44d4;
              uVar13 = uVar13 + 1;
              *(undefined4 *)(param_2 + 0x8a) = local_160;
              *(undefined4 *)(param_2 + 0x8e) = uStack_15c;
              *(undefined4 *)(param_2 + 0x92) = local_164;
              *(undefined4 *)(param_2 + 0x96) = local_158;
              goto LAB_1800d3e50;
            }
            if (uVar3 == 0) goto LAB_1800d48c8;
          }
          else {
            if ((0x25f < param_5) &&
               (iVar5 = func_0x000180222cb8(uVar6,s_desktopbitdepth_18023ad48), iVar5 == 0)) {
              if (uVar4 == 0 && uVar3 != 0) {
                if (uVar3 == 1) {
                  lVar9 = param_2 + 0x9a;
                  goto LAB_1800d41cc;
                }
                goto LAB_1800d44d4;
              }
              goto LAB_1800d48c8;
            }
            uVar7 = func_0x000180222cb8(uVar6,s_freemouse_18023ad58);
            if ((int)uVar7 == 0) {
              if ((uVar4 == 0) && (uVar3 != 0)) {
                cVar2 = FUN_1800d1868(uVar7,param_3,param_4,uVar13,param_2 + 0xe6,uVar3);
              }
              goto LAB_1800d48c8;
            }
            iVar5 = func_0x000180222cb8(uVar6,s_fpslimit_18023ad68);
            if (iVar5 == 0) {
              if (uVar4 == 0 && uVar3 != 0) {
                if (uVar3 == 1) {
                  uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
                  uVar8 = FUN_1800d9258(uVar6,param_2 + 0xda,param_2 + 0xde);
                  if ((uVar8 & 1) != 0) goto LAB_1800d41f0;
                }
                goto LAB_1800d44d4;
              }
              goto LAB_1800d48c8;
            }
            iVar5 = func_0x000180222cb8(uVar6,s_environment_18023ad78);
            if (iVar5 != 0) {
              iVar5 = func_0x000180222cb8(uVar6,s_windowedattributes_18023ad90);
              if (iVar5 == 0) {
                if (uVar4 == 0) {
                  *(undefined4 *)(param_2 + 0xc2) = 0;
                  uVar4 = 0;
                  if (uVar3 != 0) {
                    do {
                      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,uVar4);
                      iVar5 = func_0x000180222cb8(uVar6,s_borderless_18023adb0);
                      if (iVar5 == 0) {
                        uVar11 = *(uint *)(param_2 + 0xc2) | 1;
LAB_1800d4740:
                        *(uint *)(param_2 + 0xc2) = uVar11;
                      }
                      else {
                        iVar5 = func_0x000180222cb8(uVar6,s_alwaysontop_18023add0);
                        if (iVar5 == 0) {
                          uVar11 = *(uint *)(param_2 + 0xc2) | 2;
                          goto LAB_1800d4740;
                        }
                        iVar5 = func_0x000180222cb8(uVar6,s_fullscreensize_18023adc0);
                        if (iVar5 == 0) {
                          uVar11 = *(uint *)(param_2 + 0xc2) | 4;
                          goto LAB_1800d4740;
                        }
                        cVar2 = '\0';
                      }
                      uVar4 = uVar4 + 1;
                    } while (uVar4 < uVar3);
                  }
                }
              }
              else if ((param_5 < 0x273) ||
                      (iVar5 = func_0x000180222cb8(uVar6,s_fullscreenattributes_18023ade0),
                      iVar5 != 0)) {
                if (param_5 < 0x280) {
                  if (0x279 < param_5) {
                    return '\0';
                  }
                  uVar6 = func_0x000180222cb8(uVar6,s_enablegdihooking_18023ae18);
                  if ((int)uVar6 != 0) {
                    return '\0';
                  }
                  if ((uVar4 == 0) && (uVar3 != 0)) {
                    local_170 = '\0';
                    cVar2 = FUN_1800d1868(uVar6,param_3,param_4,uVar13,&local_170,uVar3);
                    uVar10 = local_154;
                    if (local_170 == '\0') {
                      uVar10 = 0;
                    }
                    *(undefined4 *)(param_2 + 0xe2) = uVar10;
                  }
                }
                else {
                  iVar5 = func_0x000180222cb8(uVar6,s_systemhookflags_18023adf8);
                  if (iVar5 != 0) {
                    return '\0';
                  }
                  if (uVar4 == 0) {
                    *(undefined4 *)(param_2 + 0xe2) = 0;
                    uVar4 = 0;
                    if (uVar3 != 0) {
                      do {
                        uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,uVar4);
                        iVar5 = func_0x000180222cb8(uVar6,&DAT_18023ae10);
                        if (iVar5 == 0) {
                          uVar11 = *(uint *)(param_2 + 0xe2) | 1;
LAB_1800d4854:
                          *(uint *)(param_2 + 0xe2) = uVar11;
                        }
                        else {
                          iVar5 = func_0x000180222cb8(uVar6,s_cursor_18023ae2c);
                          if (iVar5 == 0) {
                            uVar11 = *(uint *)(param_2 + 0xe2) | 2;
                            goto LAB_1800d4854;
                          }
                          cVar2 = '\0';
                        }
                        uVar4 = uVar4 + 1;
                      } while (uVar4 < uVar3);
                    }
                  }
                }
              }
              else if (uVar4 == 0) {
                *(undefined4 *)(param_2 + 0xc6) = 0;
                uVar4 = 0;
                if (uVar3 != 0) {
                  do {
                    uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,uVar4);
                    iVar5 = func_0x000180222cb8(uVar6,&DAT_18023ae08);
                    if (iVar5 == 0) {
                      *(uint *)(param_2 + 0xc6) = *(uint *)(param_2 + 0xc6) | 1;
                    }
                    else {
                      cVar2 = '\0';
                    }
                    uVar4 = uVar4 + 1;
                  } while (uVar4 < uVar3);
                }
              }
              goto LAB_1800d48c8;
            }
            if (uVar4 != 0 || uVar3 == 0) goto LAB_1800d48c8;
            if (uVar3 == 1) {
              uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
              iVar5 = func_0x000180222cb8(uVar6,s_dosbox_18023ad84);
              if (iVar5 == 0) {
                uVar10 = 1;
              }
              else {
                iVar5 = func_0x000180222cb8(uVar6,&DAT_18023ada4);
                if (iVar5 != 0) goto LAB_1800d44d4;
                uVar10 = 2;
              }
              *(undefined4 *)(param_2 + 0xbe) = uVar10;
              goto LAB_1800d48c8;
            }
          }
LAB_1800d44d4:
          cVar2 = '\0';
        }
        else {
          iVar5 = func_0x000180222cb8(uVar6,s_cursorscalefactor_18023ace8);
          if (iVar5 == 0) {
            if (uVar4 == 0 && uVar3 != 0) {
              if (uVar3 == 1) {
                lVar9 = param_2 + 0xaa;
                goto LAB_1800d41cc;
              }
              goto LAB_1800d44d4;
            }
          }
          else {
LAB_1800d435c:
            iVar5 = func_0x000180222cb8(uVar6,s_displayroi_18023ad00);
            if (iVar5 != 0) goto LAB_1800d44dc;
            uVar11 = 0;
            uVar1 = param_5;
            cVar12 = cVar2;
            if (uVar4 != 0) {
              do {
                uStack_168 = uVar1;
                local_16c = uVar3;
                uVar6 = (**(code **)(*param_3 + 0x68))(param_3,param_4,uVar13,uVar11);
                iVar5 = func_0x000180222cb8(uVar6,&DAT_18023acfc);
                cVar2 = cVar12;
                if (iVar5 == 0) {
                  uVar6 = (**(code **)(*param_3 + 0x70))(param_3,param_4,uVar13,uVar11);
                  iVar5 = FUN_180103688(uVar6,s__s__c_18023a8b8,auStack_150,&uStack_16f);
                  if ((iVar5 == 1) &&
                     (iVar5 = func_0x000180222cb8(auStack_150,s_centered_18023a1f0), iVar5 == 0)) {
                    *(undefined4 *)(param_2 + 0xae) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0xb2) = 0xffffffff;
                  }
                  else {
                    iVar5 = FUN_180103688(uVar6,s____d____d____c_18023ad20,param_2 + 0xae,
                                          param_2 + 0xb2,&uStack_16f);
                    cVar2 = '\0';
                    if (iVar5 == 2) {
                      cVar2 = cVar12;
                    }
                  }
                }
                uVar11 = uVar11 + 1;
                param_5 = uStack_168;
                uVar3 = local_16c;
                uVar1 = uStack_168;
                cVar12 = cVar2;
              } while (uVar11 < uVar4);
            }
            if (cVar2 != '\0') {
              if (uVar3 == 0) {
                if (uVar4 != 0) goto LAB_1800d44d4;
              }
              else {
                if (uVar3 != 1) goto LAB_1800d44d4;
                local_16c = 0;
                uStack_168 = 0;
                uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
                iVar5 = FUN_180103688(uVar6,s__d__d__c_18023ad10,&local_16c,&uStack_168,auStack_16e)
                ;
                if (iVar5 == 2) {
                  *(undefined4 *)(param_2 + 0xb6) = 0xffffffff;
                  *(uint *)(param_2 + 0xba) = uStack_168 | local_16c << 0x10;
                }
                else {
                  iVar5 = FUN_180103688(uVar6,s____d____d____c_18023ad20,param_2 + 0xb6,
                                        param_2 + 0xba,auStack_16e);
                  if (iVar5 != 2) {
                    cVar2 = '\0';
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
    iVar5 = func_0x000180222cb8(uVar6,s_resampling_18023abc8);
    if (iVar5 == 0) {
      if (uVar4 == 0 && uVar3 != 0) {
        if (uVar3 != 1) goto LAB_1800d44d4;
        uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
        iVar5 = func_0x000180222cb8(uVar6,s_pointsampled_18023a410);
        if (iVar5 == 0) {
          *(undefined4 *)(param_2 + 0xca) = 0;
        }
        else {
          iVar5 = func_0x000180222cb8(uVar6,s_bilinear_18023a400);
          if (iVar5 == 0) {
            uVar10 = 1;
          }
          else {
            iVar5 = func_0x000180222cb8(uVar6,s_bicubic_18023abd8);
            if (iVar5 == 0) {
              uVar10 = 2;
            }
            else {
              iVar5 = func_0x000180222cb8(uVar6,s_lanczos_2_18023abf0);
              if (iVar5 == 0) {
                uVar10 = 3;
              }
              else {
                iVar5 = func_0x000180222cb8(uVar6,s_lanczos_3_18023abe0);
                if (iVar5 != 0) goto LAB_1800d44d4;
                uVar10 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0xca) = uVar10;
        }
      }
    }
    else if ((param_5 < 0x279) ||
            (iVar5 = func_0x000180222cb8(uVar6,s_presentationmodel_18023ac00), iVar5 != 0)) {
      if ((param_5 < 0x281) ||
         (iVar5 = func_0x000180222cb8(uVar6,s_colorspace_18023ac40), iVar5 != 0)) {
        if ((param_5 < 0x287) ||
           (iVar5 = func_0x000180222cb8(uVar6,s_watermarkdisplayduration_18023aca0), iVar5 != 0))
        goto LAB_1800d41f8;
        if (uVar4 == 0) {
          if ((uVar3 == 0) || (uVar3 != 1)) goto LAB_1800d44d4;
          lVar9 = param_2 + 0xd6;
          goto LAB_1800d41cc;
        }
      }
      else if (uVar4 == 0 && uVar3 != 0) {
        if (uVar3 != 1) goto LAB_1800d44d4;
        uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
        iVar5 = func_0x000180222cb8(uVar6,s_appdriven_18023a0d0);
        if (iVar5 == 0) {
          *(undefined4 *)(param_2 + 0xd2) = 0;
        }
        else {
          iVar5 = func_0x000180222cb8(uVar6,s_argb8888_sdr_18023ac60);
          if (iVar5 == 0) {
            uVar10 = 1;
          }
          else {
            iVar5 = func_0x000180222cb8(uVar6,s_argb2101010_sdr_18023ac50);
            if (iVar5 == 0) {
              uVar10 = 2;
            }
            else {
              iVar5 = func_0x000180222cb8(uVar6,s_argb2101010_sdr_wcg_18023ac88);
              if (iVar5 == 0) {
                uVar10 = 3;
              }
              else {
                iVar5 = func_0x000180222cb8(uVar6,s_argb16161616_hdr_18023ac70);
                if (iVar5 != 0) goto LAB_1800d44d4;
                uVar10 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0xd2) = uVar10;
        }
      }
    }
    else if (uVar4 == 0 && uVar3 != 0) {
      if (uVar3 != 1) goto LAB_1800d44d4;
      uVar6 = (**(code **)(*param_3 + 0x50))(param_3,param_4,uVar13,0);
      iVar5 = func_0x000180222cb8(uVar6,&DAT_18023a984);
      if (iVar5 == 0) {
        *(undefined4 *)(param_2 + 0xce) = 0;
      }
      else {
        iVar5 = func_0x000180222cb8(uVar6,s_discard_18023ac18);
        if (iVar5 == 0) {
          uVar10 = 1;
        }
        else {
          iVar5 = func_0x000180222cb8(uVar6,&DAT_18023ac14);
          if (iVar5 == 0) {
            uVar10 = 2;
          }
          else {
            iVar5 = func_0x000180222cb8(uVar6,s_flip_discard_18023ac30);
            if (iVar5 == 0) {
              uVar10 = 3;
            }
            else {
              iVar5 = func_0x000180222cb8(uVar6,s_flip_seq_18023ac20);
              if (iVar5 != 0) goto LAB_1800d44d4;
              uVar10 = 4;
            }
          }
        }
        *(undefined4 *)(param_2 + 0xce) = uVar10;
      }
    }
  }
LAB_1800d48c8:
  uVar13 = uVar13 + 1;
  if (cVar2 == '\0') {
    return '\0';
  }
  goto LAB_1800d3e50;
}

