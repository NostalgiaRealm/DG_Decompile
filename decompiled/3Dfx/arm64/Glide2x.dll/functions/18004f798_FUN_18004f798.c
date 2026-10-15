/*
 * FUN_18004f798 at 18004f798
 * undefined __cdecl FUN_18004f798(undefined8 param_1, undefined8 param_2, uint param_3, longlong param_4, longlong param_5)
 * Address ranges: 18004f798-18004f807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f798(undefined8 param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5)

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
        plVar2 = *(longlong **)(param_5 + uVar3 * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))();
          *(undefined8 *)(param_5 + uVar3 * 8) = 0;
        }
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < param_3);
  }
  return;
}

