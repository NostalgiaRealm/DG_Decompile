/*
 * FUN_180027974 at 180027974
 * undefined __fastcall FUN_180027974(longlong param_1, int param_2, DWORD param_3)
 * Address ranges: 180027974-1800279e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027974(longlong param_1,int param_2,DWORD param_3)

{
  SIZE_T SVar1;
  int iVar2;
  DWORD local_res18 [4];
  _MEMORY_BASIC_INFORMATION local_38;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    local_res18[0] = param_3;
    SVar1 = VirtualQuery(*(LPCVOID *)(param_1 + 0x60),&local_38,0x30);
    if (SVar1 != 0) {
      iVar2 = *(int *)(param_1 + 0x68) * 2;
      if (*(char *)(param_1 + 0x94) != '\0') {
        iVar2 = *(int *)(param_1 + 0x68) << 2;
      }
      VirtualProtect(*(LPVOID *)(param_1 + 0x60),(ulonglong)(uint)(iVar2 * param_2),
                     local_38.Protect | 0x100,local_res18);
    }
  }
  return;
}

