/*
 * FUN_18004ea20 at 18004ea20
 * undefined __fastcall FUN_18004ea20(undefined8 * param_1)
 * Address ranges: 18004ea20-18004ea85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ea20(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004b820(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(undefined8 **)((longlong)param_1 + 0x14),*(uint *)((longlong)param_1 + 0x1c),
                *(uint *)(param_1 + 4),*(undefined1 *)((longlong)param_1 + 0x24));
  if (param_1[5] != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)(param_1 + 7),
                  (int)param_1[5],param_1[6]);
  }
  return;
}

