/*
 * FUN_180019240 at 180019240
 * undefined __cdecl FUN_180019240(longlong param_1, uint param_2)
 * Address ranges: 180019240-1800192a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180019240(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (param_2 != *(ushort *)((longlong)plVar1 + 0x141)) {
      (**(code **)(*plVar1 + 0x1a8))(plVar1,param_2);
      *(short *)(*(longlong *)(param_1 + 0x18) + 0x141) = (short)param_2;
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

