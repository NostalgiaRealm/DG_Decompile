/*
 * FUN_18000b218 at 18000b218
 * undefined __cdecl FUN_18000b218(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6)
 * Address ranges: 18000b218-18000b30f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000b218(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_1800643e0((uint *)(param_1 + 0x60));
    plVar1 = *(longlong **)(param_1 + 0x18);
    if ((((param_2 != *(byte *)((longlong)plVar1 + 0x15e)) ||
         (param_3 != *(byte *)((longlong)plVar1 + 0x15f))) || (param_4 != *(byte *)(plVar1 + 0x2c)))
       || ((param_5 != *(byte *)((longlong)plVar1 + 0x161) ||
           (param_6 != *(int *)((longlong)plVar1 + 0x162))))) {
      (**(code **)(*plVar1 + 0x198))(plVar1,param_2,param_3,param_4,param_5,param_6);
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15e) = (char)param_2;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x15f) = (char)param_3;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x160) = (char)param_4;
      *(char *)(*(longlong *)(param_1 + 0x18) + 0x161) = (char)param_5;
      *(int *)(*(longlong *)(param_1 + 0x18) + 0x162) = param_6;
      FUN_18000a6b8(param_1);
      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2a4) = 0;
    }
    FUN_1800643d0((uint *)(param_1 + 0x60));
  }
  return;
}

