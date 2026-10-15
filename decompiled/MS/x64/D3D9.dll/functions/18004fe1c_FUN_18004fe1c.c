/*
 * FUN_18004fe1c at 18004fe1c
 * undefined __fastcall FUN_18004fe1c(undefined8 * param_1)
 * Address ranges: 18004fe1c-18004fe98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fe1c(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_18004b9b0(plVar1,*(int *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14),*(undefined4 *)((longlong)param_1 + 0x1c),
                (uint *)param_1[4],*(uint *)(param_1 + 5),*(int *)((longlong)param_1 + 0x2c),
                *(char *)(param_1 + 6),*(undefined1 *)((longlong)param_1 + 0x34));
  if (param_1[7] != 0) {
    FUN_1800ebfac((LPCRITICAL_SECTION)(plVar1[0x1edc] + 0x17f0),*(int *)(param_1 + 9),
                  (int)param_1[7],param_1[8]);
  }
  return;
}

