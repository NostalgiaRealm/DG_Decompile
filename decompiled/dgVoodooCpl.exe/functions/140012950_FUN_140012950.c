/*
 * FUN_140012950 at 140012950
 * undefined __fastcall FUN_140012950(longlong param_1)
 * Address ranges: 140012950-140012a66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140012950(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  uVar7 = uVar8;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x480);
      uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar7 * 4);
      piVar1 = (int *)(lVar2 + 0x18 + uVar4 * 0x28);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && (lVar5 = uVar4 * 0x20, *(longlong *)(lVar2 + 0x330 + lVar5) != 0)) {
        (**(code **)(**(longlong **)(lVar2 + 0x338 + lVar5) + 0x10))();
        *(undefined8 *)(lVar2 + 0x338 + lVar5) = 0;
        (**(code **)(**(longlong **)(lVar2 + 0x330 + lVar5) + 0x10))();
        *(undefined8 *)(lVar2 + 0x330 + lVar5) = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x328));
  }
  lVar2 = *(longlong *)(param_1 + 0x480);
  do {
    plVar3 = *(longlong **)(lVar2 + 8 + uVar8 * 0x28);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar2 + 8 + uVar8 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x14 + uVar8 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x10 + uVar8 * 0x28) = 0;
      *(undefined1 *)(lVar2 + 0x1c + uVar8 * 0x28) = 0;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x10);
  if (*(longlong **)(lVar2 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar2 + 0x310) + 0x10))();
    *(undefined8 *)(lVar2 + 0x310) = 0;
  }
  FUN_140024260(*(LPVOID *)(lVar2 + 0x318));
  *(undefined8 *)(lVar2 + 0x318) = 0;
  *(undefined8 *)(lVar2 + 800) = 0;
  return;
}

