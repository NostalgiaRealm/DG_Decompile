/*
 * FUN_140015dd0 at 140015dd0
 * undefined4 __fastcall FUN_140015dd0(longlong param_1, ulonglong param_2, uint param_3)
 * Address ranges: 140015dd0-140015ded
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140015dd0(longlong param_1,ulonglong param_2,uint param_3)

{
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x90) + 8 + (param_2 & 0xffffffff) * 0x18) + 0x10 +
          (ulonglong)param_3 * 0x28);
}

