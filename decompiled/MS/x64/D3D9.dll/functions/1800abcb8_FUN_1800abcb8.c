/*
 * FUN_1800abcb8 at 1800abcb8
 * undefined __fastcall FUN_1800abcb8(longlong * param_1, longlong param_2)
 * Address ranges: 1800abcb8-1800abdf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800abcb8(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  
  (**(code **)(*param_1 + 0x150))();
  if (*(uint *)(param_1 + 0x2017) == 0) {
    return;
  }
  uVar10 = 0;
  while( true ) {
    plVar3 = *(longlong **)(param_1[0x2016] + uVar10 * 0x30);
    uVar11 = (uint)uVar10;
    if (*plVar3 == param_2) break;
    uVar10 = (ulonglong)(uVar11 + 1);
    if (*(uint *)(param_1 + 0x2017) <= uVar11 + 1) {
      return;
    }
  }
  lVar4 = param_1[4];
  plVar5 = *(longlong **)(param_1[0x2016] + 8 + uVar10 * 0x30);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x620));
  if ((plVar5 != (longlong *)0x0) &&
     ((((longlong *)plVar3[0x1ae] == param_1 || ((longlong *)plVar3[0x1ae] == (longlong *)0x0)) &&
      (*(uint *)(lVar4 + 0x660) != 0)))) {
    uVar10 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar4 + 0x658) + uVar10 * 8) == plVar5) {
        if ((int)uVar10 != -1) {
          (**(code **)(*plVar5 + 8))(plVar5,plVar3);
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < *(uint *)(lVar4 + 0x660));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x620));
  iVar7 = FUN_1800e05b4((longlong *)param_1[4],param_2,(longlong)param_1);
  if ((iVar7 == 0) && (uVar9 = *(uint *)(param_1 + 0x2017), uVar11 < uVar9)) {
    while( true ) {
      uVar12 = uVar11 + 1;
      uVar10 = (ulonglong)uVar12;
      if (uVar9 <= uVar12) break;
      lVar4 = param_1[0x2016];
      uVar8 = (ulonglong)uVar11;
      puVar1 = (undefined8 *)(lVar4 + uVar10 * 0x30);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar10 * 0x30);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + uVar8 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar10 * 0x30);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + uVar8 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      uVar9 = *(uint *)(param_1 + 0x2017);
      uVar11 = uVar12;
    }
    *(uint *)(param_1 + 0x2017) = uVar9 - 1;
  }
  return;
}

