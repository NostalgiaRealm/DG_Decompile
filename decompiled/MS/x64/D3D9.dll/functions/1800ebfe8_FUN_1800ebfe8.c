/*
 * FUN_1800ebfe8 at 1800ebfe8
 * undefined __fastcall FUN_1800ebfe8(longlong param_1)
 * Address ranges: 1800ebfe8-1800ec0c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ebfe8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x10);
    plVar2 = *(longlong **)(lVar1 + 0x20 + uVar3 * 0x30);
    if (plVar2 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar2 + 0x40))();
      if (uVar4 < *(ulonglong *)(lVar1 + 0x28 + uVar3 * 0x30)) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20 + uVar3 * 0x30);
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28 + uVar3 * 0x30),
                   *(undefined8 *)(param_1 + 0x30));
        WaitForSingleObject(*(HANDLE *)(param_1 + 0x30),0xffffffff);
      }
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + uVar3 * 0x30) + 0x10))();
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + uVar3 * 0x30) + 0x10))();
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x18));
    }
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x10));
  return;
}

