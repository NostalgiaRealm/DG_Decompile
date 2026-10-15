/*
 * FUN_100c2b6f at 100c2b6f
 * undefined4 __fastcall FUN_100c2b6f(int param_1)
 * Address ranges: 100c2b6f-100c2c8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100c2b6f(int param_1)

{
  int *piVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  int *extraout_EAX;
  int iVar4;
  int *piVar5;
  ULONG_PTR *lpProcessAffinityMask;
  ULONG_PTR *lpSystemAffinityMask;
  ULONG_PTR local_10;
  int local_c;
  ULONG_PTR local_8;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  *(undefined4 *)(param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  piVar1 = FUN_100cfed0((int *)(param_1 + 0x2dc),0,0x1c0);
  if (*(int *)(param_1 + 0x2a4) != 0) {
    lpSystemAffinityMask = &local_10;
    local_8 = 0;
    lpProcessAffinityMask = &local_8;
    local_10 = 0;
    piVar5 = (int *)0x0;
    pvVar2 = GetCurrentProcess();
    BVar3 = GetProcessAffinityMask(pvVar2,lpProcessAffinityMask,lpSystemAffinityMask);
    if ((BVar3 != 0) && (piVar1 = piVar5, local_8 != 0)) {
      do {
        piVar5 = (int *)((int)piVar1 + 1);
        if ((local_8 & 1) == 0) {
          piVar5 = piVar1;
        }
        local_8 = local_8 >> 1;
        piVar1 = piVar5;
      } while (local_8 != 0);
      local_8 = 0;
    }
    *(bool *)(param_1 + 0x2d5) = 1 < (int)piVar5;
    piVar1 = (int *)((int)piVar5 + -3);
    if ((int)piVar5 < 2) {
      piVar1 = piVar5;
    }
    piVar5 = (int *)&DAT_00000008;
    if ((8 < (int)piVar1) || ((piVar1 != (int *)0x0 && (piVar5 = piVar1, 0 < (int)piVar1)))) {
      do {
        pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        local_c = iVar4 * 0x38;
        *(HANDLE *)(param_1 + 0x2ec + local_c) = pvVar2;
        piVar1 = (int *)0x0;
        if (pvVar2 != (HANDLE)0x0) {
          pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_100c2ab0,
                                (LPVOID)(param_1 + 0x2dc + local_c),0,(LPDWORD)0x0);
          *(HANDLE *)(param_1 + 0x2dc + local_c) = pvVar2;
          if (pvVar2 == (HANDLE)0x0) {
            piVar1 = (int *)CloseHandle(*(HANDLE *)(param_1 + 0x2ec + local_c));
          }
          else {
            SetThreadPriority(pvVar2,-2);
            InitializeCriticalSection((LPCRITICAL_SECTION)(local_c + 0x2f0 + param_1));
            piVar1 = extraout_EAX;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)piVar5);
    }
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),1);
}

