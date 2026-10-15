/*
 * FUN_1800b6d30 at 1800b6d30
 * undefined FUN_1800b6d30(void)
 * Address ranges: 1800b6d30-1800b6e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b6d30(longlong *param_1,uint param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar5 = (ulonglong)param_2;
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar7 = CONCAT44(0,(int)param_1[1] << 1);
    lVar8 = uVar7 * 0x18;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7;
    if (SUB168(auVar4 * ZEXT816(0x18),8) != 0) {
      lVar8 = -1;
    }
    lVar8 = thunk_FUN_180102f80(lVar8);
    if (lVar8 != 0) {
      uVar7 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar7 + 1;
          puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x18);
          puVar3 = (undefined8 *)(lVar8 + uVar7 * 0x18);
          uVar6 = *puVar2;
          puVar3[1] = puVar2[1];
          *puVar3 = uVar6;
          puVar3[2] = puVar2[2];
          uVar7 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar8;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar7 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while (param_2 < (uint)uVar7) {
    uVar9 = (ulonglong)((uint)uVar7 - 1);
    puVar2 = (undefined8 *)(*param_1 + uVar7 * 0x18);
    puVar3 = (undefined8 *)(*param_1 + uVar9 * 0x18);
    uVar6 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar6;
    puVar2[2] = puVar3[2];
    uVar7 = uVar9;
  }
  *(undefined8 *)(*param_1 + uVar5 * 0x18) = param_3;
  *(undefined4 *)(*param_1 + uVar5 * 0x18 + 8) = *param_4;
  uVar6 = FUN_1800cb8e0(param_1,*param_4);
  *(undefined8 *)(*param_1 + uVar5 * 0x18 + 0x10) = uVar6;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

