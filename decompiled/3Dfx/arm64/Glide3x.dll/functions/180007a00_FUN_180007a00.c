/*
 * FUN_180007a00 at 180007a00
 * longlong __cdecl FUN_180007a00(longlong param_1, longlong param_2)
 * Address ranges: 180007a00-180007a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180007a00(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x138);
  if (*(uint *)(param_1 + 0x138) != 0) {
    do {
      uVar1 = (int)uVar2 - 1;
      uVar2 = (ulonglong)uVar1;
      if (*(longlong *)(uVar2 * 0x60 + *(longlong *)(param_1 + 0x130)) == param_2) {
        return uVar2 * 0x60 + *(longlong *)(param_1 + 0x130);
      }
    } while (uVar1 != 0);
  }
  return 0;
}

