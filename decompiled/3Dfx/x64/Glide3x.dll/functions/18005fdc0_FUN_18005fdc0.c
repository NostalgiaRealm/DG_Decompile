/*
 * FUN_18005fdc0 at 18005fdc0
 * undefined1 __fastcall FUN_18005fdc0(undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 18005fdc0-180060254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_18005fdc0(undefined4 *param_1,int param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  BOOL BVar4;
  HMODULE pHVar5;
  FARPROC pFVar6;
  longlong lVar7;
  undefined8 *puVar8;
  HANDLE pvVar9;
  undefined8 uVar10;
  LPVOID pvVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar18;
  ulonglong uVar19;
  uint local_res8 [2];
  ULONG_PTR local_res20;
  ULONG_PTR local_38;
  _GROUP_AFFINITY local_30;
  ulonglong uVar17;
  
  if (*(char *)((longlong)param_1 + 0x207) != '\0') {
    return *(undefined1 *)((longlong)param_1 + 0x207);
  }
  uVar19 = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  param_1[0x82] = 0;
  param_1[0x7c] = param_2 << 10;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  pHVar5 = LoadLibraryA("KernelBase.dll");
  *(HMODULE *)(param_1 + 0x10) = pHVar5;
  pHVar5 = LoadLibraryA("Kernel32.dll");
  *(HMODULE *)(param_1 + 0x12) = pHVar5;
  if (*(HMODULE *)(param_1 + 0x10) == (HMODULE)0x0) goto LAB_180060076;
  pFVar6 = GetProcAddress(*(HMODULE *)(param_1 + 0x10),"WakeByAddressAll");
  *(FARPROC *)(param_1 + 0x14) = pFVar6;
  pFVar6 = GetProcAddress(*(HMODULE *)(param_1 + 0x10),"WaitOnAddress");
  *(FARPROC *)(param_1 + 0x16) = pFVar6;
  if ((*(longlong *)(param_1 + 0x14) == 0) || (uVar17 = uVar19, pFVar6 == (FARPROC)0x0))
  goto LAB_180060076;
  do {
    lVar7 = thunk_FUN_180060a9c((ulonglong)(param_1[0x7c] + 0x10));
    *(longlong *)(param_1 + uVar17 * 10 + 0x28) = lVar7;
    if (lVar7 == 0) {
LAB_18005ff19:
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x22) = 0;
      *(undefined8 *)((longlong)(param_1 + uVar17 * 10 + 0x22) + 8) = 0;
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x26) = 0;
      *(undefined8 *)((longlong)(param_1 + uVar17 * 10 + 0x26) + 8) = 0;
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x2a) = 0;
      break;
    }
    puVar8 = (undefined8 *)(lVar7 + 0xfU & 0xfffffffffffffff0);
    *(undefined8 **)(param_1 + uVar17 * 10 + 0x26) = puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined8 *)(param_1 + uVar17 * 10 + 0x22) = *(undefined8 *)(param_1 + uVar17 * 10 + 0x26);
    *(undefined8 *)(param_1 + uVar17 * 10 + 0x24) = *(undefined8 *)(param_1 + uVar17 * 10 + 0x26);
    pvVar9 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    *(HANDLE *)(param_1 + uVar17 * 10 + 0x2a) = pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      FUN_180060ac0(*(LPVOID *)(param_1 + uVar17 * 10 + 0x26));
      goto LAB_18005ff19;
    }
    uVar14 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar14;
  } while (uVar14 < 8);
  uVar14 = (uint)uVar17;
  uVar15 = uVar14;
  if (uVar14 != 8) goto joined_r0x00018005fff2;
  lVar7 = thunk_FUN_180060a9c((ulonglong)(param_1[0x7c] + 0x10));
  *(longlong *)(param_1 + 0x78) = lVar7;
  if (lVar7 == 0) {
LAB_180060000:
    do {
      uVar15 = (int)uVar17 - 1;
      uVar17 = (ulonglong)uVar15;
      CloseHandle(*(HANDLE *)(param_1 + uVar17 * 10 + 0x2a));
      FUN_180060ac0(*(LPVOID *)(param_1 + uVar17 * 10 + 0x28));
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x22) = 0;
      *(undefined8 *)((longlong)(param_1 + uVar17 * 10 + 0x22) + 8) = 0;
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x26) = 0;
      *(undefined8 *)((longlong)(param_1 + uVar17 * 10 + 0x26) + 8) = 0;
      *(undefined8 *)(param_1 + uVar17 * 10 + 0x2a) = 0;
      uVar14 = 0;
joined_r0x00018005fff2:
    } while (uVar15 != 0);
    FreeLibrary(*(HMODULE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    FreeLibrary(*(HMODULE *)(param_1 + 0x12));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    puVar8 = (undefined8 *)(lVar7 + 0xfU & 0xfffffffffffffff0);
    *(undefined8 **)(param_1 + 0x76) = puVar8;
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    pvVar9 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x20) = pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
LAB_18005ffe6:
      FUN_18005fd80((longlong)param_1);
      goto LAB_180060000;
    }
    pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
    uVar12 = (ulonglong)(uint)(param_3 << 10);
    if ((ulonglong)(uint)(param_3 << 10) <=
        *(ulonglong *)((longlong)&pHVar5[0x18].unused + (longlong)pHVar5[0xf].unused)) {
      uVar12 = uVar19;
    }
    pvVar9 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,uVar12,FUN_1800606f0,param_1,0,(LPDWORD)0x0);
    *(HANDLE *)(param_1 + 0x1e) = pvVar9;
    if (pvVar9 == (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(param_1 + 0x20));
      goto LAB_18005ffe6;
    }
  }
  *(bool *)((longlong)param_1 + 0x207) = uVar14 == 8;
LAB_180060076:
  if (*(HMODULE *)(param_1 + 0x12) != (HMODULE)0x0) {
    pFVar6 = GetProcAddress(*(HMODULE *)(param_1 + 0x12),"GetSystemCpuSetInformation");
    *(FARPROC *)(param_1 + 0x18) = pFVar6;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    if (pFVar6 != (FARPROC)0x0) {
      local_38 = 0;
      local_res20 = 0;
      pvVar9 = GetCurrentProcess();
      BVar4 = GetProcessAffinityMask(pvVar9,&local_38,&local_res20);
      if (BVar4 != 0) {
        pvVar9 = GetCurrentThread();
        BVar4 = GetThreadGroupAffinity(pvVar9,&local_30);
        if ((BVar4 != 0) && (local_res20 != 0)) {
          pcVar2 = *(code **)(param_1 + 0x18);
          local_res8[0] = 0;
          pvVar9 = GetCurrentProcess();
          (*pcVar2)(0,0,local_res8,pvVar9,0);
          if (local_res8[0] >> 5 != 0) {
            auVar3 = ZEXT816(0x20) * ZEXT416(local_res8[0] >> 5);
            uVar10 = auVar3._0_8_;
            if (auVar3._8_8_ != 0) {
              uVar10 = 0xffffffffffffffff;
            }
            local_res8[0] = local_res8[0] >> 5;
            pvVar11 = (LPVOID)thunk_FUN_180060a9c(uVar10);
            if (pvVar11 != (LPVOID)0x0) {
              pcVar2 = *(code **)(param_1 + 0x18);
              iVar16 = local_res8[0] << 5;
              pvVar9 = GetCurrentProcess();
              iVar16 = (*pcVar2)(pvVar11,iVar16,local_res8,pvVar9,0);
              if (iVar16 != 0) {
                bVar13 = 0;
                uVar14 = local_res8[0] >> 5;
                uVar17 = uVar19;
                if (local_res8[0] >> 5 != 0) {
                  do {
                    bVar1 = bVar13;
                    if ((*(WORD *)(uVar17 * 0x20 + 0xc + (longlong)pvVar11) == local_30.Group) &&
                       (bVar1 = *(byte *)(uVar17 * 0x20 + 0x12 + (longlong)pvVar11), bVar1 < bVar13)
                       ) {
                      bVar1 = bVar13;
                    }
                    bVar13 = bVar1;
                    uVar15 = (int)uVar17 + 1;
                    uVar17 = (ulonglong)uVar15;
                  } while (uVar15 < uVar14);
                }
                uVar15 = local_res8[0] >> 5;
                uVar17 = uVar19;
                local_res8[0] = uVar14;
                if (uVar15 != 0) {
                  do {
                    lVar7 = uVar17 * 0x20;
                    if (*(WORD *)(lVar7 + 0xc + (longlong)pvVar11) == local_30.Group) {
                      uVar18 = 1L << (*(byte *)(lVar7 + 0xe + (longlong)pvVar11) & 0x3f);
                      uVar12 = uVar19;
                      if (*(byte *)(lVar7 + 0x12 + (longlong)pvVar11) < bVar13) {
                        uVar12 = uVar18;
                      }
                      *(ulonglong *)(param_1 + 0x1a) = *(ulonglong *)(param_1 + 0x1a) | uVar12;
                      *(ulonglong *)(param_1 + 0x1c) = *(ulonglong *)(param_1 + 0x1c) | uVar18;
                    }
                    uVar15 = (int)uVar17 + 1;
                    uVar17 = (ulonglong)uVar15;
                  } while (uVar15 < uVar14);
                }
              }
            }
            FUN_180060ac0(pvVar11);
          }
        }
      }
    }
  }
  return *(undefined1 *)((longlong)param_1 + 0x207);
}

