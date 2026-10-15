/*
 * FUN_18005eba0 at 18005eba0
 * undefined __fastcall FUN_18005eba0(longlong param_1)
 * Address ranges: 18005eba0-18005ec0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005eba0(longlong param_1)

{
  int iVar1;
  tagMSG local_38;
  
  iVar1 = *(int *)(param_1 + 0x200);
  while (0 < iVar1) {
    PeekMessageA(&local_38,(HWND)0x0,0,0,0x400000);
    (**(code **)(param_1 + 0x58))(param_1 + 0x200);
    iVar1 = *(int *)(param_1 + 0x200);
  }
  return;
}

