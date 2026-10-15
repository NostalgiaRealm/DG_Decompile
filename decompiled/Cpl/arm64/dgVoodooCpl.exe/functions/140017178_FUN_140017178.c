/*
 * FUN_140017178 at 140017178
 * longlong __cdecl FUN_140017178(longlong param_1, ulonglong param_2)
 * Address ranges: 140017178-1400171a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140017178(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18);
  if (uVar1 == 0xffffffff) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x70) + (ulonglong)uVar1;
  }
  return lVar2;
}

