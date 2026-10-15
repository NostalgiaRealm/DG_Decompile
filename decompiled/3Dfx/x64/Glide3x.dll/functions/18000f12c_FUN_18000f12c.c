/*
 * FUN_18000f12c at 18000f12c
 * bool __fastcall FUN_18000f12c(longlong param_1)
 * Address ranges: 18000f12c-18000f265
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000f12c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  bVar4 = false;
  if (*(char *)(param_1 + 0x2c83) == '\0') {
    return false;
  }
  QueryPerformanceFrequency(&local_res8);
  local_res8.QuadPart = local_res8.QuadPart >> 0xc;
  QueryPerformanceCounter(&local_res10);
  plVar1 = (longlong *)(param_1 + 0x3340);
  puVar2 = (undefined8 *)(param_1 + 0x3398);
  if (*(char *)(param_1 + 0x2c7e) == '\0') {
    iVar3 = (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe8))
                      (*(longlong **)(*plVar1 + 8),*puVar2,0,0,0);
    bVar4 = iVar3 == 1;
    *(bool *)(param_1 + 0x2c7e) = !bVar4;
    if (!bVar4) goto LAB_18000f1b9;
  }
  else {
LAB_18000f1b9:
    if (local_res8.QuadPart < local_res10.QuadPart - *(longlong *)(param_1 + 0x2ae8)) {
      (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe0))(*(longlong **)(*plVar1 + 8),*puVar2);
      local_res8.QuadPart = local_res8.QuadPart + local_res10.QuadPart;
      if (local_res10.QuadPart < local_res8.QuadPart) {
        do {
          iVar3 = (**(code **)(**(longlong **)(*plVar1 + 8) + 0xe8))
                            (*(longlong **)(*plVar1 + 8),*puVar2,0,0,0);
          bVar4 = iVar3 == 1;
          QueryPerformanceCounter(&local_res10);
          if (iVar3 != 1) break;
        } while (local_res10.QuadPart < local_res8.QuadPart);
      }
      bVar5 = false;
      if (bVar4 != false) goto LAB_18000f249;
      ((LARGE_INTEGER *)(param_1 + 0x2ae8))->QuadPart = (LONGLONG)local_res10;
    }
  }
  bVar5 = bVar4 == false;
LAB_18000f249:
  *(bool *)(param_1 + 0x2c7e) = bVar5;
  return bVar4;
}

