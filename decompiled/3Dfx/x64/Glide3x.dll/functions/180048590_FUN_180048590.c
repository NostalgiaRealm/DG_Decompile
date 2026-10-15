/*
 * FUN_180048590 at 180048590
 * undefined __fastcall FUN_180048590(undefined8 * param_1)
 * Address ranges: 180048590-180048666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048590(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  *param_1 = &PTR_FUN_1800664f0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 5);
    lVar1 = param_1[3];
    plVar2 = *(longlong **)(lVar1 + 0x20 + uVar3 * 0x30);
    if (plVar2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x40))();
      if (uVar4 < *(ulonglong *)(lVar1 + 0x28 + uVar3 * 0x30)) {
        plVar2 = *(longlong **)(param_1[3] + 0x20 + uVar3 * 0x30);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*(undefined8 *)(param_1[3] + 0x28 + uVar3 * 0x30),param_1[8]);
        WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
      }
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        (**(code **)(**(longlong **)(param_1[3] + 0x10 + uVar3 * 0x30) + 0x10))();
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 4));
    }
    FUN_180060ac0((LPVOID)param_1[3]);
    param_1[3] = 0;
    param_1[4] = 0;
    CloseHandle((HANDLE)param_1[8]);
    param_1[8] = 0;
  }
  FUN_180060ac0((LPVOID)param_1[3]);
  return;
}

