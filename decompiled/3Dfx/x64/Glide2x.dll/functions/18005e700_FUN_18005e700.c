/*
 * FUN_18005e700 at 18005e700
 * undefined __fastcall FUN_18005e700(longlong param_1)
 * Address ranges: 18005e700-18005e76e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e700(longlong param_1)

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

