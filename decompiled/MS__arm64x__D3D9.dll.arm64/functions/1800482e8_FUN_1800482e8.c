/*
 * FUN_1800482e8 at 1800482e8
 * undefined FUN_1800482e8(void)
 * Address ranges: 1800482e8-1800484af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800482e8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  
  lVar15 = *param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
  plVar14 = (longlong *)param_1[2];
  lVar8 = param_1[3];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar9 = param_1[4];
  cVar7 = *(char *)((longlong)param_1 + 0x24);
  FUN_18003feb0(lVar15,0,0,0);
  lVar1 = lVar15 + (ulonglong)uVar4 * 8;
  FUN_180038eb0(lVar15,*(undefined8 *)(lVar1 + 0xfe10));
  *(undefined8 *)(lVar1 + 0xfe10) = 0;
  lVar2 = lVar15 + 0xffcc;
  iVar3 = (int)uVar4 >> 3;
  *(byte *)(lVar2 + iVar3) = *(byte *)(lVar2 + iVar3) & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff)
  ;
  if (plVar14 == (longlong *)0x0) {
    FUN_180056840(lVar15,uVar4,uVar5,0,0,(int)lVar8,uVar6,(char)lVar9,cVar7,0);
    *(undefined8 *)(lVar1 + 0xfd10) = 0;
    *(undefined8 *)(lVar1 + 0xfd90) = 0;
  }
  else {
    iVar10 = (**(code **)(*plVar14 + 8))(plVar14);
    if (iVar10 == 1) {
      plVar13 = plVar14 + -4;
      *(undefined8 *)(lVar1 + 0xfd10) = 0;
      *(longlong **)(lVar1 + 0xfd90) = plVar13;
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = plVar14 + -0x20;
      plVar13 = (longlong *)0x0;
      if (((cVar7 == '\0') || (iVar10 = (**(code **)(*plVar14 + 0x48))(plVar14), iVar10 != 1)) ||
         (uVar12 = 1, *(int *)((longlong)plVar14 + -0xcc) != 1)) {
        uVar12 = 0;
      }
      *(undefined1 *)((longlong)plVar14 + 0x92) = uVar12;
      *(undefined8 *)(lVar1 + 0xfd90) = 0;
      *(longlong **)(lVar1 + 0xfd10) = plVar11;
      if (*(int *)((longlong)plVar14 + -0xbc) - 3U < 3) {
        *(byte *)(lVar2 + iVar3) = *(byte *)(lVar2 + iVar3) | (byte)(1 << (ulonglong)(uVar4 & 7));
      }
    }
    FUN_180056840(lVar15,uVar4,uVar5,plVar11,plVar13,(int)lVar8,uVar6,(char)lVar9,cVar7,0);
    *(undefined1 *)(lVar15 + 0x1018b) = 1;
  }
  return;
}

