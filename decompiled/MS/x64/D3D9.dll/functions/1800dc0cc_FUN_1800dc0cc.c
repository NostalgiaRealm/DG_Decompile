/*
 * FUN_1800dc0cc at 1800dc0cc
 * undefined __fastcall FUN_1800dc0cc(longlong param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4, uint * param_5)
 * Address ranges: 1800dc0cc-1800dc147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dc0cc(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (param_2 & 0xffffffff) * 0x18c0;
  lVar3 = FUN_1800dd870((longlong *)(lVar4 + param_1 + 0xcd8),param_5);
  lVar1 = lVar4 + param_1;
  if (*(longlong *)(lVar1 + 0x790) != lVar3) {
    FUN_1800dda24((longlong *)(lVar4 + param_1 + 0xcd8),*(longlong **)(lVar1 + 0x790));
    *(longlong *)(lVar1 + 0x790) = lVar3;
    plVar2 = *(longlong **)(lVar4 + 0x6b8 + param_1);
    (**(code **)(*plVar2 + 0x50))(plVar2,0,1,lVar1 + 0x790);
  }
  return;
}

