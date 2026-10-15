/*
 * FUN_10036500 at 10036500
 * undefined1 __fastcall FUN_10036500(undefined4 * param_1)
 * Address ranges: 10036500-10036926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1003682a) */

undefined1 __fastcall FUN_10036500(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  int iVar6;
  undefined8 *puVar7;
  HANDLE pvVar8;
  BOOL BVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  code *pcVar13;
  ULONG_PTR *lpProcessAffinityMask;
  undefined4 **lpSystemAffinityMask;
  _GROUP_AFFINITY *GroupAffinity;
  undefined4 uVar14;
  _GROUP_AFFINITY local_24;
  ULONG_PTR local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  LPVOID local_c;
  uint local_8;
  
  if (*(char *)((int)param_1 + 0x12f) != '\0') {
    return *(undefined1 *)((int)param_1 + 0x12f);
  }
  param_1[0x46] = 0x4000;
  param_1[0x47] = 0;
  *(undefined1 *)((int)param_1 + 0x12d) = 1;
  *(undefined1 *)((int)param_1 + 0x12e) = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  local_14 = param_1;
  pHVar4 = LoadLibraryA("KernelBase.dll");
  param_1[0x10] = pHVar4;
  pHVar4 = LoadLibraryA("Kernel32.dll");
  pcVar13 = GetProcAddress_exref;
  param_1[0x11] = pHVar4;
  if ((HMODULE)param_1[0x10] == (HMODULE)0x0) goto LAB_10036778;
  pFVar5 = GetProcAddress((HMODULE)param_1[0x10],"WakeByAddressAll");
  param_1[0x12] = pFVar5;
  pFVar5 = GetProcAddress((HMODULE)param_1[0x10],"WaitOnAddress");
  param_1[0x13] = pFVar5;
  if ((param_1[0x12] == 0) || (pFVar5 == (FARPROC)0x0)) goto LAB_10036778;
  uVar12 = 0;
  do {
    iVar6 = FUN_1004f9d3(param_1[0x46] + 0x10);
    param_1[uVar12 * 5 + 0x1c] = iVar6;
    local_10 = param_1 + uVar12 * 5 + 0x19;
    if (iVar6 == 0) {
LAB_10036630:
      *local_10 = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      local_10[4] = 0;
      break;
    }
    puVar7 = (undefined8 *)(iVar6 + 0xfU & 0xfffffff0);
    param_1[uVar12 * 5 + 0x1b] = puVar7;
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
    *local_10 = param_1[uVar12 * 5 + 0x1b];
    param_1[uVar12 * 5 + 0x1a] = param_1[uVar12 * 5 + 0x1b];
    pvVar8 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    param_1[uVar12 * 5 + 0x1d] = pvVar8;
    if (pvVar8 == (HANDLE)0x0) {
      thunk_FUN_1004f9b6((LPVOID)param_1[uVar12 * 5 + 0x1b]);
      goto LAB_10036630;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 8);
  if (uVar12 != 8) goto joined_r0x100366fc;
  iVar6 = FUN_1004f9d3(param_1[0x46] + 0x10);
  param_1[0x44] = iVar6;
  if (iVar6 == 0) {
LAB_10036700:
    do {
      CloseHandle((HANDLE)param_1[uVar12 * 5 + 0x18]);
      thunk_FUN_1004f9b6((LPVOID)param_1[uVar12 * 5 + 0x17]);
      puVar1 = param_1 + uVar12 * 5 + 0x14;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      param_1[uVar12 * 5 + 0x18] = 0;
      uVar12 = uVar12 - 1;
joined_r0x100366fc:
    } while (uVar12 != 0);
    FreeLibrary((HMODULE)param_1[0x10]);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    FreeLibrary((HMODULE)param_1[0x11]);
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    uVar3 = 0;
  }
  else {
    puVar7 = (undefined8 *)(iVar6 + 0xfU & 0xfffffff0);
    param_1[0x43] = puVar7;
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
    pvVar8 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    param_1[0x18] = pvVar8;
    if (pvVar8 == (HANDLE)0x0) {
LAB_100366d6:
      thunk_FUN_1004f9b6((LPVOID)param_1[0x44]);
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      param_1[0x45] = 0;
      goto LAB_10036700;
    }
    pHVar4 = GetModuleHandleW((LPCWSTR)0x0);
    pvVar8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,
                          -(uint)(*(uint *)((int)&pHVar4[0x18].unused + pHVar4[0xf].unused) <
                                 0x40000) & 0x40000,FUN_100364e0,param_1,0,(LPDWORD)0x0);
    param_1[0x17] = pvVar8;
    uVar3 = 1;
    if (pvVar8 == (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x18]);
      goto LAB_100366d6;
    }
  }
  pcVar13 = GetProcAddress_exref;
  *(undefined1 *)((int)param_1 + 0x12f) = uVar3;
