/*
 * FUN_180038254 at 180038254
 * undefined FUN_180038254(void)
 * Address ranges: 180038254-180038317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038254(void)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong unaff_x19;
  longlong lVar5;
  
  uVar1 = *(uint *)(unaff_x19 + 0x28);
  lVar5 = *(longlong *)(unaff_x19 + 0x18) + (ulonglong)uVar1 * 0x30;
  plVar3 = *(longlong **)(lVar5 + 0x20);
  if ((plVar3 != (longlong *)0x0) &&
     (uVar4 = (**(code **)(*plVar3 + 0x40))(), uVar4 < *(ulonglong *)(lVar5 + 0x28))) {
    lVar5 = *(longlong *)(unaff_x19 + 0x18) + (ulonglong)uVar1 * 0x30;
    plVar3 = *(longlong **)(lVar5 + 0x20);
    (**(code **)(*plVar3 + 0x48))
              (plVar3,*(undefined8 *)(lVar5 + 0x28),*(undefined8 *)(unaff_x19 + 0x40));
    (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(unaff_x19 + 0x40),0xffffffff);
  }
  uVar4 = 0;
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)(unaff_x19 + 0x18) + uVar4 * 0x30 + 0x10) + 0x10))()
      ;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(unaff_x19 + 0x20));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x18));
  pcVar2 = __imp_KERNEL32_dll_CloseHandle;
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  (*pcVar2)(*(undefined8 *)(unaff_x19 + 0x40));
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  thunk_FUN_180102fc0(*(undefined8 *)(unaff_x19 + 0x18));
  FUN_180102fc0();
  return;
}

