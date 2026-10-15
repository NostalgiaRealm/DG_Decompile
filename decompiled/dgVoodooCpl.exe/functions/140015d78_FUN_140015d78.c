/*
 * FUN_140015d78 at 140015d78
 * longlong __fastcall FUN_140015d78(longlong param_1, ulonglong param_2)
 * Address ranges: 140015d78-140015d95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140015d78(longlong param_1,ulonglong param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) != -1) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) +
           *(longlong *)(param_1 + 0x70);
  }
  return 0;
}

