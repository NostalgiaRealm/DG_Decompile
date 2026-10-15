/*
 * FUN_18000ae60 at 18000ae60
 * undefined __cdecl FUN_18000ae60(longlong param_1, int param_2)
 * Address ranges: 18000ae60-18000aecb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000ae60(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x139)) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x139) = param_2;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

