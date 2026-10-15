/*
 * FUN_180006570 at 180006570
 * undefined FUN_180006570(void)
 * Address ranges: 180006570-180006637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180006570(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    lVar5 = CONCAT44(0,uVar3) * 0x50;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = CONCAT44(0,uVar3);
    if (SUB168(auVar4 * ZEXT816(0x50),8) != 0) {
      lVar5 = -1;
    }
    lVar5 = thunk_FUN_180102f80(lVar5);
    if (lVar5 == 0) {
      return 0;
    }
    thunk_FUN_180001218(lVar5,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x50);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = lVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
  uVar8 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x50);
  puVar1[1] = param_2[1];
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar8 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar8;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  uVar6 = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar6;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

