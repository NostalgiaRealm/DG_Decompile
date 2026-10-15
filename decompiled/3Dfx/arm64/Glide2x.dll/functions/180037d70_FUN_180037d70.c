/*
 * FUN_180037d70 at 180037d70
 * undefined __cdecl FUN_180037d70(longlong param_1)
 * Address ranges: 180037d70-180037ed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180037d70(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  FUN_180037ff8(param_1);
  FUN_180055628(*(longlong *)(param_1 + 0xb0),param_1 + 0xa8);
  uVar6 = 0;
  if (*(int *)(param_1 + 0xe8) != 0) {
    do {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      if (*(int *)(*(longlong *)(lVar3 + uVar6 * 8) + 8) != 0) {
        uVar4 = 0;
        do {
          puVar2 = *(undefined8 **)(**(longlong **)(lVar3 + uVar6 * 8) + uVar4 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
          lVar3 = *(longlong *)(param_1 + 0xe0);
          uVar1 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(*(longlong *)(lVar3 + uVar6 * 8) + 8));
      }
      puVar2 = *(undefined8 **)(lVar3 + uVar6 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        thunk_FUN_18005fbc8((LPVOID)*puVar2);
        FUN_18005fbc8(puVar2);
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xe8));
  }
  thunk_FUN_18005fbc8(*(LPVOID *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  plVar5 = *(longlong **)(param_1 + 0x98);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  lVar3 = lVar7 + (ulonglong)uVar1 * 0x18c0;
  if (plVar5 == *(longlong **)(lVar3 + 0xb70)) {
    *(undefined8 *)(lVar3 + 0xb70) = 0;
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x620));
  auVar8 = FUN_18004fae8(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31b0),
                         *(uint *)(*(longlong *)(param_1 + 0x60) + 0x31b8),
                         *(longlong **)(param_1 + 0x90));
  FUN_18004f798(auVar8._0_8_,auVar8._8_8_,1,param_1 + 0x80,param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

