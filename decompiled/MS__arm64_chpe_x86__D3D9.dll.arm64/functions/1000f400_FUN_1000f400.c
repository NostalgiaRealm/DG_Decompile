/*
 * FUN_1000f400 at 1000f400
 * undefined FUN_1000f400(void)
 * Address ranges: 1000f400-1000f5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000f400(int param_1,char param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_50;
  undefined4 local_4c [3];
  
  local_50 = param_3;
  if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar6 = true;
    iVar9 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar9 == 0) {
      FUN_100071d0(0);
    }
  }
  piVar8 = (int *)FUN_1000fed0(param_1 + 0xe48,&local_50);
  if (piVar8 == (int *)0x0) {
    local_4c[0] = FUN_101321c0(0x408);
    iVar9 = FUN_1000ff60(param_1 + 0xe48,&local_50,local_4c);
    piVar8 = (int *)(iVar9 + 4);
    FUN_101325d0(*piVar8,0,0x408);
  }
  uVar11 = 0x8007000e;
  if (piVar8 != (int *)0x0) {
    uVar10 = 0;
    if (param_2 == '\0') {
      do {
        if (*(char *)(param_4 + 3 + uVar10 * 4) != -1) goto LAB_1000f59c;
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0x100);
      if (uVar10 != 0x100) goto LAB_1000f59c;
    }
    iVar9 = *piVar8;
    bVar7 = false;
    uVar10 = 0;
    do {
      iVar1 = uVar10 * 4;
      piVar8 = (int *)(iVar9 + uVar10 * 4);
      iVar2 = uVar10 * 4;
      iVar3 = uVar10 * 4;
      iVar4 = uVar10 * 4;
      uVar10 = uVar10 + 1;
      iVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_4 + 3 + iVar1),
                                         *(undefined1 *)(param_4 + iVar2)),
                                *(undefined1 *)(param_4 + 1 + iVar3)),
                       *(undefined1 *)(param_4 + 2 + iVar4));
      iVar2 = *piVar8;
      *piVar8 = iVar1;
      bVar7 = (bool)(iVar1 != iVar2 | bVar7);
    } while (uVar10 < 0x100);
    if (bVar7) {
      plVar5 = (longlong *)(iVar9 + 0x400);
      *plVar5 = *plVar5 + 1;
      *(undefined4 *)(param_1 + 0x667c) = 0xffff;
      *(undefined4 *)(param_1 + 0x6688) = 0x1f;
    }
    uVar11 = 0;
  }
LAB_1000f59c:
  if (bVar6) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar11;
}

