/*
 * FUN_180031b98 at 180031b98
 * undefined __fastcall FUN_180031b98(longlong param_1, int param_2, int param_3)
 * Address ranges: 180031b98-180031c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031b98(longlong param_1,int param_2,int param_3)

{
  SIZE_T SVar1;
  LPVOID lpAddress;
  uint uVar2;
  DWORD local_res8 [2];
  _MEMORY_BASIC_INFORMATION local_38;
  
  if ((*(LPCVOID *)(param_1 + 0x28) != (LPCVOID)0x0) &&
     ((((*(byte *)(param_1 + 0x48) & 2) == 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
      ((*(byte *)(param_1 + 0x48) & 8) == 0)))) {
    SVar1 = VirtualQuery(*(LPCVOID *)(param_1 + 0x28),&local_38,0x30);
    if (SVar1 != 0) {
      if (param_2 == 0 && param_3 == 0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c);
        lpAddress = *(LPVOID *)(param_1 + 0x28);
      }
      else {
        uVar2 = (param_3 - param_2) * 0x1000;
        lpAddress = (LPVOID)((ulonglong)(uint)(param_2 << 0xc) + *(longlong *)(param_1 + 0x28));
      }
      VirtualProtect(lpAddress,(ulonglong)uVar2,local_38.Protect | 0x100,local_res8);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar2 = *(uint *)(param_1 + 0x48) | 2;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x48) & 0xfffffffd;
      }
      *(uint *)(param_1 + 0x48) = uVar2;
    }
  }
  return;
}

