/*
 * FUN_140018d84 at 140018d84
 * undefined1 __fastcall FUN_140018d84(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140018d84-140019a1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_140018d84(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong local_res8;
  longlong local_res10;
  longlong lVar15;
  undefined1 local_178 [4];
  uint local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_160;
  undefined4 *local_158;
  longlong local_150;
  longlong local_148;
  undefined4 *local_140;
  byte local_138 [256];
  
  local_150 = param_2 + 0xa2;
  uVar14 = 0;
  local_148 = param_2 + 0xa6;
  uVar8 = 1;
  local_140 = (undefined4 *)(param_2 + 0xb2);
  local_158 = (undefined4 *)(param_2 + 0xae);
  local_res8 = param_1;
  local_res10 = param_2;
  local_160 = 1;
  if (param_5 == 0x279) {
    local_160 = 3;
  }
LAB_140018e04:
  local_res8 = CONCAT44(local_res8._4_4_,uVar14);
  do {
    uVar4 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar4 <= uVar14) {
      return (char)uVar8;
    }
    pbVar7 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar14);
    uVar4 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar14);
    local_174 = uVar4;
    uVar5 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar14);
    if (param_5 < 0x263) {
      pbVar11 = pbVar7;
      iVar6 = FUN_140024ce8(pbVar7,(byte *)"forcenearestpointfilter");
      if (iVar6 == 0) {
        if ((uVar5 == 0) && (uVar4 != 0)) {
          local_res8 = local_res8 & 0xffffffffffffff00;
          uVar8 = FUN_140016328(pbVar11,param_3,param_4,uVar14,(undefined1 *)&local_res8,uVar4);
          uVar8 = uVar8 & 0xff;
          *(uint *)(param_2 + 0xca) = (uint)((char)local_res8 == '\0');
        }
      }
      else {
LAB_14001923f:
        pbVar11 = pbVar7;
        iVar6 = FUN_140024ce8(pbVar7,(byte *)"deframersize");
        if (iVar6 == 0) {
          if ((uVar5 == 0) && (uVar4 != 0)) {
            lVar9 = param_2 + 0x9e;
LAB_14001926b:
            bVar2 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,lVar9,uVar4);
LAB_140019286:
            uVar8 = (ulonglong)bVar2;
          }
        }
        else {
          pbVar11 = pbVar7;
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"imagescalefactor");
          lVar9 = local_150;
          if (iVar6 == 0) {
            if (uVar4 == 0) {
              uVar4 = 0;
              if (uVar5 != 0) {
                do {
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar14,uVar4);
                  iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e0c);
                  lVar15 = lVar9;
                  if ((iVar6 == 0) ||
                     (iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e10), lVar15 = local_148, iVar6 == 0))
                  {
                    bVar2 = (**(code **)(*param_3 + 0x78))(param_3,param_4,uVar14,uVar4,lVar15);
                    uVar8 = (ulonglong)bVar2;
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar4 = uVar4 + 1;
                  param_2 = local_res10;
                } while (uVar4 < uVar5);
              }
            }
            else if (uVar5 == 0) {
              bVar3 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,(undefined4 *)(param_2 + 0xa2),
                                    uVar4);
              uVar8 = (ulonglong)bVar3;
              *(undefined4 *)(param_2 + 0xa6) = *(undefined4 *)(param_2 + 0xa2);
            }
          }
          else if (param_5 < 0x274) {
            if (0x261 < param_5) goto LAB_1400193ba;
LAB_14001959f:
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"desktopresolution");
            if (iVar6 == 0) {
              if (uVar5 != 0) {
                return 0;
              }
              uVar8 = 1;
              if (uVar4 == 1) {
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                local_170 = uVar5;
                uVar10 = FUN_140016440(pbVar7,&local_16c,&local_168,&local_170,&local_164);
                if ((char)uVar10 == '\0') {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0x8a) = local_16c;
                *(undefined4 *)(param_2 + 0x8e) = local_168;
                *(uint *)(param_2 + 0x92) = local_170;
                *(undefined4 *)(param_2 + 0x96) = local_164;
                goto LAB_140019634;
              }
LAB_14001963e:
              if (uVar4 != 0) goto LAB_140019644;
            }
            else if ((param_5 < 0x260) ||
                    (pbVar11 = pbVar7, iVar6 = FUN_140024ce8(pbVar7,(byte *)"desktopbitdepth"),
                    iVar6 != 0)) {
              pbVar11 = pbVar7;
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"freemouse");
              if (iVar6 == 0) {
                if ((uVar5 == 0) && (uVar4 != 0)) {
                  uVar10 = FUN_140016328(pbVar11,param_3,param_4,uVar14,
                                         (undefined1 *)(param_2 + 0xe6),uVar4);
                  bVar2 = (byte)uVar10;
                  goto LAB_140019286;
                }
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"fpslimit");
                if (iVar6 == 0) {
                  if ((uVar5 == 0) && (uVar4 != 0)) {
                    if (uVar4 == 1) {
                      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                      uVar10 = FUN_14001418c(pbVar7,(uint *)(param_2 + 0xda),
                                             (undefined4 *)(param_2 + 0xde));
                      if ((char)uVar10 != '\0') {
                        uVar8 = 1;
                        goto LAB_140019a08;
                      }
                    }
LAB_140019644:
                    uVar8 = 0;
                  }
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"environment");
                  if (iVar6 == 0) {
                    if ((uVar5 == 0) && (uVar4 != 0)) {
                      if (uVar4 != 1) goto LAB_140019644;
                      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                      iVar6 = FUN_140024ce8(pbVar7,(byte *)"dosbox");
                      if (iVar6 == 0) {
                        *(undefined4 *)(param_2 + 0xbe) = 1;
                      }
                      else {
                        iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e9c);
                        if (iVar6 != 0) {
                          return 0;
                        }
                        *(undefined4 *)(param_2 + 0xbe) = 2;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_140024ce8(pbVar7,(byte *)"windowedattributes");
                    if (iVar6 == 0) {
                      if (uVar5 == 0) {
                        uVar5 = 0;
                        *(undefined4 *)(param_2 + 0xc2) = 0;
                        if (uVar4 != 0) {
                          do {
                            pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                       (param_3,param_4,uVar14,uVar5);
                            iVar6 = FUN_140024ce8(pbVar7,(byte *)"borderless");
                            if (iVar6 == 0) {
                              *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 1;
                            }
                            else {
                              iVar6 = FUN_140024ce8(pbVar7,(byte *)"alwaysontop");
                              if (iVar6 == 0) {
                                *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 2;
                              }
                              else {
                                iVar6 = FUN_140024ce8(pbVar7,(byte *)"fullscreensize");
                                if (iVar6 == 0) {
                                  *(uint *)(param_2 + 0xc2) = *(uint *)(param_2 + 0xc2) | 4;
                                }
                                else {
                                  uVar8 = 0;
                                }
                              }
                            }
                            uVar5 = uVar5 + 1;
                          } while (uVar5 < uVar4);
                        }
                      }
                    }
                    else if ((param_5 < 0x273) ||
                            (iVar6 = FUN_140024ce8(pbVar7,(byte *)"fullscreenattributes"),
                            iVar6 != 0)) {
                      if (param_5 < 0x280) {
                        if (0x279 < param_5) {
                          return 0;
                        }
                        iVar6 = FUN_140024ce8(pbVar7,(byte *)"enablegdihooking");
                        if (iVar6 != 0) {
                          return 0;
                        }
                        if ((uVar5 == 0) && (uVar4 != 0)) {
                          local_res8 = local_res8 & 0xffffffffffffff00;
                          uVar8 = FUN_140016328(pbVar7,param_3,param_4,uVar14,
                                                (undefined1 *)&local_res8,uVar4);
                          uVar8 = uVar8 & 0xff;
                          *(uint *)(param_2 + 0xe2) = -(uint)((char)local_res8 != '\0') & local_160;
                        }
                      }
                      else {
                        iVar6 = FUN_140024ce8(pbVar7,(byte *)"systemhookflags");
                        if (iVar6 != 0) {
                          return 0;
                        }
                        if (uVar5 == 0) {
                          uVar5 = 0;
                          *(undefined4 *)(param_2 + 0xe2) = 0;
                          if (uVar4 != 0) {
                            do {
                              pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                         (param_3,param_4,uVar14,uVar5);
                              iVar6 = FUN_140024ce8(pbVar7,&DAT_140029f20);
                              if (iVar6 == 0) {
                                *(uint *)(param_2 + 0xe2) = *(uint *)(param_2 + 0xe2) | 1;
                              }
                              else {
                                iVar6 = FUN_140024ce8(pbVar7,(byte *)"cursor");
                                if (iVar6 == 0) {
                                  *(uint *)(param_2 + 0xe2) = *(uint *)(param_2 + 0xe2) | 2;
                                }
                                else {
                                  uVar8 = 0;
                                }
                              }
                              uVar5 = uVar5 + 1;
                            } while (uVar5 < uVar4);
                          }
                        }
                      }
                    }
                    else if (uVar5 == 0) {
                      uVar5 = 0;
                      *(undefined4 *)(param_2 + 0xc6) = 0;
                      if (uVar4 != 0) {
                        do {
                          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                     (param_3,param_4,uVar14,uVar5);
                          iVar6 = FUN_140024ce8(pbVar7,&DAT_140029f08);
                          if (iVar6 == 0) {
                            *(uint *)(param_2 + 0xc6) = *(uint *)(param_2 + 0xc6) | 1;
                          }
                          else {
                            uVar8 = 0;
                          }
                          uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar4);
                      }
                    }
                  }
                }
              }
            }
            else if ((uVar5 == 0) && (uVar4 != 0)) {
              lVar9 = param_2 + 0x9a;
              goto LAB_14001926b;
            }
          }
          else {
            pbVar11 = pbVar7;
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"cursorscalefactor");
            if (iVar6 == 0) {
              if ((uVar5 == 0) && (uVar4 != 0)) {
                lVar9 = param_2 + 0xaa;
                goto LAB_14001926b;
              }
            }
            else {
LAB_1400193ba:
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"displayroi");
              puVar1 = local_140;
              if (iVar6 != 0) goto LAB_14001959f;
              uVar12 = 0;
              uVar13 = uVar4;
              if (uVar5 != 0) {
                do {
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x68))(param_3,param_4,uVar14,uVar12);
                  iVar6 = FUN_140024ce8(pbVar7,&DAT_140029e3c);
                  if (iVar6 == 0) {
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x70))(param_3,param_4,uVar14,uVar12);
                    iVar6 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_138,local_178);
                    if ((iVar6 == 1) &&
                       (iVar6 = FUN_140024ce8(local_138,(byte *)"centered"), iVar6 == 0)) {
                      *puVar1 = 0xffffffff;
                      *local_158 = 0xffffffff;
                    }
                    else {
                      iVar6 = FUN_1400242b4(pbVar7,(byte *)" ( %d | %d ) %c",local_158,puVar1);
                      if (iVar6 != 2) {
                        uVar8 = 0;
                      }
                    }
                    uVar14 = (uint)local_res8;
                  }
                  uVar12 = uVar12 + 1;
                  param_2 = local_res10;
                  uVar13 = local_174;
                } while (uVar12 < uVar5);
              }
              if ((char)uVar8 != '\0') {
                uVar4 = uVar5;
                if (uVar13 == 0) goto LAB_14001963e;
                if (uVar13 != 1) {
                  return 0;
                }
                local_res8 = local_res8 & 0xffffffff00000000;
                local_174 = 0;
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
                iVar6 = FUN_1400242b4(pbVar7,(byte *)" %d_%d %c",&local_res8,&local_174);
                if (iVar6 == 2) break;
                iVar6 = FUN_1400242b4(pbVar7,(byte *)" ( %d | %d ) %c",param_2 + 0xb6,param_2 + 0xba
                                     );
                if (iVar6 != 2) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
    else {
      iVar6 = FUN_140024ce8(pbVar7,(byte *)"resampling");
      if (iVar6 == 0) {
        if ((uVar5 == 0) && (uVar4 != 0)) {
          if (uVar4 != 1) goto LAB_140019644;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"pointsampled");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xca) = 0;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"bilinear");
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xca) = 1;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"bicubic");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xca) = 2;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"lanczos-2");
                if (iVar6 == 0) {
                  *(undefined4 *)(param_2 + 0xca) = 3;
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"lanczos-3");
                  if (iVar6 != 0) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0xca) = 4;
                }
              }
            }
          }
        }
      }
      else if ((param_5 < 0x279) ||
              (iVar6 = FUN_140024ce8(pbVar7,(byte *)"presentationmodel"), iVar6 != 0)) {
        if ((param_5 < 0x281) || (iVar6 = FUN_140024ce8(pbVar7,(byte *)"colorspace"), iVar6 != 0)) {
          if ((param_5 < 0x287) ||
             (pbVar11 = pbVar7, iVar6 = FUN_140024ce8(pbVar7,(byte *)"watermarkdisplayduration"),
             iVar6 != 0)) goto LAB_14001923f;
          if (uVar5 == 0) {
            if (uVar4 == 0) goto LAB_140019644;
            bVar3 = FUN_1400163f4(pbVar11,param_3,param_4,uVar14,param_2 + 0xd6,uVar4);
            uVar8 = (ulonglong)bVar3;
          }
        }
        else if ((uVar5 == 0) && (uVar4 != 0)) {
          if (uVar4 != 1) goto LAB_140019644;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xd2) = 0;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb8888_sdr");
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xd2) = 1;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb2101010_sdr");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xd2) = 2;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb2101010_sdr_wcg");
                if (iVar6 == 0) {
                  *(undefined4 *)(param_2 + 0xd2) = 3;
                }
                else {
                  iVar6 = FUN_140024ce8(pbVar7,(byte *)"argb16161616_hdr");
                  if (iVar6 != 0) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0xd2) = 4;
                }
              }
            }
          }
        }
      }
      else if ((uVar5 == 0) && (uVar4 != 0)) {
        if (uVar4 != 1) goto LAB_140019644;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar14,0);
        iVar6 = FUN_140024ce8(pbVar7,&DAT_140029aa8);
        if (iVar6 == 0) {
          *(undefined4 *)(param_2 + 0xce) = 0;
        }
        else {
          iVar6 = FUN_140024ce8(pbVar7,(byte *)"discard");
          if (iVar6 == 0) {
            *(undefined4 *)(param_2 + 0xce) = 1;
          }
          else {
            iVar6 = FUN_140024ce8(pbVar7,&DAT_140029d40);
            if (iVar6 == 0) {
              *(undefined4 *)(param_2 + 0xce) = 2;
            }
            else {
              iVar6 = FUN_140024ce8(pbVar7,(byte *)"flip_discard");
              if (iVar6 == 0) {
                *(undefined4 *)(param_2 + 0xce) = 3;
              }
              else {
                iVar6 = FUN_140024ce8(pbVar7,(byte *)"flip_seq");
                if (iVar6 != 0) {
                  return 0;
                }
                *(undefined4 *)(param_2 + 0xce) = 4;
              }
            }
          }
        }
      }
    }
LAB_140019a08:
    uVar14 = uVar14 + 1;
    local_res8 = CONCAT44(local_res8._4_4_,uVar14);
    if ((char)uVar8 == '\0') {
      return 0;
    }
  } while( true );
  *(uint *)(param_2 + 0xba) = (uint)local_res8 << 0x10 | local_174;
  *(undefined4 *)(param_2 + 0xb6) = 0xffffffff;
LAB_140019634:
  uVar14 = uVar14 + 1;
  goto LAB_140018e04;
}

