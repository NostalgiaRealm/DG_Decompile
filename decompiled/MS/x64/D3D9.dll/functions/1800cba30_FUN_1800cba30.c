/*
 * FUN_1800cba30 at 1800cba30
 * undefined1 __fastcall FUN_1800cba30(ulonglong param_1, longlong param_2, longlong * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 1800cba30-1800cc25a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800cba30(ulonglong param_1,longlong param_2,longlong *param_3,undefined4 param_4,uint param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong local_res8 [4];
  undefined8 in_stack_fffffffffffffba0;
  byte local_448 [1032];
  
  cVar2 = '\x01';
  uVar11 = 0;
  local_res8[0] = param_1;
LAB_1800cba5d:
  do {
    uVar3 = (**(code **)(*param_3 + 0x38))(param_3,param_4);
    if (uVar3 <= uVar11) {
      return cVar2;
    }
    pbVar6 = (byte *)(**(code **)(*param_3 + 0x40))(param_3,param_4,uVar11);
    uVar3 = (**(code **)(*param_3 + 0x48))(param_3,param_4,uVar11);
    iVar4 = (**(code **)(*param_3 + 0x60))(param_3,param_4,uVar11);
    pbVar7 = pbVar6;
    iVar5 = FUN_1800fc514(pbVar6,(byte *)"disableandpassthru");
    if (iVar5 == 0) {
      if (iVar4 == 0) {
        cVar2 = '\x01';
        if (uVar3 != 0) {
          puVar8 = (undefined1 *)(param_2 + 0x80);
          pbVar6 = pbVar7;
          goto LAB_1800cc21e;
        }
      }
      else {
LAB_1800cbf43:
        cVar2 = '\0';
      }
      goto LAB_1800cc237;
    }
    iVar5 = FUN_1800fc514(pbVar6,(byte *)"videocard");
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      cVar2 = '\x01';
      if (uVar3 != 1) goto LAB_1800cbf3d;
      pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
      iVar4 = FUN_1800fc514(pbVar7,&DAT_1801054f4);
      if (iVar4 != 0) {
        iVar4 = FUN_1800fc514(pbVar7,(byte *)"internal3d");
        if (iVar4 == 0) {
          *(undefined4 *)(param_2 + 0x58) = 1;
        }
        else {
          iVar4 = FUN_1800fc514(pbVar7,(byte *)"geforce_ti_4800");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x58) = 2;
          }
          else {
            iVar4 = FUN_1800fc514(pbVar7,(byte *)"ati_radeon_8500");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x58) = 3;
            }
            else {
              iVar4 = FUN_1800fc514(pbVar7,(byte *)"matrox_parhelia-512");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x58) = 4;
              }
              else {
                iVar4 = FUN_1800fc514(pbVar7,(byte *)"geforce_fx_5700_ultra");
                if (iVar4 == 0) {
                  *(undefined4 *)(param_2 + 0x58) = 5;
                }
                else {
                  iVar4 = FUN_1800fc514(pbVar7,(byte *)"geforce_9800_gt");
                  if (iVar4 != 0) {
                    return 0;
                  }
                  if (param_5 < 0x277) {
                    return 0;
                  }
                  *(undefined4 *)(param_2 + 0x58) = 6;
                }
              }
            }
          }
        }
        goto LAB_1800cbe9f;
      }
      *(undefined4 *)(param_2 + 0x58) = 0;
      uVar11 = uVar11 + 1;
      goto LAB_1800cba5d;
    }
    iVar5 = FUN_1800fc514(pbVar6,&DAT_180105570);
    if (iVar5 == 0) {
      if (iVar4 != 0) {
        return 0;
      }
      cVar2 = '\x01';
      if (uVar3 == 1) {
        plVar1 = (longlong *)(param_2 + 0x5c);
        *plVar1 = 0;
        pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
        iVar4 = FUN_1800fc950(pbVar7,(byte *)"%d %s",plVar1,local_448);
        if (iVar4 == 1) {
          *plVar1 = *plVar1 << 0x14;
        }
        else if (iVar4 == 2) {
          iVar4 = FUN_1800fc514(local_448,&DAT_180105580);
          if ((iVar4 == 0) || (iVar4 = FUN_1800fc514(local_448,&DAT_180105584), iVar4 == 0)) {
            *plVar1 = *plVar1 << 0x14;
          }
          else {
            iVar4 = FUN_1800fc514(local_448,&DAT_1801011e0);
            if ((iVar4 != 0) && (iVar4 = FUN_1800fc514(local_448,&DAT_180105588), iVar4 != 0)) {
              return 0;
            }
            *plVar1 = *plVar1 << 0x1e;
          }
          goto LAB_1800cbe9f;
        }
      }
    }
    else {
      iVar5 = FUN_1800fc514(pbVar6,(byte *)"filtering");
      if (iVar5 == 0) {
        if (iVar4 != 0) {
          return 0;
        }
        if (uVar3 == 1) {
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
          iVar4 = FUN_1800fc514(pbVar7,(byte *)"appdriven");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x78) = 0;
          }
          else {
            iVar4 = FUN_1800fc514(pbVar7,(byte *)"pointsampled");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x78) = 0x100;
            }
            else {
              iVar4 = FUN_1800fc514(pbVar7,(byte *)"bilinear");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x78) = 0x200;
              }
              else {
                iVar4 = FUN_1800fc514(pbVar7,(byte *)"pointmip");
                if ((iVar4 == 0) && (0x281 < param_5)) {
                  *(undefined4 *)(param_2 + 0x78) = 0x500;
                }
                else {
                  iVar4 = FUN_1800fc514(pbVar7,(byte *)"linearmip");
                  if (iVar4 == 0) {
                    *(undefined4 *)(param_2 + 0x78) = 0x300;
                  }
                  else {
                    iVar4 = FUN_1800fc514(pbVar7,(byte *)"trilinear");
                    if (iVar4 != 0) {
                      local_res8[0] = local_res8[0] & 0xffffffff00000000;
                      cVar2 = (**(code **)(*param_3 + 0x58))(param_3,param_4,uVar11,0,local_res8);
                      if (cVar2 != '\0') {
                        *(int *)(param_2 + 0x78) = (int)local_res8[0];
                        if (0xf < (int)local_res8[0] - 1U) {
                          cVar2 = '\0';
                        }
                      }
                      goto LAB_1800cc237;
                    }
                    *(undefined4 *)(param_2 + 0x78) = 0x400;
                  }
                }
              }
            }
          }
          goto LAB_1800cbe9f;
        }
LAB_1800cbf3d:
        cVar2 = '\x01';
        if (1 < uVar3) goto LAB_1800cbf43;
      }
      else {
        if ((0x281 < param_5) && (iVar5 = FUN_1800fc514(pbVar6,(byte *)"mipmapping"), iVar5 == 0)) {
          if (iVar4 != 0) {
            return 0;
          }
          cVar2 = '\x01';
          if (uVar3 != 1) goto LAB_1800cbf3d;
          pbVar7 = (byte *)(**(code **)(*param_3 + 0x50))(param_3,param_4,uVar11,0);
          iVar4 = FUN_1800fc514(pbVar7,(byte *)"appdriven");
          if (iVar4 == 0) {
            *(undefined4 *)(param_2 + 0x7c) = 0;
          }
          else {
            iVar4 = FUN_1800fc514(pbVar7,(byte *)"disabled");
            if (iVar4 == 0) {
              *(undefined4 *)(param_2 + 0x7c) = 1;
            }
            else {
              iVar4 = FUN_1800fc514(pbVar7,(byte *)"autogen_point");
              if (iVar4 == 0) {
                *(undefined4 *)(param_2 + 0x7c) = 2;
              }
              else {
                iVar4 = FUN_1800fc514(pbVar7,(byte *)"autogen_bilinear");
                if ((((iVar4 != 0) &&
                     (iVar4 = FUN_1800fc514(pbVar7,(byte *)"autogen_bicubic"), iVar4 != 0)) &&
                    (iVar4 = FUN_1800fc514(pbVar7,(byte *)"autogen_lanczos-2"), iVar4 != 0)) &&
                   (iVar4 = FUN_1800fc514(pbVar7,(byte *)"autogen_lanczos-3"), iVar4 != 0))
                goto LAB_1800cc237;
                *(undefined4 *)(param_2 + 0x7c) = 3;
              }
            }
          }
LAB_1800cbe9f:
          cVar2 = '\x01';
          uVar11 = uVar11 + 1;
          goto LAB_1800cba5d;
        }
        pbVar7 = pbVar6;
        iVar5 = FUN_1800fc514(pbVar6,(byte *)"keepfilterifpointsampled");
        if ((iVar5 == 0) && (0x275 < param_5)) {
          if (iVar4 != 0) goto LAB_1800cc20c;
          cVar2 = '\x01';
          if (uVar3 != 0) {
            puVar8 = (undefined1 *)(param_2 + 0x87);
            pbVar6 = pbVar7;
            goto LAB_1800cc21e;
          }
        }
        else if ((param_5 < 0x282) &&
                (pbVar7 = pbVar6, iVar5 = FUN_1800fc514(pbVar6,(byte *)"disablemipmapping"),
                iVar5 == 0)) {
          if (iVar4 != 0) goto LAB_1800cc20c;
          cVar2 = '\x01';
          if (uVar3 != 0) {
            local_res8[0] = local_res8[0] & 0xffffffffffffff00;
            uVar9 = FUN_1800ca5b8(pbVar7,param_3,param_4,uVar11,(undefined1 *)local_res8,uVar3);
            cVar2 = (char)uVar9;
            *(uint *)(param_2 + 0x7c) = (uint)((char)local_res8[0] != '\0');
          }
        }
        else {
          pbVar7 = pbVar6;
          iVar5 = FUN_1800fc514(pbVar6,(byte *)"resolution");
          if (iVar5 == 0) {
            cVar2 = FUN_1800ca750(pbVar7,param_3,param_4,uVar11,(int *)(param_2 + 100),
                                  (int *)(param_2 + 0x68),param_2 + 0x70,
                                  (undefined4 *)(param_2 + 0x74),uVar3,in_stack_fffffffffffffba0,
                                  param_5);
          }
          else {
            pbVar7 = pbVar6;
            iVar5 = FUN_1800fc514(pbVar6,(byte *)"antialiasing");
            if (iVar5 == 0) {
              if (iVar4 != 0) goto LAB_1800cc20c;
              cVar2 = '\x01';
              if (uVar3 != 0) {
                cVar2 = FUN_1800ca918(pbVar7,param_3,param_4,uVar11,(undefined4 *)(param_2 + 0x6c),
                                      uVar3);
              }
            }
            else {
              pbVar7 = pbVar6;
              iVar5 = FUN_1800fc514(pbVar6,(byte *)"appcontrolledscreenmode");
              if (iVar5 == 0) {
                if (iVar4 != 0) goto LAB_1800cc20c;
                cVar2 = '\x01';
                if (uVar3 == 0) goto LAB_1800cc237;
                puVar8 = (undefined1 *)(param_2 + 0x81);
                pbVar6 = pbVar7;
LAB_1800cc21e:
                uVar9 = FUN_1800ca5b8(pbVar6,param_3,param_4,uVar11,puVar8,uVar3);
                cVar2 = (char)uVar9;
              }
              else {
                pbVar7 = pbVar6;
                iVar5 = FUN_1800fc514(pbVar6,(byte *)"disablealtentertotogglescreenmode");
                if (iVar5 == 0) {
                  if (iVar4 == 0) {
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x82);
                      pbVar6 = pbVar7;
                      goto LAB_1800cc21e;
                    }
                    goto LAB_1800cc237;
                  }
                  goto LAB_1800cc20c;
                }
                if (param_5 < 0x27a) {
                  pcVar10 = "bilinearblitstretch";
LAB_1800cc125:
                  pbVar7 = pbVar6;
                  iVar5 = FUN_1800fc514(pbVar6,(byte *)pcVar10);
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_1800cc20c;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x84);
                      pbVar6 = pbVar7;
                      goto LAB_1800cc21e;
                    }
                    goto LAB_1800cc237;
                  }
                }
                else if (0x27f < param_5) {
                  pcVar10 = "bilinear2doperations";
                  goto LAB_1800cc125;
                }
                pbVar7 = pbVar6;
                iVar5 = FUN_1800fc514(pbVar6,(byte *)"phongshadingwhenpossible");
                if (iVar5 == 0) {
                  if (iVar4 != 0) goto LAB_1800cc20c;
                  cVar2 = '\x01';
                  if (uVar3 != 0) {
                    puVar8 = (undefined1 *)(param_2 + 0x85);
                    pbVar6 = pbVar7;
                    goto LAB_1800cc21e;
                  }
                }
                else {
                  pbVar7 = pbVar6;
                  iVar5 = FUN_1800fc514(pbVar6,(byte *)"forceverticalsync");
                  if (iVar5 == 0) {
                    if (iVar4 != 0) goto LAB_1800cc20c;
                    cVar2 = '\x01';
                    if (uVar3 != 0) {
                      puVar8 = (undefined1 *)(param_2 + 0x86);
                      pbVar6 = pbVar7;
                      goto LAB_1800cc21e;
                    }
                  }
                  else {
                    pbVar7 = pbVar6;
                    iVar5 = FUN_1800fc514(pbVar6,(byte *)"dgvoodoowatermark");
                    if (iVar5 == 0) {
                      if (iVar4 != 0) goto LAB_1800cc20c;
                      cVar2 = '\x01';
                      if (uVar3 != 0) {
                        puVar8 = (undefined1 *)(param_2 + 0x83);
                        pbVar6 = pbVar7;
                        goto LAB_1800cc21e;
                      }
                    }
                    else {
                      pbVar7 = pbVar6;
                      iVar5 = FUN_1800fc514(pbVar6,(byte *)"fastvideomemoryaccess");
                      if (iVar5 == 0) {
                        if (iVar4 == 0) {
                          cVar2 = '\x01';
                          if (uVar3 != 0) {
                            puVar8 = (undefined1 *)(param_2 + 0x88);
                            pbVar6 = pbVar7;
                            goto LAB_1800cc21e;
                          }
                        }
                        else {
LAB_1800cc20c:
                          cVar2 = '\0';
                        }
                      }
                      else {
                        if ((param_5 < 0x286) ||
                           (iVar5 = FUN_1800fc514(pbVar6,(byte *)"disabled3dtnldevice"), iVar5 != 0)
                           ) {
                          return 0;
                        }
                        if (iVar4 != 0) goto LAB_1800cc20c;
                        cVar2 = '\x01';
                        if (uVar3 != 0) {
                          puVar8 = (undefined1 *)(param_2 + 0x89);
                          goto LAB_1800cc21e;
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
LAB_1800cc237:
    uVar11 = uVar11 + 1;
    if (cVar2 == '\0') {
      return 0;
    }
  } while( true );
}

