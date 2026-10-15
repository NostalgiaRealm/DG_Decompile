/*
 * FUN_180031a1c at 180031a1c
 * undefined __fastcall FUN_180031a1c(longlong * param_1, uint param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 180031a1c-180031b5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031a1c(longlong *param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  
  uVar8 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    auVar5 = ZEXT816(0x18) * ZEXT416((uint)((int)param_1[1] * 2));
    uVar6 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_18005db9c(uVar6);
    if (lVar7 != 0) {
      uVar10 = 0;
      if ((int)param_1[1] != 0) {
        do {
          lVar3 = *param_1;
          uVar9 = (int)uVar10 + 1;
          puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x18);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + uVar10 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18) =
               *(undefined8 *)(lVar3 + 0x10 + uVar10 * 0x18);
          uVar10 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(param_1 + 1));
      }
      FUN_18005dbc0((LPVOID)*param_1);
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      *param_1 = lVar7;
    }
  }
  uVar9 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)uVar9;
  while (param_2 < uVar9) {
    lVar7 = *param_1;
    uVar9 = (int)uVar10 - 1;
    uVar11 = (ulonglong)uVar9;
    puVar1 = (undefined8 *)(lVar7 + uVar11 * 0x18);
    uVar6 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + uVar10 * 0x18);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18) = *(undefined8 *)(lVar7 + 0x10 + uVar11 * 0x18);
    uVar10 = uVar11;
  }
  uVar6 = *param_4;
  local_38 = 0x3d;
  local_34 = 4;
  *(undefined8 *)(*param_1 + uVar8 * 0x18) = param_3;
  local_2c = 0xffffffff;
  *(undefined8 *)(*param_1 + 8 + uVar8 * 0x18) = uVar6;
  local_28 = 0;
  local_res8 = 0;
  plVar4 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
  (**(code **)(*plVar4 + 0x38))(plVar4,uVar6,&local_38,&local_res8);
  *(undefined8 *)(*param_1 + 0x10 + uVar8 * 0x18) = local_res8;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

