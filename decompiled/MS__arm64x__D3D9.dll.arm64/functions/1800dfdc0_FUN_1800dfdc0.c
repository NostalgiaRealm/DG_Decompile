/*
 * FUN_1800dfdc0 at 1800dfdc0
 * undefined FUN_1800dfdc0(void)
 * Address ranges: 1800dfdc0-1800e0303
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800dfdc0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  code *pcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar6 = FUN_180102f80(0x192f8);
  lVar12 = 0x10;
  plVar10 = (longlong *)(lVar6 + 0x47U & 0xffffffffffffffc0);
  plVar10[-1] = lVar6;
  *(undefined4 *)(plVar10 + 1) = 0;
  uVar11 = (ulonglong)plVar10 | 0x18;
  *(undefined2 *)((longlong)plVar10 + 0xc) = 0;
  plVar10[2] = 0;
  *plVar10 = (longlong)&PTR_D3DPERF_GetStatus_18023b860;
  do {
    lVar12 = lVar12 + -1;
    FUN_1800e3e70(uVar11);
    uVar11 = uVar11 + 0x28;
  } while (lVar12 != 0);
  plVar10[0x61] = 0;
  plVar10[0x53] = param_1;
  plVar10[0x54] = 0;
  plVar2 = plVar10 + 99;
  plVar10[0x55] = 0;
  plVar10[0x56] = 0;
  plVar10[0x57] = 0;
  plVar10[0x58] = 0;
  plVar10[0x59] = 0;
  plVar10[0x5a] = 0;
  plVar10[0x5b] = 0;
  plVar10[0x5c] = 0;
  plVar10[0x5d] = 0;
  plVar10[0x5e] = 0;
  plVar10[0x5f] = 0;
  plVar10[0x60] = 0;
  *(undefined4 *)(plVar10 + 0x62) = 0x10000;
  lVar6 = 8;
  *(undefined1 *)((longlong)plVar10 + 0x314) = 0;
  plVar8 = plVar2;
  do {
    plVar8[1] = 0;
    plVar8[2] = 0;
    lVar6 = lVar6 + -1;
    plVar8 = plVar8 + 0xc;
  } while (lVar6 != 0);
  plVar10[0xc3] = 0;
  plVar8 = plVar10 + 0xc4;
  *(undefined4 *)(plVar10 + 0xcf) = 0;
  plVar10[0xc9] = 0;
  plVar10[0xca] = 0;
  plVar13 = plVar10 + 0xd6;
  plVar10[0xcb] = 0;
  plVar10[0xcc] = 0;
  lVar6 = 0x10;
  plVar10[0xd2] = 0;
  plVar10[0xd3] = 0;
  plVar10[0xd0] = (longlong)&PTR_s_DGD3D11ROOT_18024b150;
  plVar10[0xd1] = 0;
  *(undefined1 *)((longlong)plVar10 + 0x67c) = 0;
  plVar10[0xd4] = 0;
  plVar10[0xc5] = 0;
  *plVar8 = 0;
  plVar10[199] = 0;
  plVar10[0xc6] = 0;
  plVar10[200] = 0;
  plVar10[0xce] = 0;
  plVar10[0xcd] = 0;
  *plVar10 = (longlong)&PTR_FUN_18023b758;
  do {
    lVar6 = lVar6 + -1;
    FUN_1800dfb50(plVar13);
    plVar13 = plVar13 + 0x318;
  } while (lVar6 != 0);
  if ((plVar10[0x54] == 0) && (plVar10[0x5b] == 0)) {
    lVar6 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_DXGI_DLL_18023b810);
    plVar10[0x54] = lVar6;
    if (lVar6 == 0) goto LAB_1800e02c8;
    lVar6 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar6,s_LCreateDXGIFactory1_18023b7f7 + 1);
    plVar10[0x57] = lVar6;
    if (lVar6 != 0) {
      lVar6 = (*__imp_KERNEL32_dll_LoadLibraryA)(*(undefined8 *)(plVar10[0xd0] + 0x10));
      plVar10[0x5b] = lVar6;
      if (lVar6 != 0) {
        lVar6 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar6,*(undefined8 *)(plVar10[0xd0] + 0x18));
        plVar10[0x5c] = lVar6;
        if (lVar6 != 0) {
          plVar10[0x56] = 0;
          plVar10[0x58] = 0;
          plVar10[0x59] = 0;
          plVar10[0x5a] = 0;
          func_0x000180222c50(plVar2,0,0x300);
          if (plVar10[0x56] != 0) {
            local_c0 = 0;
            local_b8 = (longlong *)0x0;
            iVar5 = 0;
            uVar7 = (*__imp_KERNEL32_dll_GetCurrentProcess)();
            iVar4 = (*__imp_KERNEL32_dll_GetProcessAffinityMask)(uVar7,&local_c0,&local_b8);
            if (iVar4 != 0) {
              while (local_c0 != 0) {
                uVar11 = local_c0 & 1;
                local_c0 = local_c0 >> 1;
                if (uVar11 != 0) {
                  iVar5 = iVar5 + 1;
                }
              }
            }
            *(bool *)((longlong)plVar10 + 0x311) = 1 < iVar5;
            if (1 < iVar5) {
              iVar5 = iVar5 + -3;
            }
            if (8 < iVar5) {
              iVar5 = 8;
            }
            if ((iVar5 != 0) && (uVar11 = 0, 0 < iVar5)) {
              do {
                local_b0 = plVar8;
                lVar6 = (*__imp_KERNEL32_dll_CreateEventW)(0,0,0,0);
                plVar10[uVar11 * 0xc + 0x66] = lVar6;
                if (lVar6 != 0) {
                  lVar6 = (*__imp_KERNEL32_dll_CreateThread)
                                    (0,0,FUN_1800f4040,plVar2 + uVar11 * 0xc,0,0);
                  plVar10[uVar11 * 0xc + 99] = lVar6;
                  if (lVar6 == 0) {
                    plVar8 = (longlong *)plVar10[uVar11 * 0xc + 0x66];
                    pcVar9 = __imp_KERNEL32_dll_CloseHandle;
                  }
                  else {
                    (*__imp_KERNEL32_dll_SetThreadPriority)(lVar6,0xfffffffe);
                    plVar8 = plVar10 + uVar11 * 0xc + 0x67;
                    pcVar9 = __imp_KERNEL32_dll_InitializeCriticalSection;
                  }
                  (*pcVar9)(plVar8);
                }
                uVar1 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar1;
                plVar8 = local_b0;
              } while ((int)uVar1 < iVar5);
            }
          }
          lVar6 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_winmm_dll_18023b830);
          plVar10[0x5f] = lVar6;
          if (lVar6 != 0) {
            lVar6 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar6,s_timeBeginPeriod_18023b820);
            pcVar9 = __imp_KERNEL32_dll_GetProcAddress;
            plVar10[0x60] = lVar6;
            lVar6 = (*pcVar9)(plVar10[0x5f],s_timeEndPeriod_18023b840);
            plVar10[0x61] = lVar6;
            if ((plVar10[0x60] == 0) || (lVar6 == 0)) {
              plVar10[0x60] = 0;
              plVar10[0x61] = 0;
            }
          }
          goto LAB_1800e011c;
        }
        (*__imp_KERNEL32_dll_FreeLibrary)(plVar10[0x5b]);
        plVar10[0x5b] = 0;
      }
    }
    (*__imp_KERNEL32_dll_FreeLibrary)(plVar10[0x54]);
    plVar10[0x54] = 0;
  }
  else {
LAB_1800e011c:
    local_98 = 0;
    uVar7 = *(undefined8 *)plVar10[0xd0];
    local_a8 = 0x50;
    plStack_a0 = plVar10;
    local_90 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
    local_80 = 0;
    uStack_78 = 0;
    uStack_88 = 0;
    local_70 = 0;
    local_60 = 0;
    uStack_68 = uVar7;
    sVar3 = (*__imp_USER32_dll_RegisterClassExA)(&local_a8);
    plVar10[2] = 0;
    *(short *)((longlong)plVar10 + 0xc) = sVar3;
    if (sVar3 != 0) {
      iVar5 = (*(code *)plVar10[0x57])(&DAT_18023b850,plVar10 + 0x5d);
      if ((-1 < iVar5) && (uVar11 = FUN_1800e6c98(plVar10), (uVar11 & 1) != 0)) {
        (*__imp_KERNEL32_dll_InitializeCriticalSection)(plVar8);
        plVar10[0xc3] = 0;
        *(undefined1 *)((longlong)plVar10 + 0x313) = 0;
        local_b8 = (longlong *)0x0;
        iVar5 = (*(code *)**(undefined8 **)plVar10[0x5d])
                          ((undefined8 *)plVar10[0x5d],&DAT_1802295d8,&local_b8);
        if (-1 < iVar5) {
          local_c0 = local_c0 & 0xffffffff00000000;
          iVar5 = (**(code **)(*local_b8 + 0xe0))(local_b8,0,&local_c0,4);
          if (-1 < iVar5) {
            *(bool *)((longlong)plVar10 + 0x313) = (int)local_c0 == 1;
          }
          (**(code **)(*local_b8 + 0x10))();
        }
        (*__imp_KERNEL32_dll_QueryPerformanceFrequency)(plVar10 + 0xd4);
        *(undefined1 *)((longlong)plVar10 + 0x314) = 0;
        plVar10[0xd4] = plVar10[0xd4] / 1000;
        *(undefined1 *)(plVar10 + 0x62) = 1;
        return plVar10;
      }
      if (*(short *)((longlong)plVar10 + 0xc) != 0) {
        uVar7 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
        (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)plVar10 + 0xc),uVar7);
        if (plVar10[2] != 0) {
          (*__imp_KERNEL32_dll_FreeLibrary)();
          plVar10[2] = 0;
        }
      }
    }
    FUN_1800e3f58(plVar10);
  }
LAB_1800e02c8:
  (**(code **)(*plVar10 + 0x80))(plVar10,0);
  FUN_180103118(plVar10[-1]);
  return (longlong *)0x0;
}

