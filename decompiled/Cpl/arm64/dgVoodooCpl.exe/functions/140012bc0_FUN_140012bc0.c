/*
 * FUN_140012bc0 at 140012bc0
 * undefined __cdecl FUN_140012bc0(longlong param_1)
 * Address ranges: 140012bc0-140012ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140012bc0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x480) +
              (ulonglong)*(uint *)(*(longlong *)(param_1 + 800) + uVar6 * 4) * 0x28;
      iVar3 = *(int *)(lVar7 + 0x18) + -1;
      *(int *)(lVar7 + 0x18) = iVar3;
      if (iVar3 == 0) {
        if (*(longlong **)(lVar7 + 0x340) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar7 + 0x340) + 0x10))();
          *(undefined8 *)(lVar7 + 0x340) = 0;
        }
        if (*(longlong **)(lVar7 + 0x338) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar7 + 0x338) + 0x10))();
          *(undefined8 *)(lVar7 + 0x338) = 0;
        }
        if (*(longlong **)(lVar7 + 0x330) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar7 + 0x330) + 0x10))();
          *(undefined8 *)(lVar7 + 0x330) = 0;
        }
      }
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x328));
  }
  lVar5 = *(longlong *)(param_1 + 0x480);
  lVar7 = 0;
  do {
    plVar4 = *(longlong **)(lVar5 + 8 + lVar7 * 0x28);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
      lVar2 = lVar5 + lVar7 * 0x28;
      *(undefined8 *)(lVar5 + 8 + lVar7 * 0x28) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined1 *)(lVar2 + 0x1c) = 0;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x10);
  if (*(longlong **)(lVar5 + 0x310) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar5 + 0x310) + 0x10))();
    *(undefined8 *)(lVar5 + 0x310) = 0;
  }
  thunk_FUN_140024830(*(LPVOID *)(lVar5 + 0x318));
  *(undefined8 *)(lVar5 + 0x318) = 0;
  *(undefined8 *)(lVar5 + 800) = 0;
  return;
}

