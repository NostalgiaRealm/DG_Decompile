/*
 * FUN_180052a00 at 180052a00
 * undefined __fastcall FUN_180052a00(undefined8 * param_1)
 * Address ranges: 180052a00-180052a6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180052a00(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004d2e0(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(undefined8 **)((longlong)param_1 + 0x1c),
                *(uint *)((longlong)param_1 + 0x24),*(uint *)(param_1 + 5),'\0');
  if (*(longlong *)((longlong)param_1 + 0x2c) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)((longlong)param_1 + 0x3c),
                  (int)*(longlong *)((longlong)param_1 + 0x2c),
                  *(ulonglong *)((longlong)param_1 + 0x34));
  }
  return;
}

