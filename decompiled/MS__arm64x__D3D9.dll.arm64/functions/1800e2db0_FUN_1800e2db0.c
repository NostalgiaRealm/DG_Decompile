/*
 * FUN_1800e2db0 at 1800e2db0
 * undefined FUN_1800e2db0(void)
 * Address ranges: 1800e2db0-1800e2e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800e2db0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + (ulonglong)param_2 * 0x28;
  iVar2 = *(int *)(lVar1 + 0x28) + -1;
  *(int *)(lVar1 + 0x28) = iVar2;
  if (iVar2 == 0) {
    param_1 = param_1 + (ulonglong)param_2 * 0x18c0;
    if (*(longlong **)(param_1 + 0x6c0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x10))();
      *(undefined8 *)(param_1 + 0x6c0) = 0;
    }
    if (*(longlong **)(param_1 + 0x6b8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x10))();
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    if (*(longlong **)(param_1 + 0x6b0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x10))();
      *(undefined8 *)(param_1 + 0x6b0) = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

