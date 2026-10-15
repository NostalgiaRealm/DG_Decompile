/*
 * FUN_1800d1d70 at 1800d1d70
 * longlong __fastcall FUN_1800d1d70(longlong param_1, ulonglong param_2)
 * Address ranges: 1800d1d70-1800d1d8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800d1d70(longlong param_1,ulonglong param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) != -1) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) +
           *(longlong *)(param_1 + 0x70);
  }
  return 0;
}

