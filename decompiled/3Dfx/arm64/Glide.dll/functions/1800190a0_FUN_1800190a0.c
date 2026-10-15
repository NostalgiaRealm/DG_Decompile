/*
 * FUN_1800190a0 at 1800190a0
 * undefined __cdecl FUN_1800190a0(longlong param_1, int param_2, int param_3)
 * Address ranges: 1800190a0-18001913b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800190a0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((param_2 != *(int *)((longlong)plVar1 + 299)) ||
       (param_3 != *(int *)((longlong)plVar1 + 0x12f))) {
      (**(code **)(*plVar1 + 0x180))(plVar1,param_2 != 0,param_3 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 299) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x12f) = param_3;
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

