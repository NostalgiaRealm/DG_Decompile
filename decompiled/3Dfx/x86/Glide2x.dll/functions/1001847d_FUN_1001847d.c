/*
 * FUN_1001847d at 1001847d
 * bool __fastcall FUN_1001847d(int param_1)
 * Address ranges: 1001847d-100185ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_1001847d(int param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  bVar4 = false;
  if (*(char *)(param_1 + 0x2bcb) == '\0') {
    return false;
  }
  QueryPerformanceFrequency(&local_18);
  local_18.s.LowPart = local_18.s.LowPart >> 0xc | local_18.s.HighPart << 0x14;
  local_18.s.HighPart = local_18.s.HighPart >> 0xc;
  QueryPerformanceCounter(&local_20);
  piVar2 = (int *)(param_1 + 0x3188);
  local_10 = (undefined4 *)(param_1 + 0x31b4);
  local_8 = piVar2;
  if (*(char *)(param_1 + 0x2bc6) == '\0') {
    iVar1 = (**(code **)(**(int **)(*piVar2 + 4) + 0x74))(*(int **)(*piVar2 + 4),*local_10,0,0,0);
    bVar4 = iVar1 == 1;
    *(bool *)(param_1 + 0x2bc6) = !bVar4;
    if (!bVar4) goto LAB_1001851a;
  }
  else {
LAB_1001851a:
    local_c = (undefined4 *)(param_1 + 0x31b4);
    iVar1 = (local_20.s.HighPart - *(int *)(param_1 + 0x2a34)) -
            (uint)(local_20.s.LowPart < *(uint *)(param_1 + 0x2a30));
    if ((local_18.s.HighPart <= iVar1) &&
       ((local_18.s.HighPart < iVar1 ||
        (local_18.s.LowPart < local_20.s.LowPart - *(uint *)(param_1 + 0x2a30))))) {
      (**(code **)(**(int **)(*piVar2 + 4) + 0x70))(*(int **)(*piVar2 + 4),*local_c);
      bVar3 = CARRY4(local_18.s.LowPart,local_20.s.LowPart);
      local_18.s.LowPart = local_18.s.LowPart + local_20.s.LowPart;
      local_18.s.HighPart = local_18.s.HighPart + local_20.s.HighPart + (uint)bVar3;
      if (local_20.s.HighPart <= local_18.s.HighPart) {
        if (local_18.s.HighPart <= local_20.s.HighPart) goto LAB_1001859f;
        do {
          do {
            iVar1 = (**(code **)(**(int **)(*piVar2 + 4) + 0x74))
                              (*(int **)(*piVar2 + 4),*local_10,0,0,0);
            bVar4 = iVar1 == 1;
            QueryPerformanceCounter(&local_20);
            if (iVar1 != 1) goto LAB_100185a9;
            piVar2 = local_8;
          } while (local_20.s.HighPart < local_18.s.HighPart);
          if (local_18.s.HighPart < local_20.s.HighPart) break;
LAB_1001859f:
        } while (local_20.s.LowPart < local_18.s.LowPart);
      }
LAB_100185a9:
      bVar3 = false;
      if (bVar4 != false) goto LAB_100185bb;
      *(undefined4 *)(param_1 + 0x2a30) = local_20.s.LowPart;
      *(undefined4 *)(param_1 + 0x2a34) = local_20.s.HighPart;
    }
  }
  bVar3 = bVar4 == false;
LAB_100185bb:
  *(bool *)(param_1 + 0x2bc6) = bVar3;
  return bVar4;
}

