/*
 * FUN_180053c7c at 180053c7c
 * undefined __fastcall FUN_180053c7c(undefined8 * param_1)
 * Address ranges: 180053c7c-180053d07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053c7c(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004d384(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(longlong *)((longlong)param_1 + 0x1c),0,
                *(undefined4 *)((longlong)param_1 + 0x24),(uint *)param_1[5],*(uint *)(param_1 + 6),
                *(int *)((longlong)param_1 + 0x34),*(char *)(param_1 + 7),'\x01');
  if (*(longlong *)((longlong)param_1 + 0x3c) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)((longlong)param_1 + 0x4c),
                  (int)*(longlong *)((longlong)param_1 + 0x3c),
                  *(ulonglong *)((longlong)param_1 + 0x44));
  }
  return;
}

