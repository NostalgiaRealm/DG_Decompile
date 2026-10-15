/*
 * FUN_1800f3868 at 1800f3868
 * undefined FUN_1800f3868(void)
 * Address ranges: 1800f3868-1800f396f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f3868(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x30;
    plVar4 = *(longlong **)(lVar1 + 0x20);
    if ((plVar4 != (longlong *)0x0) &&
       (uVar5 = (**(code **)(*plVar4 + 0x40))(), uVar5 < *(ulonglong *)(lVar1 + 0x28))) {
      lVar1 = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar2 * 0x30;
      plVar4 = *(longlong **)(lVar1 + 0x20);
      (**(code **)(*plVar4 + 0x48))
                (plVar4,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(param_1 + 0x30));
      (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(param_1 + 0x30),0xffffffff);
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        (**(code **)(**(longlong **)(uVar5 * 0x30 + *(longlong *)(param_1 + 0x10) + 8) + 0x10))();
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + uVar5 * 0x30) + 0x10))();
        uVar2 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0x18));
    }
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x10));
    pcVar3 = __imp_KERNEL32_dll_CloseHandle;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (*pcVar3)(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x10));
  return;
}

