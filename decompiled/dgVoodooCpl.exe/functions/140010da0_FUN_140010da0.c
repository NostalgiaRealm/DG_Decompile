/*
 * FUN_140010da0 at 140010da0
 * undefined __fastcall FUN_140010da0(longlong param_1)
 * Address ranges: 140010da0-140010ed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010da0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar6 * 4);
      piVar1 = (int *)(lVar2 + 0x18 + uVar4 * 0x28);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        plVar3 = *(longlong **)(lVar2 + 0x340 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x340 + uVar4 * 0x28) = 0;
        }
        plVar3 = *(longlong **)(lVar2 + 0x338 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x338 + uVar4 * 0x28) = 0;
        }
        plVar3 = *(longlong **)(lVar2 + 0x330 + uVar4 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
          *(undefined8 *)(lVar2 + 0x330 + uVar4 * 0x28) = 0;
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0x328));
  }
  lVar2 = *(longlong *)(param_1 + 0x480);
  do {
    plVar3 = *(longlong **)(lVar2 + 8 + uVar7 * 0x28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar2 + 8 + uVar7 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x14 + uVar7 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x10 + uVar7 * 0x28) = 0;
      *(undefined1 *)(lVar2 + 0x1c + uVar7 * 0x28) = 0;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x10);
  if (*(longlong **)(lVar2 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0x310) + 0x10))();
    *(undefined8 *)(lVar2 + 0x310) = 0;
  }
  FUN_140024260(*(LPVOID *)(lVar2 + 0x318));
  *(undefined8 *)(lVar2 + 0x318) = 0;
  *(undefined8 *)(lVar2 + 800) = 0;
  return;
}

