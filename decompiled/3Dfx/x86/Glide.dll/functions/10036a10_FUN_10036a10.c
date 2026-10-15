/*
 * FUN_10036a10 at 10036a10
 * undefined __fastcall FUN_10036a10(int param_1)
 * Address ranges: 10036a10-10036a66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10036a10(int param_1)

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

