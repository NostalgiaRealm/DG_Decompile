/*
 * FUN_1800fb1f0 at 1800fb1f0
 * undefined __fastcall FUN_1800fb1f0(longlong param_1)
 * Address ranges: 1800fb1f0-1800fb25e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fb1f0(longlong param_1)

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

