/*
 * FUN_18004f6c8 at 18004f6c8
 * undefined __fastcall FUN_18004f6c8(undefined8 * param_1)
 * Address ranges: 18004f6c8-18004f726
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f6c8(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004b940(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(undefined8 **)((longlong)param_1 + 0x14),*(uint *)((longlong)param_1 + 0x1c),
                *(undefined1 *)(param_1 + 4));
  if (*(longlong *)((longlong)param_1 + 0x24) != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)((longlong)param_1 + 0x34),
                  (int)*(longlong *)((longlong)param_1 + 0x24),
                  *(ulonglong *)((longlong)param_1 + 0x2c));
  }
  return;
}

