/*
 * FUN_1400171f0 at 1400171f0
 * undefined4 __cdecl FUN_1400171f0(longlong param_1, ulonglong param_2, ulonglong param_3)
 * Address ranges: 1400171f0-140017217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1400171f0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8) +
           (param_3 & 0xffffffff) * 0x28 + 0x10);
}

