/*
 * FUN_180132770 at 180132770
 * undefined FUN_180132770(void)
 * Address ranges: 180132770-180132e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180132770(longlong param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  code *extraout_x11_17;
  code *extraout_x11_18;
  code *extraout_x11_19;
  code *extraout_x11_20;
  longlong local_130 [2];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int local_108 [6];
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  longlong local_90;
  
  uVar7 = DAT_180258908;
  puVar3 = PTR_s_DGD3D11ROOT_18024c630;
  uVar5 = thunk_FUN_1802239b4(0);
  iVar4 = thunk_FUN_180223ff4(uVar5,puVar3,auStack_98);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if ((iVar4 == 0) || (local_90 == 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_90 = (*extraout_x11)(uVar7,0);
    if (local_90 == 0) goto LAB_180132e44;
  }
  FUN_1801042e0(local_90 + 8);
  *(longlong *)(param_1 + 0xf6d0) = local_90;
  plVar1 = (longlong *)(param_1 + 0xf6d0);
  lVar6 = FUN_1802229a8(0x20000);
  *(longlong *)(param_1 + 0x20) = lVar6;
  if (lVar6 != 0) {
    lVar6 = FUN_1802229a8(0x2000);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 != 0) {
      local_108[5] = 0;
      *(char *)(param_1 + 0xaa) = (char)param_2[1];
      *(undefined1 *)(param_1 + 0xab) = *(undefined1 *)((longlong)param_2 + 5);
      *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)((longlong)param_2 + 6);
      *(undefined1 *)(param_1 + 0xad) = *(undefined1 *)((longlong)param_2 + 7);
      iVar4 = *param_2;
      *(int *)(param_1 + 0xa0) = iVar4;
      *(int *)(param_1 + 0xa4) = iVar4 * 0x10 + 0x140;
      *(char *)(param_1 + 0xae) = (char)param_2[2];
      *(undefined1 *)(param_1 + 0xaf) = *(undefined1 *)((longlong)param_2 + 9);
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      lVar6 = *plVar1;
      uVar2 = *(uint *)(param_1 + 0x18);
      *(ulonglong *)(param_1 + 0xf6d8) = lVar6 + (ulonglong)uVar2 * 0x18c0 + 0x6b0;
      *(uint *)(param_1 + 0xf730) = uVar2;
      *(uint *)(param_1 + 0xf788) = uVar2;
      *(undefined1 *)(param_1 + 0xf78c) = *(undefined1 *)(param_1 + 0x10);
      *(longlong *)(param_1 + 0xf728) = lVar6;
      *(longlong *)(param_1 + 0xf780) = lVar6;
      local_108[0] = *(int *)(param_1 + 0x9c) << 0xc;
      local_108[1] = 2;
      local_108[2] = 1;
      local_108[3] = 0x10000;
      local_108[4] = 0;
      uVar7 = (*(code *)puVar3)(0x180224000);
      iVar4 = (*extraout_x11_00)(uVar7,local_108,0,param_1 + 0xf718);
      if (-1 < iVar4) {
        local_d0 = 0;
        local_e0 = 0x200004000;
        uStack_d8 = 0x1000000000002;
        lVar6 = 0xf710;
        uVar7 = (*(code *)puVar3)(0x180224000);
        iVar4 = (*extraout_x11_01)(uVar7,&local_e0,0,param_1 + lVar6);
        if (-1 < iVar4) {
          lVar6 = FUN_180133630(param_1,0xc20);
          *(longlong *)(param_1 + 0xf6f8) = lVar6;
          if (lVar6 != 0) {
            local_c8 = 0x8010;
            uStack_c0 = 4;
            local_b8 = 0x801000000000;
            lVar6 = 0xf708;
            uVar7 = (*(code *)puVar3)(0x180224000);
            iVar4 = (*extraout_x11_02)(uVar7,&local_c8,0,param_1 + lVar6);
            if (-1 < iVar4) {
              local_b0 = 0x100000970;
              uStack_a8 = 4;
              local_a0 = 0x97000000000;
              local_f0 = &DAT_1802475d0;
              uStack_e8 = 0;
              lVar6 = 0xf700;
              uVar7 = (*(code *)puVar3)(0x180224000);
              iVar4 = (*extraout_x11_03)(uVar7,&local_b0,&local_f0,param_1 + lVar6);
              if (-1 < iVar4) {
                lVar6 = 0xf720;
                uVar7 = (*(code *)puVar3)(0x180224000);
                iVar4 = (*extraout_x11_04)(uVar7,&DAT_1802473d8,param_1 + lVar6);
                if (-1 < iVar4) {
                  local_130[0] = 0;
                  *(undefined4 *)(param_1 + 0xf768) = *(undefined4 *)(param_1 + 0x18);
                  *(longlong *)(param_1 + 0xf760) = *plVar1;
                  local_120 = 0x2000002f0;
                  uStack_118 = 0x1000000000004;
                  local_110 = 0x2f000000000;
                  uVar7 = (*(code *)puVar3)(0x180224000);
                  iVar4 = (*extraout_x11_05)(uVar7,&local_120,0,local_130);
                  if (iVar4 < 0) {
LAB_180132bb4:
                    *(undefined8 *)(param_1 + 0xf7b0) = 0;
                  }
                  else {
                    *(longlong *)(param_1 + 0xf7b0) = local_130[0];
                    if (local_130[0] != 0) {
                      local_130[0] = 0;
                      local_120 = 0x2000004d0;
                      uStack_118 = 0x1000000000004;
                      local_110 = 0x4d000000000;
                      uVar7 = (*(code *)puVar3)(0x180224000);
                      iVar4 = (*extraout_x11_06)(uVar7,&local_120,0,local_130);
                      if (iVar4 < 0) {
LAB_180132b94:
                        *(undefined8 *)(param_1 + 0xf7d8) = 0;
                      }
                      else {
                        *(longlong *)(param_1 + 0xf7d8) = local_130[0];
                        if (local_130[0] != 0) {
                          lVar6 = FUN_180133630(param_1,0xec0);
                          *(longlong *)(param_1 + 0xf7c0) = lVar6;
                          if (lVar6 != 0) {
                            lVar6 = FUN_180133630(param_1,*(undefined4 *)(param_1 + 0xa4));
                            *(longlong *)(param_1 + 0xf7b8) = lVar6;
                            if (lVar6 != 0) {
                              lVar6 = FUN_180133630(param_1,0x100);
                              *(longlong *)(param_1 + 0xf7c8) = lVar6;
                              if (lVar6 != 0) {
                                *(undefined4 *)(param_1 + 0xf7e0) =
                                     *(undefined4 *)
                                      (*plVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 +
                                      0x6cc);
                                FUN_180163980(param_1);
                                FUN_180222c50(param_1 + 0xf7e8,0,0xda8);
                                *(undefined1 *)(param_1 + 0x10588) = 1;
                                *(undefined8 *)(param_1 + 0xfcd8) =
                                     *(undefined8 *)(param_1 + 0xf718);
                                *(undefined8 *)(param_1 + 0xfd58) =
                                     *(undefined8 *)(param_1 + 0xf710);
                                *(undefined4 *)(param_1 + 0x10458) = 1;
                                FUN_180202728(*plVar1,extraout_x1,param_1);
                                uVar7 = (*(code *)puVar3)(0x180224000);
                                iVar4 = (*extraout_x11_18)(uVar7,*(undefined8 *)(param_1 + 0xf718),0
                                                           ,4,0,local_130);
                                lVar6 = local_130[0];
                                if (-1 < iVar4) {
                                  uVar7 = (*(code *)puVar3)(0x180224000);
                                  iVar4 = (*extraout_x11_19)(uVar7,*(undefined8 *)(param_1 + 0xf710)
                                                             ,0,4,0,local_130);
                                  if (iVar4 < 0) {
                                    uVar7 = (*(code *)puVar3)(0x180224000);
                                    (*extraout_x11_20)(uVar7,*(undefined8 *)(param_1 + 0xf718),0);
                                  }
                                  else {
                                    if (*(longlong *)(param_1 + 0x68) !=
                                        *(longlong *)(param_1 + 0x60)) {
                                      *(int *)(param_1 + 0x78) =
                                           (int)*(longlong *)(param_1 + 0x68) -
                                           (int)*(undefined8 *)(param_1 + 0x58);
                                    }
                                    *(longlong *)(param_1 + 0x68) = lVar6;
                                    *(undefined8 *)(param_1 + 0x70) = 0;
                                    *(undefined8 *)(param_1 + 0x78) = 0;
                                    *(longlong *)(param_1 + 0x58) = lVar6;
                                    *(longlong *)(param_1 + 0x60) = lVar6;
                                    *(longlong *)(param_1 + 0x88) = local_130[0];
                                    *(undefined8 *)(param_1 + 0x90) = 0;
                                  }
                                }
                                thunk_FUN_18022370c(*(longlong *)(param_1 + 0xf6d0) + 0x620);
                                return 1;
                              }
                              (*(code *)puVar3)(0x180224000);
                              (*extraout_x11_07)();
                              *(undefined8 *)(param_1 + 0xf7b8) = 0;
                            }
                            (*(code *)puVar3)(0x180224000);
                            (*extraout_x11_08)();
                            *(undefined8 *)(param_1 + 0xf7c0) = 0;
                          }
                          (*(code *)puVar3)(0x180224000);
                          (*extraout_x11_09)();
                          goto LAB_180132b94;
                        }
                      }
                      (*(code *)puVar3)(0x180224000);
                      (*extraout_x11_10)();
                      goto LAB_180132bb4;
                    }
                  }
                  (*(code *)puVar3)(0x180224000);
                  (*extraout_x11_11)();
                  *(undefined8 *)(param_1 + 0xf720) = 0;
                }
                (*(code *)puVar3)(0x180224000);
                (*extraout_x11_12)();
                *(undefined8 *)(param_1 + 0xf700) = 0;
              }
              (*(code *)puVar3)(0x180224000);
              (*extraout_x11_13)();
              *(undefined8 *)(param_1 + 0xf708) = 0;
            }
            (*(code *)puVar3)(0x180224000);
            (*extraout_x11_14)();
            *(undefined8 *)(param_1 + 0xf6f8) = 0;
          }
          (*(code *)puVar3)(0x180224000);
          (*extraout_x11_15)();
          *(undefined8 *)(param_1 + 0xf710) = 0;
        }
        (*(code *)puVar3)(0x180224000);
        (*extraout_x11_16)();
        *(undefined8 *)(param_1 + 0xf718) = 0;
      }
      FUN_1802229d8(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar6 = *plVar1;
  if ((lVar6 != 0) && (iVar4 = FUN_1801042d0(lVar6 + 8), iVar4 == 0)) {
    if (*(short *)(lVar6 + 0xc) != 0) {
      uVar7 = thunk_FUN_1802239b4(0);
      thunk_FUN_180224008(*(undefined2 *)(lVar6 + 0xc),uVar7);
      if (*(longlong *)(lVar6 + 0x10) != 0) {
        thunk_FUN_1802236bc();
        *(undefined8 *)(lVar6 + 0x10) = 0;
      }
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_17)(lVar6);
  }
LAB_180132e44:
  *(undefined8 *)(param_1 + 0xf6d0) = 0;
  return 0;
}

