/*
 * FUN_180029d18 at 180029d18
 * undefined __fastcall FUN_180029d18(longlong * param_1)
 * Address ranges: 180029d18-180029d35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029d18(longlong *param_1)

{
  FUN_18001fd54(*(longlong **)((longlong)param_1 + 0xc),*(uint *)((longlong)param_1 + 0x14),
                (ulonglong)*(uint *)(param_1 + 1) + 0xf + *param_1 & 0xfffffffffffffff0,*param_1);
  return;
}

