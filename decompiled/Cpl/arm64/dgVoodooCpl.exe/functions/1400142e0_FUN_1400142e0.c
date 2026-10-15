/*
 * FUN_1400142e0 at 1400142e0
 * undefined __cdecl FUN_1400142e0(longlong param_1)
 * Address ranges: 1400142e0-1400143db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400142e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x480);
      uVar5 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar7 * 4);
      lVar8 = lVar6 + uVar5 * 0x28;
      iVar3 = *(int *)(lVar8 + 0x18) + -1;
      *(int *)(lVar8 + 0x18) = iVar3;
      if ((iVar3 == 0) && (lVar6 = lVar6 + uVar5 * 0x20, *(longlong *)(lVar6 + 0x330) != 0)) {
        (**(code **)(**(longlong **)(lVar6 + 0x338) + 0x10))();
        *(undefined8 *)(lVar6 + 0x338) = 0;
        (**(code **)(**(longlong **)(lVar6 + 0x330) + 0x10))();
        *(undefined8 *)(lVar6 + 0x330) = 0;
      }
      uVar1 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x328));
  }
  lVar6 = *(longlong *)(param_1 + 0x480);
  lVar8 = 0;
  do {
    plVar4 = *(longlong **)(lVar6 + 8 + lVar8 * 0x28);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      lVar2 = lVar6 + lVar8 * 0x28;
      *(undefined8 *)(lVar6 + 8 + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined1 *)(lVar2 + 0x1c) = 0;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x10);
  if (*(longlong **)(lVar6 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar6 + 0x310) + 0x10))();
    *(undefined8 *)(lVar6 + 0x310) = 0;
  }
  thunk_FUN_140024830(*(LPVOID *)(lVar6 + 0x318));
  *(undefined8 *)(lVar6 + 0x318) = 0;
  *(undefined8 *)(lVar6 + 800) = 0;
  return;
}

