/*
 * FUN_1800ec840 at 1800ec840
 * undefined FUN_1800ec840(void)
 * Address ranges: 1800ec840-1800ece9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800ec840(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  code *pcVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar7 = FUN_180102f80(0x1b588);
  plVar13 = (longlong *)(lVar7 + 0x47U & 0xffffffffffffffc0);
  plVar13[-1] = lVar7;
  *(undefined4 *)(plVar13 + 1) = 0;
  uVar14 = (ulonglong)plVar13 | 0x18;
  *(undefined2 *)((longlong)plVar13 + 0xc) = 0;
  lVar7 = 0x10;
  plVar13[2] = 0;
  *plVar13 = (longlong)&PTR_D3DPERF_GetStatus_18023b860;
  do {
    lVar7 = lVar7 + -1;
    FUN_1800e3e70(uVar14);
    uVar14 = uVar14 + 0x28;
  } while (lVar7 != 0);
  plVar13[0x61] = 0;
  plVar13[0x53] = param_1;
  plVar13[0x54] = 0;
  plVar2 = plVar13 + 99;
  plVar13[0x55] = 0;
  plVar13[0x56] = 0;
  plVar13[0x57] = 0;
  plVar13[0x58] = 0;
  plVar13[0x59] = 0;
  plVar13[0x5a] = 0;
  plVar13[0x5b] = 0;
  plVar13[0x5c] = 0;
  plVar13[0x5d] = 0;
  plVar13[0x5e] = 0;
  plVar13[0x5f] = 0;
  plVar13[0x60] = 0;
  *(undefined4 *)(plVar13 + 0x62) = 0x10000;
  lVar7 = 8;
  *(undefined1 *)((longlong)plVar13 + 0x314) = 0;
  plVar9 = plVar2;
  do {
    plVar9[1] = 0;
    plVar9[2] = 0;
    lVar7 = lVar7 + -1;
    plVar9 = plVar9 + 0xc;
  } while (lVar7 != 0);
  plVar13[0xc3] = 0;
  plVar9 = plVar13 + 0xc4;
  *(undefined4 *)(plVar13 + 0xcf) = 0;
  plVar13[0xc9] = 0;
  plVar13[0xca] = 0;
  plVar13[0xcb] = 0;
  plVar13[0xcc] = 0;
  plVar13[0xd2] = 0;
  plVar13[0xd3] = 0;
  plVar13[0xd0] = (longlong)&PTR_s_DGD3D12ROOT_18024b1a0;
  plVar13[0xd1] = 0;
  *(undefined1 *)((longlong)plVar13 + 0x67c) = 0;
  lVar7 = 0x10;
  plVar13[0xd4] = 0;
  plVar13[0xc5] = 0;
  *plVar9 = 0;
  plVar13[199] = 0;
  plVar13[0xc6] = 0;
  plVar13[200] = 0;
  plVar13[0xce] = 0;
  plVar13[0xcd] = 0;
  plVar11 = plVar13 + 0xda;
  do {
    *plVar11 = 0;
    lVar7 = lVar7 + -1;
    *(undefined4 *)(plVar11 + 2) = 0xc000;
    *(undefined4 *)(plVar11 + 3) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x1d) = 0;
    plVar11 = plVar11 + 4;
  } while (lVar7 != 0);
  plVar13[0x11a] = 0;
  *plVar13 = (longlong)&PTR_FUN_18023bce0;
  plVar13[0xd7] = (longlong)plVar13;
  plVar13[0xd8] = 0;
  plVar13[0xd9] = 0;
  plVar13[0xd5] = (longlong)&PTR_FUN_18023be98;
  plVar13[0xd6] = (longlong)&PTR_DAT_18023bd70;
  plVar11 = plVar13 + 0x120;
  lVar7 = 0x10;
  do {
    lVar7 = lVar7 + -1;
    FUN_1800f8138(plVar11);
    plVar11 = plVar11 + 0x358;
  } while (lVar7 != 0);
  lVar7 = FUN_1800f0fd0();
  plVar13[0x36a0] = lVar7;
  if ((plVar13[0x54] == 0) && (plVar13[0x5b] == 0)) {
    lVar7 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_DXGI_DLL_18023b810);
    plVar13[0x54] = lVar7;
    if (lVar7 == 0) goto LAB_1800ece60;
    lVar7 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar7,s_LCreateDXGIFactory1_18023b7f7 + 1);
    plVar13[0x57] = lVar7;
    if (lVar7 != 0) {
      lVar7 = (*__imp_KERNEL32_dll_LoadLibraryA)(*(undefined8 *)(plVar13[0xd0] + 0x10));
      plVar13[0x5b] = lVar7;
      if (lVar7 != 0) {
        lVar7 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar7,*(undefined8 *)(plVar13[0xd0] + 0x18));
        plVar13[0x5c] = lVar7;
        if (lVar7 != 0) {
          plVar13[0x56] = 0;
          plVar13[0x58] = 0;
          plVar13[0x59] = 0;
          plVar13[0x5a] = 0;
          func_0x000180222c50(plVar2,0,0x300);
          if (plVar13[0x56] != 0) {
            local_c0 = 0;
            local_b8 = (longlong *)0x0;
            iVar6 = 0;
            uVar8 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
            iVar5 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar8,&local_c0,&local_b8);
            if (iVar5 != 0) {
              while (local_c0 != 0) {
                uVar14 = local_c0 & 1;
                local_c0 = local_c0 >> 1;
                if (uVar14 != 0) {
                  iVar6 = iVar6 + 1;
                }
              }
            }
            *(bool *)((longlong)plVar13 + 0x311) = 1 < iVar6;
            if (1 < iVar6) {
              iVar6 = iVar6 + -3;
            }
            if (8 < iVar6) {
              iVar6 = 8;
            }
            if ((iVar6 != 0) && (uVar14 = 0, plVar11 = param_2, 0 < iVar6)) {
              do {
                plStack_a8 = plVar9;
                local_b0 = plVar11;
                lVar7 = (*__imp_KERNEL32_dll_CreateEventW)(0,0,0,0);
                plVar13[uVar14 * 0xc + 0x66] = lVar7;
                if (lVar7 != 0) {
                  lVar7 = (*__imp_KERNEL32_dll_CreateThread)
                                    (0,0,FUN_1800f4040,plVar2 + uVar14 * 0xc,0,0);
                  plVar13[uVar14 * 0xc + 99] = lVar7;
                  if (lVar7 == 0) {
                    plVar9 = (longlong *)plVar13[uVar14 * 0xc + 0x66];
                    pcVar12 = __imp_KERNEL32_dll_CloseHandle;
                  }
                  else {
                    (*__imp_KERNEL32_dll_SetThreadPriority)(lVar7,0xfffffffe);
                    plVar9 = plVar13 + uVar14 * 0xc + 0x67;
                    pcVar12 = __imp_KERNEL32_dll_InitializeCriticalSection;
                  }
                  (*pcVar12)(plVar9);
                }
                uVar1 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar1;
                param_2 = local_b0;
                plVar9 = plStack_a8;
                plVar11 = local_b0;
              } while ((int)uVar1 < iVar6);
            }
          }
          lVar7 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_winmm_dll_18023b830);
          plVar13[0x5f] = lVar7;
          if (lVar7 != 0) {
            lVar7 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar7,s_timeBeginPeriod_18023b820);
            pcVar12 = __imp_KERNEL32_dll_GetProcAddress;
            plVar13[0x60] = lVar7;
            lVar7 = (*pcVar12)(plVar13[0x5f],s_timeEndPeriod_18023b840);
            plVar13[0x61] = lVar7;
            if ((plVar13[0x60] == 0) || (lVar7 == 0)) {
              plVar13[0x60] = 0;
              plVar13[0x61] = 0;
            }
          }
          goto LAB_1800ecbf8;
        }
        (*__imp_KERNEL32_dll_FreeLibrary)(plVar13[0x5b]);
        plVar13[0x5b] = 0;
      }
    }
    (*__imp_KERNEL32_dll_FreeLibrary)(plVar13[0x54]);
    plVar13[0x54] = 0;
  }
  else {
LAB_1800ecbf8:
    local_90 = 0;
    uVar8 = *(undefined8 *)plVar13[0xd0];
    local_a0 = 0x50;
    plStack_98 = plVar13;
    local_88 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
    local_78 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    local_68 = 0;
    local_58 = 0;
    uStack_60 = uVar8;
    sVar4 = (*__imp_USER32_dll_RegisterClassExA)(&local_a0);
    plVar13[2] = 0;
    *(short *)((longlong)plVar13 + 0xc) = sVar4;
    if (sVar4 != 0) {
      iVar6 = (*(code *)plVar13[0x57])(&DAT_18023b850,plVar13 + 0x5d);
      if ((-1 < iVar6) && (uVar14 = FUN_1800e6c98(plVar13), (uVar14 & 1) != 0)) {
        (*__imp_KERNEL32_dll_InitializeCriticalSection)(plVar9);
        plVar13[0xc3] = 0;
        *(undefined1 *)((longlong)plVar13 + 0x313) = 0;
        local_b8 = (longlong *)0x0;
        iVar6 = (*(code *)**(undefined8 **)plVar13[0x5d])
                          ((undefined8 *)plVar13[0x5d],&DAT_1802295d8,&local_b8);
        if (-1 < iVar6) {
          local_c0 = local_c0 & 0xffffffff00000000;
          iVar6 = (**(code **)(*local_b8 + 0xe0))(local_b8,0,&local_c0,4);
          if (-1 < iVar6) {
            *(bool *)((longlong)plVar13 + 0x313) = (int)local_c0 == 1;
          }
          (**(code **)(*local_b8 + 0x10))();
        }
        (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(plVar13 + 0xd4);
        *(undefined1 *)((longlong)plVar13 + 0x314) = 0;
        plVar13[0xd4] = plVar13[0xd4] / 1000;
        *(undefined1 *)(plVar13 + 0x62) = 1;
        lVar7 = (*__imp_KERNEL32_dll_GetProcAddress)
                          (plVar13[0x5b],s_D3D12SerializeRootSignature_18023bcc0);
        plVar13[0x11a] = lVar7;
        if (lVar7 != 0) {
          *(undefined1 *)((longlong)plVar13 + 0x312) = 0;
          if (param_2 != (longlong *)0x0) {
            thunk_FUN_180102fc0(plVar13[0xd8]);
            plVar13[0xd8] = 0;
            plVar13[0xd9] = 0;
            uVar14 = 0;
            if ((int)param_2[1] != 0) {
              do {
                FUN_180006748(plVar13 + 0xd8,*param_2 + uVar14 * 8);
                uVar1 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar1;
              } while (uVar1 < *(uint *)(param_2 + 1));
            }
          }
          cVar3 = '\x01';
          uVar14 = 0;
          if ((int)plVar13[0xd9] == 0) {
            return plVar13;
          }
          do {
            if (cVar3 == '\0') goto LAB_1800ece08;
            puVar10 = *(undefined8 **)(plVar13[0xd8] + uVar14 * 8);
            cVar3 = (**(code **)*puVar10)
                              (puVar10,*(undefined8 *)(plVar13[0xd7] + 0x2d8),plVar13 + 0xd6);
            uVar1 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar1;
          } while (uVar1 < *(uint *)(plVar13 + 0xd9));
          if (cVar3 != '\0') {
            return plVar13;
          }
        }
LAB_1800ece08:
        FUN_1800e40b0(plVar13);
        goto LAB_1800ece60;
      }
      if (*(short *)((longlong)plVar13 + 0xc) != 0) {
        uVar8 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
        (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar13 + 0xc),uVar8);
        if (plVar13[2] != 0) {
          (*__imp_KERNEL32_dll_FreeLibrary)();
          plVar13[2] = 0;
        }
      }
    }
    FUN_1800e3f58(plVar13);
  }
LAB_1800ece60:
  (**(code **)(*plVar13 + 0x80))(plVar13,0);
  FUN_180103118(plVar13[-1]);
  return (longlong *)0x0;
}

