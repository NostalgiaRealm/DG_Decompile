/*
 * FUN_18004cac0 at 18004cac0
 * undefined __cdecl FUN_18004cac0(undefined8 param_1, uint param_2, longlong param_3)
 * Address ranges: 18004cac0-18004cb13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cac0(undefined8 param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      plVar2 = *(longlong **)(param_3 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(param_3 + uVar3 * 8) = 0;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
  }
  return;
}

