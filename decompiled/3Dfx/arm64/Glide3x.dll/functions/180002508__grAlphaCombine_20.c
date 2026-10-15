/*
 * _grAlphaCombine@20 at 180002508
 * undefined __cdecl _grAlphaCombine@20(uint param_1, uint param_2, uint param_3, uint param_4, int param_5)
 * Address ranges: 180002508-180002603
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaCombine_20(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2508  3  _grAlphaCombine@20
                       0x2508  103  grAlphaCombine */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((((param_1 != *(byte *)((longlong)plVar2 + 0x15e)) ||
         (param_2 != *(byte *)((longlong)plVar2 + 0x15f))) || (param_3 != *(byte *)(plVar2 + 0x2c)))
       || ((param_4 != *(byte *)((longlong)plVar2 + 0x161) ||
           (param_5 != *(int *)((longlong)plVar2 + 0x162))))) {
      (**(code **)(*plVar2 + 0x198))(plVar2,param_1,param_2,param_3,param_4,param_5);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x15e) = (char)param_1;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x15f) = (char)param_2;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x160) = (char)param_3;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x161) = (char)param_4;
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x162) = param_5;
      FUN_18000a6b8(lVar1);
      *(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x2a4) = 0;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

