/*
 * FUN_140019e08 at 140019e08
 * uint __cdecl FUN_140019e08(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, char * param_5, ulonglong param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140019e08-14001a8f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_140019e08(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  char *param_5,ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  char local_170;
  char cStack_16f;
  char acStack_16e [2];
  uint local_16c;
  uint uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 local_154;
  byte abStack_150 [256];
  
  uVar13 = (ulonglong)param_5 & 0xffffffff;
  local_154 = 3;
  if ((int)param_5 != 0x279) {
    local_154 = 1;
  }
  uVar12 = 1;
  uVar15 = 0;
LAB_140019e50:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar15) {
      return uVar12;
    }
    pbVar8 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar15);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar15);
    uVar14 = (ulonglong)uVar3;
    uVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar15);
    uVar7 = (uint)uVar13;
    if (0x262 < uVar7) {
      uVar5 = FUN_140024ce0(pbVar8,(byte *)"resampling");
      if (uVar5 == 0) {
        if (uVar4 == 0 && uVar3 != 0) {
          if (uVar3 != 1) goto LAB_14001a4d4;
          pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
          uVar3 = FUN_140024ce0(pbVar8,(byte *)"pointsampled");
          if (uVar3 == 0) {
            *(undefined4 *)(param_2 + 0xca) = 0;
          }
          else {
            uVar3 = FUN_140024ce0(pbVar8,(byte *)"bilinear");
            if (uVar3 == 0) {
              uVar10 = 1;
            }
            else {
              uVar3 = FUN_140024ce0(pbVar8,(byte *)"bicubic");
              if (uVar3 == 0) {
                uVar10 = 2;
              }
              else {
                uVar3 = FUN_140024ce0(pbVar8,(byte *)"lanczos-2");
                if (uVar3 == 0) {
                  uVar10 = 3;
                }
                else {
                  uVar3 = FUN_140024ce0(pbVar8,(byte *)"lanczos-3");
                  if (uVar3 != 0) goto LAB_14001a4d4;
                  uVar10 = 4;
                }
              }
            }
            *(undefined4 *)(param_2 + 0xca) = uVar10;
          }
        }
      }
      else if ((uVar7 < 0x279) ||
              (uVar5 = FUN_140024ce0(pbVar8,(byte *)"presentationmodel"), uVar5 != 0)) {
        if ((uVar7 < 0x281) || (uVar5 = FUN_140024ce0(pbVar8,(byte *)"colorspace"), uVar5 != 0)) {
          if ((uVar7 < 0x287) ||
             (uVar5 = FUN_140024ce0(pbVar8,(byte *)"watermarkdisplayduration"), uVar5 != 0))
          goto LAB_14001a1f8;
          if (uVar4 == 0) {
            if ((uVar3 == 0) || (uVar3 != 1)) goto LAB_14001a4d4;
            param_5 = (char *)(param_2 + 0xd6);
            goto LAB_14001a1cc;
          }
        }
        else if (uVar4 == 0 && uVar3 != 0) {
          if (uVar3 != 1) goto LAB_14001a4d4;
          pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
          uVar3 = FUN_140024ce0(pbVar8,(byte *)"appdriven");
          if (uVar3 == 0) {
            *(undefined4 *)(param_2 + 0xd2) = 0;
          }
          else {
            uVar3 = FUN_140024ce0(pbVar8,(byte *)"argb8888_sdr");
            if (uVar3 == 0) {
              uVar10 = 1;
            }
            else {
              uVar3 = FUN_140024ce0(pbVar8,(byte *)"argb2101010_sdr");
              if (uVar3 == 0) {
                uVar10 = 2;
              }
              else {
                uVar3 = FUN_140024ce0(pbVar8,(byte *)"argb2101010_sdr_wcg");
                if (uVar3 == 0) {
                  uVar10 = 3;
                }
                else {
                  uVar3 = FUN_140024ce0(pbVar8,(byte *)"argb16161616_hdr");
                  if (uVar3 != 0) goto LAB_14001a4d4;
                  uVar10 = 4;
                }
              }
            }
            *(undefined4 *)(param_2 + 0xd2) = uVar10;
          }
        }
      }
      else if (uVar4 == 0 && uVar3 != 0) {
        if (uVar3 != 1) goto LAB_14001a4d4;
        pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
        uVar3 = FUN_140024ce0(pbVar8,&DAT_140029b08);
        if (uVar3 == 0) {
          *(undefined4 *)(param_2 + 0xce) = 0;
        }
        else {
          uVar3 = FUN_140024ce0(pbVar8,(byte *)"discard");
          if (uVar3 == 0) {
            uVar10 = 1;
          }
          else {
            uVar3 = FUN_140024ce0(pbVar8,&DAT_140029da0);
            if (uVar3 == 0) {
              uVar10 = 2;
            }
            else {
              uVar3 = FUN_140024ce0(pbVar8,(byte *)"flip_discard");
              if (uVar3 == 0) {
                uVar10 = 3;
              }
              else {
                uVar3 = FUN_140024ce0(pbVar8,(byte *)"flip_seq");
                if (uVar3 != 0) goto LAB_14001a4d4;
                uVar10 = 4;
              }
            }
          }
          *(undefined4 *)(param_2 + 0xce) = uVar10;
        }
      }
      goto LAB_14001a8c8;
    }
    uVar5 = FUN_140024ce0(pbVar8,(byte *)"forcenearestpointfilter");
    if (uVar5 == 0) {
      if ((uVar4 != 0) || (uVar3 == 0)) goto LAB_14001a8c8;
      param_6 = (ulonglong)uVar3;
      local_170 = '\0';
      param_5 = &local_170;
      uVar9 = FUN_140017868(0,param_3,param_4,uVar15,param_5,uVar3);
      uVar12 = (uint)uVar9;
      *(uint *)(param_2 + 0xca) = (uint)(local_170 == '\0');
LAB_14001a8c4:
      uVar12 = uVar12 & 0xff;
    }
    else {
LAB_14001a1f8:
      uVar5 = FUN_140024ce0(pbVar8,(byte *)"deframersize");
      if (uVar5 == 0) {
        if (uVar4 != 0 || uVar3 == 0) goto LAB_14001a8c8;
        if (uVar3 != 1) goto LAB_14001a4d4;
        param_5 = (char *)(param_2 + 0x9e);
LAB_14001a1cc:
        cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar15,0);
        if (cVar1 == '\0') goto LAB_14001a4d4;
LAB_14001a1f0:
        uVar12 = 1;
      }
      else {
        uVar5 = FUN_140024ce0(pbVar8,(byte *)"imagescalefactor");
        if (uVar5 == 0) {
          if (uVar3 == 0) {
            uVar3 = 0;
            if (uVar4 != 0) {
              do {
                pbVar8 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar15,uVar3);
                uVar12 = FUN_140024ce0(pbVar8,&DAT_140029e6c);
                if (uVar12 == 0) {
                  param_5 = (char *)(param_2 + 0xa2);
LAB_14001a2e4:
                  uVar12 = (**(code **)(*param_3 + 0x78))(param_3,param_4,uVar15,uVar3);
                  uVar12 = uVar12 & 0xff;
                }
                else {
                  uVar12 = FUN_140024ce0(pbVar8,&DAT_140029e70);
                  if (uVar12 == 0) {
                    param_5 = (char *)(param_2 + 0xa6);
                    goto LAB_14001a2e4;
                  }
                  uVar12 = 0;
                }
                uVar3 = uVar3 + 1;
              } while (uVar3 < uVar4);
            }
          }
          else if (uVar4 == 0) {
            if (uVar3 == 1) {
              param_5 = (char *)(param_2 + 0xa2);
              cVar1 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar15,0);
              if (cVar1 == '\0') goto LAB_14001a27c;
              uVar12 = 1;
            }
            else {
LAB_14001a27c:
              uVar12 = 0;
            }
            *(undefined4 *)(param_2 + 0xa6) = *(undefined4 *)(param_2 + 0xa2);
          }
          goto LAB_14001a8c8;
        }
        if (uVar7 < 0x274) {
          if (0x261 < uVar7) goto LAB_14001a35c;
LAB_14001a4dc:
          uVar5 = FUN_140024ce0(pbVar8,(byte *)"desktopresolution");
          if (uVar5 != 0) {
            if ((uVar7 < 0x260) ||
               (uVar5 = FUN_140024ce0(pbVar8,(byte *)"desktopbitdepth"), uVar5 != 0)) {
              uVar5 = FUN_140024ce0(pbVar8,(byte *)"freemouse");
              if (uVar5 == 0) {
                if ((uVar4 == 0) && (uVar3 != 0)) {
                  param_5 = (char *)(param_2 + 0xe6);
                  uVar9 = FUN_140017868(0,param_3,param_4,uVar15,param_5,uVar3);
                  uVar12 = (uint)uVar9;
                  param_6 = uVar14;
                  goto LAB_14001a8c4;
                }
              }
              else {
                uVar5 = FUN_140024ce0(pbVar8,(byte *)"fpslimit");
                if (uVar5 == 0) {
                  if (uVar4 == 0 && uVar3 != 0) {
                    if (uVar3 == 1) {
                      uVar9 = 0;
                      pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15);
                      uVar14 = FUN_140015530(pbVar8,(uint *)(param_2 + 0xda),(int *)(param_2 + 0xde)
                                             ,uVar9,param_5,param_6,param_7,param_8);
                      if ((uVar14 & 1) != 0) goto LAB_14001a1f0;
                    }
                    goto LAB_14001a4d4;
                  }
                }
                else {
                  uVar5 = FUN_140024ce0(pbVar8,(byte *)"environment");
                  if (uVar5 == 0) {
                    if (uVar4 == 0 && uVar3 != 0) {
                      if (uVar3 != 1) goto LAB_14001a4d4;
                      pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                      uVar3 = FUN_140024ce0(pbVar8,(byte *)"dosbox");
                      if (uVar3 == 0) {
                        uVar10 = 1;
                      }
                      else {
                        uVar3 = FUN_140024ce0(pbVar8,&DAT_140029efc);
                        if (uVar3 != 0) goto LAB_14001a4d4;
                        uVar10 = 2;
                      }
                      *(undefined4 *)(param_2 + 0xbe) = uVar10;
                    }
                  }
                  else {
                    uVar5 = FUN_140024ce0(pbVar8,(byte *)"windowedattributes");
                    if (uVar5 == 0) {
                      if (uVar4 == 0) {
                        *(undefined4 *)(param_2 + 0xc2) = 0;
                        uVar7 = 0;
                        if (uVar3 != 0) {
                          do {
                            pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))
                                                       (param_3,param_4,uVar15,uVar7);
                            uVar4 = FUN_140024ce0(pbVar8,(byte *)"borderless");
                            if (uVar4 == 0) {
                              uVar4 = *(uint *)(param_2 + 0xc2) | 1;
LAB_14001a740:
                              *(uint *)(param_2 + 0xc2) = uVar4;
                            }
                            else {
                              uVar4 = FUN_140024ce0(pbVar8,(byte *)"alwaysontop");
                              if (uVar4 == 0) {
                                uVar4 = *(uint *)(param_2 + 0xc2) | 2;
                                goto LAB_14001a740;
                              }
                              uVar4 = FUN_140024ce0(pbVar8,(byte *)"fullscreensize");
                              if (uVar4 == 0) {
                                uVar4 = *(uint *)(param_2 + 0xc2) | 4;
                                goto LAB_14001a740;
                              }
                              uVar12 = 0;
                            }
                            uVar7 = uVar7 + 1;
                          } while (uVar7 < uVar3);
                        }
                      }
                    }
                    else if ((uVar7 < 0x273) ||
                            (uVar5 = FUN_140024ce0(pbVar8,(byte *)"fullscreenattributes"),
                            uVar5 != 0)) {
                      if (uVar7 < 0x280) {
                        if (0x279 < uVar7) {
                          return 0;
                        }
                        uVar7 = FUN_140024ce0(pbVar8,(byte *)"enablegdihooking");
                        if (uVar7 != 0) {
                          return 0;
                        }
                        if ((uVar4 == 0) && (uVar3 != 0)) {
                          local_170 = '\0';
                          param_5 = &local_170;
                          uVar9 = FUN_140017868(0,param_3,param_4,uVar15,param_5,uVar3);
                          uVar12 = (uint)uVar9;
                          uVar10 = local_154;
                          if (local_170 == '\0') {
                            uVar10 = 0;
                          }
                          *(undefined4 *)(param_2 + 0xe2) = uVar10;
                          param_6 = uVar14;
                          goto LAB_14001a8c4;
                        }
                      }
                      else {
                        uVar7 = FUN_140024ce0(pbVar8,(byte *)"systemhookflags");
                        if (uVar7 != 0) {
                          return 0;
                        }
                        if (uVar4 == 0) {
                          *(undefined4 *)(param_2 + 0xe2) = 0;
                          uVar7 = 0;
                          if (uVar3 != 0) {
                            do {
                              pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))
                                                         (param_3,param_4,uVar15,uVar7);
                              uVar4 = FUN_140024ce0(pbVar8,&DAT_140029f80);
                              if (uVar4 == 0) {
                                uVar4 = *(uint *)(param_2 + 0xe2) | 1;
LAB_14001a854:
                                *(uint *)(param_2 + 0xe2) = uVar4;
                              }
                              else {
                                uVar4 = FUN_140024ce0(pbVar8,(byte *)"cursor");
                                if (uVar4 == 0) {
                                  uVar4 = *(uint *)(param_2 + 0xe2) | 2;
                                  goto LAB_14001a854;
                                }
                                uVar12 = 0;
                              }
                              uVar7 = uVar7 + 1;
                            } while (uVar7 < uVar3);
                          }
                        }
                      }
                    }
                    else if (uVar4 == 0) {
                      *(undefined4 *)(param_2 + 0xc6) = 0;
                      uVar7 = 0;
                      if (uVar3 != 0) {
                        do {
                          pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))
                                                     (param_3,param_4,uVar15,uVar7);
                          uVar4 = FUN_140024ce0(pbVar8,&DAT_140029f68);
                          if (uVar4 == 0) {
                            *(uint *)(param_2 + 0xc6) = *(uint *)(param_2 + 0xc6) | 1;
                          }
                          else {
                            uVar12 = 0;
                          }
                          uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar3);
                      }
                    }
                  }
                }
              }
            }
            else if (uVar4 == 0 && uVar3 != 0) {
              if (uVar3 == 1) {
                param_5 = (char *)(param_2 + 0x9a);
                goto LAB_14001a1cc;
              }
              goto LAB_14001a4d4;
            }
            goto LAB_14001a8c8;
          }
          if (uVar4 != 0) {
            return 0;
          }
          uVar12 = 1;
          if (uVar3 == 1) {
            pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
            param_5 = (char *)&local_158;
            local_164 = 0;
            bVar2 = FUN_140017950(pbVar8,&local_160,&uStack_15c,&local_164,(undefined4 *)param_5,
                                  param_6,param_7,param_8);
            if (bVar2) {
              uVar15 = uVar15 + 1;
              *(undefined4 *)(param_2 + 0x8a) = local_160;
              *(undefined4 *)(param_2 + 0x8e) = uStack_15c;
              *(undefined4 *)(param_2 + 0x92) = local_164;
              *(undefined4 *)(param_2 + 0x96) = local_158;
              goto LAB_140019e50;
            }
          }
          else if (uVar3 == 0) goto LAB_14001a8c8;
        }
        else {
          uVar5 = FUN_140024ce0(pbVar8,(byte *)"cursorscalefactor");
          if (uVar5 == 0) {
            if (uVar4 == 0 && uVar3 != 0) {
              if (uVar3 == 1) {
                param_5 = (char *)(param_2 + 0xaa);
                goto LAB_14001a1cc;
              }
              goto LAB_14001a4d4;
            }
            goto LAB_14001a8c8;
          }
LAB_14001a35c:
          uVar5 = FUN_140024ce0(pbVar8,(byte *)"displayroi");
          if (uVar5 != 0) goto LAB_14001a4dc;
          uVar5 = 0;
          uVar11 = uVar12;
          if (uVar4 != 0) {
            do {
              uStack_168 = uVar7;
              local_16c = uVar3;
              pbVar8 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar15,uVar5);
              uVar3 = FUN_140024ce0(pbVar8,&DAT_140029e9c);
              uVar12 = uVar11;
              if (uVar3 == 0) {
                pbVar8 = (byte *)(**(code **)(*param_3 + 0x70))(param_3,param_4,uVar15,uVar5);
                iVar6 = FUN_1400248b0(pbVar8,(byte *)" %s %c",abStack_150,&cStack_16f,param_5,
                                      param_6,param_7,param_8);
                if ((iVar6 == 1) &&
                   (uVar3 = FUN_140024ce0(abStack_150,(byte *)"centered"), uVar3 == 0)) {
                  *(undefined4 *)(param_2 + 0xae) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0xb2) = 0xffffffff;
                }
                else {
                  param_5 = &cStack_16f;
                  iVar6 = FUN_1400248b0(pbVar8,(byte *)" ( %d | %d ) %c",param_2 + 0xae,
                                        param_2 + 0xb2,param_5,param_6,param_7,param_8);
                  uVar12 = 0;
                  if (iVar6 == 2) {
                    uVar12 = uVar11;
                  }
                }
              }
              uVar5 = uVar5 + 1;
              uVar11 = uVar12;
              uVar3 = local_16c;
              uVar7 = uStack_168;
            } while (uVar5 < uVar4);
            uVar13 = (ulonglong)uStack_168;
          }
          if (uVar12 == 0) goto LAB_14001a8c8;
          if (uVar3 == 0) {
            if (uVar4 != 0) goto LAB_14001a4d4;
            goto LAB_14001a8c8;
          }
          if (uVar3 == 1) {
            local_16c = 0;
            uStack_168 = 0;
            pbVar8 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
            param_5 = acStack_16e;
            iVar6 = FUN_1400248b0(pbVar8,(byte *)" %d_%d %c",&local_16c,&uStack_168,param_5,param_6,
                                  param_7,param_8);
            if (iVar6 == 2) {
              *(undefined4 *)(param_2 + 0xb6) = 0xffffffff;
              *(uint *)(param_2 + 0xba) = uStack_168 | local_16c << 0x10;
            }
            else {
              param_5 = acStack_16e;
              iVar6 = FUN_1400248b0(pbVar8,(byte *)" ( %d | %d ) %c",param_2 + 0xb6,param_2 + 0xba,
                                    param_5,param_6,param_7,param_8);
              if (iVar6 != 2) {
                uVar12 = 0;
              }
            }
            goto LAB_14001a8c8;
          }
        }
LAB_14001a4d4:
        uVar12 = 0;
      }
    }
LAB_14001a8c8:
    uVar15 = uVar15 + 1;
    if (uVar12 == 0) {
      return 0;
    }
  } while( true );
}

