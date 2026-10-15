/*
 * FUN_18004cb9c at 18004cb9c
 * undefined __fastcall FUN_18004cb9c(undefined8 param_1, undefined8 param_2, uint param_3, longlong param_4)
 * Address ranges: 18004cb9c-18004cbd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cb9c(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_4 + uVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
        *(undefined8 *)(param_4 + uVar3 * 8) = 0;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_3);
  }
  return;
}

