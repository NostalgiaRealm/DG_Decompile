/*
 * FUN_18002c6e0 at 18002c6e0
 * undefined __cdecl FUN_18002c6e0(longlong * param_1)
 * Address ranges: 18002c6e0-18002c6ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c6e0(longlong *param_1)

{
  FUN_180021b88(*(longlong **)((longlong)param_1 + 0xc),*(uint *)((longlong)param_1 + 0x14),
                *param_1 + (ulonglong)*(uint *)(param_1 + 1) + 0xf & 0xfffffffffffffff0,*param_1);
  return;
}

