/*
 * FUN_18000b4b0 at 18000b4b0
 * undefined __cdecl FUN_18000b4b0(longlong param_1, uint param_2)
 * Address ranges: 18000b4b0-18000b517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b4b0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(ushort *)((longlong)plVar1 + 0x141)) {
      (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
      *(short *)(*(longlong *)(param_1 + 0x18) + 0x141) = (short)param_2;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

