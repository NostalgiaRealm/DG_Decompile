/*
 * FUN_140017218 at 140017218
 * longlong __cdecl FUN_140017218(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4)
 * Address ranges: 140017218-14001724b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140017218(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  return *(longlong *)(param_1 + 0x70) +
         (ulonglong)
         *(uint *)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x90) + (param_2 & 0xffffffff) * 0x18 + 8) +
                     (param_3 & 0xffffffff) * 0x28 + 8) + (ulonglong)param_4 * 4);
}

