/*
 * FUN_180029870 at 180029870
 * undefined __fastcall FUN_180029870(longlong * param_1)
 * Address ranges: 180029870-18002988d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029870(longlong *param_1)

{
  FUN_18001f8ac(*(longlong **)((longlong)param_1 + 0xc),*(uint *)((longlong)param_1 + 0x14),
                (ulonglong)*(uint *)(param_1 + 1) + 0xf + *param_1 & 0xfffffffffffffff0,*param_1);
  return;
}

