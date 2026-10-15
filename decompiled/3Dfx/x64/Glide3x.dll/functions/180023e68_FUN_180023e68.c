/*
 * FUN_180023e68 at 180023e68
 * undefined __fastcall FUN_180023e68(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180023e68-180023fed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023e68(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_res8;
  
  uVar12 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar6 = ZEXT816(0x48) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar10 = auVar6._0_8_;
    if (auVar6._8_8_ != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    lVar11 = thunk_FUN_180060a9c(uVar10);
    if (lVar11 != 0) {
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar4 = *param_1;
          uVar13 = (int)uVar14 + 1;
          puVar1 = (undefined8 *)(lVar4 + uVar14 * 0x48);
          uVar10 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + uVar14 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar14 * 0x48);
          uVar10 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x10 + uVar14 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar14 * 0x48);
          uVar10 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x20 + uVar14 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar14 * 0x48);
          uVar10 = puVar1[1];
          puVar2 = (undefined8 *)(lVar11 + 0x30 + uVar14 * 0x48);
          *puVar2 = *puVar1;
          puVar2[1] = uVar10;
          *(undefined8 *)(lVar11 + 0x40 + uVar14 * 0x48) =
               *(undefined8 *)(lVar4 + 0x40 + uVar14 * 0x48);
          uVar14 = (ulonglong)uVar13;
        } while (uVar13 < *(uint *)(param_1 + 1));
      }
      FUN_180060ac0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar11;
    }
  }
  uVar13 = *(uint *)((longlong)param_1 + 0xc);
  uVar14 = (ulonglong)uVar13;
  while (param_2 < uVar13) {
    lVar11 = *param_1;
    uVar13 = (int)uVar14 - 1;
    uVar15 = (ulonglong)uVar13;
    puVar1 = (undefined8 *)(lVar11 + uVar15 * 0x48);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 + uVar14 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    puVar1 = (undefined8 *)(lVar11 + 0x10 + uVar15 * 0x48);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 + 0x10 + uVar14 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    puVar1 = (undefined8 *)(lVar11 + 0x20 + uVar15 * 0x48);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 + 0x20 + uVar14 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    puVar1 = (undefined8 *)(lVar11 + 0x30 + uVar15 * 0x48);
    uVar10 = puVar1[1];
    puVar2 = (undefined8 *)(lVar11 + 0x30 + uVar14 * 0x48);
    *puVar2 = *puVar1;
    puVar2[1] = uVar10;
    *(undefined8 *)(lVar11 + 0x40 + uVar14 * 0x48) = *(undefined8 *)(lVar11 + 0x40 + uVar15 * 0x48);
    uVar14 = uVar15;
  }
  local_res8 = 0;
  *(undefined8 *)(*param_1 + uVar12 * 0x48) = param_3;
  lVar11 = *param_1;
  uVar10 = param_4[1];
  puVar1 = (undefined8 *)(lVar11 + 8 + uVar12 * 0x48);
  *puVar1 = *param_4;
  puVar1[1] = uVar10;
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar8 = *(undefined4 *)(param_4 + 3);
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar3 = (undefined4 *)(lVar11 + 0x18 + uVar12 * 0x48);
  *puVar3 = *(undefined4 *)(param_4 + 2);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar8 = *(undefined4 *)(param_4 + 5);
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x2c);
  puVar3 = (undefined4 *)(lVar11 + 0x28 + uVar12 * 0x48);
  *puVar3 = *(undefined4 *)(param_4 + 4);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined4 *)(lVar11 + 0x38 + uVar12 * 0x48) = *(undefined4 *)(param_4 + 6);
  plVar5 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
  (**(code **)(*plVar5 + 0xb8))(plVar5,param_4,&local_res8);
  *(undefined8 *)(*param_1 + 0x40 + uVar12 * 0x48) = local_res8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