LAB_10036778:
  if (param_1[0x11] != 0) {
    iVar6 = (*pcVar13)(param_1[0x11],"GetSystemCpuSetInformation");
    param_1[0x14] = iVar6;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    if (iVar6 != 0) {
      lpSystemAffinityMask = &local_10;
      lpProcessAffinityMask = &local_18;
      local_18 = 0;
      local_10 = (undefined4 *)0x0;
      pvVar8 = GetCurrentProcess();
      BVar9 = GetProcessAffinityMask(pvVar8,lpProcessAffinityMask,(PDWORD_PTR)lpSystemAffinityMask);
      if (BVar9 != 0) {
        GroupAffinity = &local_24;
        pvVar8 = GetCurrentThread();
        BVar9 = GetThreadGroupAffinity(pvVar8,GroupAffinity);
        if ((BVar9 != 0) && (local_10 != (undefined4 *)0x0)) {
          pcVar13 = (code *)param_1[0x14];
          uVar14 = 0;
          local_8 = 0;
          pvVar8 = GetCurrentProcess();
          (*pcVar13)(0,0,&local_8,pvVar8,uVar14);
          local_8 = local_8 >> 5;
          if (local_8 != 0) {
            local_c = (LPVOID)FUN_1004f9d3(local_8 * 0x20);
            if (local_c != (LPVOID)0x0) {
              pcVar13 = (code *)param_1[0x14];
              uVar14 = 0;
              iVar6 = local_8 << 5;
              pvVar8 = GetCurrentProcess();
              iVar6 = (*pcVar13)(local_c,iVar6,&local_8,pvVar8,uVar14);
              if (iVar6 != 0) {
                bVar11 = 0;
                local_8 = local_8 >> 5;
                uVar12 = 0;
                if (local_8 != 0) {
                  do {
                    bVar2 = bVar11;
                    if ((*(WORD *)((int)local_c + uVar12 * 0x20 + 0xc) == local_24.Group) &&
                       (bVar2 = *(byte *)((int)local_c + uVar12 * 0x20 + 0x12), bVar2 < bVar11)) {
                      bVar2 = bVar11;
                    }
                    bVar11 = bVar2;
                    uVar12 = uVar12 + 1;
                    param_1 = local_14;
                  } while (uVar12 < local_8);
                }
                uVar12 = 0;
                if (local_8 != 0) {
                  do {
                    iVar6 = uVar12 * 0x20;
                    if (*(WORD *)((int)local_c + iVar6 + 0xc) == local_24.Group) {
                      uVar10 = 1 << (*(byte *)((int)local_c + iVar6 + 0xe) & 0x1f);
                      local_14[0x15] =
                           local_14[0x15] |
                           -(uint)(*(byte *)((int)local_c + iVar6 + 0x12) < bVar11) & uVar10;
                      local_14[0x16] = local_14[0x16] | uVar10;
                    }
                    uVar12 = uVar12 + 1;
                    param_1 = local_14;
                  } while (uVar12 < local_8);
                }
              }
            }
            FUN_1004f9b6(local_c);
          }
        }
      }
    }
  }
  return *(undefined1 *)((int)param_1 + 0x12f);
}

