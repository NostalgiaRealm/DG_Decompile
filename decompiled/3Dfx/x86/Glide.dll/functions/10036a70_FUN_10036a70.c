/*
 * FUN_10036a70 at 10036a70
 * undefined4 __fastcall FUN_10036a70(int param_1)
 * Address ranges: 10036a70-10036a90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10036a70(int param_1)

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

