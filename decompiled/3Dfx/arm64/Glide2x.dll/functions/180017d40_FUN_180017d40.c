/*
 * FUN_180017d40 at 180017d40
 * undefined __cdecl FUN_180017d40(longlong param_1, uint param_2)
 * Address ranges: 180017d40-180017d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017d40(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(byte *)((longlong)plVar1 + 0x137)) {
      (**(code **)(*plVar1 + 0x120))(plVar1,param_2);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x137) = (char)param_2;
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

