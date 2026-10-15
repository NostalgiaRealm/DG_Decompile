/*
 * FUN_10032bc8 at 10032bc8
 * char __fastcall FUN_10032bc8(undefined4 param_1, int param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10032bc8-10033953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char __fastcall
FUN_10032bc8(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  byte local_f0 [128];
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  byte *local_60;
  byte *local_5c;
  byte *local_58;
  byte *local_54;
  int *local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte *local_28;
  int local_24;
  byte *local_20;
  uint local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  byte local_5;
  
  local_18 = 0;
  local_2c = param_2 + 0xfb;
  local_30 = param_2 + 0xff;
  local_34 = param_2 + 0x103;
  local_38 = param_2 + 0x107;
  local_44 = param_2 + 0x1d3;
  local_48 = param_2 + 0x1e7;
  local_4c = param_2 + 0x1eb;
  local_50 = (int *)(param_2 + 0x1ef);
  local_54 = (byte *)(param_2 + 0x1f5);
  local_58 = (byte *)(param_2 + 499);
  local_5c = (byte *)(param_2 + 500);
  local_60 = (byte *)(param_2 + 0x1f6);
  local_64 = (byte *)(param_2 + 0x1f7);
  local_68 = (byte *)(param_2 + 0x1f9);
  local_6c = (byte *)(param_2 + 0x1f8);
  local_70 = (byte *)(param_2 + 0x1fa);
  local_c = param_2;
LAB_10032c70:
  uVar9 = 1;
LAB_10032c73:
  uVar11 = local_18;
  uVar4 = (**(code **)(*param_3 + 0x1c))(param_4);
  if (uVar4 <= uVar11) {
    return (char)uVar9;
  }
  local_10 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,uVar11);
  pbVar5 = (byte *)(**(code **)(*param_3 + 0x24))(param_4,uVar11);
  local_28 = pbVar5;
  local_14 = (byte *)(**(code **)(*param_3 + 0x30))(param_4,uVar11);
  if ((param_5 < 0x260) || (iVar6 = FUN_1005572b(local_10,(byte *)"adapteridtype"), iVar6 != 0)) {
    pcVar13 = "vendorid";
    iVar6 = FUN_1005572b(local_10,(byte *)"vendorid");
    if (iVar6 == 0) {
      iVar6 = local_2c;
      if (local_14 != (byte *)0x0) goto LAB_10032d7b;
joined_r0x10032d9f:
      uVar9 = 1;
      if (pbVar5 != (byte *)0x0) {
LAB_10032daa:
        bVar2 = FUN_100311aa(pcVar13,param_3,param_4,uVar11,iVar6,(int)pbVar5);
LAB_10033938:
        uVar9 = (uint)bVar2;
      }
      goto LAB_1003393d;
    }
    pcVar13 = "deviceid";
    iVar7 = FUN_1005572b(local_10,(byte *)"deviceid");
    iVar6 = local_30;
    if (iVar7 != 0) {
      pcVar13 = "subsystemid";
      iVar7 = FUN_1005572b(local_10,(byte *)"subsystemid");
      iVar6 = local_34;
      if (iVar7 == 0) goto joined_r0x10032dd1;
      pcVar13 = "revisionid";
      iVar7 = FUN_1005572b(local_10,(byte *)"revisionid");
      iVar6 = local_38;
      if (iVar7 == 0) goto joined_r0x10032dd1;
      iVar6 = FUN_1005572b(local_10,(byte *)"extraenumeratedresolutions");
      if (iVar6 == 0) {
        if (local_14 != (byte *)0x0) {
          return '\0';
        }
        uVar9 = 1;
        pbVar8 = (byte *)0x0;
        while (local_10 = pbVar8, pbVar8 < pbVar5) {
          local_14 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,pbVar8);
          local_18 = (int)pbVar8 * 0xc;
          local_20 = (byte *)0x0;
          *(undefined4 *)(local_c + 0x113 + local_18) = 0;
          iVar6 = FUN_10056251(local_14,(byte *)" max @ %d %c");
          local_24 = FUN_10056251(local_14,(byte *)" max_4_3 @ %d %c");
          iVar7 = FUN_10056251(local_14,(byte *)" max_16_9 @ %d %c");
          pbVar5 = local_14;
          if (iVar6 == 1) {
            *(undefined4 *)(local_c + 0x10f + local_18) = 0xffffffff;
LAB_10032efb:
            *(undefined4 *)(local_c + 0x10b + local_18) = 0xffffffff;
            pbVar5 = local_20;
LAB_1003308e:
            *(byte **)(local_c + 0x113 + local_18) = pbVar5;
          }
          else {
            if (local_24 == 1) {
              *(undefined4 *)(local_c + 0x10f + local_18) = 0x100;
              goto LAB_10032efb;
            }
            if (iVar7 == 1) {
              *(undefined4 *)(local_c + 0x10f + local_18) = 0x101;
              goto LAB_10032efb;
            }
            iVar6 = FUN_10056251(local_14,(byte *)" %s %c");
            if ((iVar6 != 1) || (iVar6 = FUN_1005572b(local_f0,&DAT_10059880), iVar6 != 0)) {
              iVar6 = FUN_10056251(pbVar5,(byte *)" %s %c");
              if ((iVar6 == 1) && (iVar6 = FUN_1005572b(local_f0,(byte *)"max_4_3"), iVar6 == 0)) {
                *(undefined4 *)(local_c + 0x10b + local_18) = 0xffffffff;
                *(undefined4 *)(local_c + 0x10f + local_18) = 0x100;
                goto LAB_10033098;
              }
              iVar6 = FUN_10056251(pbVar5,(byte *)" %s %c");
              if ((iVar6 == 1) && (iVar6 = FUN_1005572b(local_f0,(byte *)"max_16_9"), iVar6 == 0)) {
                *(undefined4 *)(local_c + 0x10b + local_18) = 0xffffffff;
                *(undefined4 *)(local_c + 0x10f + local_18) = 0x101;
                goto LAB_10033098;
              }
              local_14 = (byte *)0x0;
              bVar3 = FUN_100311d0(pbVar5,&local_40,&local_14,&local_24);
              if (!bVar3) {
                return '\0';
              }
              if ((byte *)0xf < local_10) goto LAB_10033098;
              *(undefined4 *)(local_c + 0x10b + local_18) = local_3c;
              *(undefined4 *)(local_c + 0x10f + local_18) = local_40;
              pbVar5 = local_14;
              goto LAB_1003308e;
            }
            *(undefined4 *)(local_c + 0x10f + local_18) = 0xffffffff;
            *(undefined4 *)(local_c + 0x10b + local_18) = 0xffffffff;
          }
LAB_10033098:
          pbVar5 = local_28;
          pbVar8 = local_10 + 1;
        }
        goto LAB_1003393d;
      }
      iVar6 = FUN_1005572b(local_10,(byte *)"ditheringeffect");
      if (iVar6 == 0) {
        if (local_14 != (byte *)0x0) {
          return '\0';
        }
        uVar9 = 1;
        if (pbVar5 != (byte *)0x1) goto LAB_1003370c;
        pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
        iVar6 = FUN_1005572b(pbVar5,(byte *)"pure32bit");
        if ((iVar6 == 0) ||
           ((0x280 < param_5 && (iVar6 = FUN_1005572b(pbVar5,(byte *)"high_quality"), iVar6 == 0))))
        {
          *(undefined4 *)(local_c + 0x1cb) = 0;
          goto LAB_1003393d;
        }
        iVar6 = FUN_1005572b(pbVar5,(byte *)"ordered2x2");
        if (iVar6 == 0) {
          *(undefined4 *)(local_c + 0x1cb) = 1;
        }
        else {
          iVar6 = FUN_1005572b(pbVar5,(byte *)"ordered4x4");
          if (iVar6 != 0) {
            return '\0';
          }
          *(undefined4 *)(local_c + 0x1cb) = 2;
        }
      }
      else {
        iVar6 = FUN_1005572b(local_10,(byte *)"dithering");
        if (iVar6 == 0) {
          if (local_14 != (byte *)0x0) {
            return '\0';
          }
          if (pbVar5 != (byte *)0x1) goto LAB_1003370c;
          pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
          iVar6 = FUN_1005572b(pbVar5,(byte *)"disabled");
          if (iVar6 == 0) {
            *(undefined4 *)(local_c + 0x1cf) = 0;
          }
          else {
            iVar6 = FUN_1005572b(pbVar5,(byte *)"appdriven");
            if (iVar6 == 0) {
              *(undefined4 *)(local_c + 0x1cf) = 1;
            }
            else {
              iVar6 = FUN_1005572b(pbVar5,(byte *)"forceon16bit");
              if (iVar6 == 0) {
                *(undefined4 *)(local_c + 0x1cf) = 2;
              }
              else {
                iVar6 = FUN_1005572b(pbVar5,(byte *)"forcealways");
                if (iVar6 != 0) goto LAB_10032d7b;
                *(undefined4 *)(local_c + 0x1cf) = 3;
              }
            }
          }
        }
        else {
          pcVar13 = "ditherorderedmatrixsizescale";
          iVar6 = FUN_1005572b(local_10,(byte *)"ditherorderedmatrixsizescale");
          if (iVar6 == 0) {
            if (local_14 != (byte *)0x0) goto LAB_10032d7b;
            uVar9 = 1;
            iVar6 = local_44;
            if (pbVar5 == (byte *)0x0) goto LAB_1003393d;
            goto LAB_10032daa;
          }
          iVar6 = FUN_1005572b(local_10,(byte *)"depthbuffersbitdepth");
          if (iVar6 == 0) {
            if (local_14 != (byte *)0x0) {
              return '\0';
            }
            if (pbVar5 != (byte *)0x1) {
LAB_1003370c:
              uVar9 = 1;
              if ((byte *)0x1 < pbVar5) {
LAB_10033820:
                uVar9 = 0;
              }
              goto LAB_1003393d;
            }
            pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
            iVar6 = FUN_1005572b(pbVar5,(byte *)"appdriven");
            if (iVar6 == 0) {
              *(undefined4 *)(local_c + 0x1d7) = 0;
            }
            else {
              iVar6 = FUN_1005572b(pbVar5,(byte *)"forcemin24bit");
              if (iVar6 == 0) {
                *(undefined4 *)(local_c + 0x1d7) = 1;
              }
              else {
                iVar6 = FUN_1005572b(pbVar5,(byte *)"force32bit");
                if (iVar6 != 0) goto LAB_10032d7b;
                *(undefined4 *)(local_c + 0x1d7) = 2;
              }
            }
          }
          else {
            iVar6 = FUN_1005572b(local_10,(byte *)"default3drenderformat");
            if ((iVar6 == 0) && (0x273 < param_5)) {
              if (local_14 != (byte *)0x0) {
                return '\0';
              }
              if (pbVar5 != (byte *)0x1) goto LAB_1003370c;
              pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
              iVar6 = FUN_1005572b(pbVar5,&DAT_1005a19c);
              if (iVar6 == 0) {
                *(undefined4 *)(local_c + 0x1db) = 0;
              }
              else {
                iVar6 = FUN_1005572b(pbVar5,(byte *)"argb8888");
                if (iVar6 == 0) {
                  *(undefined4 *)(local_c + 0x1db) = 1;
                }
                else {
                  iVar6 = FUN_1005572b(pbVar5,(byte *)"argb2101010");
                  if (iVar6 == 0) {
                    *(undefined4 *)(local_c + 0x1db) = 2;
                  }
                  else {
                    iVar6 = FUN_1005572b(pbVar5,(byte *)"argb16161616");
                    if ((iVar6 != 0) || (param_5 < 0x281)) goto LAB_10032d7b;
                    *(undefined4 *)(local_c + 0x1db) = 3;
                  }
                }
              }
            }
            else {
              pcVar13 = "shadercodegenerating";
              iVar6 = FUN_1005572b(local_10,(byte *)"shadercodegenerating");
              if ((iVar6 == 0) && (param_5 == 0x260)) {
                if (local_14 != (byte *)0x0) {
                  return '\0';
                }
                if (pbVar5 == (byte *)0x1) {
                  local_24 = 0;
                  piVar12 = &local_24;
LAB_10033421:
                  bVar3 = FUN_100311aa(pcVar13,param_3,param_4,uVar11,piVar12,(int)pbVar5);
                  uVar9 = (uint)bVar3;
                  goto LAB_1003393d;
                }
                goto LAB_1003370c;
              }
              pcVar13 = "maxvsconstregisters";
              iVar6 = FUN_1005572b(local_10,(byte *)"maxvsconstregisters");
              if ((iVar6 == 0) && (0x260 < param_5)) {
                if (local_14 != (byte *)0x0) {
                  return '\0';
                }
                if (pbVar5 != (byte *)0x1) goto LAB_1003370c;
                bVar3 = FUN_100311aa(pcVar13,param_3,param_4,uVar11,local_48,1);
                uVar9 = (uint)bVar3;
                iVar6 = *(int *)(local_c + 0x1e7);
                if (((iVar6 == 0x100) || (iVar6 == 0x200)) || (iVar6 == 0x400)) goto LAB_1003393d;
                goto LAB_10033820;
              }
              pcVar13 = "npatchtesselationlevel";
              iVar6 = FUN_1005572b(local_10,(byte *)"npatchtesselationlevel");
              if ((iVar6 == 0) && (0x275 < param_5)) {
                if (local_14 != (byte *)0x0) {
                  return '\0';
                }
                if (pbVar5 == (byte *)0x1) {
                  bVar3 = FUN_100311aa(pcVar13,param_3,param_4,uVar11,local_4c,1);
                  uVar9 = 0;
                  if (*(uint *)(local_c + 0x1eb) < 9) {
                    uVar9 = (uint)bVar3;
                  }
                  goto LAB_1003393d;
                }
                goto LAB_1003370c;
              }
              pcVar13 = "displayoutputenablemask";
              iVar6 = FUN_1005572b(local_10,(byte *)"displayoutputenablemask");
              if ((iVar6 == 0) && (0x278 < param_5)) {
                if (local_14 != (byte *)0x0) {
                  return '\0';
                }
                piVar12 = local_50;
                if (pbVar5 == (byte *)0x1) goto LAB_10033421;
                goto LAB_1003370c;
              }
              pcVar13 = "smootheddepthsampling";
              iVar6 = FUN_1005572b(local_10,(byte *)"smootheddepthsampling");
              pbVar8 = local_54;
              if (iVar6 == 0) {
joined_r0x100335c0:
                if (local_14 == (byte *)0x0) {
                  bVar2 = 1;
                  if (pbVar5 != (byte *)0x0) {
LAB_10033929:
                    uVar10 = FUN_1003111f(pcVar13,param_3,param_4,uVar11,pbVar8,(int)pbVar5);
                    bVar2 = (byte)uVar10;
                  }
                }
                else {
LAB_10033919:
                  bVar2 = 0;
                }
                goto LAB_10033938;
              }
              pcVar13 = "msd3ddevicenames";
              iVar6 = FUN_1005572b(local_10,(byte *)"msd3ddevicenames");
              pbVar8 = local_58;
              if (iVar6 == 0) goto joined_r0x100335c0;
              pcVar13 = "rttexturesforcescaleandmsaa";
              iVar6 = FUN_1005572b(local_10,(byte *)"rttexturesforcescaleandmsaa");
              pbVar8 = local_5c;
              if (iVar6 == 0) goto joined_r0x100335c0;
              pcVar13 = "deferredscreenmodeswitch";
              iVar6 = FUN_1005572b(local_10,(byte *)"deferredscreenmodeswitch");
              pbVar8 = local_60;
              if (iVar6 == 0) goto joined_r0x100335c0;
              pcVar13 = "disabledefaultresolutions";
              iVar6 = FUN_1005572b(local_10,(byte *)"disabledefaultresolutions");
              if (iVar6 == 0) {
                if (local_14 == (byte *)0x0) {
                  uVar9 = 1;
                  if (pbVar5 != (byte *)0x0) {
                    local_5 = 0;
                    uVar9 = FUN_1003111f(pcVar13,param_3,param_4,uVar11,&local_5,(int)pbVar5);
                    uVar9 = uVar9 & 0xff;
                    uVar10 = 2;
                    if (local_5 != 0) {
                      uVar10 = 0;
                    }
                    *(undefined4 *)(local_c + 0x1df) = uVar10;
                  }
                  goto LAB_1003393d;
                }
                goto LAB_10032d7b;
              }
              iVar6 = FUN_1005572b(local_10,(byte *)"defaultenumeratedresolutions");
              if (iVar6 != 0) {
                iVar6 = FUN_1005572b(local_10,(byte *)"enumeratedresolutionbitdepths");
                pbVar1 = local_10;
                if (iVar6 == 0) {
                  if (((char)uVar9 != '\0') && (pbVar5 != (byte *)0x0)) {
                    local_5 = 0;
                    local_10 = (byte *)0x0;
                    *(undefined4 *)(local_c + 0x1e3) = 0;
                    do {
                      pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,local_10);
                      iVar6 = FUN_10056251(pbVar5,(byte *)" 8 %c");
                      local_24 = FUN_10056251(pbVar5,(byte *)" 16 %c");
                      local_14 = (byte *)FUN_10056251(pbVar5,(byte *)" 32 %c");
                      iVar7 = FUN_10056251(pbVar5,(byte *)" all %c");
                      if (iVar6 == -1) {
                        *(uint *)(local_c + 0x1e3) = *(uint *)(local_c + 0x1e3) | 1;
LAB_100337de:
                        local_5 = local_5 | 1;
                      }
                      else {
                        if (local_24 == -1) {
                          *(uint *)(local_c + 0x1e3) = *(uint *)(local_c + 0x1e3) | 2;
                          goto LAB_100337de;
                        }
                        if (local_14 == (byte *)0xffffffff) {
                          *(uint *)(local_c + 0x1e3) = *(uint *)(local_c + 0x1e3) | 4;
                          goto LAB_100337de;
                        }
                        if (iVar7 == -1) {
                          *(uint *)(local_c + 0x1e3) = *(uint *)(local_c + 0x1e3) | 7;
                          local_5 = local_5 | 2;
                        }
                        else {
                          uVar9 = 0;
                        }
                      }
                      local_10 = local_10 + 1;
                      uVar11 = local_18;
                    } while (local_10 < local_28);
                    if (local_5 == 3) goto LAB_10033820;
                  }
                  goto LAB_1003393d;
                }
                pcVar13 = "primarysurfacebatchedupdate";
                iVar6 = FUN_1005572b(local_10,(byte *)"primarysurfacebatchedupdate");
                if ((iVar6 == 0) && (pbVar8 = local_64, 0x261 < param_5)) goto joined_r0x100335c0;
                pcVar13 = "enablespecializedshaders";
                iVar6 = FUN_1005572b(pbVar1,(byte *)"enablespecializedshaders");
                if ((iVar6 != 0) || (2 < param_5 - 0x276)) {
                  pcVar13 = "d3d12boundschecking";
                  iVar6 = FUN_1005572b(pbVar1,(byte *)"d3d12boundschecking");
                  if ((iVar6 != 0) || (pbVar8 = local_68, param_5 < 0x283)) {
                    pcVar13 = "suppressamdblacklist";
                    iVar6 = FUN_1005572b(pbVar1,(byte *)"suppressamdblacklist");
                    if ((iVar6 != 0) || (pbVar8 = local_6c, param_5 < 0x281)) {
                      pcVar13 = "alternativescaling";
                      iVar6 = FUN_1005572b(pbVar1,(byte *)"alternativescaling");
                      if (iVar6 != 0) {
                        return '\0';
                      }
                      pbVar8 = local_70;
                      if (param_5 < 0x285) {
                        return '\0';
                      }
                    }
                  }
                  goto joined_r0x100335c0;
                }
                if (local_14 != (byte *)0x0) goto LAB_10033919;
                bVar2 = 1;
                if (pbVar5 != (byte *)0x0) {
                  pbVar8 = &local_5;
                  goto LAB_10033929;
                }
                goto LAB_10033938;
              }
              if (local_14 != (byte *)0x0) {
                return '\0';
              }
              if (pbVar5 != (byte *)0x1) goto LAB_1003370c;
              pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
              iVar6 = FUN_1005572b(pbVar5,&DAT_1005a2c8);
              if (iVar6 == 0) {
                *(undefined4 *)(local_c + 0x1df) = 0;
              }
              else {
                iVar6 = FUN_1005572b(pbVar5,(byte *)"classics");
                if (iVar6 == 0) {
                  *(undefined4 *)(local_c + 0x1df) = 1;
                }
                else {
                  iVar6 = FUN_1005572b(pbVar5,&DAT_10059aa0);
                  if (iVar6 != 0) goto LAB_10032d7b;
                  *(undefined4 *)(local_c + 0x1df) = 2;
                }
              }
            }
          }
        }
      }
      goto LAB_100336fe;
    }
joined_r0x10032dd1:
    if (local_14 == (byte *)0x0) goto joined_r0x10032d9f;
  }
  else {
    if (local_14 != (byte *)0x0) {
      return '\0';
    }
    uVar9 = 1;
    if (pbVar5 == (byte *)0x0) {
      *(undefined4 *)(local_c + 0xf7) = 0;
      goto LAB_100336fe;
    }
    if (pbVar5 != (byte *)0x1) {
      if (pbVar5 < (byte *)0x2) goto LAB_1003393d;
      goto LAB_10032d7b;
    }
    pbVar5 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,uVar11,0);
    iVar6 = FUN_1005572b(pbVar5,(byte *)"nvidia");
    if (iVar6 == 0) {
      *(undefined4 *)(local_c + 0xf7) = 1;
      goto LAB_100336fe;
    }
    iVar6 = FUN_1005572b(pbVar5,&DAT_1005a074);
    if (iVar6 == 0) {
      *(undefined4 *)(local_c + 0xf7) = 2;
      goto LAB_100336fe;
    }
    iVar6 = FUN_1005572b(pbVar5,(byte *)"intel");
    if (iVar6 == 0) goto code_r0x10032d63;
  }
LAB_10032d7b:
  uVar9 = 0;
LAB_1003393d:
  local_18 = uVar11 + 1;
  if ((char)uVar9 == '\0') {
    return '\0';
  }
  goto LAB_10032c73;
code_r0x10032d63:
  *(undefined4 *)(local_c + 0xf7) = 3;
LAB_100336fe:
  local_18 = uVar11 + 1;
  goto LAB_10032c70;
}

