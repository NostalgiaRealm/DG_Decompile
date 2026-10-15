/*
 * FUN_18004f0bc at 18004f0bc
 * undefined __fastcall FUN_18004f0bc(longlong * param_1)
 * Address ranges: 18004f0bc-18004f115
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f0bc(longlong *param_1)

{
  FUN_18004b890(*(longlong **)((longlong)param_1 + 0xc),*(int *)((longlong)param_1 + 0x14),
                param_1[3],*param_1,*(uint *)(param_1 + 4),*(undefined4 *)((longlong)param_1 + 0x24)
                ,(uint *)(*param_1 + 0xf + (ulonglong)*(uint *)(param_1 + 1) & 0xfffffffffffffff0),
                *(uint *)(param_1 + 5),0,*(char *)((longlong)param_1 + 0x2c),(char)param_1[6]);
  return;
}

