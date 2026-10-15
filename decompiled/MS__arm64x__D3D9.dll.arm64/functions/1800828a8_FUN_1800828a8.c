/*
 * FUN_1800828a8 at 1800828a8
 * undefined FUN_1800828a8(void)
 * Address ranges: 1800828a8-1800829db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800828a8(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (*(int *)((longlong)param_1 + 0xc) == (int)param_1[1]) {
    uVar5 = CONCAT44(0,(int)param_1[1] << 1);
    lVar6 = uVar5 * 0x48;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5;
    if (SUB168(auVar4 * ZEXT816(0x48),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = thunk_FUN_180102f80(lVar6);
    if (lVar6 != 0) {
      uVar5 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar1 = (int)uVar5 + 1;
          puVar2 = (undefined8 *)(*param_1 + uVar5 * 0x48);
          puVar3 = (undefined8 *)(lVar6 + uVar5 * 0x48);
          uVar10 = *puVar2;
          uVar9 = puVar2[3];
          uVar8 = puVar2[2];
          puVar3[1] = puVar2[1];
          *puVar3 = uVar10;
          puVar3[3] = uVar9;
          puVar3[2] = uVar8;
          uVar10 = puVar2[4];
          uVar9 = puVar2[7];
          uVar8 = puVar2[6];
          puVar3[5] = puVar2[5];
          puVar3[4] = uVar10;
          puVar3[7] = uVar9;
          puVar3[6] = uVar8;
          puVar3[8] = puVar2[8];
          uVar5 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while (param_2 < (uint)uVar5) {
    uVar7 = (ulonglong)((uint)uVar5 - 1);
    puVar2 = (undefined8 *)(*param_1 + uVar5 * 0x48);
    puVar3 = (undefined8 *)(*param_1 + uVar7 * 0x48);
    uVar10 = *puVar3;
    uVar9 = puVar3[3];
    uVar8 = puVar3[2];
    puVar2[1] = puVar3[1];
    *puVar2 = uVar10;
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    uVar10 = puVar3[4];
    uVar9 = puVar3[7];
    uVar8 = puVar3[6];
    puVar2[5] = puVar3[5];
    puVar2[4] = uVar10;
    puVar2[7] = uVar9;
    puVar2[6] = uVar8;
    puVar2[8] = puVar3[8];
    uVar5 = uVar7;
  }
  FUN_1800829e0(param_1,param_2,param_3,param_4);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}

