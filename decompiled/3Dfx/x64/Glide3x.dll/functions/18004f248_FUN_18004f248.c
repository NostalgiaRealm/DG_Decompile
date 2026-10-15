/*
 * FUN_18004f248 at 18004f248
 * undefined __fastcall FUN_18004f248(longlong param_1, ulonglong param_2, int * param_3, undefined8 param_4, int param_5)
 * Address ranges: 18004f248-18004f2bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f248(longlong param_1,ulonglong param_2,int *param_3,undefined8 param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (param_2 & 0xffffffff) * 0x18c0;
  lVar2 = FUN_18004fb04((longlong *)(param_1 + 0xc18 + lVar3),param_3);
  if ((lVar2 != *(longlong *)(lVar3 + 0x6e0 + param_1)) ||
     (param_5 != *(int *)(lVar3 + 0x6f4 + param_1))) {
    plVar1 = *(longlong **)(lVar3 + 0x6b8 + param_1);
    (**(code **)(*plVar1 + 0x118))(plVar1,lVar2,0,param_5);
    *(longlong *)(lVar3 + 0x6e0 + param_1) = lVar2;
    *(int *)(lVar3 + 0x6f4 + param_1) = param_5;
  }
  return;
}

