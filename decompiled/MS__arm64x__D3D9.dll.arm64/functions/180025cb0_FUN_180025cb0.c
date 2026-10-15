/*
 * FUN_180025cb0 at 180025cb0
 * undefined FUN_180025cb0(void)
 * Address ranges: 180025cb0-1800262e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180025cb0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  longlong *plVar9;
  longlong local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int local_118 [6];
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [8];
  longlong local_a0;
  
  uVar8 = DAT_18024e2d0;
  puVar3 = PTR_s_DGD3D11ROOT_18024b150;
  uVar5 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
  iVar4 = (*__imp_USER32_dll_GetClassInfoExA)(uVar5,puVar3,auStack_a8);
  if (((iVar4 == 0) || (local_a0 == 0)) &&
     (local_a0 = (*(code *)PTR_FUN_18024b158)(uVar8,0), local_a0 == 0)) goto LAB_1800262c4;
  FUN_1800015a0(local_a0 + 8);
  *(longlong *)(param_1 + 0xf6d0) = local_a0;
  plVar9 = (longlong *)(param_1 + 0xf6d0);
  lVar6 = thunk_FUN_180102f80(0x20000);
  *(longlong *)(param_1 + 0x20) = lVar6;
  if (lVar6 != 0) {
    lVar6 = thunk_FUN_180102f80(0x2000);
    *(longlong *)(param_1 + 0x28) = lVar6;
    if (lVar6 != 0) {
      local_118[5] = 0;
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
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar6 = *plVar9;
      puVar1 = (undefined8 *)(lVar6 + (ulonglong)uVar2 * 0x18c0 + 0x6b0);
      *(undefined8 **)(param_1 + 0xf6d8) = puVar1;
      *(uint *)(param_1 + 0xf730) = uVar2;
      *(uint *)(param_1 + 0xf788) = uVar2;
      *(undefined1 *)(param_1 + 0xf78c) = *(undefined1 *)(param_1 + 0x10);
      *(longlong *)(param_1 + 0xf728) = lVar6;
      *(longlong *)(param_1 + 0xf780) = lVar6;
      local_118[0] = *(int *)(param_1 + 0x9c) << 0xc;
      local_118[1] = 2;
      local_118[2] = 1;
      local_118[3] = 0x10000;
      local_118[4] = 0;
      plVar7 = (longlong *)*puVar1;
      iVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,local_118,0,param_1 + 0xf718);
      if (-1 < iVar4) {
        local_e0 = 0;
        local_f0 = 0x200004000;
        uStack_e8 = 0x1000000000002;
        iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                          ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_f0,0,
                           param_1 + 0xf710);
        if (-1 < iVar4) {
          lVar6 = FUN_180026a10(param_1,0xc20);
          *(longlong *)(param_1 + 0xf6f8) = lVar6;
          if (lVar6 != 0) {
            local_d8 = 0x8010;
            uStack_d0 = 4;
            local_c8 = 0x801000000000;
            iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                              ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_d8,0,
                               param_1 + 0xf708);
            if (-1 < iVar4) {
              local_c0 = 0x100000970;
              uStack_b8 = 4;
              local_b0 = 0x97000000000;
              local_100 = &DAT_180249e70;
              uStack_f8 = 0;
              iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_c0,
                                 &local_100,param_1 + 0xf700);
              if (-1 < iVar4) {
                iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0xb8))
                                  ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&DAT_180249ce0,
                                   param_1 + 0xf720);
                if (-1 < iVar4) {
                  local_140[0] = 0;
                  *(longlong *)(param_1 + 0xf760) = *plVar9;
                  local_130 = 0x2000002f0;
                  uStack_128 = 0x1000000000004;
                  local_120 = 0x2f000000000;
                  *(undefined4 *)(param_1 + 0xf768) = *(undefined4 *)(param_1 + 0x18);
                  iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                    ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_130,0,
                                     local_140);
                  if (iVar4 < 0) {
LAB_180026094:
                    *(undefined8 *)(param_1 + 0xf7b0) = 0;
                  }
                  else {
                    *(longlong *)(param_1 + 0xf7b0) = local_140[0];
                    if (local_140[0] != 0) {
                      local_140[0] = 0;
                      local_130 = 0x2000004d0;
                      uStack_128 = 0x1000000000004;
                      local_120 = 0x4d000000000;
                      iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                        ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_130,
                                         0,local_140);
                      if (iVar4 < 0) {
LAB_180026080:
                        *(undefined8 *)(param_1 + 0xf7d8) = 0;
                      }
                      else {
                        *(longlong *)(param_1 + 0xf7d8) = local_140[0];
                        if (local_140[0] != 0) {
                          local_140[0] = 0;
                          local_130 = 0x200000ec0;
                          uStack_128 = 0x1000000000004;
                          local_120 = 0xec000000000;
                          iVar4 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) +
                                              0x18))((longlong *)**(undefined8 **)(param_1 + 0xf6d8)
                                                     ,&local_130,0,local_140);
                          if (iVar4 < 0) {
LAB_18002606c:
                            *(undefined8 *)(param_1 + 0xf7c0) = 0;
                          }
                          else {
                            *(longlong *)(param_1 + 0xf7c0) = local_140[0];
                            if (local_140[0] != 0) {
                              lVar6 = FUN_180026a10(param_1,*(undefined4 *)(param_1 + 0xa4));
                              *(longlong *)(param_1 + 0xf7b8) = lVar6;
                              if (lVar6 != 0) {
                                lVar6 = FUN_180026a10(param_1,0x100);
                                *(longlong *)(param_1 + 0xf7c8) = lVar6;
                                if (lVar6 != 0) {
                                  *(undefined4 *)(param_1 + 0xf7e0) =
                                       *(undefined4 *)
                                        (*plVar9 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 +
                                        0x6cc);
                                  FUN_180053b10(param_1);
                                  func_0x000180222c50(param_1 + 0xf7e8,0,0xda8);
                                  *(undefined1 *)(param_1 + 0x10588) = 1;
                                  *(undefined8 *)(param_1 + 0xfcd8) =
                                       *(undefined8 *)(param_1 + 0xf718);
                                  *(undefined8 *)(param_1 + 0xfd58) =
                                       *(undefined8 *)(param_1 + 0xf710);
                                  *(undefined4 *)(param_1 + 0x10458) = 1;
                                  FUN_1800e5470(*plVar9,extraout_x1,param_1);
                                  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
                                  iVar4 = (**(code **)(*plVar9 + 0x70))
                                                    (plVar9,*(undefined8 *)(param_1 + 0xf718),0,4,0,
                                                     local_140);
                                  lVar6 = local_140[0];
                                  if (-1 < iVar4) {
                                    plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
                                    iVar4 = (**(code **)(*plVar9 + 0x70))
                                                      (plVar9,*(undefined8 *)(param_1 + 0xf710),0,4,
                                                       0,local_140);
                                    if (iVar4 < 0) {
                                      plVar9 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
                                      (**(code **)(*plVar9 + 0x78))
                                                (plVar9,*(undefined8 *)(param_1 + 0xf718),0);
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
                                      *(longlong *)(param_1 + 0x88) = local_140[0];
                                      *(undefined8 *)(param_1 + 0x90) = 0;
                                    }
                                  }
                                  (*__imp_KERNEL32_dll_LeaveCriticalSection)
                                            (*(longlong *)(param_1 + 0xf6d0) + 0x620);
                                  return 1;
                                }
                                (**(code **)(**(longlong **)(param_1 + 0xf7b8) + 0x10))();
                                *(undefined8 *)(param_1 + 0xf7b8) = 0;
                              }
                              (**(code **)(**(longlong **)(param_1 + 0xf7c0) + 0x10))();
                              goto LAB_18002606c;
                            }
                          }
                          (**(code **)(**(longlong **)(param_1 + 0xf7d8) + 0x10))();
                          goto LAB_180026080;
                        }
                      }
                      (**(code **)(**(longlong **)(param_1 + 0xf7b0) + 0x10))();
                      goto LAB_180026094;
                    }
                  }
                  (**(code **)(**(longlong **)(param_1 + 0xf720) + 0x10))();
                  *(undefined8 *)(param_1 + 0xf720) = 0;
                }
                (**(code **)(**(longlong **)(param_1 + 0xf700) + 0x10))();
                *(undefined8 *)(param_1 + 0xf700) = 0;
              }
              (**(code **)(**(longlong **)(param_1 + 0xf708) + 0x10))();
              *(undefined8 *)(param_1 + 0xf708) = 0;
            }
            (**(code **)(**(longlong **)(param_1 + 0xf6f8) + 0x10))();
            *(undefined8 *)(param_1 + 0xf6f8) = 0;
          }
          (**(code **)(**(longlong **)(param_1 + 0xf710) + 0x10))();
          *(undefined8 *)(param_1 + 0xf710) = 0;
        }
        (**(code **)(**(longlong **)(param_1 + 0xf718) + 0x10))();
        *(undefined8 *)(param_1 + 0xf718) = 0;
      }
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar9 = (longlong *)*plVar9;
  if ((plVar9 != (longlong *)0x0) && (iVar4 = FUN_180001590(plVar9 + 1), iVar4 == 0)) {
    if (*(short *)((longlong)plVar9 + 0xc) != 0) {
      uVar8 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
      (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar9 + 0xc),uVar8);
      if (plVar9[2] != 0) {
        (*__imp_KERNEL32_dll_FreeLibrary)();
        plVar9[2] = 0;
      }
    }
    (**(code **)(*plVar9 + 0x88))(plVar9);
  }
LAB_1800262c4:
  *(undefined8 *)(param_1 + 0xf6d0) = 0;
  return 0;
}

