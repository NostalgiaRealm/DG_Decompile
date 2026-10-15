/*
 * FUN_18000afa8 at 18000afa8
 * undefined __cdecl FUN_18000afa8(longlong param_1, uint param_2)
 * Address ranges: 18000afa8-18000b013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000afa8(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (7 < (int)param_2) {
      param_2 = 7;
    }
    if (param_2 != *(byte *)((longlong)plVar1 + 0x114)) {
      (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x114) = (char)param_2;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

