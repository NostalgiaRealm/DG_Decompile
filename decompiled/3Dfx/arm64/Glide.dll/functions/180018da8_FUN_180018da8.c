/*
 * FUN_180018da8 at 180018da8
 * undefined __cdecl FUN_180018da8(longlong param_1, int param_2)
 * Address ranges: 180018da8-180018e13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018da8(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x10e)) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2 == 1);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x10e) = param_2;
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

