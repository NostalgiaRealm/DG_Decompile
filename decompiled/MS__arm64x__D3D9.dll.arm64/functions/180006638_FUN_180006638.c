/*
 * FUN_180006638 at 180006638
 * undefined FUN_180006638(void)
 * Address ranges: 180006638-180006743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180006638(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar2) {
    uVar3 = iVar2 << 1;
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    uVar7 = CONCAT44(0,uVar3);
    lVar6 = uVar7 * 0x78;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7;
    if (SUB168(auVar4 * ZEXT816(0x78),8) != 0) {
      lVar6 = -1;
    }
    lVar6 = thunk_FUN_180102f80(lVar6);
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = lVar6;
    if (uVar3 != 0) {
      do {
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        uVar7 = uVar7 - 1;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        lVar5 = lVar5 + 0x78;
      } while (uVar7 != 0);
    }
    thunk_FUN_180001218(lVar6,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x78);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = lVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
  uVar10 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x78);
  puVar1[1] = param_2[1];
  *puVar1 = uVar10;
  puVar1[3] = uVar9;
  puVar1[2] = uVar8;
  uVar10 = param_2[4];
  uVar9 = param_2[7];
  uVar8 = param_2[6];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar10;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  uVar10 = param_2[8];
  uVar9 = param_2[0xb];
  uVar8 = param_2[10];
  puVar1[9] = param_2[9];
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar9;
  puVar1[10] = uVar8;
  uVar8 = param_2[0xc];
  puVar1[0xd] = param_2[0xd];
  puVar1[0xc] = uVar8;
  puVar1[0xe] = param_2[0xe];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

