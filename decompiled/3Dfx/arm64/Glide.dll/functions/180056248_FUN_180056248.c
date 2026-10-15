/*
 * FUN_180056248 at 180056248
 * undefined8 __cdecl FUN_180056248(longlong param_1)
 * Address ranges: 180056248-1800563d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180056248(longlong param_1)

{
  uint uVar1;
  BOOL BVar2;
  HANDLE pvVar3;
  code *pcVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ULONG_PTR local_60 [2];
  
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  FUN_1800611b0((undefined1 *)(param_1 + 0x318),0,0x300);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    local_60[0] = 0;
    local_60[1] = 0;
    iVar5 = 0;
    pvVar3 = GetCurrentProcess();
    BVar2 = GetProcessAffinityMask(pvVar3,local_60,local_60 + 1);
    if (BVar2 != 0) {
      while (local_60[0] != 0) {
        uVar6 = local_60[0] & 1;
        local_60[0] = local_60[0] >> 1;
        if (uVar6 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
    }
    *(bool *)(param_1 + 0x311) = 1 < iVar5;
    if (1 < iVar5) {
      iVar5 = iVar5 + -3;
    }
    if (8 < iVar5) {
      iVar5 = 8;
    }
    if ((iVar5 != 0) && (uVar6 = 0, 0 < iVar5)) {
      do {
        pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        lVar7 = uVar6 * 0x60;
        *(HANDLE *)(param_1 + 0x330 + lVar7) = pvVar3;
        if (pvVar3 != (HANDLE)0x0) {
          pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_1800560c0,
                                (undefined1 *)(param_1 + 0x318) + lVar7,0,(LPDWORD)0x0);
          *(HANDLE *)(param_1 + lVar7 + 0x318) = pvVar3;
          if (pvVar3 == (HANDLE)0x0) {
            lVar7 = *(longlong *)(param_1 + 0x330 + lVar7);
            pcVar4 = CloseHandle_exref;
          }
          else {
            SetThreadPriority(pvVar3,-2);
            lVar7 = lVar7 + param_1 + 0x338;
            pcVar4 = InitializeCriticalSection_exref;
          }
          (*pcVar4)(lVar7);
        }
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
      } while ((int)uVar1 < iVar5);
    }
  }
  return 1;
}

