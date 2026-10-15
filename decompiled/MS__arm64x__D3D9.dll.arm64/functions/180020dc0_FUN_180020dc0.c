/*
 * FUN_180020dc0 at 180020dc0
 * undefined FUN_180020dc0(void)
 * Address ranges: 180020dc0-180020eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020dc0(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    uVar8 = CONCAT44(0,uVar2);
    lVar6 = uVar8 * 0x18;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
      lVar6 = -1;
    }
    puVar4 = (undefined8 *)thunk_FUN_180102f80(lVar6);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    puVar5 = puVar4;
    if (uVar2 != 0) {
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        uVar8 = uVar8 - 1;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
      } while (uVar8 != 0);
    }
    thunk_FUN_180001218(puVar4,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x18);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = (longlong)puVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  while (param_2 < (uint)uVar8) {
    uVar7 = (ulonglong)((uint)uVar8 - 1);
    puVar4 = (undefined8 *)(*param_1 + uVar8 * 0x18);
    puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x18);
    uVar9 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar9;
    puVar4[2] = puVar5[2];
    uVar8 = uVar7;
  }
  uVar9 = *param_3;
  puVar4 = (undefined8 *)(*param_1 + (ulonglong)param_2 * 0x18);
  puVar4[1] = param_3[1];
  *puVar4 = uVar9;
  puVar4[2] = param_3[2];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

