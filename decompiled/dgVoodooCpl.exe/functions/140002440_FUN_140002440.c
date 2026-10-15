/*
 * FUN_140002440 at 140002440
 * undefined __fastcall FUN_140002440(longlong param_1)
 * Address ranges: 140002440-140002663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140002440(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  LRESULT LVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b7) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x40f);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x40f,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x1fb)) goto LAB_1400024a2;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_1400024a2:
      FUN_14000e4a0(param_1,0x40f,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b7) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b8) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x410);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x410,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x1ff)) goto LAB_140002513;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_140002513:
      FUN_14000e4a0(param_1,0x410,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b8) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2b9) != '\0') {
    uVar7 = 0;
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x411);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar5 = (int)uVar7;
        iVar3 = FUN_14000e270(param_1,0x411,uVar7);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x203)) goto LAB_140002584;
        uVar6 = iVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      iVar5 = -1;
LAB_140002584:
      FUN_14000e4a0(param_1,0x411,iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2b9) = 0;
  }
  if (*(char *)(*(longlong *)(param_1 + 0x80) + 0x2ba) != '\0') {
    uVar6 = 0;
    LVar4 = FUN_14000e230(param_1,0x412);
    uVar2 = (uint)LVar4;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_14000e270(param_1,0x412,(ulonglong)uVar6);
        if (iVar3 == *(int *)(*(longlong *)(param_1 + 0x80) + 0x207)) goto LAB_1400025f1;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar2);
    }
    if (uVar6 == uVar2) {
      uVar6 = 0xffffffff;
LAB_1400025f1:
      FUN_14000e4a0(param_1,0x412,uVar6);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 0x2ba) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (*(char *)(lVar1 + 699) != '\0') {
    FUN_14000e200(param_1,0x413,
                  CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x20b)));
    *(undefined1 *)(*(longlong *)(param_1 + 0x80) + 699) = 0;
  }
  return;
}

