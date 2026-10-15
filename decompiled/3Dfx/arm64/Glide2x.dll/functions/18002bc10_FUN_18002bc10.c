/*
 * FUN_18002bc10 at 18002bc10
 * undefined __cdecl FUN_18002bc10(undefined8 * param_1)
 * Address ranges: 18002bc10-18002bc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002bc10(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_180020e98(plVar1,*(uint *)(param_1 + 1),*(undefined4 **)((longlong)param_1 + 0xc),
                *(byte *)((longlong)param_1 + 0x14));
  if (param_1[3] != 0) {
    FUN_180054f58((LPCRITICAL_SECTION)(plVar1[0x638] + 0x17f0),*(int *)(param_1 + 4),(int)param_1[3]
                  ,*(ulonglong *)((longlong)param_1 + 0x24));
  }
  return;
}

