/*
 * FUN_1801579e8 at 1801579e8
 * undefined FUN_1801579e8(void)
 * Address ranges: 1801579e8-180157c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801579e8(longlong param_1,uint *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  
  uVar7 = (ulonglong)*param_2;
  uVar2 = *(uint *)(param_1 + 0xf7c8);
  if (uVar2 == 0) {
LAB_180157a94:
    uVar6 = 0;
    if (uVar2 != 0) goto LAB_180157a9c;
  }
  else {
    uVar10 = 0;
    uVar8 = uVar2;
    do {
      uVar3 = uVar8 + uVar10 >> 1;
      uVar11 = (ulonglong)uVar3;
      uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar11 * 0x18);
      if (uVar6 <= uVar7) {
        if (uVar7 <= uVar6) break;
        uVar10 = uVar3 + 1;
        uVar11 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar10);
    if ((((uint)uVar11 == uVar2) ||
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xf7c0) + uVar11 * 0x18), *puVar1 != uVar7))
       || (puVar1 = puVar1 + 2, puVar1 == (ulonglong *)0x0)) goto LAB_180157a94;
    uVar6 = *puVar1;
LAB_180157a9c:
    plVar5 = (longlong *)(param_1 + 0xf7c0);
    uVar10 = 0;
    uVar8 = uVar2;
    do {
      uVar3 = uVar8 + uVar10 >> 1;
      uVar12 = (ulonglong)uVar3;
      uVar11 = *(ulonglong *)(*plVar5 + uVar12 * 0x18);
      if (uVar11 <= uVar7) {
        if (uVar7 <= uVar11) break;
        uVar10 = uVar3 + 1;
        uVar12 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar8;
      }
      uVar8 = uVar3;
    } while (uVar8 != uVar10);
    if (((uint)uVar12 != uVar2) && (*(ulonglong *)(*plVar5 + uVar12 * 0x18) == uVar7)) {
      uVar10 = (uint)uVar12 + 1;
      if (uVar10 < uVar2) {
        do {
          uVar7 = (ulonglong)uVar10;
          puVar4 = (undefined8 *)(*plVar5 + (ulonglong)(uVar10 - 1) * 0x18);
          uVar10 = uVar10 + 1;
          puVar9 = (undefined8 *)(*plVar5 + uVar7 * 0x18);
          uVar14 = *puVar9;
          puVar4[1] = puVar9[1];
          *puVar4 = uVar14;
          puVar4[2] = puVar9[2];
        } while (uVar10 < *(uint *)(param_1 + 0xf7c8));
      }
      *(int *)(param_1 + 0xf7c8) = *(int *)(param_1 + 0xf7c8) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x100f0) = 0;
  *(undefined8 *)(param_1 + 0x100f8) = 0;
  uVar2 = *param_2;
  lVar13 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180221850(lVar13 + 0x12c0);
  if (*(char *)(lVar13 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_1802218b0(lVar13 + 0x12c0,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1801042e0(lVar13 + 0x14c0);
      puVar4[1] = 0x18;
      puVar4[2] = param_1;
      puVar4[3] = uVar6;
      puVar9 = (undefined8 *)((longlong)puVar4 + 0x2bU & 0xfffffffffffffff8);
      *(uint *)(puVar4 + 4) = uVar2;
      DataMemoryBarrier(2,3);
      *puVar9 = 0;
      *puVar4 = FUN_180157c58;
      *(undefined8 **)(lVar13 + (ulonglong)*(uint *)(lVar13 + 0x14bc) * 0x28 + 0x1350) = puVar9;
      if (*(char *)(lVar13 + 0x14c5) != '\0') {
        FUN_180221bb0(lVar13 + 0x12c0);
        thunk_FUN_180223874(*(undefined8 *)(lVar13 + 0x1340));
        return;
      }
      goto LAB_180157c34;
    }
    FUN_180221bb0(lVar13 + 0x12c0);
    thunk_FUN_1802237c0(100);
    FUN_180221850(lVar13 + 0x12c0);
  }
  plVar5 = *(longlong **)(lVar13 + 0x14a0);
  *plVar5 = param_1;
  plVar5[1] = uVar6;
  *(uint *)(plVar5 + 2) = uVar2;
  FUN_180157c58();
LAB_180157c34:
  FUN_180221bb0(lVar13 + 0x12c0);
  return;
}

