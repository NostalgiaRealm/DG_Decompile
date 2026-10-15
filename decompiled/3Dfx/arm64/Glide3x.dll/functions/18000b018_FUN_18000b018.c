/*
 * FUN_18000b018 at 18000b018
 * undefined __cdecl FUN_18000b018(longlong param_1, int param_2)
 * Address ranges: 18000b018-18000b083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b018(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x10e)) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 == 1);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x10e) = param_2;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

