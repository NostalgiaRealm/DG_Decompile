/*
 * FUN_100052d4 at 100052d4
 * undefined __fastcall FUN_100052d4(int param_1)
 * Address ranges: 100052d4-10005334
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100052d4(int param_1)

{
  SIZE_T SVar1;
  _MEMORY_BASIC_INFORMATION local_24;
  DWORD local_8;
  
  if ((*(int *)(param_1 + 0x20) != 0) &&
     ((((*(uint *)(param_1 + 0x34) >> 1 & 1) != 0 || (*(int *)(param_1 + 0x24) != 0)) &&
      ((*(uint *)(param_1 + 0x34) >> 3 & 1) == 0)))) {
    SVar1 = VirtualQuery(*(LPCVOID *)(param_1 + 0x20),&local_24,0x1c);
    if (SVar1 != 0) {
      VirtualProtect(*(LPVOID *)(param_1 + 0x20),
                     (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14),
                     local_24.Protect & 0xfffffeff,&local_8);
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffd;
    }
  }
  return;
}

