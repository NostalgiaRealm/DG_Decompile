/*
 * FUN_1800a2390 at 1800a2390
 * undefined FUN_1800a2390(void)
 * Address ranges: 1800a2390-1800a2507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2390(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  (**(code **)(*param_1 + 0x150))();
  if (*(uint *)(param_1 + 0x2017) == 0) {
    return;
  }
  uVar7 = 0;
  while( true ) {
    puVar2 = (undefined8 *)(param_1[0x2016] + uVar7 * 0x30);
    plVar9 = (longlong *)*puVar2;
    uVar6 = (uint)uVar7;
    if (*plVar9 == param_2) break;
    uVar7 = (ulonglong)(uVar6 + 1);
    if (*(uint *)(param_1 + 0x2017) <= uVar6 + 1) {
      return;
    }
  }
  plVar10 = (longlong *)puVar2[1];
  lVar8 = param_1[4];
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar8 + 0x620);
  if (((plVar10 != (longlong *)0x0) &&
      ((longlong *)plVar9[0x1ae] == param_1 || (longlong *)plVar9[0x1ae] == (longlong *)0x0)) &&
     (*(uint *)(lVar8 + 0x660) != 0)) {
    uVar7 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar8 + 0x658) + uVar7 * 8) == plVar10) {
        if ((int)uVar7 != -1) {
          (**(code **)(*plVar10 + 8))(plVar10,plVar9);
        }
        break;
      }
      uVar5 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(lVar8 + 0x660));
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar8 + 0x620);
  iVar4 = FUN_1800e6028(param_1[4],param_2,param_1);
  if ((iVar4 == 0) && (uVar5 = *(uint *)(param_1 + 0x2017), uVar6 < uVar5)) {
    while( true ) {
      uVar1 = uVar6 + 1;
      if (uVar5 <= uVar1) break;
      puVar2 = (undefined8 *)(param_1[0x2016] + (ulonglong)uVar6 * 0x30);
      puVar3 = (undefined8 *)(param_1[0x2016] + (ulonglong)uVar1 * 0x30);
      uVar13 = *puVar3;
      uVar12 = puVar3[3];
      uVar11 = puVar3[2];
      puVar2[1] = puVar3[1];
      *puVar2 = uVar13;
      puVar2[3] = uVar12;
      puVar2[2] = uVar11;
      uVar11 = puVar3[4];
      puVar2[5] = puVar3[5];
      puVar2[4] = uVar11;
      uVar5 = *(uint *)(param_1 + 0x2017);
      uVar6 = uVar1;
    }
    *(uint *)(param_1 + 0x2017) = uVar5 - 1;
  }
  return;
}

