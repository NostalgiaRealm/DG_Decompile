/*
 * FUN_100cefb0 at 100cefb0
 * undefined4 __fastcall FUN_100cefb0(int param_1)
 * Address ranges: 100cefb0-100cefd0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100cefb0(int param_1)

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

