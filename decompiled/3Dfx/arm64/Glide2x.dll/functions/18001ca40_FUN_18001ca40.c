/*
 * FUN_18001ca40 at 18001ca40
 * undefined8 __cdecl FUN_18001ca40(longlong param_1, int * param_2, undefined8 param_3, undefined1 * param_4)
 * Address ranges: 18001ca40-18001d287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001ca40(longlong param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

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
  longlong lVar12;
  undefined8 uVar13;
  LPVOID pvVar14;
  undefined1 auVar15 [16];
  LPVOID local_170;
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
  LPVOID local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int local_d8 [6];
  undefined8 local_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined8 local_b0;
  tagWNDCLASSEXA tStack_a8;
  
  pHVar3 = DAT_18006b860;
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  puVar10 = PTR_s_DGD3D11ROOT_18006b430;
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  BVar5 = GetClassInfoExA(hInstance,puVar10,&tStack_a8);
  if (((BVar5 != 0) && (pWVar8 = tStack_a8.lpfnWndProc, tStack_a8.lpfnWndProc != (WNDPROC)0x0)) ||
     (pWVar8 = (WNDPROC)(*(code *)PTR_FUN_18006b438)(pHVar3,0), pWVar8 != (WNDPROC)0x0)) {
    FUN_1800608b0((uint *)(pWVar8 + 8));
  }
  *(WNDPROC *)(param_1 + 0x31b0) = pWVar8;
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
    puVar10 = &DAT_180064d10;
LAB_18001cb50:
    uVar11 = 1;
  }
  else {
    if (iVar2 == 1) {
      puVar10 = &DAT_180064d14;
      goto LAB_18001cb50;
    }
    if (iVar2 == 4) {
      puVar10 = &DAT_180064d18;
      goto LAB_18001cb50;
    }
    puVar10 = &DAT_180064d20;
    uVar11 = 3;
  }
  uVar11 = FUN_18004dcf8(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),iVar6,
                         (ulonglong)puVar10,uVar11,iVar2 == 0);
  if ((uVar11 & 1) == 0) goto LAB_18001d254;
  local_170 = (LPVOID)0x0;
  local_168 = (undefined1 *)0x0;
  uVar7 = *(uint *)(param_1 + 0xe8);
  *(ulonglong *)(param_1 + 0x31c0) =
       *(longlong *)(param_1 + 0x31b0) + (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x18c0 + 0x6b0;
  uVar11 = FUN_1800244a0(uVar11,uVar7,&local_168,&local_170);
  puVar4 = local_168;
  if ((uVar11 & 1) == 0) goto LAB_18001d254;
  local_d8[0] = uVar7 * 4 + 0x10;
  local_d8[1] = 1;
  local_d8[2] = 8;
  local_d8[3] = 0;
  local_d8[4] = 0x40;
  local_d8[5] = 4;
  local_160 = local_168;
  uStack_158 = 0;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_d8,&local_160,
                     param_1 + 0x31e0);
  if (iVar6 < 0) goto LAB_18001d254;
  iStack_b4 = uVar7 + 4;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0x100000000;
  iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                    ((longlong *)**(undefined8 **)(param_1 + 0x31c0),
                     *(undefined8 *)(param_1 + 0x31e0),&local_c0,param_1 + 0x31f8);
  if (iVar6 < 0) {
LAB_18001d244:
    plVar9 = *(longlong **)(param_1 + 0x31e0);
  }
  else {
    local_150 = 0x100040004;
    uStack_148 = 8;
    local_140 = 0x400000040;
    local_f0 = local_170;
    uStack_e8 = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_150,&local_f0,
                       param_1 + 0x31d8);
    if (iVar6 < 0) {
LAB_18001d234:
      (**(code **)(**(longlong **)(param_1 + 0x31f8) + 0x10))();
      goto LAB_18001d244;
    }
    local_128 = 0;
    local_138 = 0x100000000;
    uStack_130 = 0x1000100000000;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),
                       *(undefined8 *)(param_1 + 0x31d8),&local_138,param_1 + 0x31f0);
    if (iVar6 < 0) {
LAB_18001d224:
      (**(code **)(**(longlong **)(param_1 + 0x31d8) + 0x10))();
      goto LAB_18001d234;
    }
    local_120[0] = uVar7 * 4 + 4;
    local_120[5] = 4;
    local_120[1] = 2;
    local_120[2] = 8;
    local_120[3] = 0x10000;
    local_120[4] = 0x40;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_120,0,param_1 + 0x31e8)
    ;
    if (iVar6 < 0) {
LAB_18001d214:
      (**(code **)(**(longlong **)(param_1 + 0x31f0) + 0x10))();
      goto LAB_18001d224;
    }
    local_120[9] = uVar7 + 1;
    local_120[6] = 0;
    local_120[7] = 1;
    local_120[8] = 0;
    local_120[10] = 0;
    local_120[0xb] = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),
                       *(undefined8 *)(param_1 + 0x31e8),local_120 + 6,param_1 + 0x3200);
    if (iVar6 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x31e8) + 0x10))();
      goto LAB_18001d214;
    }
    thunk_FUN_18005fbc8(local_170);
    thunk_FUN_18005fbc8(puVar4);
    local_120[0xb] = 4;
    uVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x33) *
            *(int *)(*(longlong *)(param_1 + 8) + 0x2f);
    local_120[7] = 0;
    local_120[8] = 8;
    local_120[9] = 0;
    local_120[10] = 0x40;
    local_120[6] = uVar7;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_120 + 6,0,
                       param_1 + 0x3208);
    if (iVar6 < 0) goto LAB_18001d254;
    local_120[3] = uVar7 >> 2;
    local_120[0] = 0;
    local_120[1] = 1;
    local_120[2] = 0;
    local_120[4] = 0;
    local_120[5] = 0;
    iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),
                       *(undefined8 *)(param_1 + 0x3208),local_120,param_1 + 0x3210);
    if (iVar6 < 0) {
      plVar9 = *(longlong **)(param_1 + 0x3208);
    }
    else {
      *(undefined8 *)(param_1 + 0x3218) = 0;
      puVar1 = (undefined8 *)(param_1 + 0x3220);
      *(undefined8 *)(param_1 + 0x3228) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x3238) = 0;
      *(undefined8 *)(param_1 + 0x3230) = 0;
      *(undefined8 *)(param_1 + 0x3248) = 0;
      *(undefined8 *)(param_1 + 0x3240) = 0;
      *(undefined8 *)(param_1 + 0x3258) = 0;
      *(undefined8 *)(param_1 + 0x3250) = 0;
      *(undefined8 *)(param_1 + 0x3268) = 0;
      *(undefined8 *)(param_1 + 0x3260) = 0;
      *(undefined8 *)(param_1 + 0x3278) = 0;
      *(undefined8 *)(param_1 + 0x3270) = 0;
      *(undefined8 *)(param_1 + 0x3288) = 0;
      *(undefined8 *)(param_1 + 0x3280) = 0;
      *(undefined8 *)(param_1 + 0x3298) = 0;
      *(undefined8 *)(param_1 + 0x3290) = 0;
      *(undefined8 *)(param_1 + 0x32a8) = 0;
      *(undefined8 *)(param_1 + 0x32a0) = 0;
      *(undefined8 *)(param_1 + 0x32b8) = 0;
      *(undefined8 *)(param_1 + 0x32b0) = 0;
      *(undefined8 *)(param_1 + 13000) = 0;
      *(undefined8 *)(param_1 + 0x32c0) = 0;
      *(undefined8 *)(param_1 + 0x32d8) = 0;
      *(undefined8 *)(param_1 + 0x32d0) = 0;
      *(undefined8 *)(param_1 + 0x32e8) = 0;
      *(undefined8 *)(param_1 + 0x32e0) = 0;
      *(undefined8 *)(param_1 + 0x32f8) = 0;
      *(undefined8 *)(param_1 + 0x32f0) = 0;
      *(undefined8 *)(param_1 + 0x3308) = 0;
      *(undefined8 *)(param_1 + 0x3300) = 0;
      *(undefined8 *)(param_1 + 0x3318) = 0;
      *(undefined8 *)(param_1 + 0x3310) = 0;
      *(undefined8 *)(param_1 + 0x3328) = 0;
      *(undefined8 *)(param_1 + 0x3320) = 0;
      *(undefined8 *)(param_1 + 0x3338) = 0;
      *(undefined8 *)(param_1 + 0x3330) = 0;
      *(undefined8 *)(param_1 + 0x3348) = 0;
      *(undefined8 *)(param_1 + 0x3340) = 0;
      *(undefined8 *)(param_1 + 0x3358) = 0;
      *(undefined8 *)(param_1 + 0x3350) = 0;
      *(undefined8 *)(param_1 + 0x3368) = 0;
      *(undefined8 *)(param_1 + 0x3360) = 0;
      *(undefined8 *)(param_1 + 0x3378) = 0;
      *(undefined8 *)(param_1 + 0x3370) = 0;
      *(undefined8 *)(param_1 + 0x3388) = 0;
      *(undefined8 *)(param_1 + 0x3380) = 0;
      *(undefined8 *)(param_1 + 0x3398) = 0;
      *(undefined8 *)(param_1 + 0x3390) = 0;
      *(undefined8 *)(param_1 + 0x33a8) = 0;
      *(undefined8 *)(param_1 + 0x33a0) = 0;
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
      pvVar14 = (LPVOID)(param_1 + 0x3000);
      if (*(char *)(param_1 + 0x2beb) != '\0') {
        local_170 = (LPVOID)0x0;
        iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                          ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_170,
                           param_1 + 0x3218);
        if (iVar6 < 0) goto LAB_18001d254;
        local_168 = &DAT_00000004;
        uVar11 = 0;
        local_160 = param_4;
        local_f0 = (LPVOID)(param_1 + 0x3000);
        do {
          lVar12 = param_1 + uVar11 * 0x10;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                            ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_168,
                             lVar12 + 0x3220);
          if (iVar6 < 0) {
LAB_18001cf94:
            if ((int)uVar11 != 0) goto LAB_18001cf98;
            goto LAB_18001cfd0;
          }
          local_e0 = 1;
          iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0xc0))
                            ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_e0,
                             lVar12 + 0x3228);
          if (iVar6 < 0) {
            lVar12 = (uVar11 + 0x322) * 0x10;
            (**(code **)(**(longlong **)(param_1 + lVar12) + 0x10))();
            *(undefined8 *)(param_1 + lVar12) = 0;
            goto LAB_18001cf94;
          }
          uVar7 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar7;
        } while (uVar7 < 0x20);
        if (uVar7 != 0x20) {
LAB_18001cf98:
          do {
            uVar7 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar7;
            (**(code **)(*(longlong *)puVar1[uVar11 * 2] + 0x10))();
            plVar9 = *(longlong **)(param_1 + 0x3228 + uVar11 * 0x10);
            puVar1[uVar11 * 2] = 0;
            (**(code **)(*plVar9 + 0x10))();
            *(undefined8 *)(param_1 + 0x3228 + uVar11 * 0x10) = 0;
          } while (uVar7 != 0);
LAB_18001cfd0:
          (**(code **)(**(longlong **)(param_1 + 0x3218) + 0x10))();
          *(undefined8 *)(param_1 + 0x3218) = 0;
          goto LAB_18001d254;
        }
        *(undefined8 *)(param_1 + 0x2b80) = 0;
        *(undefined8 *)(param_1 + 0x2b78) = 0;
        *(undefined8 *)(param_1 + 0x2b90) = 0;
        *(undefined8 *)(param_1 + 0x2b88) = 0;
        *(undefined8 *)(param_1 + 0x2ba0) = 0;
        *(undefined8 *)(param_1 + 0x2b98) = 0;
        *(undefined8 *)(param_1 + 0x2bb0) = 0;
        *(undefined8 *)(param_1 + 0x2ba8) = 0;
        *(undefined8 *)(param_1 + 0x2bc0) = 0;
        *(undefined8 *)(param_1 + 0x2bb8) = 0;
        *(undefined8 *)(param_1 + 0x2bd0) = 0;
        *(undefined8 *)(param_1 + 0x2bc8) = 0;
        param_4 = local_160;
        pvVar14 = local_f0;
      }
      local_138 = 0x200000590;
      uStack_130 = 0x1000000000004;
      local_128 = 0x59000000000;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                        ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_138,0,
                         param_1 + 0x31c8);
      if (iVar6 < 0) goto LAB_18001d254;
      local_150 = 0x100000d50;
      uStack_148 = 4;
      local_140 = 0xd5000000000;
      local_160 = &DAT_18006a4d0;
      uStack_158 = 0;
      iVar6 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                        ((longlong *)**(undefined8 **)(param_1 + 0x31c0),&local_150,&local_160,
                         param_1 + 0x31d0);
      if (-1 < iVar6) {
        FUN_18001d7a0(param_1);
        FUN_1800242a8(param_1,*(undefined8 *)(param_1 + 0x31b0),(longlong)param_2,param_4);
        FUN_18001c420(param_1);
        uVar11 = FUN_180021aa8((longlong *)(param_1 + 0x3420));
        if ((uVar11 & 1) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x3b40);
          *(undefined4 *)(param_1 + 0x3b34) = 0;
          pHVar3 = DAT_18006b860;
          *(undefined1 *)((longlong)pvVar14 + 0xb3c) = 0;
          *(undefined8 *)(param_1 + 0x3b80) = 0;
          uVar7 = FUN_18004f650(*(longlong *)(lVar12 + 0x31b0),(ulonglong)*(uint *)(lVar12 + 0x31b8)
                                ,pHVar3,1,0x18006b2d0,0x18006b2e0,(undefined1 *)(param_1 + 0x3b60),
                                param_1 + 0x3b68);
          if ((uVar7 & 1) != 0) {
            *(undefined8 *)(param_1 + 0x3b50) = 0;
            *(undefined8 *)(param_1 + 0x3b48) = 0;
            *(undefined8 *)(param_1 + 0x3b58) = 0;
            local_138 = 0x2000f0000;
            uStack_130 = 0x1000000000001;
            local_128 = 0x3c00000000;
            plVar9 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3b40) + 0x31c0);
            auVar15 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_138,0,param_1 + 0x3b70);
            if (-1 < auVar15._0_4_) {
              local_150 = 0x200010000;
              uStack_148 = 0x1000000000002;
              local_140 = 0x400000000;
              plVar9 = (longlong *)**(undefined8 **)(*(longlong *)(param_1 + 0x3b40) + 0x31c0);
              iVar6 = (**(code **)(*plVar9 + 0x18))(plVar9,&local_150,0,param_1 + 0x3b78);
              if (-1 < iVar6) {
                uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x3b40) + 0x31c0);
                *(undefined8 *)(param_1 + 0x3b90) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x3b40) + 0x31b0);
                *(undefined8 *)(param_1 + 0x3b98) = uVar13;
                *(undefined1 *)((longlong)pvVar14 + 0xb8c) = 1;
                FUN_180037ed8(param_1 + 0x3ae0,1,1);
                iVar6 = *(int *)((longlong)param_2 + 0x33);
                if (iVar6 == 1) {
LAB_18001d1a4:
                  uVar11 = FUN_180033928();
                  if ((uVar11 & 1) != 0) {
LAB_18001d1b0:
                    LeaveCriticalSection
                              ((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
                    return 1;
                  }
                }
                else if (iVar6 == 2) {
                  uVar11 = FUN_180033928();
                  if ((uVar11 & 1) != 0) {
                    uVar11 = FUN_180033928();
                    if ((uVar11 & 1) != 0) goto LAB_18001d1b0;
LAB_18001d190:
                    FUN_180033ad0(*(longlong *)(param_1 + 0xcf90));
                  }
                }
                else {
                  if (iVar6 != 3) goto LAB_18001d1a4;
                  uVar11 = FUN_180033928();
                  if ((uVar11 & 1) != 0) {
                    uVar11 = FUN_180033928();
                    if ((uVar11 & 1) != 0) {
                      uVar11 = FUN_180033928();
                      if ((uVar11 & 1) != 0) goto LAB_18001d1b0;
                      FUN_180033ad0(*(longlong *)(param_1 + 0xcf98));
                    }
                    goto LAB_18001d190;
                  }
                }
                FUN_180037d70(param_1 + 0x3ae0);
                goto LAB_18001d1f0;
              }
              auVar15 = (**(code **)(**(longlong **)(param_1 + 0x3b70) + 0x10))();
              *(undefined8 *)(param_1 + 0x3b70) = 0;
            }
            FUN_18004f798(auVar15._0_8_,auVar15._8_8_,1,param_1 + 0x3b60,param_1 + 0x3b68);
          }
LAB_18001d1f0:
          FUN_180021c20((longlong *)(param_1 + 0x3420));
        }
        FUN_18001bab8(param_1);
        goto LAB_18001d254;
      }
      plVar9 = *(longlong **)(param_1 + 0x31c8);
    }
  }
  (**(code **)(*plVar9 + 0x10))();
LAB_18001d254:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  return 0;
}

