/*
 * FUN_140017fcc at 140017fcc
 * char __fastcall FUN_140017fcc(undefined8 param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 140017fcc-140018d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_140017fcc(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  byte *pbVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 local_res8;
  undefined1 local_d8;
  char local_d7 [3];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0 [2];
  byte local_b8 [128];
  
  uVar11 = 1;
  uVar15 = 0;
  local_res8 = param_1;
LAB_140018004:
  do {
    while( true ) {
      uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
      if (uVar3 <= uVar15) {
        return (char)uVar11;
      }
      pbVar7 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar15);
      uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar15);
      iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar15);
      if ((param_5 < 0x260) || (iVar5 = FUN_140024ce8(pbVar7,(byte *)"adapteridtype"), iVar5 != 0))
      break;
      if (iVar4 != 0) {
        return '\0';
      }
      uVar11 = 1;
      if (uVar3 != 0) {
        if (uVar3 != 1) goto LAB_140018894;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
        iVar4 = FUN_140024ce8(pbVar7,(byte *)"nvidia");
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0xf7) = 1;
        }
        else {
          iVar4 = FUN_140024ce8(pbVar7,&DAT_1400299a8);
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0xf7) = 2;
          }
          else {
            iVar4 = FUN_140024ce8(pbVar7,(byte *)"intel");
            if (iVar4 != 0) {
              return '\0';
            }
            *(undefined4 *)(param_2 + 0xf7) = 3;
          }
        }
        goto LAB_140018ad9;
      }
      *(undefined4 *)(param_2 + 0xf7) = 0;
      uVar15 = uVar15 + 1;
    }
    pbVar13 = pbVar7;
    iVar5 = FUN_140024ce8(pbVar7,(byte *)"vendorid");
    if (iVar5 == 0) {
      if (iVar4 != 0) goto LAB_140018d0a;
      uVar11 = 1;
      if (uVar3 != 0) {
        lVar9 = param_2 + 0xfb;
LAB_1400185f9:
        bVar1 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,lVar9,uVar3);
LAB_140018d3f:
        uVar11 = (ulonglong)bVar1;
      }
    }
    else {
      pbVar13 = pbVar7;
      iVar5 = FUN_140024ce8(pbVar7,(byte *)"deviceid");
      if (iVar5 == 0) {
        if (iVar4 != 0) goto LAB_140018d0a;
        uVar11 = 1;
        if (uVar3 != 0) {
          lVar9 = param_2 + 0xff;
          goto LAB_1400185f9;
        }
      }
      else {
        pbVar13 = pbVar7;
        iVar5 = FUN_140024ce8(pbVar7,(byte *)"subsystemid");
        if (iVar5 == 0) {
          if (iVar4 != 0) goto LAB_140018d0a;
          uVar11 = 1;
          if (uVar3 != 0) {
            lVar9 = param_2 + 0x103;
            goto LAB_1400185f9;
          }
        }
        else {
          pbVar13 = pbVar7;
          iVar5 = FUN_140024ce8(pbVar7,(byte *)"revisionid");
          if (iVar5 == 0) {
            if (iVar4 != 0) goto LAB_140018d0a;
            uVar11 = 1;
            if (uVar3 != 0) {
              lVar9 = param_2 + 0x107;
              goto LAB_1400185f9;
            }
          }
          else {
            iVar5 = FUN_140024ce8(pbVar7,(byte *)"extraenumeratedresolutions");
            if (iVar5 != 0) {
              iVar5 = FUN_140024ce8(pbVar7,(byte *)"ditheringeffect");
              if (iVar5 == 0) {
                if (iVar4 != 0) {
                  return '\0';
                }
                if (uVar3 != 1) {
LAB_140018894:
                  uVar11 = 1;
                  if (1 < uVar3) {
LAB_140018c3a:
                    uVar11 = 0;
                  }
                  goto LAB_1400188f9;
                }
                pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                iVar4 = FUN_140024ce8(pbVar7,(byte *)"pure32bit");
                if ((iVar4 == 0) ||
                   ((0x280 < param_5 &&
                    (iVar4 = FUN_140024ce8(pbVar7,(byte *)"high_quality"), iVar4 == 0)))) {
                  *(undefined4 *)(param_2 + 0x1cb) = 0;
                }
                else {
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"ordered2x2");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x1cb) = 1;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"ordered4x4");
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    *(undefined4 *)(param_2 + 0x1cb) = 2;
                  }
                }
              }
              else {
                iVar5 = FUN_140024ce8(pbVar7,(byte *)"dithering");
                if (iVar5 == 0) {
                  if (iVar4 != 0) {
                    return '\0';
                  }
                  if (uVar3 != 1) goto LAB_140018894;
                  pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                  iVar4 = FUN_140024ce8(pbVar7,(byte *)"disabled");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x1cf) = 0;
                  }
                  else {
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1cf) = 1;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"forceon16bit");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1cf) = 2;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"forcealways");
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        *(undefined4 *)(param_2 + 0x1cf) = 3;
                      }
                    }
                  }
                }
                else {
                  pbVar13 = pbVar7;
                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"ditherorderedmatrixsizescale");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_140018d0a;
                    uVar11 = 1;
                    if (uVar3 != 0) {
                      lVar9 = param_2 + 0x1d3;
                      goto LAB_1400185f9;
                    }
                    goto LAB_1400188f9;
                  }
                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"depthbuffersbitdepth");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    if (uVar3 != 1) goto LAB_140018894;
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                    iVar4 = FUN_140024ce8(pbVar7,(byte *)"appdriven");
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1d7) = 0;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"forcemin24bit");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1d7) = 1;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"force32bit");
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        *(undefined4 *)(param_2 + 0x1d7) = 2;
                      }
                    }
                  }
                  else {
                    iVar5 = FUN_140024ce8(pbVar7,(byte *)"default3drenderformat");
                    if ((iVar5 != 0) || (param_5 < 0x274)) {
                      pbVar13 = pbVar7;
                      iVar5 = FUN_140024ce8(pbVar7,(byte *)"shadercodegenerating");
                      if ((iVar5 == 0) && (param_5 == 0x260)) {
                        if (iVar4 != 0) {
                          return '\0';
                        }
                        if (uVar3 != 1) goto LAB_140018894;
                        puVar10 = &local_d4;
                        local_d4 = 0;
LAB_1400187e3:
                        bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,puVar10,1);
                        uVar11 = (ulonglong)bVar2;
                      }
                      else {
                        pbVar13 = pbVar7;
                        iVar5 = FUN_140024ce8(pbVar7,(byte *)"maxvsconstregisters");
                        if ((iVar5 == 0) && (0x260 < param_5)) {
                          if (iVar4 != 0) {
                            return '\0';
                          }
                          if (uVar3 != 1) goto LAB_140018894;
                          bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,
                                                (int *)(param_2 + 0x1e7),1);
                          iVar4 = *(int *)(param_2 + 0x1e7);
                          uVar11 = (ulonglong)bVar2;
                          if ((iVar4 - 0x100U & 0xfffffcff) != 0) {
                            return '\0';
                          }
                          if (iVar4 == 0x300) {
                            return '\0';
                          }
                        }
                        else {
                          pbVar13 = pbVar7;
                          iVar5 = FUN_140024ce8(pbVar7,(byte *)"npatchtesselationlevel");
                          if ((iVar5 == 0) && (0x275 < param_5)) {
                            if (iVar4 != 0) {
                              return '\0';
                            }
                            if (uVar3 == 1) {
                              bVar2 = FUN_1400163f4(pbVar13,param_3,param_4,uVar15,
                                                    (uint *)(param_2 + 0x1eb),1);
                              uVar11 = (ulonglong)bVar2;
                              if (8 < *(uint *)(param_2 + 0x1eb)) {
                                return '\0';
                              }
                            }
                            else {
                              uVar11 = 1;
                              if (1 < uVar3) {
                                return '\0';
                              }
                            }
                          }
                          else {
                            pbVar13 = pbVar7;
                            iVar5 = FUN_140024ce8(pbVar7,(byte *)"displayoutputenablemask");
                            if ((iVar5 == 0) && (0x278 < param_5)) {
                              if (iVar4 != 0) {
                                return '\0';
                              }
                              if (uVar3 == 1) {
                                puVar10 = (uint *)(param_2 + 0x1ef);
                                goto LAB_1400187e3;
                              }
                              goto LAB_140018894;
                            }
                            pbVar13 = pbVar7;
                            iVar5 = FUN_140024ce8(pbVar7,(byte *)"smootheddepthsampling");
                            if (iVar5 == 0) {
                              if (iVar4 != 0) goto LAB_140018d0a;
                              uVar11 = 1;
                              if (uVar3 != 0) {
                                pcVar12 = (char *)(param_2 + 0x1f5);
                                pbVar7 = pbVar13;
                                goto LAB_140018d26;
                              }
                            }
                            else {
                              pbVar13 = pbVar7;
                              iVar5 = FUN_140024ce8(pbVar7,(byte *)"msd3ddevicenames");
                              if (iVar5 == 0) {
                                if (iVar4 != 0) goto LAB_140018d0a;
                                uVar11 = 1;
                                if (uVar3 != 0) {
                                  pcVar12 = (char *)(param_2 + 499);
                                  pbVar7 = pbVar13;
                                  goto LAB_140018d26;
                                }
                              }
                              else {
                                pbVar13 = pbVar7;
                                iVar5 = FUN_140024ce8(pbVar7,(byte *)"rttexturesforcescaleandmsaa");
                                if (iVar5 == 0) {
                                  if (iVar4 != 0) goto LAB_140018d0a;
                                  uVar11 = 1;
                                  if (uVar3 != 0) {
                                    pcVar12 = (char *)(param_2 + 500);
                                    pbVar7 = pbVar13;
                                    goto LAB_140018d26;
                                  }
                                }
                                else {
                                  pbVar13 = pbVar7;
                                  iVar5 = FUN_140024ce8(pbVar7,(byte *)"deferredscreenmodeswitch");
                                  if (iVar5 == 0) {
                                    if (iVar4 != 0) goto LAB_140018d0a;
                                    uVar11 = 1;
                                    if (uVar3 != 0) {
                                      pcVar12 = (char *)(param_2 + 0x1f6);
                                      pbVar7 = pbVar13;
                                      goto LAB_140018d26;
                                    }
                                  }
                                  else {
                                    pbVar13 = pbVar7;
                                    iVar5 = FUN_140024ce8(pbVar7,(byte *)"disabledefaultresolutions"
                                                         );
                                    if (iVar5 == 0) {
                                      if (iVar4 != 0) goto LAB_140018d0a;
                                      uVar11 = 1;
                                      if (uVar3 != 0) {
                                        local_d7[0] = '\0';
                                        uVar11 = FUN_140016328(pbVar13,param_3,param_4,uVar15,
                                                               local_d7,uVar3);
                                        uVar11 = uVar11 & 0xff;
                                        *(uint *)(param_2 + 0x1df) =
                                             ~-(uint)(local_d7[0] != '\0') & 2;
                                      }
                                    }
                                    else {
                                      iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "defaultenumeratedresolutions");
                                      if (iVar5 == 0) {
                                        if (iVar4 != 0) {
                                          return '\0';
                                        }
                                        if (uVar3 == 1) {
                                          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                                     (param_3,param_4,uVar15,0);
                                          iVar4 = FUN_140024ce8(pbVar7,&DAT_140029bf0);
                                          if (iVar4 == 0) {
                                            *(undefined4 *)(param_2 + 0x1df) = 0;
                                          }
                                          else {
                                            iVar4 = FUN_140024ce8(pbVar7,(byte *)"classics");
                                            if (iVar4 == 0) {
                                              *(undefined4 *)(param_2 + 0x1df) = 1;
                                            }
                                            else {
                                              iVar4 = FUN_140024ce8(pbVar7,&DAT_140029334);
                                              if (iVar4 != 0) {
                                                return '\0';
                                              }
                                              *(undefined4 *)(param_2 + 0x1df) = 2;
                                            }
                                          }
                                          goto LAB_140018ad9;
                                        }
                                        goto LAB_140018894;
                                      }
                                      iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "enumeratedresolutionbitdepths");
                                      if (iVar5 == 0) {
                                        if (((char)uVar11 != '\0') && (uVar3 != 0)) {
                                          bVar1 = 0;
                                          *(undefined4 *)(param_2 + 0x1e3) = 0;
                                          local_d4 = 0;
                                          do {
                                            uVar14 = (ulonglong)local_d4;
                                            pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))
                                                                       (param_3,param_4,uVar15);
                                            iVar4 = FUN_1400242b4(pbVar7,(byte *)" 8 %c",&local_d8,
                                                                  uVar14);
                                            local_cc = FUN_1400242b4(pbVar7,(byte *)" 16 %c",
                                                                     &local_d8,uVar14);
                                            local_c8 = FUN_1400242b4(pbVar7,(byte *)" 32 %c",
                                                                     &local_d8,uVar14);
                                            iVar5 = FUN_1400242b4(pbVar7,(byte *)" all %c",&local_d8
                                                                  ,uVar14);
                                            if (iVar4 == -1) {
                                              *(uint *)(param_2 + 0x1e3) =
                                                   *(uint *)(param_2 + 0x1e3) | 1;
LAB_140018bfc:
                                              bVar1 = bVar1 | 1;
                                            }
                                            else {
                                              if (local_cc == 0xffffffff) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 2;
                                                goto LAB_140018bfc;
                                              }
                                              if (local_c8 == -1) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 4;
                                                goto LAB_140018bfc;
                                              }
                                              if (iVar5 == -1) {
                                                *(uint *)(param_2 + 0x1e3) =
                                                     *(uint *)(param_2 + 0x1e3) | 7;
                                                bVar1 = bVar1 | 2;
                                              }
                                              else {
                                                uVar11 = 0;
                                              }
                                            }
                                            local_d4 = local_d4 + 1;
                                          } while (local_d4 < uVar3);
                                          if (bVar1 == 3) goto LAB_140018c3a;
                                        }
                                      }
                                      else {
                                        pbVar13 = pbVar7;
                                        iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "primarysurfacebatchedupdate");
                                        if ((iVar5 == 0) && (0x261 < param_5)) {
                                          if (iVar4 != 0) goto LAB_140018d0a;
                                          uVar11 = 1;
                                          if (uVar3 != 0) {
                                            pcVar12 = (char *)(param_2 + 0x1f7);
                                            pbVar7 = pbVar13;
                                            goto LAB_140018d26;
                                          }
                                        }
                                        else {
                                          pbVar13 = pbVar7;
                                          iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "enablespecializedshaders");
                                          if ((iVar5 == 0) && (param_5 - 0x276 < 3)) {
                                            if (iVar4 != 0) goto LAB_140018d0a;
                                            uVar11 = 1;
                                            if (uVar3 != 0) {
                                              pcVar12 = local_d7;
                                              pbVar7 = pbVar13;
                                              goto LAB_140018d26;
                                            }
                                          }
                                          else {
                                            pbVar13 = pbVar7;
                                            iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "d3d12boundschecking");
                                            if ((iVar5 == 0) && (0x282 < param_5)) {
                                              if (iVar4 != 0) goto LAB_140018d0a;
                                              uVar11 = 1;
                                              if (uVar3 != 0) {
                                                pcVar12 = (char *)(param_2 + 0x1f9);
                                                pbVar7 = pbVar13;
                                                goto LAB_140018d26;
                                              }
                                            }
                                            else {
                                              pbVar13 = pbVar7;
                                              iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "suppressamdblacklist");
                                              if ((iVar5 == 0) && (0x280 < param_5)) {
                                                if (iVar4 == 0) {
                                                  uVar11 = 1;
                                                  if (uVar3 != 0) {
                                                    pcVar12 = (char *)(param_2 + 0x1f8);
                                                    pbVar7 = pbVar13;
LAB_140018d26:
                                                    uVar8 = FUN_140016328(pbVar7,param_3,param_4,
                                                                          uVar15,pcVar12,uVar3);
                                                    bVar1 = (byte)uVar8;
                                                    goto LAB_140018d3f;
                                                  }
                                                }
                                                else {
LAB_140018d0a:
                                                  uVar11 = 0;
                                                }
                                              }
                                              else {
                                                iVar5 = FUN_140024ce8(pbVar7,(byte *)
                                                  "alternativescaling");
                                                if (iVar5 != 0) {
                                                  return '\0';
                                                }
                                                if (param_5 < 0x285) {
                                                  return '\0';
                                                }
                                                if (iVar4 != 0) goto LAB_140018d0a;
                                                uVar11 = 1;
                                                if (uVar3 != 0) {
                                                  pcVar12 = (char *)(param_2 + 0x1fa);
                                                  goto LAB_140018d26;
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
                          }
                        }
                      }
                      goto LAB_1400188f9;
                    }
                    if (iVar4 != 0) {
                      return '\0';
                    }
                    if (uVar3 != 1) goto LAB_140018894;
                    pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,0);
                    iVar4 = FUN_140024ce8(pbVar7,&DAT_140029aa8);
                    if (iVar4 == 0) {
                      *(undefined4 *)(param_2 + 0x1db) = 0;
                    }
                    else {
                      iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb8888");
                      if (iVar4 == 0) {
                        *(undefined4 *)(param_2 + 0x1db) = 1;
                      }
                      else {
                        iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb2101010");
                        if (iVar4 == 0) {
                          *(undefined4 *)(param_2 + 0x1db) = 2;
                        }
                        else {
                          iVar4 = FUN_140024ce8(pbVar7,(byte *)"argb16161616");
                          if (iVar4 != 0) {
                            return '\0';
                          }
                          if (param_5 < 0x281) {
                            return '\0';
                          }
                          *(undefined4 *)(param_2 + 0x1db) = 3;
                        }
                      }
                    }
                  }
                }
              }
LAB_140018ad9:
              uVar11 = 1;
              uVar15 = uVar15 + 1;
              goto LAB_140018004;
            }
            if (iVar4 != 0) {
              return '\0';
            }
            uVar11 = 1;
            for (local_cc = 0; uVar14 = (ulonglong)local_cc, local_cc < uVar3;
                local_cc = local_cc + 1) {
              pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar15,uVar14);
              local_d0 = 0;
              *(undefined4 *)(param_2 + 0x113 + uVar14 * 0xc) = 0;
              iVar4 = FUN_1400242b4(pbVar7,(byte *)" max @ %d %c",&local_d0,&local_res8);
              local_d4 = FUN_1400242b4(pbVar7,(byte *)" max_4_3 @ %d %c",&local_d0,&local_res8);
              iVar5 = FUN_1400242b4(pbVar7,(byte *)" max_16_9 @ %d %c",&local_d0,&local_res8);
              uVar6 = local_d0;
              if (iVar4 == 1) {
                *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0xffffffff;
                *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
LAB_140018417:
                *(uint *)(param_2 + 0x113 + uVar14 * 0xc) = uVar6;
              }
              else {
                if (local_d4 == 1) {
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x100;
                  goto LAB_140018417;
                }
                if (iVar5 == 1) {
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x101;
                  goto LAB_140018417;
                }
                iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                if ((iVar4 == 1) && (iVar4 = FUN_140024ce8(local_b8,&DAT_1400272d4), iVar4 == 0)) {
                  *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0xffffffff;
                  *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                }
                else {
                  iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                  if ((iVar4 == 1) &&
                     (iVar4 = FUN_140024ce8(local_b8,(byte *)"max_4_3"), iVar4 == 0)) {
                    *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                    *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x100;
                  }
                  else {
                    iVar4 = FUN_1400242b4(pbVar7,(byte *)" %s %c",local_b8,&local_res8);
                    if ((iVar4 == 1) &&
                       (iVar4 = FUN_140024ce8(local_b8,(byte *)"max_16_9"), iVar4 == 0)) {
                      *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = 0xffffffff;
                      *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = 0x101;
                    }
                    else {
                      local_d4 = 0;
                      uVar8 = FUN_140016440(pbVar7,&local_c4,local_c0,&local_d4,&local_c8);
                      if ((char)uVar8 == '\0') {
                        return '\0';
                      }
                      if (local_cc < 0x10) {
                        *(undefined4 *)(param_2 + 0x10b + uVar14 * 0xc) = local_c4;
                        *(undefined4 *)(param_2 + 0x10f + uVar14 * 0xc) = local_c0[0];
                        uVar6 = local_d4;
                        goto LAB_140018417;
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
LAB_1400188f9:
    uVar15 = uVar15 + 1;
    if ((char)uVar11 == '\0') {
      return '\0';
    }
  } while( true );
}

