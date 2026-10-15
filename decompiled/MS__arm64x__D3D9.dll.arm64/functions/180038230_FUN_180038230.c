/*
 * FUN_180038230 at 180038230
 * undefined FUN_180038230(void)
 * Address ranges: 180038230-180038253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180038230(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_18023c018;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(uint *)(param_1 + 5);
    lVar5 = param_1[3] + (ulonglong)uVar1 * 0x30;
    plVar3 = *(longlong **)(lVar5 + 0x20);
    if ((plVar3 != (longlong *)0x0) &&
       (uVar4 = (**(code **)(*plVar3 + 0x40))(), uVar4 < *(ulonglong *)(lVar5 + 0x28))) {
      lVar5 = param_1[3] + (ulonglong)uVar1 * 0x30;
      plVar3 = *(longlong **)(lVar5 + 0x20);
      (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(lVar5 + 0x28),param_1[8]);
      (*__imp_KERNEL32_dll_WaitForSingleObject)(param_1[8],0xffffffff);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        (**(code **)(**(longlong **)(param_1[3] + uVar4 * 0x30 + 0x10) + 0x10))();
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 4));
    }
    thunk_FUN_180102fc0(param_1[3]);
    pcVar2 = __imp_KERNEL32_dll_CloseHandle;
    param_1[3] = 0;
    param_1[4] = 0;
    (*pcVar2)(param_1[8]);
    param_1[8] = 0;
  }
  thunk_FUN_180102fc0(param_1[3]);
  FUN_180102fc0(param_1,0x48);
  return param_1;
}

