/*
 * FUN_1005c2e0 at 1005c2e0
 * undefined __fastcall FUN_1005c2e0(int param_1)
 * Address ranges: 1005c2e0-1005c336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005c2e0(int param_1)

{
  tagMSG local_24;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x128);
  while (0 < local_8) {
    PeekMessageA(&local_24,(HWND)0x0,0,0,0x400000);
    (**(code **)(param_1 + 0x4c))(param_1 + 0x128,&local_8,4,5);
    local_8 = *(int *)(param_1 + 0x128);
  }
  return;
}

