/*
 * FUN_180031c40 at 180031c40
 * undefined __fastcall FUN_180031c40(longlong param_1)
 * Address ranges: 180031c40-180031ca5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031c40(longlong param_1)

{
  SIZE_T SVar1;
  DWORD local_res8 [8];
  _MEMORY_BASIC_INFORMATION local_38;
  
  if ((*(LPCVOID *)(param_1 + 0x28) != (LPCVOID)0x0) &&
     ((((*(byte *)(param_1 + 0x48) & 2) != 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
      ((*(byte *)(param_1 + 0x48) & 8) == 0)))) {
    SVar1 = VirtualQuery(*(LPCVOID *)(param_1 + 0x28),&local_38,0x30);
    if (SVar1 != 0) {
      VirtualProtect(*(LPVOID *)(param_1 + 0x28),
                     (ulonglong)((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c)),
                     local_38.Protect & 0xfffffeff,local_res8);
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffd;
    }
  }
  return;
}

