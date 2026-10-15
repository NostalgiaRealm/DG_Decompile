/*
 * FUN_1800491f8 at 1800491f8
 * undefined __cdecl FUN_1800491f8(undefined8 * param_1)
 * Address ranges: 1800491f8-1800492f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800491f8(undefined8 *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *param_1 = &PTR_FUN_180065270;
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = *(uint *)(param_1 + 5);
    lVar1 = param_1[3] + (ulonglong)uVar2 * 0x30;
    plVar3 = *(longlong **)(lVar1 + 0x20);
    if ((plVar3 != (longlong *)0x0) &&
       (uVar4 = (**(code **)(*plVar3 + 0x40))(), uVar4 < *(ulonglong *)(lVar1 + 0x28))) {
      lVar1 = param_1[3] + (ulonglong)uVar2 * 0x30;
      plVar3 = *(longlong **)(lVar1 + 0x20);
      (**(code **)(*plVar3 + 0x48))(plVar3,*(undefined8 *)(lVar1 + 0x28),param_1[8]);
      WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        (**(code **)(**(longlong **)(param_1[3] + uVar4 * 0x30 + 0x10) + 0x10))();
        uVar2 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    thunk_FUN_18005fbc8((LPVOID)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    CloseHandle((HANDLE)param_1[8]);
    param_1[8] = 0;
  }
  thunk_FUN_18005fbc8((LPVOID)param_1[3]);
  return;
}

