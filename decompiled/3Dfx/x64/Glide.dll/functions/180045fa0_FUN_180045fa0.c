/*
 * FUN_180045fa0 at 180045fa0
 * undefined __fastcall FUN_180045fa0(undefined8 param_1, uint param_2, longlong param_3)
 * Address ranges: 180045fa0-180045fda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045fa0(undefined8 param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_3 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_3 + uVar3 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return;
}

