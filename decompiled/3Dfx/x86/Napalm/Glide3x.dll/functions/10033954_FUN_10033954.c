/*
 * FUN_10033954 at 10033954
 * undefined1 __fastcall FUN_10033954(undefined4 param_1, int param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10033954-100344a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall
FUN_10033954(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  void *this;
  undefined4 uVar13;
  char *pcVar14;
  byte local_168 [260];
  undefined4 local_64;
  uint *local_60;
  int *local_5c;
  undefined1 *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  byte *local_24;
  byte *local_1c;
  char local_15;
  int local_14;
  byte *local_10;
  uint local_c;
  
  uVar10 = 1;
  local_28 = param_2 + 0xa2;
  local_c = 0;
  local_38 = param_2 + 0xa6;
  local_30 = param_2 + 0xd6;
  local_34 = param_2 + 0x9e;
  local_3c = param_2 + 0xaa;
  local_40 = param_2 + 0xba;
  local_44 = param_2 + 0xb6;
  local_54 = param_2 + 0x9a;
  local_58 = (undefined1 *)(param_2 + 0xe6);
  local_5c = (int *)(param_2 + 0xde);
  local_60 = (uint *)(param_2 + 0xda);
  local_64 = 1;
  local_14 = param_2;
  if (param_5 == 0x279) {
    local_64 = 3;
  }
LAB_100339e5:
  do {
    uVar2 = local_c;
    uVar6 = (**(code **)(*param_3 + 0x1c))(param_4);
    if (uVar6 <= uVar2) {
      return (char)uVar10;
    }
    local_10 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,uVar2);
    pbVar7 = (byte *)(**(code **)(*param_3 + 0x24))(param_4,uVar2);
    local_24 = pbVar7;
    pbVar8 = (byte *)(**(code **)(*param_3 + 0x30))(param_4,local_c);
    if (param_5 < 0x263) {
      pcVar14 = "forcenearestpointfilter";
      iVar9 = FUN_1005572b(local_10,(byte *)"forcenearestpointfilter");
      if (iVar9 != 0) goto LAB_10033dc9;
      pbVar12 = local_1c;
      pbVar3 = local_10;
      if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
        local_15 = '\0';
        uVar10 = FUN_1003111f(pcVar14,param_3,param_4,local_c,&local_15,(int)pbVar7);
        uVar10 = uVar10 & 0xff;
        *(uint *)(local_14 + 0xca) = (uint)(local_15 == '\0');
        pbVar12 = local_1c;
        pbVar3 = local_10;
      }
      goto LAB_1003448e;
    }
    iVar9 = FUN_1005572b(local_10,(byte *)"resampling");
    if (iVar9 == 0) {
      pbVar12 = local_1c;
      pbVar3 = local_10;
      if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
        if (pbVar7 != (byte *)0x1) goto LAB_1003412c;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
        iVar9 = FUN_1005572b(pbVar7,(byte *)"pointsampled");
        if (iVar9 == 0) {
          *(undefined4 *)(local_14 + 0xca) = 0;
          pbVar12 = local_1c;
          pbVar3 = local_10;
        }
        else {
          iVar9 = FUN_1005572b(pbVar7,(byte *)"bilinear");
          if (iVar9 == 0) {
            *(undefined4 *)(local_14 + 0xca) = 1;
            pbVar12 = local_1c;
            pbVar3 = local_10;
          }
          else {
            iVar9 = FUN_1005572b(pbVar7,(byte *)"bicubic");
            if (iVar9 == 0) {
              *(undefined4 *)(local_14 + 0xca) = 2;
              pbVar12 = local_1c;
              pbVar3 = local_10;
            }
            else {
              iVar9 = FUN_1005572b(pbVar7,(byte *)"lanczos-2");
              if (iVar9 == 0) {
                *(undefined4 *)(local_14 + 0xca) = 3;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
              else {
                iVar9 = FUN_1005572b(pbVar7,(byte *)"lanczos-3");
                if (iVar9 != 0) goto LAB_1003412c;
                *(undefined4 *)(local_14 + 0xca) = 4;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
            }
          }
        }
      }
    }
    else if ((param_5 < 0x279) ||
            (iVar9 = FUN_1005572b(local_10,(byte *)"presentationmodel"), iVar9 != 0)) {
      if ((param_5 < 0x281) || (iVar9 = FUN_1005572b(local_10,(byte *)"colorspace"), iVar9 != 0)) {
        if (0x286 < param_5) {
          pcVar14 = "watermarkdisplayduration";
          iVar9 = FUN_1005572b(local_10,(byte *)"watermarkdisplayduration");
          if (iVar9 == 0) {
            pbVar12 = local_1c;
            pbVar3 = local_10;
            if (pbVar8 == (byte *)0x0) {
              if (pbVar7 == (byte *)0x0) goto LAB_1003412c;
              bVar5 = FUN_100311aa(pcVar14,param_3,param_4,local_c,local_30,(int)pbVar7);
              uVar10 = (uint)bVar5;
              pbVar12 = local_1c;
              pbVar3 = local_10;
            }
            goto LAB_1003448e;
          }
        }
LAB_10033dc9:
        pcVar14 = "deframersize";
        iVar11 = FUN_1005572b(local_10,(byte *)"deframersize");
        iVar9 = local_34;
        if (iVar11 == 0) {
joined_r0x10033dde:
          pbVar12 = local_1c;
          pbVar3 = local_10;
          if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
            bVar4 = FUN_100311aa(pcVar14,param_3,param_4,local_c,iVar9,(int)pbVar7);
LAB_10034489:
            uVar10 = (uint)bVar4;
            pbVar12 = local_1c;
            pbVar3 = local_10;
          }
        }
        else {
          pcVar14 = "imagescalefactor";
          iVar9 = FUN_1005572b(local_10,(byte *)"imagescalefactor");
          if (iVar9 == 0) {
            pbVar12 = local_1c;
            pbVar3 = local_10;
            if (pbVar7 == (byte *)0x0) {
              pbVar7 = (byte *)0x0;
              if (pbVar8 != (byte *)0x0) {
                do {
                  pbVar12 = (byte *)(**(code **)(*param_3 + 0x34))(param_4,local_c,pbVar7);
                  iVar11 = FUN_1005572b(pbVar12,&DAT_1005a4a8);
                  iVar9 = local_28;
                  if ((iVar11 == 0) ||
                     (iVar11 = FUN_1005572b(pbVar12,&DAT_1005a4ac), iVar9 = local_38, iVar11 == 0))
                  {
                    bVar4 = (**(code **)(*param_3 + 0x3c))(param_4,local_c,pbVar7,iVar9);
                    uVar10 = (uint)bVar4;
                  }
                  else {
                    uVar10 = 0;
                  }
                  pbVar7 = pbVar7 + 1;
                  pbVar12 = local_1c;
                  pbVar3 = local_10;
                } while (pbVar7 < pbVar8);
              }
            }
            else if (pbVar8 == (byte *)0x0) {
              bVar5 = FUN_100311aa(pcVar14,param_3,param_4,local_c,local_28,(int)pbVar7);
              uVar10 = (uint)bVar5;
              *(undefined4 *)(local_14 + 0xa6) = *(undefined4 *)(local_14 + 0xa2);
              pbVar12 = local_1c;
              pbVar3 = local_10;
            }
            goto LAB_1003448e;
          }
          if (param_5 < 0x274) {
            if (0x261 < param_5) goto LAB_10033f02;
LAB_10034096:
            iVar9 = FUN_1005572b(local_10,(byte *)"desktopresolution");
            uVar2 = local_c;
            if (iVar9 == 0) {
              if (pbVar8 != (byte *)0x0) {
                return 0;
              }
              if (pbVar7 != (byte *)0x1) {
                uVar10 = 1;
                pbVar8 = pbVar7;
                goto LAB_10034126;
              }
              this = (void *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
              local_2c = 0;
              bVar5 = FUN_100311d0(this,&local_4c,&local_2c,&local_50);
              if (!bVar5) goto LAB_1003412c;
              local_c = uVar2 + 1;
              uVar10 = 1;
              *(undefined4 *)(local_14 + 0x8a) = local_48;
              *(undefined4 *)(local_14 + 0x8e) = local_4c;
              *(undefined4 *)(local_14 + 0x92) = local_2c;
              *(undefined4 *)(local_14 + 0x96) = local_50;
              goto LAB_100339e5;
            }
            if (0x25f < param_5) {
              pcVar14 = "desktopbitdepth";
              iVar11 = FUN_1005572b(local_10,(byte *)"desktopbitdepth");
              iVar9 = local_54;
              if (iVar11 == 0) goto joined_r0x10033dde;
            }
            pcVar14 = "freemouse";
            iVar9 = FUN_1005572b(local_10,(byte *)"freemouse");
            if (iVar9 == 0) {
              pbVar12 = local_1c;
              pbVar3 = local_10;
              if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
                uVar13 = FUN_1003111f(pcVar14,param_3,param_4,local_c,local_58,(int)pbVar7);
                bVar4 = (byte)uVar13;
                goto LAB_10034489;
              }
              goto LAB_1003448e;
            }
            iVar9 = FUN_1005572b(local_10,(byte *)"fpslimit");
            if (iVar9 != 0) {
              iVar9 = FUN_1005572b(local_10,(byte *)"environment");
              if (iVar9 == 0) {
                pbVar12 = local_1c;
                pbVar3 = local_10;
                if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
                  if (pbVar7 != (byte *)0x1) goto LAB_1003412c;
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
                  iVar9 = FUN_1005572b(pbVar7,(byte *)"dosbox");
                  if (iVar9 == 0) {
                    *(undefined4 *)(local_14 + 0xbe) = 1;
                    pbVar12 = local_1c;
                    pbVar3 = local_10;
                  }
                  else {
                    iVar9 = FUN_1005572b(pbVar7,&DAT_1005a538);
                    if (iVar9 != 0) goto LAB_1003412c;
                    *(undefined4 *)(local_14 + 0xbe) = 2;
                    pbVar12 = local_1c;
                    pbVar3 = local_10;
                  }
                }
              }
              else {
                iVar11 = FUN_1005572b(local_10,(byte *)"windowedattributes");
                iVar9 = local_14;
                if (iVar11 == 0) {
                  pbVar12 = local_1c;
                  pbVar3 = local_10;
                  if (pbVar8 == (byte *)0x0) {
                    *(undefined4 *)(local_14 + 0xc2) = 0;
                    local_10 = (byte *)0x0;
                    pbVar3 = (byte *)0x0;
                    if (pbVar7 != (byte *)0x0) {
                      do {
                        local_1c = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,local_10);
                        iVar11 = FUN_1005572b(local_1c,(byte *)"borderless");
                        if (iVar11 == 0) {
                          *(uint *)(iVar9 + 0xc2) = *(uint *)(iVar9 + 0xc2) | 1;
                        }
                        else {
                          iVar11 = FUN_1005572b(local_1c,(byte *)"alwaysontop");
                          if (iVar11 == 0) {
                            *(uint *)(iVar9 + 0xc2) = *(uint *)(iVar9 + 0xc2) | 2;
                          }
                          else {
                            iVar11 = FUN_1005572b(local_1c,(byte *)"fullscreensize");
                            if (iVar11 == 0) {
                              *(uint *)(iVar9 + 0xc2) = *(uint *)(iVar9 + 0xc2) | 4;
                            }
                            else {
                              uVar10 = 0;
                            }
                          }
                        }
                        local_10 = local_10 + 1;
                        pbVar12 = local_1c;
                        pbVar3 = local_10;
                      } while (local_10 < pbVar7);
                    }
                  }
                }
                else if ((param_5 < 0x273) ||
                        (iVar11 = FUN_1005572b(local_10,(byte *)"fullscreenattributes"),
                        iVar9 = local_14, iVar11 != 0)) {
                  if (param_5 < 0x280) {
                    if (0x279 < param_5) {
                      return 0;
                    }
                    pcVar14 = "enablegdihooking";
                    iVar9 = FUN_1005572b(local_10,(byte *)"enablegdihooking");
                    if (iVar9 != 0) {
                      return 0;
                    }
                    pbVar12 = local_1c;
                    pbVar3 = local_10;
                    if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
                      local_15 = '\0';
                      uVar13 = FUN_1003111f(pcVar14,param_3,param_4,local_c,&local_15,(int)pbVar7);
                      bVar4 = (byte)uVar13;
                      uVar13 = 0;
                      if (local_15 != '\0') {
                        uVar13 = local_64;
                      }
                      *(undefined4 *)(local_14 + 0xe2) = uVar13;
                      goto LAB_10034489;
                    }
                  }
                  else {
                    iVar11 = FUN_1005572b(local_10,(byte *)"systemhookflags");
                    iVar9 = local_14;
                    if (iVar11 != 0) {
                      return 0;
                    }
                    pbVar12 = local_1c;
                    pbVar3 = local_10;
                    if (pbVar8 == (byte *)0x0) {
                      *(undefined4 *)(local_14 + 0xe2) = 0;
                      local_1c = (byte *)0x0;
                      pbVar12 = (byte *)0x0;
                      if (pbVar7 != (byte *)0x0) {
                        do {
                          local_24 = (byte *)(**(code **)(*param_3 + 0x28))
                                                       (param_4,local_c,local_1c);
                          iVar11 = FUN_1005572b(local_24,&DAT_1005a5ac);
                          if (iVar11 == 0) {
                            puVar1 = (uint *)(iVar9 + 0xe2);
                            *puVar1 = *puVar1 | 1;
                          }
                          else {
                            iVar11 = FUN_1005572b(local_24,(byte *)"cursor");
                            if (iVar11 == 0) {
                              puVar1 = (uint *)(iVar9 + 0xe2);
                              *puVar1 = *puVar1 | 2;
                            }
                            else {
                              uVar10 = 0;
                            }
                          }
                          local_1c = local_1c + 1;
                          pbVar12 = local_1c;
                          pbVar3 = local_10;
                        } while (local_1c < pbVar7);
                      }
                    }
                  }
                }
                else {
                  pbVar12 = local_1c;
                  pbVar3 = local_10;
                  if (pbVar8 == (byte *)0x0) {
                    *(undefined4 *)(local_14 + 0xc6) = 0;
                    local_1c = (byte *)0x0;
                    pbVar12 = (byte *)0x0;
                    if (pbVar7 != (byte *)0x0) {
                      do {
                        pbVar8 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,local_1c);
                        iVar11 = FUN_1005572b(pbVar8,&DAT_1005a594);
                        if (iVar11 == 0) {
                          *(uint *)(iVar9 + 0xc6) = *(uint *)(iVar9 + 0xc6) | 1;
                        }
                        else {
                          uVar10 = 0;
                        }
                        local_1c = local_1c + 1;
                        pbVar12 = local_1c;
                        pbVar3 = local_10;
                      } while (local_1c < pbVar7);
                    }
                  }
                }
              }
              goto LAB_1003448e;
            }
            pbVar12 = local_1c;
            pbVar3 = local_10;
            if ((pbVar8 != (byte *)0x0) || (pbVar7 == (byte *)0x0)) goto LAB_1003448e;
            if (pbVar7 == (byte *)0x1) {
              pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
              uVar13 = FUN_1002fbde(pbVar7,local_60,local_5c);
              if ((char)uVar13 != '\0') {
                uVar10 = 1;
                pbVar12 = local_1c;
                pbVar3 = local_10;
                goto LAB_1003448e;
              }
            }
          }
          else {
            pcVar14 = "cursorscalefactor";
            iVar11 = FUN_1005572b(local_10,(byte *)"cursorscalefactor");
            iVar9 = local_3c;
            if (iVar11 == 0) goto joined_r0x10033dde;
LAB_10033f02:
            iVar11 = FUN_1005572b(local_10,(byte *)"displayroi");
            iVar9 = local_14;
            if (iVar11 != 0) goto LAB_10034096;
            local_10 = (byte *)0x0;
            if (pbVar8 != (byte *)0x0) {
              local_10 = (byte *)0x0;
              do {
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x34))(param_4,local_c,local_10);
                iVar11 = FUN_1005572b(pbVar7,&DAT_1005a4d0);
                if (iVar11 == 0) {
                  local_1c = (byte *)(**(code **)(*param_3 + 0x38))(param_4,local_c,local_10);
                  iVar11 = FUN_10056251(local_1c,(byte *)" %s %c");
                  if ((iVar11 == 1) &&
                     (iVar11 = FUN_1005572b(local_168,(byte *)"centered"), iVar11 == 0)) {
                    *(undefined4 *)(iVar9 + 0xb2) = 0xffffffff;
                    *(undefined4 *)(iVar9 + 0xae) = 0xffffffff;
                  }
                  else {
                    iVar11 = FUN_10056251(local_1c,(byte *)" ( %d | %d ) %c");
                    if (iVar11 != 2) {
                      uVar10 = 0;
                    }
                  }
                }
                local_10 = local_10 + 1;
                pbVar7 = local_24;
              } while (local_10 < pbVar8);
            }
            pbVar12 = local_1c;
            pbVar3 = local_10;
            if ((byte)uVar10 == 0) goto LAB_1003448e;
            if (pbVar7 != (byte *)0x0) {
              if (pbVar7 != (byte *)0x1) goto LAB_1003412c;
              local_10 = (byte *)0x0;
              local_1c = (byte *)0x0;
              pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
              iVar9 = FUN_10056251(pbVar7,(byte *)" %d_%d %c");
              if (iVar9 == 2) {
                *(undefined4 *)(local_14 + 0xb6) = 0xffffffff;
                *(uint *)(local_14 + 0xba) = (int)local_10 << 0x10 | (uint)local_1c;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
              else {
                iVar9 = FUN_10056251(pbVar7,(byte *)" ( %d | %d ) %c");
                bVar4 = 0;
                if (iVar9 == 2) {
                  bVar4 = (byte)uVar10;
                }
                uVar10 = (uint)bVar4;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
              goto LAB_1003448e;
            }
LAB_10034126:
            pbVar12 = local_1c;
            pbVar3 = local_10;
            if (pbVar8 == (byte *)0x0) goto LAB_1003448e;
          }
LAB_1003412c:
          uVar10 = 0;
          pbVar12 = local_1c;
          pbVar3 = local_10;
        }
      }
      else {
        pbVar12 = local_1c;
        pbVar3 = local_10;
        if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
          if (pbVar7 != (byte *)0x1) goto LAB_1003412c;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
          iVar9 = FUN_1005572b(pbVar7,(byte *)"appdriven");
          if (iVar9 == 0) {
            *(undefined4 *)(local_14 + 0xd2) = 0;
            pbVar12 = local_1c;
            pbVar3 = local_10;
          }
          else {
            iVar9 = FUN_1005572b(pbVar7,(byte *)"argb8888_sdr");
            if (iVar9 == 0) {
              *(undefined4 *)(local_14 + 0xd2) = 1;
              pbVar12 = local_1c;
              pbVar3 = local_10;
            }
            else {
              iVar9 = FUN_1005572b(pbVar7,(byte *)"argb2101010_sdr");
              if (iVar9 == 0) {
                *(undefined4 *)(local_14 + 0xd2) = 2;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
              else {
                iVar9 = FUN_1005572b(pbVar7,(byte *)"argb2101010_sdr_wcg");
                if (iVar9 == 0) {
                  *(undefined4 *)(local_14 + 0xd2) = 3;
                  pbVar12 = local_1c;
                  pbVar3 = local_10;
                }
                else {
                  iVar9 = FUN_1005572b(pbVar7,(byte *)"argb16161616_hdr");
                  if (iVar9 != 0) goto LAB_1003412c;
                  *(undefined4 *)(local_14 + 0xd2) = 4;
                  pbVar12 = local_1c;
                  pbVar3 = local_10;
                }
              }
            }
          }
        }
      }
    }
    else {
      pbVar12 = local_1c;
      pbVar3 = local_10;
      if ((pbVar8 == (byte *)0x0) && (pbVar7 != (byte *)0x0)) {
        if (pbVar7 != (byte *)0x1) goto LAB_1003412c;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
        iVar9 = FUN_1005572b(pbVar7,&DAT_1005a19c);
        if (iVar9 == 0) {
          *(undefined4 *)(local_14 + 0xce) = 0;
          pbVar12 = local_1c;
          pbVar3 = local_10;
        }
        else {
          iVar9 = FUN_1005572b(pbVar7,(byte *)"discard");
          if (iVar9 == 0) {
            *(undefined4 *)(local_14 + 0xce) = 1;
            pbVar12 = local_1c;
            pbVar3 = local_10;
          }
          else {
            iVar9 = FUN_1005572b(pbVar7,&DAT_1005a3f4);
            if (iVar9 == 0) {
              *(undefined4 *)(local_14 + 0xce) = 2;
              pbVar12 = local_1c;
              pbVar3 = local_10;
            }
            else {
              iVar9 = FUN_1005572b(pbVar7,(byte *)"flip_discard");
              if (iVar9 == 0) {
                *(undefined4 *)(local_14 + 0xce) = 3;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
              else {
                iVar9 = FUN_1005572b(pbVar7,(byte *)"flip_seq");
                if (iVar9 != 0) goto LAB_1003412c;
                *(undefined4 *)(local_14 + 0xce) = 4;
                pbVar12 = local_1c;
                pbVar3 = local_10;
              }
            }
          }
        }
      }
    }
LAB_1003448e:
    local_10 = pbVar3;
    local_1c = pbVar12;
    local_c = local_c + 1;
    if ((char)uVar10 == '\0') {
      return 0;
    }
  } while( true );
}

