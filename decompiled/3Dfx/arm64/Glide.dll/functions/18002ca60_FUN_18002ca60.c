/*
 * FUN_18002ca60 at 18002ca60
 * undefined __cdecl FUN_18002ca60(undefined8 * param_1)
 * Address ranges: 18002ca60-18002cab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ca60(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  FUN_180021ce8(plVar1,*(uint *)(param_1 + 1),*(undefined4 **)((longlong)param_1 + 0xc),
                *(byte *)((longlong)param_1 + 0x14));
  if (param_1[3] != 0) {
    FUN_180055da8((LPCRITICAL_SECTION)(plVar1[0x638] + 0x17f0),*(int *)(param_1 + 4),(int)param_1[3]
                  ,*(ulonglong *)((longlong)param_1 + 0x24));
  }
  return;
}

