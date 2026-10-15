/*
 * FUN_180055d60 at 180055d60
 * undefined8 __fastcall FUN_180055d60(longlong param_1)
 * Address ranges: 180055d60-180055ee2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180055d60(longlong param_1)

{
  BOOL BVar1;
  uint uVar2;
  undefined1 *puVar3;
  HANDLE pvVar4;
  undefined1 *extraout_RAX;
  undefined4 extraout_var;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  ULONG_PTR local_res8 [2];
  
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  puVar3 = FUN_180060f94((undefined1 *)(param_1 + 0x318),0,0x300);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    puVar8 = (undefined1 *)0x0;
    local_res8[0] = 0;
    local_res8[1] = 0;
    pvVar4 = GetCurrentProcess();
    BVar1 = GetProcessAffinityMask(pvVar4,local_res8,local_res8 + 1);
    if ((BVar1 != 0) && (local_res8[0] != 0)) {
      do {
        uVar2 = (uint)puVar8 + 1;
        if ((local_res8[0] & 1) == 0) {
          uVar2 = (uint)puVar8;
        }
        local_res8[0] = local_res8[0] >> 1;
        puVar8 = (undefined1 *)(ulonglong)uVar2;
      } while (local_res8[0] != 0);
      local_res8[0] = 0;
    }
    iVar6 = (int)puVar8;
    *(bool *)(param_1 + 0x311) = 1 < iVar6;
    puVar3 = (undefined1 *)(ulonglong)(iVar6 - 3);
    if (iVar6 < 2) {
      puVar3 = puVar8;
    }
    iVar7 = (int)puVar3;
    iVar6 = 8;
    if ((8 < iVar7) || ((iVar7 != 0 && (iVar6 = iVar7, 0 < iVar7)))) {
      iVar7 = 0;
      do {
        pvVar4 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        lVar5 = (longlong)iVar7 * 0x60;
        *(HANDLE *)(param_1 + 0x330 + lVar5) = pvVar4;
        puVar3 = (undefined1 *)0x0;
        if (pvVar4 != (HANDLE)0x0) {
          pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_180055c3c,
                                (undefined1 *)(param_1 + 0x318) + lVar5,0,(LPDWORD)0x0);
          *(HANDLE *)(param_1 + 0x318 + lVar5) = pvVar4;
          if (pvVar4 == (HANDLE)0x0) {
            BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x330 + lVar5));
            puVar3 = (undefined1 *)CONCAT44(extraout_var,BVar1);
          }
          else {
            SetThreadPriority(pvVar4,-2);
            InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x338 + lVar5));
            puVar3 = extraout_RAX;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}

