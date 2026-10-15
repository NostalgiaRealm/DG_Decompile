/*
 * FUN_180008d80 at 180008d80
 * longlong __fastcall FUN_180008d80(longlong param_1, ulonglong param_2)
 * Address ranges: 180008d80-180008d9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180008d80(longlong param_1,ulonglong param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) != -1) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) +
           *(longlong *)(param_1 + 0x70);
  }
  return 0;
}

