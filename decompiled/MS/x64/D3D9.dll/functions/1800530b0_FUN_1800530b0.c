/*
 * FUN_1800530b0 at 1800530b0
 * undefined __fastcall FUN_1800530b0(longlong * param_1)
 * Address ranges: 1800530b0-180053110
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800530b0(longlong *param_1)

{
  FUN_18004d384(*(longlong **)((longlong)param_1 + 0xc),*(int *)((longlong)param_1 + 0x14),
                param_1[3],param_1[4],*param_1,*(uint *)(param_1 + 5),
                *(undefined4 *)((longlong)param_1 + 0x2c),
                (uint *)(*param_1 + 0xf + (ulonglong)*(uint *)(param_1 + 1) & 0xfffffffffffffff0),
                *(uint *)(param_1 + 6),0,*(char *)((longlong)param_1 + 0x34),'\0');
  return;
}

