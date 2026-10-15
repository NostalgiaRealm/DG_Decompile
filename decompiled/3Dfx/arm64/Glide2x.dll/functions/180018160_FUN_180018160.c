/*
 * FUN_180018160 at 180018160
 * undefined __cdecl FUN_180018160(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 180018160-18001824f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018160(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800608b0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x159)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x15a))) ||
        (param_4 != *(byte *)((longlong)plVar1 + 0x15b))) ||
       ((param_5 != *(byte *)((longlong)plVar1 + 0x15c) ||
        (param_6 != *(int *)((longlong)plVar1 + 0x15d))))) {
      (**(code **)(*plVar1 + 0x178))(plVar1,param_2,param_3,param_4,param_5,param_6);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x159) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15a) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15b) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15c) = (char)param_5;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x15d) = param_6;
      FUN_180017780(param_1);
    }
    FUN_1800608a0((uint *)(param_1 + 0x60));
  }
  return;
}

