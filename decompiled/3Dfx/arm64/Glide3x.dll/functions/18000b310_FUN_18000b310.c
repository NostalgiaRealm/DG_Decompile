/*
 * FUN_18000b310 at 18000b310
 * undefined __cdecl FUN_18000b310(longlong param_1, int param_2, int param_3)
 * Address ranges: 18000b310-18000b3ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b310(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((param_2 != *(int *)((longlong)plVar1 + 299)) ||
       (param_3 != *(int *)((longlong)plVar1 + 0x12f))) {
      (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2 != 0,param_3 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 299) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x12f) = param_3;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

