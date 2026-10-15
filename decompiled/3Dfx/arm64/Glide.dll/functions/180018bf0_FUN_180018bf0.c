/*
 * FUN_180018bf0 at 180018bf0
 * undefined __cdecl FUN_180018bf0(longlong param_1, int param_2)
 * Address ranges: 180018bf0-180018c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018bf0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(int *)((longlong)plVar1 + 0x139)) {
      (**(code **)(*plVar1 + 0x128))(plVar1,param_2 != 0);
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x139) = param_2;
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

