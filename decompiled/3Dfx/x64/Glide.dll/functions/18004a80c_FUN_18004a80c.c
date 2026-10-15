/*
 * FUN_18004a80c at 18004a80c
 * undefined8 __fastcall FUN_18004a80c(longlong param_1, uint param_2)
 * Address ranges: 18004a80c-18004a89a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004a80c(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)param_2;
  uVar3 = uVar4 * 5;
  piVar1 = (int *)(param_1 + 0x28 + uVar4 * 0x28);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar5 = uVar4 * 0x18c0;
    plVar2 = *(longlong **)(lVar5 + 0x6c0 + param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar5 + 0x6c0 + param_1) = 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0x6b8 + param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar5 + 0x6b8 + param_1) = 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0x6b0 + param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar5 + 0x6b0 + param_1) = 0;
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  return uVar3;
}

