/*
 * FUN_1800540d8 at 1800540d8
 * undefined __fastcall FUN_1800540d8(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 1800540d8-180054244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800540d8(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined8 local_res8;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar5 = ZEXT816(0x38) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar9 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar9 = 0xffffffffffffffff;
    }
    lVar10 = thunk_FUN_18005d6fc(uVar9);
    if (lVar10 != 0) {
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar12 = *param_1;
          uVar11 = (ulonglong)uVar14;
          uVar14 = uVar14 + 1;
          lVar13 = uVar11 * 0x38;
          uVar9 = ((undefined8 *)(lVar13 + lVar12))[1];
          *(undefined8 *)(lVar13 + lVar10) = *(undefined8 *)(lVar13 + lVar12);
          ((undefined8 *)(lVar13 + lVar10))[1] = uVar9;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar12);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar12);
          uVar9 = puVar1[1];
          puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar9;
          *(undefined8 *)(lVar13 + 0x30 + lVar10) = *(undefined8 *)(lVar13 + 0x30 + lVar12);
        } while (uVar14 < *(uint *)(param_1 + 1));
      }
      FUN_18005d720((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar10;
    }
  }
  uVar14 = *(uint *)((longlong)param_1 + 0xc);
  while (param_2 < uVar14) {
    uVar11 = (ulonglong)uVar14;
    lVar10 = *param_1;
    uVar14 = uVar14 - 1;
    lVar13 = uVar11 * 0x38;
    lVar12 = (ulonglong)uVar14 * 0x38;
    uVar9 = ((undefined8 *)(lVar12 + lVar10))[1];
    *(undefined8 *)(lVar13 + lVar10) = *(undefined8 *)(lVar12 + lVar10);
    ((undefined8 *)(lVar13 + lVar10))[1] = uVar9;
    puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar10);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    puVar1 = (undefined8 *)(lVar12 + 0x20 + lVar10);
    uVar9 = puVar1[1];
    puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar10);
    *puVar2 = *puVar1;
    puVar2[1] = uVar9;
    *(undefined8 *)(lVar13 + 0x30 + lVar10) = *(undefined8 *)(lVar12 + 0x30 + lVar10);
  }
  lVar12 = (ulonglong)param_2 * 0x38;
  local_res8 = 0;
  *(undefined8 *)(lVar12 + *param_1) = param_3;
  lVar10 = *param_1;
  uVar9 = param_4[1];
  puVar1 = (undefined8 *)(lVar12 + 8 + lVar10);
  *puVar1 = *param_4;
  puVar1[1] = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar7 = *(undefined4 *)(param_4 + 3);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar3 = (undefined4 *)(lVar12 + 0x18 + lVar10);
  *puVar3 = *(undefined4 *)(param_4 + 2);
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *(undefined8 *)(lVar12 + 0x28 + lVar10) = param_4[4];
  plVar4 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
  (**(code **)(*plVar4 + 0xb0))(plVar4,param_4,&local_res8);
  *(undefined8 *)(lVar12 + 0x30 + *param_1) = local_res8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

