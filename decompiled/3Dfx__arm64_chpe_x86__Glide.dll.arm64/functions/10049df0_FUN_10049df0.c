/*
 * FUN_10049df0 at 10049df0
 * undefined FUN_10049df0(void)
 * Address ranges: 10049df0-1004a673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10049df0(int *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  uVar8 = FUN_10034e70(param_1,param_2,param_3);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if ((param_1[2] == 9) ||
     (uVar8 = FUN_10049780(param_1,*param_2,param_2[1],param_2[2],param_1 + 0x2b,param_1 + 0x2c,
                           param_1 + 0x2d,param_1 + 0x2e,param_1 + 0x2f),
     pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer, (uVar8 & 1) == 0))
  goto LAB_1004a640;
  local_80 = 0;
  uVar7 = param_2[5];
  piVar1 = param_1 + 0x31;
  uVar3 = param_2[4];
  local_a8 = param_2[3];
  local_a0 = 0x100000001;
  uStack_98 = 0x100000035;
  local_90 = 0;
  uStack_88 = 0x28;
  uStack_a4 = uVar3;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar6 = (*extraout_w11)(uVar5,&local_a8,0,piVar1);
  if (-1 < iVar6) {
    piVar2 = param_1 + 0x32;
    uVar5 = (*pcVar4)();
    iVar6 = (*extraout_w11_00)(uVar5,&local_a8,0,piVar2);
    if (-1 < iVar6) {
      local_d8 = 0x400000039;
      local_d0 = 0;
      local_cc = 0;
      uVar5 = (*pcVar4)();
      iVar6 = (*extraout_w11_01)(uVar5,*piVar1,&local_d8,param_1 + 0x33);
      if (-1 < iVar6) {
        uVar8 = ZEXT48(param_1 + 0x34);
        uVar5 = (*pcVar4)();
        iVar6 = (*extraout_w11_02)(uVar5,*piVar2,&local_d8,uVar8 & 0xffffffff);
        if (-1 < iVar6) {
          local_b0 = 0;
          local_c0 = 0x400000039;
          uStack_b8 = 0xffffffff00000000;
          uVar5 = (*pcVar4)();
          iVar6 = (*extraout_w11_03)(uVar5,*piVar1,&local_c0,param_1 + 0x35);
          piVar1 = param_1 + 0x36;
          if (-1 < iVar6) {
            uVar5 = (*pcVar4)();
            iVar6 = (*extraout_w11_04)(uVar5,*piVar2,&local_c0,piVar1);
            if (-1 < iVar6) {
              local_50 = 0;
              local_70 = 0x100000001;
              uStack_68 = 0x100000039;
              local_60 = 0x300000000;
              uStack_58 = 0x3000000000000;
              local_78 = uVar7;
              uStack_74 = uVar3;
              uVar7 = (*pcVar4)();
              iVar6 = (*extraout_w11_05)(uVar7,&local_78,0);
              if (-1 < iVar6) {
                local_80 = 0;
                uVar7 = param_2[5];
                piVar1 = param_1 + 0x37;
                uVar3 = param_2[4];
                local_a8 = param_2[3];
                local_a0 = 0x100000001;
                uStack_98 = 0x100000027;
                local_90 = 0;
                uStack_88 = 0x28;
                uStack_a4 = uVar3;
                uVar5 = (*pcVar4)();
                iVar6 = (*extraout_w11_09)(uVar5,&local_a8,0,piVar1);
                if (-1 < iVar6) {
                  piVar2 = param_1 + 0x38;
                  uVar5 = (*pcVar4)();
                  iVar6 = (*extraout_w11_10)(uVar5,&local_a8,0,piVar2);
                  if (-1 < iVar6) {
                    local_d0 = 0;
                    local_cc = 0;
                    local_d8 = 0x40000002a;
                    uVar5 = (*pcVar4)();
                    iVar6 = (*extraout_w11_11)(uVar5,*piVar1,&local_d8,param_1 + 0x39);
                    if (-1 < iVar6) {
                      uVar8 = ZEXT48(param_1 + 0x3a);
                      uVar5 = (*pcVar4)();
                      iVar6 = (*extraout_w11_12)(uVar5,*piVar2,&local_d8,uVar8 & 0xffffffff);
                      if (-1 < iVar6) {
                        local_b0 = 0;
                        local_c0 = 0x40000002a;
                        uStack_b8 = 0xffffffff00000000;
                        uVar5 = (*pcVar4)();
                        iVar6 = (*extraout_w11_13)(uVar5,*piVar1,&local_c0,param_1 + 0x3b);
                        piVar1 = param_1 + 0x3c;
                        if (-1 < iVar6) {
                          uVar5 = (*pcVar4)();
                          iVar6 = (*extraout_w11_14)(uVar5,*piVar2,&local_c0,piVar1);
                          if (-1 < iVar6) {
                            local_50 = 0;
                            local_70 = 0x100000001;
                            uStack_68 = 0x10000002a;
                            local_60 = 0x300000000;
                            uStack_58 = 0x3000000000000;
                            local_78 = uVar7;
                            uStack_74 = uVar3;
                            uVar7 = (*pcVar4)();
                            iVar6 = (*extraout_w11_15)(uVar7,&local_78,0);
                            if (-1 < iVar6) {
                              if ((param_3 == '\0') ||
                                 (uVar8 = FUN_10049c00(param_1,*param_2,param_2[1],param_2[2],
                                                       *(undefined1 *)(param_2 + 10),param_1 + 0x3d,
                                                       param_1 + 0x3e), (uVar8 & 1) != 0)) {
                                if (param_1[0x2b] != 0) {
                                  param_1[0x2b] =
                                       *(int *)(param_1[0x29] + *param_1 * 0x28 + 0x30) +
                                       param_1[0x2b];
                                }
                                return 1;
                              }
                              FUN_10049660(param_1);
                              goto LAB_1004a594;
                            }
                            uVar7 = (*pcVar4)();
                            (*extraout_w11_16)(uVar7);
                            *piVar1 = 0;
                          }
                          uVar7 = (*pcVar4)();
                          (*extraout_w11_17)(uVar7);
                          param_1[0x3b] = 0;
                        }
                        uVar7 = (*pcVar4)();
                        (*extraout_w11_18)(uVar7);
                        *piVar1 = 0;
                      }
                      uVar7 = (*pcVar4)();
                      (*extraout_w11_19)(uVar7);
                      param_1[0x39] = 0;
                    }
                    uVar7 = (*pcVar4)();
                    (*extraout_w11_20)(uVar7);
                    param_1[0x38] = 0;
                  }
                  uVar7 = (*pcVar4)();
                  (*extraout_w11_21)(uVar7);
                  param_1[0x37] = 0;
                }
LAB_1004a594:
                FUN_10049540(param_1);
                goto LAB_1004a638;
              }
              uVar7 = (*pcVar4)();
              (*extraout_w11_06)(uVar7);
              *piVar1 = 0;
            }
            uVar7 = (*pcVar4)();
            (*extraout_w11_07)(uVar7);
            param_1[0x35] = 0;
          }
          uVar7 = (*pcVar4)();
          (*extraout_w11_08)(uVar7);
          *piVar1 = 0;
        }
        uVar7 = (*pcVar4)();
        (*extraout_w11_22)(uVar7);
        param_1[0x33] = 0;
      }
      uVar7 = (*pcVar4)();
      (*extraout_w11_23)(uVar7);
      param_1[0x32] = 0;
    }
    uVar7 = (*pcVar4)();
    (*extraout_w11_24)(uVar7);
    param_1[0x31] = 0;
  }
LAB_1004a638:
  FUN_10049ae0(param_1);
LAB_1004a640:
  FUN_10035040(param_1,param_1[0x15]);
  return 0;
}

