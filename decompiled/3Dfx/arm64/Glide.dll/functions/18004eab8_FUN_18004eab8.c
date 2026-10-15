/*
 * FUN_18004eab8 at 18004eab8
 * undefined8 __cdecl FUN_18004eab8(longlong param_1, uint param_2)
 * Address ranges: 18004eab8-18004eb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004eab8(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1 + (ulonglong)param_2 * 0x28;
  iVar1 = *(int *)(lVar3 + 0x28) + -1;
  *(int *)(lVar3 + 0x28) = iVar1;
  if (iVar1 == 0) {
    lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
    if (*(longlong **)(lVar3 + 0x6c0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x6c0) + 0x10))();
      *(undefined8 *)(lVar3 + 0x6c0) = 0;
    }
    if (*(longlong **)(lVar3 + 0x6b8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x6b8) + 0x10))();
      *(undefined8 *)(lVar3 + 0x6b8) = 0;
    }
    if (*(longlong **)(lVar3 + 0x6b0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar3 + 0x6b0) + 0x10))();
      *(undefined8 *)(lVar3 + 0x6b0) = 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

