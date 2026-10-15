/*
 * FUN_180010cf8 at 180010cf8
 * undefined8 __cdecl FUN_180010cf8(longlong param_1, int * param_2, undefined8 param_3, undefined1 * param_4)
 * Address ranges: 180010cf8-18001155b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180010cf8(longlong param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  HMODULE pHVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  HMODULE hInstance;
  WNDPROC pWVar8;
  longlong *plVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  int *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_120 [12];
  int *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int local_d8 [6];
  undefined8 local_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined8 local_b0;
  tagWNDCLASSEXA tStack_a8;
  
  pHVar3 = DAT_18006f9c0;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  puVar10 = PTR_s_DGD3D11ROOT_18006f580;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(hInstance,puVar10,&tStack_a8);
  if (((BVar5 != 0) && (pWVar8 = tStack_a8.lpfnWndProc, tStack_a8.lpfnWndProc != (WNDPROC)0x0)) ||
     (pWVar8 = (WNDPROC)(*(code *)PTR_FUN_18006f588)(pHVar3,0), pWVar8 != (WNDPROC)0x0)) {
    FUN_1800643e0((uint *)(pWVar8 + 8));
  }
  *(WNDPROC *)(param_1 + 0x3330) = pWVar8;
  if (pWVar8 == (WNDPROC)0x0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(pWVar8 + 0x620));
  *(longlong *)(pWVar8 + 0x618) = param_1;
  iVar2 = *param_2;
  iVar6 = 5;
  if (iVar2 != 3) {
    iVar6 = 0;
  }
  if (iVar2 - 2U < 2) {
    puVar10 = &DAT_180068f98;
LAB_180010e08:
    uVar11 = 1;
  }
  else {
    if (iVar2 == 1) {
      puVar10 = &DAT_180068f9c;
      goto LAB_180010e08;
    }
    if (iVar2 == 4) {
      puVar10 = &DAT_180068fa0;
      goto LAB_180010e08;
    }
    puVar10 = &DAT_180068fa8;
    uVar11 = 3;
  }
  uVar11 = FUN_180051888(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),iVar6,
                         (ulonglong)puVar10,uVar11,iVar2 == 0);
  if ((uVar11 & 1) == 0) goto LAB_180011528;
  local_170 = (int *)0x0;
  local_168 = (undefined1 *)0x0;
  uVar7 = *(uint *)(param_1 + 0xe8);
  *(ulonglong *)(param_1 + 0x3340) =
       *(longlong *)(param_1 + 0x3330) + (ulonglong)*(uint *)(param_1 + 0x3338) * 0x18c0 + 0x6b0;
  uVar11 = FUN_180013988(uVar11,uVar7,&local_168,&local_170);
  puVar4 = local_168;
  if ((uVar11 & 1) == 0) goto LAB_180011528;
  local_d8[0] = uVar7 * 4 + 0x10;
  local_d8[1] = 1;
  local_d8[2] = 8;
  local_d8[3] = 0;
  local_d8[4] = 0x40;
  local_d8[5] = 4;
  local_160 = local_168;
  uStack_158 = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x3340),local_d8,&local_160,
                     param_1 + 0x3360);
  if (iVar6 < 0) goto LAB_180011528;
  iStack_b4 = uVar7 + 4;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0x100000000;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x3340),
                     *(undefined8 *)(param_1 + 0x3360),&local_c0,param_1 + 0x3378);
  if (iVar6 < 0) {
LAB_180011518:
    plVar9 = *(longlong **)(param_1 + 0x3360);
  }
  else {
    local_150 = 0x100040004;
    uStack_148 = 8;
    local_140 = 0x400000040;
    local_f0 = local_170;
    uStack_e8 = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_150,&local_f0,
                       param_1 + 0x3358);
    if (iVar6 < 0) {
LAB_180011508:
      (**(code **)(**(longlong **)(param_1 + 0x3378) + 0x10))();
      goto LAB_180011518;
    }
    local_128 = 0;
    local_138 = 0x100000000;
    uStack_130 = 0x1000100000000;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),
                       *(undefined8 *)(param_1 + 0x3358),&local_138,param_1 + 0x3370);
    if (iVar6 < 0) {
LAB_1800114f8:
      (**(code **)(**(longlong **)(param_1 + 0x3358) + 0x10))();
      goto LAB_180011508;
    }
    local_120[0] = uVar7 * 4 + 4;
    local_120[5] = 4;
    local_120[1] = 2;
    local_120[2] = 8;
    local_120[3] = 0x10000;
    local_120[4] = 0x40;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),local_120,0,param_1 + 0x3368)
    ;
    if (iVar6 < 0) {
LAB_1800114e8:
      (**(code **)(**(longlong **)(param_1 + 0x3370) + 0x10))();
      goto LAB_1800114f8;
    }
    local_120[9] = uVar7 + 1;
    local_120[6] = 0;
    local_120[7] = 1;
    local_120[8] = 0;
    local_120[10] = 0;
    local_120[0xb] = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),
                       *(undefined8 *)(param_1 + 0x3368),local_120 + 6,param_1 + 0x3380);
    if (iVar6 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x3368) + 0x10))();
      goto LAB_1800114e8;
    }
    thunk_FUN_180063700(local_170);
    thunk_FUN_180063700(puVar4);
    local_120[0xb] = 4;
    uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x33) *
            *(int *)(*(longlong *)(param_1 + 8) + 0x2f);
    local_120[7] = 0;
    local_120[8] = 8;
    local_120[9] = 0;
    local_120[10] = 0x40;
    local_120[6] = uVar7;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),local_120 + 6,0,
                       param_1 + 0x3388);
    if (iVar6 < 0) goto LAB_180011528;
    local_120[3] = uVar7 >> 2;
    local_120[0] = 0;
    local_120[1] = 1;
    local_120[2] = 0;
    local_120[4] = 0;
    local_120[5] = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x3340),
                       *(undefined8 *)(param_1 + 0x3388),local_120,param_1 + 0x3390);
    if (iVar6 < 0) {
      plVar9 = *(longlong **)(param_1 + 0x3388);
    }
    else {
      *(undefined8 *)(param_1 + 0x3398) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x33a0);
      *(undefined8 *)(param_1 + 0x33a8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x33b8) = 0;
      *(undefined8 *)(param_1 + 0x33b0) = 0;
      *(undefined8 *)(param_1 + 0x33c8) = 0;
      *(undefined8 *)(param_1 + 0x33c0) = 0;
      *(undefined8 *)(param_1 + 0x33d8) = 0;
      *(undefined8 *)(param_1 + 0x33d0) = 0;
      *(undefined8 *)(param_1 + 0x33e8) = 0;
      *(undefined8 *)(param_1 + 0x33e0) = 0;
      *(undefined8 *)(param_1 + 0x33f8) = 0;
      *(undefined8 *)(param_1 + 0x33f0) = 0;
      *(undefined8 *)(param_1 + 0x3408) = 0;
      *(undefined8 *)(param_1 + 0x3400) = 0;
      *(undefined8 *)(param_1 + 0x3418) = 0;
      *(undefined8 *)(param_1 + 0x3410) = 0;
      *(undefined8 *)(param_1 + 0x3428) = 0;
      *(undefined8 *)(param_1 + 0x3420) = 0;
      *(undefined8 *)(param_1 + 0x3438) = 0;
      *(undefined8 *)(param_1 + 0x3430) = 0;
      *(undefined8 *)(param_1 + 0x3448) = 0;
      *(undefined8 *)(param_1 + 0x3440) = 0;
      *(undefined8 *)(param_1 + 0x3458) = 0;
      *(undefined8 *)(param_1 + 0x3450) = 0;
      *(undefined8 *)(param_1 + 0x3468) = 0;
      *(undefined8 *)(param_1 + 0x3460) = 0;
      *(undefined8 *)(param_1 + 0x3478) = 0;
      *(undefined8 *)(param_1 + 0x3470) = 0;
      *(undefined8 *)(param_1 + 0x3488) = 0;
      *(undefined8 *)(param_1 + 0x3480) = 0;
      *(undefined8 *)(param_1 + 0x3498) = 0;
      *(undefined8 *)(param_1 + 0x3490) = 0;
      *(undefined8 *)(param_1 + 0x34a8) = 0;
      *(undefined8 *)(param_1 + 0x34a0) = 0;
      *(undefined8 *)(param_1 + 0x34b8) = 0;
      *(undefined8 *)(param_1 + 0x34b0) = 0;
      *(undefined8 *)(param_1 + 0x34c8) = 0;
      *(undefined8 *)(param_1 + 0x34c0) = 0;
      *(undefined8 *)(param_1 + 0x34d8) = 0;
      *(undefined8 *)(param_1 + 0x34d0) = 0;
      *(undefined8 *)(param_1 + 0x34e8) = 0;
      *(undefined8 *)(param_1 + 0x34e0) = 0;
      *(undefined8 *)(param_1 + 0x34f8) = 0;
      *(undefined8 *)(param_1 + 0x34f0) = 0;
      *(undefined8 *)(param_1 + 0x3508) = 0;
      *(undefined8 *)(param_1 + 0x3500) = 0;
      *(undefined8 *)(param_1 + 0x3518) = 0;
      *(undefined8 *)(param_1 + 0x3510) = 0;
      *(undefined8 *)(param_1 + 0x3528) = 0;
      *(undefined8 *)(param_1 + 0x3520) = 0;
      *(undefined8 *)(param_1 + 0x3538) = 0;
      *(undefined8 *)(param_1 + 0x3530) = 0;
      *(undefined8 *)(param_1 + 0x3548) = 0;
      *(undefined8 *)(param_1 + 0x3540) = 0;
      *(undefined8 *)(param_1 + 0x3558) = 0;
      *(undefined8 *)(param_1 + 0x3550) = 0;
      *(undefined8 *)(param_1 + 0x3568) = 0;
      *(undefined8 *)(param_1 + 0x3560) = 0;
      *(undefined8 *)(param_1 + 0x3578) = 0;
      *(undefined8 *)(param_1 + 0x3570) = 0;
      *(undefined8 *)(param_1 + 0x3588) = 0;
      *(undefined8 *)(param_1 + 0x3580) = 0;
      *(undefined8 *)(param_1 + 0x3598) = 0;
      *(undefined8 *)(param_1 + 0x3590) = 0;
      if (*(char *)(param_1 + 0x2c83) != '\0') {
        local_170 = (int *)0x0;
        iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_170,
                           param_1 + 0x3398);
        if (iVar6 < 0) goto LAB_180011528;
        local_168 = &DAT_00000004;
        uVar11 = 0;
        local_160 = param_4;
        local_f0 = param_2;
        do {
          lVar13 = param_1 + uVar11 * 0x10;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                            ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_168,
                             lVar13 + 0x33a0);
          if (iVar6 < 0) {
LAB_18001124c:
            if ((int)uVar11 != 0) goto LAB_180011250;
            goto LAB_180011288;
          }
          local_e0 = 1;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0xc0))
                            ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_e0,
                             lVar13 + 0x33a8);
          if (iVar6 < 0) {
            lVar13 = (uVar11 + 0x33a) * 0x10;
            (**(code **)(**(longlong **)(param_1 + lVar13) + 0x10))();
            *(undefined8 *)(param_1 + lVar13) = 0;
            goto LAB_18001124c;
          }
          uVar7 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar7;
        } while (uVar7 < 0x20);
        if (uVar7 != 0x20) {
LAB_180011250:
          do {
            uVar7 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar7;
            (**(code **)(*(longlong *)puVar1[uVar11 * 2] + 0x10))();
            plVar9 = *(longlong **)(param_1 + 0x33a8 + uVar11 * 0x10);
            puVar1[uVar11 * 2] = 0;
            (**(code **)(*plVar9 + 0x10))();
            *(undefined8 *)(param_1 + 0x33a8 + uVar11 * 0x10) = 0;
          } while (uVar7 != 0);
LAB_180011288:
          (**(code **)(**(longlong **)(param_1 + 0x3398) + 0x10))();
          *(undefined8 *)(param_1 + 0x3398) = 0;
          goto LAB_180011528;
        }
        *(undefined8 *)(param_1 + 0x2c18) = 0;
        *(undefined8 *)(param_1 + 0x2c10) = 0;
        *(undefined8 *)(param_1 + 0x2c28) = 0;
        *(undefined8 *)(param_1 + 0x2c20) = 0;
        *(undefined8 *)(param_1 + 0x2c38) = 0;
        *(undefined8 *)(param_1 + 0x2c30) = 0;
        *(undefined8 *)(param_1 + 0x2c48) = 0;
        *(undefined8 *)(param_1 + 0x2c40) = 0;
        *(undefined8 *)(param_1 + 0x2c58) = 0;
        *(undefined8 *)(param_1 + 0x2c50) = 0;
        *(undefined8 *)(param_1 + 0x2c68) = 0;
        *(undefined8 *)(param_1 + 0x2c60) = 0;
        param_2 = local_f0;
        param_4 = local_160;
      }
      local_138 = 0x200000670;
      uStack_130 = 0x1000000000004;
      local_128 = 0x67000000000;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                        ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_138,0,
                         param_1 + 0x3348);
      if (iVar6 < 0) goto LAB_180011528;
      local_150 = 0x100000d50;
      uStack_148 = 4;
      local_140 = 0xd5000000000;
      local_160 = &DAT_18006e380;
      uStack_158 = 0;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x3340) + 0x18))
                        ((longlong *)**(undefined8 **)(param_1 + 0x3340),&local_150,&local_160,
                         param_1 + 0x3350);
      if (-1 < iVar6) {
        FUN_180011a78(param_1);
        FUN_180013798(param_1,*(undefined8 *)(param_1 + 0x3330),(longlong)param_2,param_4);
        FUN_1800109c0(param_1);
        uVar11 = FUN_180015d88((longlong *)(param_1 + 0x35a0));
        if ((uVar11 & 1) != 0) {
          *(undefined4 *)(param_1 + 0x44d4) = 0;
          pHVar3 = DAT_18006f9c0;
          *(undefined8 *)(param_1 + 0x4530) = 0;
          uVar7 = FUN_1800531e0(*(longlong *)(*(longlong *)(param_1 + 0x44e0) + 0x3330),
                                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x44e0) + 0x3338),
                                pHVar3,2,0x18006f1a0,0x18006f1b0,(undefined1 *)(param_1 + 0x4500),
                                param_1 + 0x4510);
          if ((uVar7 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x44f0) = 0;
            *(undefined8 *)(param_1 + 0x44e8) = 0;
            *(undefined8 *)(param_1 + 0x44f8) = 0;
            local_138 = 0x200140000;
            uStack_130 = 0x1000000000001;
            local_128 = 0x5000000000;
            plVar9 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x44e0) + 0x3340);
            auVar14 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_138,0,param_1 + 0x4520);
            if (-1 < auVar14._0_4_) {
              local_150 = 0x200010000;
              uStack_148 = 0x1000000000002;
              local_140 = 0x400000000;
              plVar9 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x44e0) + 0x3340);
              iVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_150,0,param_1 + 0x4528);
              if (-1 < iVar6) {
                *(undefined4 *)(param_1 + 0x44d8) = 0xffffffff;
                *(undefined4 *)(param_1 + 0x43c8) = 0;
                *(undefined2 *)(param_1 + 0x4484) = 0;
                *(undefined1 *)(param_1 + 0x4486) = 0;
                *(undefined4 *)(*(longlong *)(param_1 + 0x44e0) + 0x32c0) =
                     *(undefined4 *)(param_1 + 0x43b8);
                uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x44e0) + 0x3340);
                *(undefined8 *)(param_1 + 0x4540) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x44e0) + 0x3330);
                *(undefined8 *)(param_1 + 0x4548) = uVar12;
                *(undefined1 *)(param_1 + 0x453c) = 1;
                FUN_18002cf78(param_1 + 0x4260,1,1);
                iVar6 = *(int *)((longlong)param_2 + 0x33);
                if (iVar6 == 1) {
LAB_180011478:
                  uVar11 = FUN_1800282e0();
                  if ((uVar11 & 1) != 0) {
LAB_180011484:
                    LeaveCriticalSection
                              ((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
                    return 1;
                  }
                }
                else if (iVar6 == 2) {
                  uVar11 = FUN_1800282e0();
                  if ((uVar11 & 1) != 0) {
                    uVar11 = FUN_1800282e0();
                    if ((uVar11 & 1) != 0) goto LAB_180011484;
LAB_180011464:
                    FUN_180028488(*(longlong *)(param_1 + 0xd940));
                  }
                }
                else {
                  if (iVar6 != 3) goto LAB_180011478;
                  uVar11 = FUN_1800282e0();
                  if ((uVar11 & 1) != 0) {
                    uVar11 = FUN_1800282e0();
                    if ((uVar11 & 1) != 0) {
                      uVar11 = FUN_1800282e0();
                      if ((uVar11 & 1) != 0) goto LAB_180011484;
                      FUN_180028488(*(longlong *)(param_1 + 0xd948));
                    }
                    goto LAB_180011464;
                  }
                }
                FUN_18002ce08(param_1 + 0x4260);
                goto LAB_1800114c4;
              }
              auVar14 = (**(code **)(**(longlong **)(param_1 + 0x4520) + 0x10))();
              *(undefined8 *)(param_1 + 0x4520) = 0;
            }
            FUN_180053328(auVar14._0_8_,auVar14._8_8_,2,param_1 + 0x4500,param_1 + 0x4510);
          }
LAB_1800114c4:
          FUN_180015f00((longlong *)(param_1 + 0x35a0));
        }
        FUN_180010028(param_1);
        goto LAB_180011528;
      }
      plVar9 = *(longlong **)(param_1 + 0x3348);
    }
  }
  (**(code **)(*plVar9 + 0x10))();
LAB_180011528:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return 0;
}

