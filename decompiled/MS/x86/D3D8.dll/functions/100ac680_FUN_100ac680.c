/*
 * FUN_100ac680 at 100ac680
 * undefined __fastcall FUN_100ac680(int param_1)
 * Address ranges: 100ac680-100ac6d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100ac680(int param_1)

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

