/*
 * FUN_180018e98 at 180018e98
 * undefined __cdecl FUN_180018e98(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, char param_7)
 * Address ranges: 180018e98-180018faf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018e98(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                  ,char param_7)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x151)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x152))) ||
        (param_4 != *(byte *)((longlong)plVar1 + 0x153))) ||
       (((param_5 != *(byte *)((longlong)plVar1 + 0x154) ||
         (param_6 != *(uint *)((longlong)plVar1 + 0x155))) ||
        (param_7 != *(char *)((longlong)plVar1 + 0x224))))) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x151) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x152) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x153) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x154) = (char)param_5;
      *(uint *)(*(longlong *)(param_1 + 0x18) + 0x155) = param_6 & 0xff;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x224) = param_7;
      FUN_180018488(param_1);
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

