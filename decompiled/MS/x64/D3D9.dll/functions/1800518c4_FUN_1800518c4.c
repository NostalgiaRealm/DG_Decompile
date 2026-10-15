/*
 * FUN_1800518c4 at 1800518c4
 * undefined __fastcall FUN_1800518c4(longlong param_1, uint * param_2)
 * Address ranges: 1800518c4-180051ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800518c4(longlong param_1,uint *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar7 = *(uint *)(param_1 + 0xf7c8);
  uVar12 = (ulonglong)*param_2;
  if (uVar7 == 0) {
LAB_18005194c:
    lVar14 = 0;
    if (uVar7 != 0) goto LAB_180051958;
  }
  else {
    uVar13 = 0;
    uVar10 = uVar7;
    do {
      uVar5 = uVar10 + uVar13 >> 1;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + (ulonglong)uVar5 * 0x18);
      uVar6 = uVar5;
      if (uVar2 <= uVar12) {
        if (uVar12 <= uVar2) break;
        uVar13 = uVar5 + 1;
        uVar6 = uVar10;
        uVar5 = uVar13;
      }
      uVar10 = uVar6;
    } while (uVar10 != uVar13);
    if (uVar5 == uVar7) goto LAB_18005194c;
    if ((*(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + (ulonglong)uVar5 * 0x18) != uVar12) ||
       (plVar8 = (longlong *)(*(longlong *)(param_1 + 0xf7c0) + (ulonglong)uVar5 * 0x18 + 0x10),
       plVar8 == (longlong *)0x0)) goto LAB_18005194c;
    lVar14 = *plVar8;
LAB_180051958:
    plVar8 = (longlong *)(param_1 + 0xf7c0);
    uVar13 = 0;
    uVar10 = uVar7;
    do {
      uVar6 = uVar10 + uVar13 >> 1;
      uVar2 = *(ulonglong *)(*plVar8 + (ulonglong)uVar6 * 0x18);
      uVar5 = uVar6;
      if (uVar2 <= uVar12) {
        if (uVar12 <= uVar2) break;
        uVar13 = uVar6 + 1;
        uVar5 = uVar10;
        uVar6 = uVar13;
      }
      uVar10 = uVar5;
    } while (uVar10 != uVar13);
    if ((uVar6 != uVar7) && (*(ulonglong *)(*plVar8 + (ulonglong)uVar6 * 0x18) == uVar12)) {
      uVar6 = uVar6 + 1;
      if (uVar6 < uVar7) {
        do {
          uVar12 = (ulonglong)uVar6;
          lVar3 = *plVar8;
          uVar7 = uVar6 - 1;
          uVar6 = uVar6 + 1;
          puVar9 = (undefined8 *)(lVar3 + uVar12 * 0x18);
          uVar4 = puVar9[1];
          puVar11 = (undefined8 *)(lVar3 + (ulonglong)uVar7 * 0x18);
          *puVar11 = *puVar9;
          puVar11[1] = uVar4;
          *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar7 * 0x18) =
               *(undefined8 *)(lVar3 + 0x10 + uVar12 * 0x18);
        } while (uVar6 < *(uint *)(param_1 + 0xf7c8));
      }
      *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + -1;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0xf6e0);
  *(undefined4 *)(param_1 + 0x100f0) = 0;
  *(undefined8 *)(param_1 + 0x100f8) = 0;
  uVar7 = *param_2;
  piVar1 = (int *)(lVar3 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar9 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x18);
    if (puVar9 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar9[1] = 0x18;
      puVar9[2] = param_1;
      puVar11 = (undefined8 *)((longlong)puVar9 + 0x2bU & 0xfffffffffffffff8);
      puVar9[3] = lVar14;
      *(uint *)(puVar9 + 4) = uVar7;
      *puVar11 = 0;
      *puVar9 = FUN_180051ad4;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar11;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_180051ac1;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar8 = *(longlong **)(lVar3 + 0x14a0);
  *plVar8 = param_1;
  plVar8[1] = lVar14;
  *(uint *)(plVar8 + 2) = uVar7;
  FUN_180051ad4(plVar8);
LAB_180051ac1:
  FUN_1800facb0(piVar1);
  return;
}

