/*
 * FUN_180011f48 at 180011f48
 * bool __cdecl FUN_180011f48(longlong param_1)
 * Address ranges: 180011f48-1800120d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180011f48(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  
  FUN_180011b28(param_1);
  bVar3 = false;
  if (*(char *)(param_1 + 0x2c83) == '\0') goto LAB_1800120a8;
  QueryPerformanceFrequency(&local_50);
  local_50.QuadPart = local_50.QuadPart >> 0xc;
  QueryPerformanceCounter(&local_48);
  plVar1 = (longlong *)(param_1 + 0x3340);
  puVar2 = (undefined8 *)(param_1 + 0x3398);
  if (*(char *)(param_1 + 0x2c7e) == '\0') {
    iVar4 = (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe8))
                      (*(longlong **)(*plVar1 + 8),*puVar2,0,0,0);
    bVar3 = iVar4 == 1;
    *(bool *)(param_1 + 0x2c7e) = !bVar3;
    if (iVar4 != 1) goto LAB_180011ff8;
  }
  else {
LAB_180011ff8:
    if (local_50.QuadPart < local_48.QuadPart - *(longlong *)(param_1 + 0x2ae8)) {
      (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe0))(*(longlong **)(*plVar1 + 8),*puVar2);
      local_50.QuadPart = local_48.QuadPart + local_50.QuadPart;
      if (local_48.QuadPart < local_50.QuadPart) {
        do {
          iVar4 = (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe8))
                            (*(longlong **)(*plVar1 + 8),*puVar2,0,0,0);
          bVar3 = iVar4 == 1;
          QueryPerformanceCounter(&local_48);
        } while (iVar4 == 1 && local_48.QuadPart < local_50.QuadPart);
      }
      if (!bVar3) {
        ((LARGE_INTEGER *)(param_1 + 0x2ae8))->QuadPart = (LONGLONG)local_48;
      }
    }
  }
  *(bool *)(param_1 + 0x2c7e) = !bVar3;
LAB_1800120a8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  return bVar3;
}

