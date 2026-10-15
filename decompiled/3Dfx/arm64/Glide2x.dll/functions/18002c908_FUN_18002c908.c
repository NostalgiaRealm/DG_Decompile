/*
 * FUN_18002c908 at 18002c908
 * undefined __cdecl FUN_18002c908(undefined8 * param_1)
 * Address ranges: 18002c908-18002c963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c908(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x2f8))
            (plVar1,*(undefined4 *)(param_1 + 1),*(undefined8 *)((longlong)param_1 + 0xc),
             *(undefined8 *)((longlong)param_1 + 0x14));
  if (*(longlong *)((longlong)param_1 + 0x1c) != 0) {
    FUN_180054f58((LPCRITICAL_SECTION)(plVar1[0x638] + 0x17f0),*(int *)((longlong)param_1 + 0x24),
                  (int)*(longlong *)((longlong)param_1 + 0x1c),param_1[5]);
  }
  return;
}

