/*
 * FUN_180020cd8 at 180020cd8
 * undefined FUN_180020cd8(void)
 * Address ranges: 180020cd8-180020dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180020cd8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar2 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    uVar7 = CONCAT44(0,uVar2);
    lVar6 = uVar7 * 0x18;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar7;
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
        uVar7 = uVar7 - 1;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
      } while (uVar7 != 0);
    }
    thunk_FUN_180001218(puVar4,*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x18);
    thunk_FUN_180102fc0(*param_1);
    *param_1 = (longlong)puVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
  }
  uVar8 = *param_2;
  puVar4 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  puVar4[1] = param_2[1];
  *puVar4 = uVar8;
  puVar4[2] = param_2[2];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return 1;
}

