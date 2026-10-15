/*
 * FUN_140015df0 at 140015df0
 * longlong __fastcall FUN_140015df0(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4)
 * Address ranges: 140015df0-140015e18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_140015df0(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4)

{
  return (ulonglong)
         *(uint *)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x90) + 8 + (param_2 & 0xffffffff) * 0x18) + 8 +
                    (param_3 & 0xffffffff) * 0x28) + (ulonglong)param_4 * 4) +
         *(longlong *)(param_1 + 0x70);
}

