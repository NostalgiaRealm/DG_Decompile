/*
 * FUN_180034290 at 180034290
 * undefined8 __fastcall FUN_180034290(longlong param_1, int * param_2)
 * Address ranges: 180034290-1800349f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180034290(longlong param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined *lpszClass;
  BOOL BVar5;
  int iVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  undefined8 extraout_RAX;
  longlong lVar9;
  undefined8 *puVar10;
  longlong local_res8 [4];
  uint local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 local_11c;
  uint local_114;
  int local_110 [12];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  tagWNDCLASSEXA local_98;
  
  uVar4 = DAT_1801123b0;
  lpszClass = PTR_s_DGD3D11ROOT_180110708;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(pHVar7,lpszClass,&local_98);
  if (((BVar5 == 0) || (local_98.lpfnWndProc == (WNDPROC)0x0)) &&
     (local_98.lpfnWndProc = (WNDPROC)(*(code *)PTR_FUN_180110710)(uVar4,0),
     local_98.lpfnWndProc == (WNDPROC)0x0)) goto LAB_1800349d6;
  LOCK();
  *(int *)(local_98.lpfnWndProc + 8) = *(int *)(local_98.lpfnWndProc + 8) + 1;
  UNLOCK();
  *(WNDPROC *)(param_1 + 0xf6d0) = local_98.lpfnWndProc;
  uVar8 = FUN_180059660(param_1,param_2);
  if ((char)uVar8 != '\0') {
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar9 = *(longlong *)(param_1 + 0xf6d0);
    local_110[1] = 2;
    puVar10 = (undefined8 *)(lVar9 + 0x6b0 + (ulonglong)uVar2 * 0x18c0);
    local_110[2] = 1;
    *(undefined8 **)(param_1 + 0xf6d8) = puVar10;
    *(undefined1 *)(param_1 + 0xf78c) = *(undefined1 *)(param_1 + 0x10);
    *(uint *)(param_1 + 0xf730) = uVar2;
    *(uint *)(param_1 + 0xf788) = uVar2;
    local_110[0] = *(int *)(param_1 + 0x9c) << 0xc;
    *(longlong *)(param_1 + 0xf728) = lVar9;
    *(longlong *)(param_1 + 0xf780) = lVar9;
    local_110[3] = 0x10000;
    local_110[4] = 0;
    local_110[5] = 0;
    plVar3 = (longlong *)*puVar10;
    iVar6 = (**(code **)(*plVar3 + 0x18))(plVar3,local_110,0,param_1 + 0xf718);
    if (-1 < iVar6) {
      local_110[6] = 0x4000;
      local_110[7] = 2;
      local_110[8] = 2;
      local_110[9] = 0x10000;
      local_110[10] = 0;
      local_110[0xb] = 0;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                        ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),local_110 + 6,0,
                         param_1 + 0xf710);
      if (-1 < iVar6) {
        local_128 = 0xc20;
        uStack_124 = 2;
        local_120 = 4;
        local_11c = 0x10000;
        local_114 = 0xc20;
        local_res8[0] = 0;
        iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                          ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_128,0,local_res8);
        lVar9 = 0;
        if (-1 < iVar6) {
          lVar9 = local_res8[0];
        }
        *(longlong *)(param_1 + 0xf6f8) = lVar9;
        if (lVar9 != 0) {
          local_e0 = 0x8010;
          local_d8 = 4;
          local_d0 = 0;
          local_cc = 0x8010;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                            ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_e0,0,
                             param_1 + 0xf708);
          if (-1 < iVar6) {
            local_c8 = 0x970;
            local_b0 = &DAT_18010f430;
            local_c4 = 1;
            local_c0 = 4;
            local_b8 = 0;
            local_b4 = 0x970;
            local_a8 = 0;
            iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                              ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_c8,&local_b0,
                               param_1 + 0xf700);
            if (-1 < iVar6) {
              iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0xb8))
                                ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&DAT_18010f2b0,
                                 param_1 + 0xf720);
              if (-1 < iVar6) {
                *(undefined8 *)(param_1 + 0xf760) = *(undefined8 *)(param_1 + 0xf6d0);
                *(undefined4 *)(param_1 + 0xf768) = *(undefined4 *)(param_1 + 0x18);
                local_128 = 0x2f0;
                uStack_124 = 2;
                local_120 = 4;
                local_11c = 0x10000;
                local_114 = 0x2f0;
                local_res8[0] = 0;
                iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                  ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_128,0,
                                   local_res8);
                if (iVar6 < 0) {
LAB_1800348e4:
                  *(undefined8 *)(param_1 + 0xf7b0) = 0;
                }
                else {
                  *(longlong *)(param_1 + 0xf7b0) = local_res8[0];
                  if (local_res8[0] != 0) {
                    local_128 = 0x4d0;
                    uStack_124 = 2;
                    local_120 = 4;
                    local_11c = 0x10000;
                    local_114 = 0x4d0;
                    local_res8[0] = 0;
                    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                      ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),&local_128,0,
                                       local_res8);
                    if (iVar6 < 0) {
LAB_1800348d0:
                      *(undefined8 *)(param_1 + 0xf7d8) = 0;
                    }
                    else {
                      *(longlong *)(param_1 + 0xf7d8) = local_res8[0];
                      if (local_res8[0] != 0) {
                        local_128 = 0xec0;
                        uStack_124 = 2;
                        local_120 = 4;
                        local_11c = 0x10000;
                        local_114 = 0xec0;
                        local_res8[0] = 0;
                        iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) + 0x18
                                            ))((longlong *)**(undefined8 **)(param_1 + 0xf6d8),
                                               &local_128,0,local_res8);
                        if (iVar6 < 0) {
LAB_1800348bc:
                          *(undefined8 *)(param_1 + 0xf7c0) = 0;
                        }
                        else {
                          *(longlong *)(param_1 + 0xf7c0) = local_res8[0];
                          if (local_res8[0] != 0) {
                            uStack_124 = 2;
                            local_128 = *(int *)(param_1 + 0xa4) + 0xfU & 0xfffffff0;
                            local_120 = 4;
                            local_11c = 0x10000;
                            local_res8[0] = 0;
                            local_114 = local_128;
                            iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xf6d8) +
                                                0x18))((longlong *)
                                                       **(undefined8 **)(param_1 + 0xf6d8),
                                                       &local_128,0,local_res8);
                            if (iVar6 < 0) {
LAB_1800348a8:
                              *(undefined8 *)(param_1 + 0xf7b8) = 0;
                            }
                            else {
                              *(longlong *)(param_1 + 0xf7b8) = local_res8[0];
                              if (local_res8[0] != 0) {
                                local_128 = 0x100;
                                uStack_124 = 2;
                                local_120 = 4;
                                local_11c = 0x10000;
                                local_114 = 0x100;
                                local_res8[0] = 0;
                                iVar6 = (**(code **)(*(longlong *)
                                                      **(undefined8 **)(param_1 + 0xf6d8) + 0x18))
                                                  ((longlong *)**(undefined8 **)(param_1 + 0xf6d8),
                                                   &local_128,0,local_res8);
                                if (iVar6 < 0) {
                                  *(undefined8 *)(param_1 + 0xf7c8) = 0;
                                }
                                else {
                                  *(longlong *)(param_1 + 0xf7c8) = local_res8[0];
                                  if (local_res8[0] != 0) {
                                    *(undefined4 *)(param_1 + 0xf7e0) =
                                         *(undefined4 *)
                                          ((ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0 + 0x6cc +
                                          *(longlong *)(param_1 + 0xf6d0));
                                    FUN_180059730(param_1);
                                    FUN_1800fbea0((undefined1 *)(param_1 + 0xf7e8),0,0xda8);
                                    *(undefined8 *)(param_1 + 0xfcd8) =
                                         *(undefined8 *)(param_1 + 0xf718);
                                    lVar9 = *(longlong *)(param_1 + 0xf6d0);
                                    *(undefined1 *)(param_1 + 0x10588) = 1;
                                    *(undefined8 *)(param_1 + 0xfd58) =
                                         *(undefined8 *)(param_1 + 0xf710);
                                    *(undefined4 *)(param_1 + 0x10458) = 1;
                                    EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x620));
                                    *(longlong *)(lVar9 + 0x618) = param_1;
                                    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
                                    iVar6 = (**(code **)(*plVar3 + 0x70))
                                                      (plVar3,*(undefined8 *)(param_1 + 0xf718),0,4,
                                                       0,&local_128);
                                    if (-1 < iVar6) {
                                      uVar4 = CONCAT44(uStack_124,local_128);
                                      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8);
                                      iVar6 = (**(code **)(*plVar3 + 0x70))
                                                        (plVar3,*(undefined8 *)(param_1 + 0xf710),0,
                                                         4,0,&local_128);
                                      if (iVar6 < 0) {
                                        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf6d8) + 8)
                                        ;
                                        (**(code **)(*plVar3 + 0x78))
                                                  (plVar3,*(undefined8 *)(param_1 + 0xf718),0);
                                      }
                                      else {
                                        if (*(longlong *)(param_1 + 0x68) !=
                                            *(longlong *)(param_1 + 0x60)) {
                                          *(int *)(param_1 + 0x78) =
                                               (int)*(longlong *)(param_1 + 0x68) -
                                               *(int *)(param_1 + 0x58);
                                        }
                                        *(undefined8 *)(param_1 + 0x68) = uVar4;
                                        *(undefined8 *)(param_1 + 0x58) = uVar4;
                                        *(ulonglong *)(param_1 + 0x88) =
                                             CONCAT44(uStack_124,local_128);
                                        *(undefined8 *)(param_1 + 0x70) = 0;
                                        *(undefined8 *)(param_1 + 0x78) = 0;
                                        *(undefined8 *)(param_1 + 0x60) = uVar4;
                                        *(undefined8 *)(param_1 + 0x90) = 0;
                                      }
                                    }
                                    LeaveCriticalSection
                                              ((LPCRITICAL_SECTION)
                                               (*(longlong *)(param_1 + 0xf6d0) + 0x620));
                                    return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
                                  }
                                }
                                (**(code **)(**(longlong **)(param_1 + 0xf7b8) + 0x10))();
                                goto LAB_1800348a8;
                              }
                            }
                            (**(code **)(**(longlong **)(param_1 + 0xf7c0) + 0x10))();
                            goto LAB_1800348bc;
                          }
                        }
                        (**(code **)(**(longlong **)(param_1 + 0xf7d8) + 0x10))();
                        goto LAB_1800348d0;
                      }
                    }
                    (**(code **)(**(longlong **)(param_1 + 0xf7b0) + 0x10))();
                    goto LAB_1800348e4;
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
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0xf6d0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      if (*(short *)((longlong)plVar3 + 0xc) != 0) {
        pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
        UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar3 + 0xc),pHVar7);
        if ((HMODULE)plVar3[2] != (HMODULE)0x0) {
          FreeLibrary((HMODULE)plVar3[2]);
          plVar3[2] = 0;
        }
      }
      (**(code **)(*plVar3 + 0x88))(plVar3);
    }
  }
LAB_1800349d6:
  *(undefined8 *)(param_1 + 0xf6d0) = 0;
  return 0;
}

