/*
 * FUN_1800515d8 at 1800515d8
 * undefined __fastcall FUN_1800515d8(longlong * param_1)
 * Address ranges: 1800515d8-180051781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800515d8(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  undefined1 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  lVar4 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = (ulonglong)uVar2;
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  plVar5 = (longlong *)param_1[2];
  cVar1 = *(char *)((longlong)param_1 + 0x24);
  FUN_180049b30(lVar4,0,0,0);
  FUN_1800438c0(lVar4,*(ulonglong *)(lVar4 + 0xfe10 + uVar11 * 8));
  *(undefined8 *)(lVar4 + 0xfe10 + uVar11 * 8) = 0;
  pbVar6 = (byte *)(lVar4 + 0xffcc + ((longlong)(int)uVar2 >> 3));
  *pbVar6 = *pbVar6 & ~('\x01' << (uVar2 & 7));
  if (plVar5 == (longlong *)0x0) {
    FUN_18005e0b0(lVar4,uVar2,iVar3,(longlong *)0x0,(longlong *)0x0);
    *(undefined8 *)(lVar4 + 0xfd10 + uVar11 * 8) = 0;
    *(undefined8 *)(lVar4 + 0xfd90 + uVar11 * 8) = 0;
  }
  else {
    iVar8 = (**(code **)(*plVar5 + 8))(plVar5);
    if (iVar8 == 1) {
      plVar10 = (longlong *)0x0;
      plVar9 = plVar5 + -4;
      *(undefined8 *)(lVar4 + 0xfd10 + uVar11 * 8) = 0;
      *(longlong **)(lVar4 + 0xfd90 + uVar11 * 8) = plVar9;
    }
    else {
      plVar9 = (longlong *)0x0;
      plVar10 = plVar5 + -0x20;
      if (((cVar1 == '\0') || (iVar8 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar8 != 1)) ||
         (uVar7 = 1, *(int *)((longlong)plVar5 + -0xcc) != 1)) {
        uVar7 = 0;
      }
      *(undefined1 *)((longlong)plVar5 + 0x92) = uVar7;
      *(longlong **)(lVar4 + 0xfd10 + uVar11 * 8) = plVar10;
      *(undefined8 *)(lVar4 + 0xfd90 + uVar11 * 8) = 0;
      if (*(int *)((longlong)plVar5 + -0xbc) - 3U < 3) {
        pbVar6 = (byte *)(lVar4 + 0xffcc + ((longlong)(int)uVar2 >> 3));
        *pbVar6 = *pbVar6 | '\x01' << (uVar2 & 7);
      }
    }
    FUN_18005e0b0(lVar4,uVar2,iVar3,plVar10,plVar9);
    *(undefined1 *)(lVar4 + 0x1018b) = 1;
  }
  return;
}

