/*
 * FUN_1800196d8 at 1800196d8
 * undefined __cdecl FUN_1800196d8(longlong param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, int param_8)
 * Address ranges: 1800196d8-18001983b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800196d8(longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  int param_7,int param_8)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      plVar2 = *(longlong **)(param_1 + 0x18);
      lVar1 = (longlong)param_2 * 0x41;
      if ((((param_3 != *(byte *)((longlong)plVar2 + lVar1 + 0x165)) ||
           (param_4 != *(byte *)((longlong)plVar2 + lVar1 + 0x166))) ||
          (param_5 != *(byte *)((longlong)plVar2 + lVar1 + 0x167))) ||
         (((param_6 != *(byte *)((longlong)plVar2 + lVar1 + 0x168) ||
           (param_7 != *(int *)((longlong)plVar2 + lVar1 + 0x169))) ||
          (param_8 != *(int *)((longlong)plVar2 + lVar1 + 0x16d))))) {
        (**(code **)(*plVar2 + 0x288))
                  (plVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        *(char *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x165) = (char)param_3;
        *(char *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x166) = (char)param_4;
        *(char *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x167) = (char)param_5;
        *(char *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x168) = (char)param_6;
        *(int *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x169) = param_7;
        *(int *)(lVar1 + *(longlong *)(param_1 + 0x18) + 0x16d) = param_8;
      }
      FUN_180018488(param_1);
    }
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return;
}

