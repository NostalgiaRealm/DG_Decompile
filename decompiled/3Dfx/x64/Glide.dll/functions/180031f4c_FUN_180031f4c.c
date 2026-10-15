/*
 * FUN_180031f4c at 180031f4c
 * undefined __fastcall FUN_180031f4c(longlong param_1, undefined8 param_2)
 * Address ranges: 180031f4c-180031fa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031f4c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    plVar2 = *(longlong **)(param_1 + 0x5c8 + lVar3 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(param_1 + 0x5c8 + lVar3 * 8) = 0;
    }
    lVar1 = lVar3 + 1;
  } while (lVar3 + 1 != 0x17);
  FUN_18004cd88(plVar2,param_2,(int)lVar3 - 0x13,param_1 + 0x680,param_1 + 0x698);
  return;
}

