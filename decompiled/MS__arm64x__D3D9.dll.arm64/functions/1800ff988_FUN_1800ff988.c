/*
 * FUN_1800ff988 at 1800ff988
 * undefined FUN_1800ff988(void)
 * Address ranges: 1800ff988-180100177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800ff988(void)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  code *pcVar15;
  uint uVar16;
  longlong lVar17;
  undefined ***local_1020;
  undefined1 *local_1018;
  undefined4 local_1010;
  undefined8 local_1008;
  undefined8 *puStack_1000;
  undefined8 local_ff8;
  undefined8 local_ff0;
  undefined8 uStack_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  char *pcStack_fc8;
  undefined8 local_fc0;
  undefined **local_fb8;
  undefined8 uStack_fb0;
  undefined4 local_fa8;
  char *local_fa0;
  undefined4 local_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  undefined8 local_f80;
  undefined8 uStack_f78;
  undefined8 local_f70;
  undefined1 local_f68;
  undefined4 local_f64;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined4 local_f50;
  undefined8 local_f48;
  undefined8 uStack_f40;
  undefined8 local_f38;
  undefined4 local_f30;
  undefined8 local_f28;
  undefined8 uStack_f20;
  undefined4 local_f18;
  undefined1 auStack_eb0 [8];
  undefined8 *local_ea8;
  undefined1 auStack_e60 [520];
  undefined1 auStack_c58 [520];
  undefined1 auStack_a50 [520];
  undefined1 auStack_848 [520];
  undefined1 auStack_640 [512];
  undefined1 auStack_440 [1024];
  
  uVar9 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
  iVar7 = (*__imp_USER32_dll_GetClassInfoExA)(uVar9,s_DGDRIVERROOT_18023c730,auStack_eb0);
  if ((iVar7 != 0) && (local_ea8 != (undefined8 *)0x0)) {
    iVar7 = (**(code **)*local_ea8)(local_ea8);
    puVar10 = local_ea8;
    if (iVar7 != 0x287) {
      puVar10 = (undefined8 *)0x0;
    }
    goto LAB_18010014c;
  }
  puVar10 = (undefined8 *)FUN_180102f80(0xa10);
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[0x1c] = &DAT_18023383c;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x6c) = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x1a] = 0;
    *(undefined4 *)(puVar10 + 0x1b) = 1;
    *(undefined4 *)(puVar10 + 0x1d) = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x26] = 0;
    puVar10[0x27] = 0;
    puVar10[0x28] = 0;
    puVar10[0x29] = 0;
    *puVar10 = &PTR_DAT_18023c750;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 4) = 0;
    puVar10[0x20] = 0;
    puVar10[0x21] = 0;
    puVar10[0x22] = 0;
    *(undefined4 *)(puVar10 + 0x23) = 0x287;
    puVar10[0x24] = 0;
    *(undefined4 *)(puVar10 + 0x25) = 0;
    puVar10[0x2a] = 0;
    puVar10[0x2b] = 0;
    *(undefined4 *)(puVar10 + 0x2c) = 0;
    FUN_1800d14a0(puVar10 + 0x7a);
    FUN_1800d14a0((longlong)puVar10 + 0x5dc);
    FUN_1800d14a0(puVar10 + 0x100);
    *(undefined2 *)((longlong)puVar10 + 0xa0c) = 0x101;
    func_0x000180222c50((longlong)puVar10 + 0x164,0,0x20c);
    lVar11 = DAT_18024e320;
    pcVar15 = __imp_KERNEL32_dll_GetModuleHandleW;
    puStack_1000 = puVar10;
    if (puVar10 == (undefined8 *)0xffffffffffffff98) {
      puStack_1000 = (undefined8 *)0x0;
    }
    local_ff8 = 0;
    local_1008 = 0x50;
    puVar10[0xff] = 0;
    puVar10[0xfe] = 0;
    local_ff0 = (*pcVar15)(0);
    local_fe0 = 0;
    uStack_fd8 = 0;
    uStack_fe8 = 0;
    local_fd0 = 0;
    pcStack_fc8 = s_DGDRIVERROOT_18023c730;
    local_fc0 = 0;
    sVar6 = (*__imp_USER32_dll_RegisterClassExA)(&local_1008);
    *(short *)((longlong)puVar10 + 0x6c) = sVar6;
    if (sVar6 == 0) {
      lVar11 = 0;
    }
    puVar10[0xe] = lVar11;
    if (lVar11 != 0) {
      (*__imp_KERNEL32_dll_GetModuleFileNameA)(lVar11,auStack_440,0x400);
      lVar11 = (*__imp_KERNEL32_dll_LoadLibraryA)(auStack_440);
      if (lVar11 == 0) {
        puVar10[0xe] = 0;
      }
    }
    if (*(short *)((longlong)puVar10 + 0x6c) != 0) {
      puVar10[0x24] = 0;
      func_0x000180222c50(puVar10 + 0x6e,0,0x480);
      cVar5 = DAT_18024de41;
      *(undefined4 *)(puVar10 + 0x1b) = 1;
      puVar10[0x1c] = s__dgVoodoo__180235e58;
      puVar1 = (uint *)(puVar10 + 0x1a);
      *(undefined4 *)(puVar10 + 0x1d) = 0;
      puVar10[0x1e] = 0;
      puVar1[0] = 1;
      puVar1[1] = 1;
      if (cVar5 == '\0') {
        if (DAT_18024e320 != 0) {
          (*__imp_KERNEL32_dll_GetModuleFileNameW)(DAT_18024e320,auStack_c58,0x104);
          (*__imp_SHLWAPI_dll_PathRemoveFileSpecW)(auStack_c58);
          (*__imp_SHLWAPI_dll_PathAppendW)(auStack_c58,u_dgVoodoo_conf_18023c6d8);
          puVar3 = (uint *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            puVar3 = puVar1;
          }
          uVar12 = FUN_1800d1610(puVar10 + 0x100,auStack_c58,puVar3);
          if ((uVar12 & 1) != 0) goto LAB_1800ffe24;
        }
        (*__imp_KERNEL32_dll_GetModuleFileNameW)(0,auStack_a50,0x104);
        (*__imp_SHLWAPI_dll_PathRemoveFileSpecW)(auStack_a50);
        (*__imp_SHLWAPI_dll_PathAppendW)(auStack_a50,u_dgVoodoo_conf_18023c6d8);
        iVar7 = (*__imp_SHLWAPI_dll_Ordinal_158)(auStack_a50,auStack_c58);
        if (iVar7 != 0) {
          puVar3 = (uint *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            puVar3 = puVar1;
          }
          uVar12 = FUN_1800d1610(puVar10 + 0x100,auStack_a50,puVar3);
          if ((uVar12 & 1) != 0) goto LAB_1800ffe24;
        }
        iVar7 = (*__imp_SHELL32_dll_SHGetFolderPathW)(0,0x1a,0,0,auStack_e60);
        if (-1 < iVar7) {
          (*__imp_SHLWAPI_dll_PathAppendW)(auStack_e60,u_dgVoodoo_18023c718);
          local_fa0 = s__dgVoodoo_IniParser__18023a050;
          local_fa8 = 1;
          local_fb8 = &PTR_FUN_18023af30;
          uStack_fb0 = 0x100000001;
          local_f98 = 0;
          local_f90 = 0;
          uStack_f88 = 0;
          local_f80 = 0;
          uStack_f78 = 0;
          local_f70 = 0;
          local_f68 = 1;
          local_f64 = 0;
          local_f60 = 0;
          uStack_f58 = 0;
          local_f50 = 0;
          local_f48 = 0;
          uStack_f40 = 0;
          local_f38 = 0;
          local_f30 = 0;
          local_f28 = 0;
          uStack_f20 = 0;
          local_f18 = 0;
          func_0x000180223210(auStack_848,auStack_e60);
          (*__imp_SHLWAPI_dll_PathAppendW)(auStack_848,u_dgVoodooSettings_ini_18023afe0);
          (*__imp_KERNEL32_dll_WideCharToMultiByte)
                    (0,0x200,auStack_848,0xffffffff,auStack_440,0x30a,0,0);
          cVar5 = (*(code *)local_fb8[3])(&local_fb8,auStack_848,1);
          if (cVar5 != '\0') {
            local_1020 = &local_fb8;
            local_1018 = auStack_e60;
            local_1010 = 0x104;
            uVar16 = 0;
            iVar7 = (*(code *)local_fb8[5])(&local_fb8);
            if (iVar7 != 0) {
              do {
                lVar11 = (*(code *)local_fb8[6])(&local_fb8,uVar16);
                if (lVar11 == 0) {
                  FUN_1800d8f68(&local_1020,uVar16);
                  break;
                }
                uVar16 = uVar16 + 1;
                uVar8 = (*(code *)local_fb8[5])(&local_fb8);
              } while (uVar16 < uVar8);
            }
          }
          (*__imp_SHLWAPI_dll_PathAppendW)(auStack_e60,u_dgVoodoo_conf_18023c6d8);
          puVar3 = (uint *)0x0;
          if (puVar10 != (undefined8 *)0x0) {
            puVar3 = puVar1;
          }
          FUN_1800d1610(puVar10 + 0x100,auStack_e60,puVar3);
          FUN_1800d73d0(&local_fb8);
        }
      }
      else {
        thunk_FUN_180001218(puVar10 + 0x100,&DAT_180258560,0x20c);
      }
LAB_1800ffe24:
      (*__imp_KERNEL32_dll_GetModuleFileNameA)(0,auStack_640,0x200);
      puVar13 = (undefined1 *)(*__imp_SHLWAPI_dll_PathFindFileNameA)(auStack_640);
      if (puVar13 != auStack_640) {
        FUN_180103158();
        if ((*(int *)((longlong)puVar10 + 0x8be) == 0) &&
           (lVar11 = func_0x000180222d30(puVar13,s_dosbox_18023ad84), lVar11 != 0)) {
          *(int *)((longlong)puVar10 + 0x8be) = 1;
        }
      }
      puVar10[0x1c] = s__dgVoodoo__180235e58;
      puVar10[0x1e] = 0;
      uVar16 = (uint)(*(int *)((longlong)puVar10 + 0x9fb) == 1);
      if (*(int *)((longlong)puVar10 + 0x9fb) == 2) {
        uVar16 = 2;
      }
      *puVar1 = uVar16;
      uVar16 = (uint)(*(int *)((longlong)puVar10 + 0x9ff) == 1);
      if (*(int *)((longlong)puVar10 + 0x9ff) == 2) {
        uVar16 = 2;
      }
      uVar8 = (uint)(*(int *)((longlong)puVar10 + 0xa03) == 1);
      if (*(int *)((longlong)puVar10 + 0xa03) == 2) {
        uVar8 = 2;
      }
      *(uint *)((longlong)puVar10 + 0xd4) = uVar16;
      *(uint *)(puVar10 + 0x1b) = uVar8;
      *(undefined4 *)(puVar10 + 0x1d) = *(undefined4 *)((longlong)puVar10 + 0xa07);
      lVar11 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_USER32_DLL_18023c6f8);
      if (lVar11 != 0) {
        lVar14 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar11,s_CallWindowProcA_18023c708);
        puVar10[0x1f] = lVar14;
        if (lVar14 != 0) {
          lVar11 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar11,s_CallWindowProcW_18023c740);
          puVar10[0x20] = lVar11;
          if (lVar11 != 0) {
            lVar11 = (*__imp_KERNEL32_dll_VirtualAlloc)(0,0x1000,0x1000,0x40);
            puVar10[0x21] = lVar11;
            if (lVar11 != 0) {
              lVar11 = (*__imp_KERNEL32_dll_VirtualAlloc)(0,0x2000,0x1000,0x40);
              puVar10[0x22] = lVar11;
              if (lVar11 != 0) {
                lVar11 = (*__imp_KERNEL32_dll_VirtualAlloc)(0,0x2700,0x1000,0x40);
                puVar10[0x15] = lVar11;
                if (lVar11 != 0) {
                  puVar3 = (uint *)0x0;
                  if (puVar10 != (undefined8 *)0x0) {
                    puVar3 = puVar1;
                  }
                  puVar10[3] = puVar3;
                  *(undefined4 *)(puVar10 + 4) = 0x287;
                  lVar11 = (*__imp_KERNEL32_dll_LoadLibraryA)(s_SampleAddon_dll_18023c890);
                  if (lVar11 != 0) {
                    (*__imp_KERNEL32_dll_GetModuleFileNameA)(lVar11,&local_fb8,0x104);
                    pcVar15 = (code *)(*__imp_KERNEL32_dll_GetProcAddress)
                                                (lVar11,s_AddOnInit_18023c8a0);
                    lVar14 = (*__imp_KERNEL32_dll_GetProcAddress)(lVar11,s_AddOnExit_18023c8b0);
                    if (((pcVar15 == (code *)0x0) || (lVar14 == 0)) ||
                       (cVar5 = (*pcVar15)(puVar10), cVar5 == '\0')) {
                      (*__imp_KERNEL32_dll_FreeLibrary)(lVar11);
                    }
                    else {
                      iVar7 = *(int *)((longlong)puVar10 + 0x14);
                      if (*(int *)(puVar10 + 2) == iVar7) {
                        uVar16 = iVar7 << 1;
                        if (iVar7 == 0) {
                          uVar16 = 0x10;
                        }
                        lVar17 = CONCAT44(0,uVar16) * 0x18;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = CONCAT44(0,uVar16);
                        if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
                          lVar17 = -1;
                        }
                        lVar17 = thunk_FUN_180102f80(lVar17);
                        if (lVar17 == 0) goto LAB_1801000d8;
                        thunk_FUN_180001218(lVar17,puVar10[1],
                                            (ulonglong)*(uint *)((longlong)puVar10 + 0x14) * 0x18);
                        thunk_FUN_180102fc0(puVar10[1]);
                        puVar10[1] = lVar17;
                        *(uint *)((longlong)puVar10 + 0x14) = uVar16;
                      }
                      plVar2 = (longlong *)(puVar10[1] + (ulonglong)*(uint *)(puVar10 + 2) * 0x18);
                      *plVar2 = lVar11;
                      plVar2[1] = (longlong)pcVar15;
                      plVar2[2] = lVar14;
                      *(int *)(puVar10 + 2) = *(int *)(puVar10 + 2) + 1;
                    }
                  }
LAB_1801000d8:
                  puVar10[0x17] = 0;
                  puVar10[0x16] = 0;
                  puVar10[0x19] = 0;
                  puVar10[0x18] = 0;
                  thunk_FUN_180102fc0(puVar10[0x11]);
                  puVar10[0x11] = 0;
                  puVar10[0x12] = 0;
                  goto LAB_18010014c;
                }
              }
            }
          }
        }
      }
      if (*(short *)((longlong)puVar10 + 0x6c) != 0) {
        uVar9 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
        (*__imp_USER32_dll_UnregisterClassW)(*(undefined2 *)((longlong)puVar10 + 0x6c),uVar9);
        if (puVar10[0xe] != 0) {
          (*__imp_KERNEL32_dll_FreeLibrary)();
          puVar10[0xe] = 0;
        }
      }
    }
    FUN_1800ff920(puVar10);
    FUN_180102fc0(puVar10,0xa10);
  }
  puVar10 = (undefined8 *)0x0;
LAB_18010014c:
  if (puVar10 != (undefined8 *)0x0) {
    FUN_1800015a0(puVar10 + 0xd);
  }
  return puVar10;
}

