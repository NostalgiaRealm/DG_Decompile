/*
 * FUN_180038c00 at 180038c00
 * undefined __cdecl FUN_180038c00(longlong param_1)
 * Address ranges: 180038c00-180038c7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038c00(longlong param_1)

{
  int local_50 [2];
  tagMSG tStack_48;
  
  local_50[0] = *(int *)(param_1 + 0x200);
  while (0 < local_50[0]) {
    PeekMessageA(&tStack_48,(HWND)0x0,0,0,0x400000);
    (**(code **)(param_1 + 0x58))(param_1 + 0x200,local_50,4,5);
    local_50[0] = *(int *)(param_1 + 0x200);
  }
  return;
}

