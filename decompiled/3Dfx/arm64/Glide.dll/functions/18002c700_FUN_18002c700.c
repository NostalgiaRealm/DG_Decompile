/*
 * FUN_18002c700 at 18002c700
 * undefined __cdecl FUN_18002c700(undefined8 * param_1)
 * Address ranges: 18002c700-18002c753
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c700(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_180021b88(plVar1,*(uint *)(param_1 + 1),*(longlong *)((longlong)param_1 + 0xc),
                *(longlong *)((longlong)param_1 + 0x14));
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    FUN_180055da8((LPCRITICAL_SECTION)(plVar1[0x638] + 0x17f0),*(int *)((longlong)param_1 + 0x24),
                  (int)*(longlong *)((longlong)param_1 + 0x1c),param_1[5]);
  }
  return;
}

