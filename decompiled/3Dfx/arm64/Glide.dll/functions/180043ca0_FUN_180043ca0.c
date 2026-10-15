/*
 * FUN_180043ca0 at 180043ca0
 * undefined1 __cdecl FUN_180043ca0(undefined4 * param_1)
 * Address ranges: 180043ca0-180043f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_180043ca0(undefined4 *param_1)

{
  uint uVar1;
  SIZE_T dwStackSize;
  HMODULE pHVar2;
  FARPROC pFVar3;
  longlong lVar4;
  HANDLE pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (*(char *)((longlong)param_1 + 0x207) != '\0') goto LAB_180043f80;
  *(undefined8 *)(param_1 + 0x7c) = 0x4000;
  *(undefined1 *)((longlong)param_1 + 0x205) = 1;
  *(undefined1 *)((longlong)param_1 + 0x206) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  pHVar2 = LoadLibraryA("KernelBase.dll");
  *(HMODULE *)(param_1 + 0x10) = pHVar2;
  pHVar2 = LoadLibraryA("Kernel32.dll");
  *(HMODULE *)(param_1 + 0x12) = pHVar2;
  if (*(HMODULE *)(param_1 + 0x10) != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0x10),"WakeByAddressAll");
    *(FARPROC *)(param_1 + 0x14) = pFVar3;
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0x10),"WaitOnAddress");
    *(FARPROC *)(param_1 + 0x16) = pFVar3;
    if ((*(longlong *)(param_1 + 0x14) != 0) && (pFVar3 != (FARPROC)0x0)) {
      uVar8 = 0;
      do {
        lVar4 = thunk_FUN_1800609d8((ulonglong)(param_1[0x7c] + 0x10));
        *(longlong *)(param_1 + uVar8 * 10 + 0x28) = lVar4;
        if (lVar4 == 0) {
LAB_180043ddc:
          *(undefined8 *)(param_1 + uVar8 * 10 + 0x24) = 0;
          *(undefined8 *)(param_1 + uVar8 * 10 + 0x22) = 0;
          *(undefined8 *)(param_1 + uVar8 * 10 + 0x28) = 0;
          *(undefined8 *)(param_1 + uVar8 * 10 + 0x26) = 0;
          *(undefined8 *)(param_1 + uVar8 * 10 + 0x2a) = 0;
          break;
        }
        puVar6 = (undefined8 *)(lVar4 + 0xfU & 0xfffffffffffffff0);
        *(undefined8 **)(param_1 + uVar8 * 10 + 0x26) = puVar6;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[2] = 0;
        *(undefined8 *)(param_1 + uVar8 * 10 + 0x22) = *(undefined8 *)(param_1 + uVar8 * 10 + 0x26);
        *(undefined8 *)(param_1 + uVar8 * 10 + 0x24) = *(undefined8 *)(param_1 + uVar8 * 10 + 0x26);
        pvVar5 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
        *(HANDLE *)(param_1 + uVar8 * 10 + 0x2a) = pvVar5;
        if (pvVar5 == (HANDLE)0x0) {
          thunk_FUN_180060a18(*(LPVOID *)(param_1 + uVar8 * 10 + 0x26));
          goto LAB_180043ddc;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < 8);
      uVar7 = (uint)uVar8;
      uVar1 = uVar7;
      if (uVar7 != 8) goto joined_r0x000180043ec4;
      lVar4 = thunk_FUN_1800609d8((ulonglong)(param_1[0x7c] + 0x10));
      *(longlong *)(param_1 + 0x78) = lVar4;
      if (lVar4 == 0) {
LAB_180043ed4:
        do {
          uVar1 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar1;
          CloseHandle(*(HANDLE *)(param_1 + uVar8 * 10 + 0x2a));
          thunk_FUN_180060a18(*(LPVOID *)(param_1 + uVar8 * 10 + 0x28));
          puVar6 = (undefined8 *)(param_1 + uVar8 * 10 + 0x22);
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[3] = 0;
          puVar6[2] = 0;
          puVar6[4] = 0;
          uVar7 = 0;
joined_r0x000180043ec4:
        } while (uVar1 != 0);
        FreeLibrary(*(HMODULE *)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0x16) = 0;
        FreeLibrary(*(HMODULE *)(param_1 + 0x12));
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x12) = 0;
      }
      else {
        puVar6 = (undefined8 *)(lVar4 + 0xfU & 0xfffffffffffffff0);
        *(undefined8 **)(param_1 + 0x76) = puVar6;
        puVar6[1] = 0;
        *puVar6 = 0;
        puVar6[2] = 0;
        pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        *(HANDLE *)(param_1 + 0x20) = pvVar5;
        if (pvVar5 == (HANDLE)0x0) {
LAB_180043ea8:
          thunk_FUN_180060a18(*(LPVOID *)(param_1 + 0x78));
          *(undefined8 *)(param_1 + 0x74) = 0;
          *(undefined8 *)(param_1 + 0x72) = 0;
          *(undefined8 *)(param_1 + 0x78) = 0;
          *(undefined8 *)(param_1 + 0x76) = 0;
          *(undefined8 *)(param_1 + 0x7a) = 0;
          goto LAB_180043ed4;
        }
        pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
        dwStackSize = 0x40000;
        if (0x3ffff < *(ulonglong *)((longlong)&pHVar2[0x18].unused + (longlong)pHVar2[0xf].unused))
        {
          dwStackSize = 0;
        }
        pvVar5 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,dwStackSize,FUN_180043820,param_1,0,
                              (LPDWORD)0x0);
        *(HANDLE *)(param_1 + 0x1e) = pvVar5;
        if (pvVar5 == (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)(param_1 + 0x20));
          goto LAB_180043ea8;
        }
      }
      *(bool *)((longlong)param_1 + 0x207) = uVar7 == 8;
    }
  }
  if (*(HMODULE *)(param_1 + 0x12) != (HMODULE)0x0) {
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 0x12),"GetSystemCpuSetInformation");
    *(FARPROC *)(param_1 + 0x18) = pFVar3;
    FUN_1800434e0((longlong)param_1);
  }
LAB_180043f80:
  return *(undefined1 *)((longlong)param_1 + 0x207);
}

