/*
 * FUN_1800246b0 at 1800246b0
 * undefined __fastcall FUN_1800246b0(longlong param_1, undefined8 param_2)
 * Address ranges: 1800246b0-18002470d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800246b0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = 0;
  do {
    lVar3 = lVar1;
    plVar2 = *(longlong **)(param_1 + 0xbc8 + lVar3 * 8);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(param_1 + 0xbc8 + lVar3 * 8) = 0;
    }
    lVar1 = lVar3 + 1;
  } while (lVar3 + 1 != 0x17);
  FUN_18004eeec(plVar2,param_2,(int)lVar3 - 0x13,param_1 + 0xc80,param_1 + 0xc98);
  return;
}

