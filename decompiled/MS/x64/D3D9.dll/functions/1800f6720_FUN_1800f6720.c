/*
 * FUN_1800f6720 at 1800f6720
 * undefined8 __fastcall FUN_1800f6720(longlong param_1, uint param_2)
 * Address ranges: 1800f6720-1800f6cca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800f6720(longlong param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong extraout_RAX;
  ulonglong extraout_RAX_00;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_res8 [4];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar10 = (ulonglong)param_2;
  lVar11 = uVar10 * 0x1ac0;
  uVar2 = FUN_1800e1704(*(longlong *)(lVar11 + 0x2230 + param_1),2);
  uVar8 = CONCAT44(extraout_var,uVar2);
  *(uint *)(lVar11 + 0x2368 + param_1) = uVar2;
  if (uVar2 != 0xffffffff) {
    uVar2 = FUN_1800e1704(*(longlong *)(lVar11 + 0x2238 + param_1),2);
    uVar8 = CONCAT44(extraout_var_00,uVar2);
    *(uint *)(lVar11 + 0x236c + param_1) = uVar2;
    if (uVar2 != 0xffffffff) {
      lVar6 = param_1 + 0x6d0;
      plVar3 = FUN_1800e202c(lVar6,uVar10,0x400,0,'\0');
      *(longlong **)(lVar11 + 0x2380 + param_1) = plVar3;
      uVar8 = 0;
      if (plVar3 != (longlong *)0x0) {
        bVar1 = FUN_1800e4e34(*(longlong *)(lVar11 + 0x1e08 + param_1),plVar3,
                              (longlong *)(param_1 + 0x1fd0 + lVar11),0,0x400,
                              (undefined8 *)&DAT_1801006b0,'\0','\0');
        if (bVar1) {
          plVar3 = FUN_1800e202c(lVar6,(ulonglong)param_2,84000,4,'\0');
          *(longlong **)(lVar11 + 0x2388 + param_1) = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar3 = FUN_1800e202c(lVar6,uVar10,0x20000,4,'\0');
            if (plVar3 != (longlong *)0x0) {
              plVar4 = FUN_1800e202c(lVar6,(ulonglong)param_2,84000,0,'\0');
              *(longlong **)(lVar11 + 0x2390 + param_1) = plVar4;
              if (plVar4 != (longlong *)0x0) {
                plVar4 = FUN_1800e202c(lVar6,(ulonglong)param_2,0x20000,0,'\0');
                *(longlong **)(lVar11 + 0x2398 + param_1) = plVar4;
                local_a0[0] = 3;
                local_7c = 1;
                local_70 = 1;
                local_98 = 0;
                local_90 = 0xa0;
                local_88 = 200;
                local_84 = 0x10001;
                local_80 = 0x1b;
                local_74 = 0;
                lVar5 = FUN_1800e2130(lVar6,(ulonglong)param_2,local_a0);
                *(longlong *)(lVar11 + 0x2370 + param_1) = lVar5;
                if (lVar5 != 0) {
                  local_90 = 400;
                  local_88 = 0x11c;
                  lVar6 = FUN_1800e2130(lVar6,uVar10,local_a0);
                  *(longlong *)(lVar11 + 0x2378 + param_1) = lVar6;
                  if (lVar6 != 0) {
                    local_b8 = 0xffffffff00000000;
                    uStack_b0 = 0;
                    local_c8 = 0x1e;
                    local_c4 = 4;
                    local_c0 = 0x1688;
                    local_a8 = 0;
                    FUN_1800e1d04(*(longlong *)(lVar11 + 0x2230 + param_1),local_res8,
                                  *(uint *)(lVar11 + 0x2368 + param_1),0);
                    lVar6 = (ulonglong)param_2 * 0x20;
                    plVar4 = *(longlong **)(lVar6 + 0x6d0 + param_1);
                    (**(code **)(*plVar4 + 0x90))
                              (plVar4,*(undefined8 *)(lVar11 + 0x2370 + param_1),&local_c8);
                    local_c8 = 0x1c;
                    FUN_1800e1d04(*(longlong *)(lVar11 + 0x2230 + param_1),local_res8,
                                  *(int *)(lVar11 + 0x2368 + param_1) + 1,0);
                    plVar4 = *(longlong **)(lVar6 + 0x6d0 + param_1);
                    (**(code **)(*plVar4 + 0x90))
                              (plVar4,*(undefined8 *)(lVar11 + 0x2378 + param_1),&local_c8);
                    local_68 = 0x1c;
                    local_64 = 4;
                    local_60 = 0;
                    local_58 = 0;
                    FUN_1800e1d04(*(longlong *)(lVar11 + 0x2238 + param_1),local_res8,
                                  *(uint *)(lVar11 + 0x236c + param_1),0);
                    plVar4 = *(longlong **)(lVar6 + 0x6d0 + param_1);
                    (**(code **)(*plVar4 + 0xa0))
                              (plVar4,*(undefined8 *)(lVar11 + 0x2370 + param_1),&local_68);
                    plVar7 = FUN_1800e1d04(*(longlong *)(lVar11 + 0x2238 + param_1),local_res8,
                                           *(int *)(lVar11 + 0x236c + param_1) + 1,0);
                    plVar4 = *(longlong **)(lVar6 + 0x6d0 + param_1);
                    (**(code **)(*plVar4 + 0xa0))
                              (plVar4,*(undefined8 *)(lVar11 + 0x2378 + param_1),&local_68,*plVar7);
                    lVar6 = lVar11 + param_1;
                    uVar8 = *(ulonglong *)(lVar6 + 0x9b8);
                    *(undefined8 *)(lVar11 + 0x9c0 + param_1) =
                         *(undefined8 *)(lVar11 + 0x1a20 + param_1);
                    FUN_1800e2cec(*(longlong *)(lVar11 + 0x1e08 + param_1),uVar8);
                    FUN_1800e3458(*(longlong *)(lVar11 + 0x1e08 + param_1),
                                  *(longlong *)(lVar6 + 0x9b8));
                    uVar8 = FUN_1800f5438((longlong *)(param_1 + 0x2308 + lVar11),
                                          (longlong *)(lVar6 + 0x9b8));
                    FUN_1800e2cec(*(longlong *)(lVar11 + 0x1e08 + param_1),uVar8);
                    FUN_1800e34ac(*(longlong *)(lVar11 + 0x1e08 + param_1),uVar8);
                    lVar6 = (**(code **)(*plVar3 + 0x58))(plVar3);
                    FUN_1800e3804(*(longlong *)(lVar11 + 0x1e08 + param_1),3,lVar6);
                    lVar6 = (**(code **)(**(longlong **)(lVar11 + 0x2380 + param_1) + 0x58))();
                    FUN_1800e37bc(*(longlong *)(lVar11 + 0x1e08 + param_1),1,lVar6);
                    FUN_1800e2d18(*(longlong *)(lVar11 + 0x1e08 + param_1),(ulonglong)plVar3,0,1,
                                  0x40);
                    FUN_1800e2d18(*(longlong *)(lVar11 + 0x1e08 + param_1),
                                  *(ulonglong *)(lVar11 + 0x2380 + param_1),0,1,0x40);
                    lVar6 = *(longlong *)(lVar11 + 0x1e08 + param_1);
                    FUN_1800e40f4(lVar6,0x80,0x100,1);
                    FUN_1800eece8(lVar6,param_1 + 0x900 + lVar11,
                                  *(ulonglong *)(lVar11 + 0x2398 + param_1),(ulonglong)plVar3);
                    uVar9 = FUN_1800e2ae8(*(longlong *)(lVar11 + 0x1e08 + param_1) + 8,'\0');
                    lVar11 = *(longlong *)(lVar11 + 0x1e08 + param_1);
                    if (*(longlong *)(lVar11 + 0xb10) != 0) {
                      *(longlong **)(lVar11 + 0x810 + (ulonglong)*(uint *)(lVar11 + 0xb54) * 8) =
                           plVar3;
                      *(int *)(lVar11 + 0xb54) = *(int *)(lVar11 + 0xb54) + 1;
                    }
                    return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                  }
                  (**(code **)(**(longlong **)(lVar11 + 0x2370 + param_1) + 0x10))();
                  *(undefined8 *)(lVar11 + 0x2370 + param_1) = 0;
                }
                (**(code **)(**(longlong **)(lVar11 + 0x2398 + param_1) + 0x10))();
                *(undefined8 *)(lVar11 + 0x2398 + param_1) = 0;
              }
              (**(code **)(**(longlong **)(lVar11 + 0x2390 + param_1) + 0x10))();
              *(undefined8 *)(lVar11 + 0x2390 + param_1) = 0;
            }
            (**(code **)(**(longlong **)(lVar11 + 0x2388 + param_1) + 0x10))();
            *(undefined8 *)(lVar11 + 0x2388 + param_1) = 0;
          }
        }
        uVar8 = (**(code **)(**(longlong **)(lVar11 + 0x2380 + param_1) + 0x10))();
        *(undefined8 *)(lVar11 + 0x2380 + param_1) = 0;
      }
      uVar2 = *(uint *)(lVar11 + 0x236c + param_1);
      if (uVar2 != 0xffffffff) {
        lVar6 = *(longlong *)(lVar11 + 0x2238 + param_1);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
        FUN_1800e149c(lVar6,uVar2,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
        uVar8 = extraout_RAX;
      }
    }
    uVar2 = *(uint *)(lVar11 + 0x2368 + param_1);
    if (uVar2 != 0xffffffff) {
      lVar11 = *(longlong *)(lVar11 + 0x2230 + param_1);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
      FUN_1800e149c(lVar11,uVar2,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x28));
      uVar8 = extraout_RAX_00;
    }
  }
  return uVar8 & 0xffffffffffffff00;
}

