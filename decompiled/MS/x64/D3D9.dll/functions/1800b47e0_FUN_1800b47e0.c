/*
 * FUN_1800b47e0 at 1800b47e0
 * undefined8 __fastcall FUN_1800b47e0(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 1800b47e0-1800b49b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800b47e0(longlong param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  BOOL BVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (((param_2 - 0x10 < 0xf0) || (0x103 < param_2)) && (param_2 != 0x104)) {
    return 0x8876086c;
  }
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    bVar3 = true;
    BVar4 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar4 == 0) {
      FUN_1800044dc(0);
    }
  }
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  if (param_3 != (longlong *)0x0) {
    iVar5 = (**(code **)(*param_3 + 0x50))(param_3);
    if (iVar5 == 3) {
LAB_1800b487f:
      plVar9 = param_3 + -0x13;
    }
    else if (iVar5 == 4) {
      plVar10 = param_3 + -0x23;
      plVar9 = (longlong *)0x0;
    }
    else if (iVar5 == 5) goto LAB_1800b487f;
  }
  uVar1 = param_2 - 0x100;
  if (4 < uVar1) {
    FUN_180006f9c(param_1 - 0x6838,param_2,plVar9,plVar10);
    goto LAB_1800b498c;
  }
  if (plVar9 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    if (plVar10 != (longlong *)0x0) {
      iVar5 = (int)plVar10[0x20];
      lVar6 = plVar10[3];
      plVar8 = plVar10;
      goto LAB_1800b48c7;
    }
  }
  else {
    iVar5 = *(int *)((longlong)plVar9 + 0x7c);
    lVar6 = plVar9[3];
    plVar8 = plVar9;
LAB_1800b48c7:
    uVar7 = -(ulonglong)(lVar6 != 0) & lVar6 - 0x6838U;
    if ((((iVar5 == 3) || ((iVar5 == 2 && (*(int *)(param_1 + -0x59d0) != 3)))) || (uVar7 != 0)) &&
       (uVar7 != param_1 - 0x6838U)) goto LAB_1800b498c;
  }
  if (*(char *)(param_1 + -0x642c) == '\0') {
    FUN_1800b0868(param_1 + -0x6838,uVar1,(longlong)plVar8,plVar9,plVar10);
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    plVar10 = *(longlong **)(lVar6 + 0x4fc0 + (ulonglong)uVar1 * 8);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x4fc0 + (ulonglong)uVar1 * 8) = plVar8;
    pbVar2 = (byte *)(lVar6 + 0xad38 + (ulonglong)(uVar1 >> 6) * 8 +
                     ((longlong)(ulonglong)(uVar1 & 0x3f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(uVar1 & 0x3f) & 7);
  }
LAB_1800b498c:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return 0;
}

