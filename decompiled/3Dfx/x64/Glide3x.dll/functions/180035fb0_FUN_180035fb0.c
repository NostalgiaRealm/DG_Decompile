/*
 * FUN_180035fb0 at 180035fb0
 * longlong __fastcall FUN_180035fb0(longlong param_1, ulonglong param_2)
 * Address ranges: 180035fb0-180035fcd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180035fb0(longlong param_1,ulonglong param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) != -1) {
    return (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18) +
           *(longlong *)(param_1 + 0x70);
  }
  return 0;
}

