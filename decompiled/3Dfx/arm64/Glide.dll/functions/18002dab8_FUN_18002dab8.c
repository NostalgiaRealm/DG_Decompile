/*
 * FUN_18002dab8 at 18002dab8
 * undefined __cdecl FUN_18002dab8(undefined8 * param_1)
 * Address ranges: 18002dab8-18002db13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002dab8(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x300))
            (plVar1,*(undefined4 *)(param_1 + 1),*(undefined8 *)((longlong)param_1 + 0xc),0);
  if (*(longlong *)((longlong)param_1 + 0x14) != 0) {
    FUN_180055da8((LPCRITICAL_SECTION)(plVar1[0x638] + 0x17f0),*(int *)((longlong)param_1 + 0x24),
                  (int)*(longlong *)((longlong)param_1 + 0x14),
                  *(ulonglong *)((longlong)param_1 + 0x1c));
  }
  return;
}

