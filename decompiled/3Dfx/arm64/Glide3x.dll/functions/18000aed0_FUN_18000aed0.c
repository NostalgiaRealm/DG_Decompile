/*
 * FUN_18000aed0 at 18000aed0
 * undefined __cdecl FUN_18000aed0(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 18000aed0-18000afa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000aed0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if (0xf < (int)param_2) {
      param_2 = 0;
    }
    if (0xf < (int)param_3) {
      param_3 = 0;
    }
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0xf2)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0xf3))) ||
        (param_4 != *(byte *)((longlong)plVar1 + 0xf4))) ||
       (param_5 != *(byte *)((longlong)plVar1 + 0xf5))) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3,param_4,param_5);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf2) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf3) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf4) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0xf5) = (char)param_5;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

