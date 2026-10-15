/*
 * FUN_100080c7 at 100080c7
 * char __fastcall FUN_100080c7(undefined4 param_1, int param_2, int * param_3, undefined4 param_4, uint param_5)
 * Address ranges: 100080c7-10008665
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

char __fastcall
FUN_100080c7(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint local_c;
  char local_5;
  
  local_c = 0;
LAB_10008142:
  cVar2 = '\x01';
LAB_10008145:
  while( true ) {
    uVar3 = (**(code **)(*param_3 + 0x1c))(param_4);
    if (uVar3 <= local_c) {
      return cVar2;
    }
    pbVar4 = (byte *)(**(code **)(*param_3 + 0x20))(param_4,local_c);
    uVar3 = (**(code **)(*param_3 + 0x24))(param_4,local_c);
    iVar5 = (**(code **)(*param_3 + 0x30))(param_4,local_c);
    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"videocard");
    if (iVar6 == 0) break;
    pcVar8 = "onboardram";
    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"onboardram");
    if (iVar6 == 0) {
      if (iVar5 != 0) goto LAB_1000825e;
      cVar2 = '\x01';
      if (uVar3 != 0) {
        cVar2 = FUN_1000766c(pcVar8,param_3,param_4,local_c,param_2 + 0x2b,uVar3);
        *(int *)(param_2 + 0x2b) = *(int *)(param_2 + 0x2b) << 0x14;
      }
      goto LAB_1000864e;
    }
    pcVar8 = "memorysizeoftmu";
    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"memorysizeoftmu");
    if (iVar6 == 0) {
      if (iVar5 != 0) goto LAB_1000825e;
      cVar2 = '\x01';
      if (uVar3 != 0) {
        cVar2 = FUN_1000766c(pcVar8,param_3,param_4,local_c,param_2 + 0x2f,uVar3);
        *(int *)(param_2 + 0x2f) = *(int *)(param_2 + 0x2f) << 10;
      }
      goto LAB_1000864e;
    }
    pcVar8 = "numberoftmus";
    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"numberoftmus");
    if (iVar6 == 0) {
      if (iVar5 != 0) goto LAB_1000825e;
      cVar2 = '\x01';
      if (uVar3 != 0) {
        cVar2 = FUN_1000766c(pcVar8,param_3,param_4,local_c,param_2 + 0x33,uVar3);
      }
      goto LAB_1000864e;
    }
    if (param_5 < 0x263) {
      pcVar8 = "forcebilinearfilter";
      iVar6 = FUN_1004fa5b(pbVar4,(byte *)"forcebilinearfilter");
      if (iVar6 == 0) {
        if (iVar5 != 0) goto LAB_1000825e;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          local_5 = '\0';
          uVar7 = FUN_100075e1(pcVar8,param_3,param_4,local_c,&local_5,uVar3);
          cVar2 = (char)uVar7;
          uVar7 = 0;
          if (local_5 != '\0') {
            uVar7 = 0x200;
          }
          *(undefined4 *)(param_2 + 0x4b) = uVar7;
        }
        goto LAB_1000864e;
      }
LAB_1000843b:
      pcVar8 = "disablemipmapping";
      iVar6 = FUN_1004fa5b(pbVar4,(byte *)"disablemipmapping");
      puVar1 = (undefined1 *)(param_2 + 0x4f);
      if (iVar6 == 0) {
joined_r0x1000851d:
        if (iVar5 != 0) goto LAB_1000825e;
        cVar2 = '\x01';
        if (uVar3 != 0) {
          uVar7 = FUN_100075e1(pcVar8,param_3,param_4,local_c,puVar1,uVar3);
          cVar2 = (char)uVar7;
        }
      }
      else {
        pcVar8 = "resolution";
        iVar6 = FUN_1004fa5b(pbVar4,(byte *)"resolution");
        if (iVar6 == 0) {
          cVar2 = FUN_100076eb(pcVar8,param_3,param_4,local_c,(int *)(param_2 + 0x37),
                               (int *)(param_2 + 0x3b),param_2 + 0x43,(undefined4 *)(param_2 + 0x47)
                               ,uVar3,pcVar8,param_5);
        }
        else {
          pcVar8 = "antialiasing";
          iVar6 = FUN_1004fa5b(pbVar4,(byte *)"antialiasing");
          if (iVar6 != 0) {
            pcVar8 = "enableglidegammaramp";
            iVar6 = FUN_1004fa5b(pbVar4,(byte *)"enableglidegammaramp");
            puVar1 = (undefined1 *)(param_2 + 0x50);
            if (iVar6 != 0) {
              pcVar8 = "forceverticalsync";
              iVar6 = FUN_1004fa5b(pbVar4,(byte *)"forceverticalsync");
              puVar1 = (undefined1 *)(param_2 + 0x52);
              if (iVar6 != 0) {
                pcVar8 = "forceemulatingtruepciaccess";
                iVar6 = FUN_1004fa5b(pbVar4,(byte *)"forceemulatingtruepciaccess");
                puVar1 = (undefined1 *)(param_2 + 0x53);
                if (iVar6 != 0) {
                  pcVar8 = "16bitdepthbuffer";
                  iVar6 = FUN_1004fa5b(pbVar4,(byte *)"16bitdepthbuffer");
                  puVar1 = (undefined1 *)(param_2 + 0x54);
                  if (iVar6 != 0) {
                    pcVar8 = "3dfxwatermark";
                    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"3dfxwatermark");
                    puVar1 = (undefined1 *)(param_2 + 0x55);
                    if (iVar6 != 0) {
                      pcVar8 = "3dfxsplashscreen";
                      iVar6 = FUN_1004fa5b(pbVar4,(byte *)"3dfxsplashscreen");
                      puVar1 = (undefined1 *)(param_2 + 0x56);
                      if (iVar6 != 0) {
                        pcVar8 = "pointcastpalette";
                        iVar6 = FUN_1004fa5b(pbVar4,(byte *)"pointcastpalette");
                        puVar1 = (undefined1 *)(param_2 + 0x51);
                        if (iVar6 != 0) {
                          pcVar8 = "enableinactiveappstate";
                          iVar6 = FUN_1004fa5b(pbVar4,(byte *)"enableinactiveappstate");
                          puVar1 = (undefined1 *)(param_2 + 0x57);
                          if (iVar6 != 0) {
                            return '\0';
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto joined_r0x1000851d;
          }
          if (uVar3 != 0) {
            uVar7 = FUN_1000783f(pcVar8,param_3,param_4,local_c,(undefined4 *)(param_2 + 0x3f),uVar3
                                );
            cVar2 = (char)uVar7;
          }
        }
      }
      goto LAB_1000864e;
    }
    iVar6 = FUN_1004fa5b(pbVar4,(byte *)"tmufiltering");
    if (iVar6 != 0) goto LAB_1000843b;
    if (iVar5 != 0) {
      return '\0';
    }
    cVar2 = '\x01';
    if (uVar3 != 1) {
      if (1 < uVar3) {
        cVar2 = '\0';
      }
      goto LAB_1000864e;
    }
    pbVar4 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"appdriven");
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x4b) = 0;
    }
    else {
      iVar5 = FUN_1004fa5b(pbVar4,(byte *)"pointsampled");
      if (iVar5 == 0) {
        *(undefined4 *)(param_2 + 0x4b) = 0x100;
      }
      else {
        iVar5 = FUN_1004fa5b(pbVar4,(byte *)"bilinear");
        if (iVar5 == 0) {
          *(undefined4 *)(param_2 + 0x4b) = 0x200;
        }
      }
    }
    local_c = local_c + 1;
  }
  if (iVar5 != 0) {
    return '\0';
  }
  cVar2 = '\x01';
  if (uVar3 == 1) {
    pbVar4 = (byte *)(**(code **)(*param_3 + 0x28))(param_4,local_c,0);
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"voodoo_graphics");
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x27) = 0;
      goto LAB_1000824f;
    }
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"voodoo_rush");
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x27) = 1;
      goto LAB_1000824f;
    }
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"voodoo_2");
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x27) = 2;
      goto LAB_1000824f;
    }
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"voodoo_banshee");
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + 0x27) = 3;
      goto LAB_1000824f;
    }
    iVar5 = FUN_1004fa5b(pbVar4,(byte *)"other_greater");
    if (iVar5 == 0) goto code_r0x10008245;
  }
  else if (uVar3 < 2) goto LAB_1000864e;
LAB_1000825e:
  cVar2 = '\0';
LAB_1000864e:
  local_c = local_c + 1;
  if (cVar2 == '\0') {
    return '\0';
  }
  goto LAB_10008145;
code_r0x10008245:
  *(undefined4 *)(param_2 + 0x27) = 4;
LAB_1000824f:
  local_c = local_c + 1;
  goto LAB_10008142;
}

