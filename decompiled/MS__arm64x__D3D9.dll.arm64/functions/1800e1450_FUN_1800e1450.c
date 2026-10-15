/*
 * FUN_1800e1450 at 1800e1450
 * undefined FUN_1800e1450(void)
 * Address ranges: 1800e1450-1800e14a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e1450(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      plVar2 = *(longlong **)(param_4 + uVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(param_4 + uVar3 * 8) = 0;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  return;
}

