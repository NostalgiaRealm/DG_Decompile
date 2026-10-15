/*
 * FUN_180053114 at 180053114
 * undefined __fastcall FUN_180053114(undefined8 * param_1)
 * Address ranges: 180053114-18005319e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053114(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004d384(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(longlong *)((longlong)param_1 + 0x1c),
                *(uint *)((longlong)param_1 + 0x24),*(undefined4 *)(param_1 + 5),
                *(uint **)((longlong)param_1 + 0x2c),*(uint *)((longlong)param_1 + 0x34),
                *(int *)(param_1 + 7),*(char *)((longlong)param_1 + 0x3c),'\0');
  if (param_1[8] != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)(param_1 + 10),
                  (int)param_1[8],param_1[9]);
  }
  return;
}

