/*
 * FUN_1002ea60 at 1002ea60
 * undefined4 __fastcall FUN_1002ea60(int param_1)
 * Address ranges: 1002ea60-1002ea80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002ea60(int param_1)

{
  DWORD DVar1;
  DWORD in_EAX;
  
  if (*(char *)(param_1 + 300) != '\0') {
    DVar1 = *(DWORD *)(param_1 + 0x11c);
    in_EAX = GetCurrentThreadId();
    if (DVar1 != in_EAX) {
      return in_EAX & 0xffffff00;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

