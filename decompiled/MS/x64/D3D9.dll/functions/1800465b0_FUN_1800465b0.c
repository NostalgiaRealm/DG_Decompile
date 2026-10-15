/*
 * FUN_1800465b0 at 1800465b0
 * undefined __fastcall FUN_1800465b0(longlong param_1, char param_2)
 * Address ranges: 1800465b0-180046995
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800465b0(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  longlong *plVar9;
  
  if ((*(char *)(param_1 + 0xf68a) == '\0') && (param_2 == '\0')) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x10185);
  plVar9 = (longlong *)0x0;
  plVar7 = (longlong *)(param_1 + 0xfcb0);
  if (*(longlong *)(param_1 + 0xfcb0) == 0) {
    plVar7 = plVar9;
  }
  iVar4 = 0x1f;
  if (bVar1 != 0) {
    for (; bVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  uVar13 = 0;
  if (bVar1 != 0) {
    uVar13 = iVar4 + 1;
  }
  cVar2 = *(char *)(param_1 + 0x765d);
  lVar12 = 0xfc80;
  if (cVar2 == '\0') {
    lVar12 = 0xfba0;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  if (uVar13 == 0) {
    bVar14 = *(longlong *)(lVar3 + 0x4d8) == 0;
    if (!bVar14) {
      *(undefined8 *)(lVar3 + 0x4d8) = 0;
    }
    lVar11 = *(longlong *)(lVar3 + 0x4e0);
LAB_1800467f1:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x4e0) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x4e8);
LAB_180046806:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x4e8) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x4f0);
LAB_18004681b:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x4f0) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x4f8);
LAB_180046830:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x4f8) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x500);
LAB_180046845:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x500) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x508);
LAB_18004685a:
    if (lVar11 != 0) {
      *(undefined8 *)(lVar3 + 0x508) = 0;
      bVar14 = false;
    }
    lVar11 = *(longlong *)(lVar3 + 0x510);
LAB_18004686f:
    if (lVar11 == 0) {
LAB_18004688b:
      plVar10 = &DAT_180117578;
      if (plVar7 != (longlong *)0x0) {
        plVar10 = plVar7;
      }
      if ((bVar14) && (*plVar10 == *(longlong *)(lVar3 + 0x518))) goto LAB_180046930;
    }
    else {
      *(undefined8 *)(lVar3 + 0x510) = 0;
      plVar10 = &DAT_180117578;
      if (plVar7 != (longlong *)0x0) {
        plVar10 = plVar7;
      }
    }
  }
  else {
    lVar11 = *(longlong *)(lVar12 + param_1);
    bVar14 = *(longlong *)(lVar3 + 0x4d8) == lVar11;
    if (!bVar14) {
      *(longlong *)(lVar3 + 0x4d8) = lVar11;
    }
    lVar11 = *(longlong *)(lVar3 + 0x4e0);
    if (uVar13 < 2) goto LAB_1800467f1;
    lVar6 = 0xfc88;
    if (cVar2 == '\0') {
      lVar6 = 0xfba8;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x4e0) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x4e8);
    if (uVar13 < 3) goto LAB_180046806;
    lVar6 = 0xfc90;
    if (cVar2 == '\0') {
      lVar6 = 0xfbb0;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x4e8) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x4f0);
    if (uVar13 < 4) goto LAB_18004681b;
    lVar6 = 0xfc98;
    if (cVar2 == '\0') {
      lVar6 = 0xfbb8;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x4f0) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x4f8);
    if (uVar13 < 5) goto LAB_180046830;
    lVar6 = 0xfca0;
    if (cVar2 == '\0') {
      lVar6 = 0xfbc0;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x4f8) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x500);
    if (uVar13 < 6) goto LAB_180046845;
    lVar6 = 0xfca8;
    if (cVar2 == '\0') {
      lVar6 = 0xfbc8;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x500) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x508);
    if (uVar13 < 7) goto LAB_18004685a;
    lVar6 = 0xfcb0;
    if (cVar2 == '\0') {
      lVar6 = 0xfbd0;
    }
    lVar6 = *(longlong *)(lVar6 + param_1);
    if (lVar11 != lVar6) {
      *(longlong *)(lVar3 + 0x508) = lVar6;
    }
    bVar14 = lVar11 == lVar6 && bVar14;
    lVar11 = *(longlong *)(lVar3 + 0x510);
    if (uVar13 < 8) goto LAB_18004686f;
    lVar6 = 0xfcb8;
    if (cVar2 == '\0') {
      lVar6 = 0xfbd8;
    }
    if (lVar11 == *(longlong *)(lVar6 + param_1)) goto LAB_18004688b;
    *(longlong *)(lVar3 + 0x510) = *(longlong *)(lVar6 + param_1);
    plVar10 = &DAT_180117578;
    if (plVar7 != (longlong *)0x0) {
      plVar10 = plVar7;
    }
  }
  iVar4 = *(int *)(lVar3 + 0x67c);
  *(int *)(lVar3 + 0x67c) = iVar4 + 1;
  if (((iVar4 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) && (*(int *)(lVar3 + 0xba8) != 0)) {
    do {
      (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + (longlong)plVar9 * 8))();
      uVar8 = (int)plVar9 + 1;
      plVar9 = (longlong *)(ulonglong)uVar8;
    } while (uVar8 < *(uint *)(lVar3 + 0xba8));
  }
  (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x170))
            (*(longlong **)(lVar3 + 0x688),uVar13,(longlong *)(lVar12 + param_1),0,plVar7);
  *(longlong *)(lVar3 + 0x518) = *plVar10;
  *(undefined1 *)(lVar3 + 0x674) = 1;
LAB_180046930:
  *(uint *)(param_1 + 0xf950) = uVar13;
  plVar7 = *(longlong **)(param_1 + 0xfcc0);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0xfce0);
  }
  uVar5 = (**(code **)(*plVar7 + 0x50))();
  *(undefined4 *)(param_1 + 0xf97c) = 0;
  *(undefined1 *)(param_1 + 0xf68a) = 0;
  *(undefined4 *)(param_1 + 0xf978) = uVar5;
  *(undefined1 *)(param_1 + 0xf6c4) = 1;
  *(undefined1 *)(param_1 + 0x10189) = 1;
  return;
}

