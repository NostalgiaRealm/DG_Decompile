/*
 * FUN_180045028 at 180045028
 * undefined8 __fastcall FUN_180045028(longlong * param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 180045028-180045119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180045028(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)param_2;
  if ((int)param_1[1] == iVar2) {
    uVar8 = 0x10;
    if (iVar2 != 0) {
      uVar8 = (ulonglong)(uint)(iVar2 * 2);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar8;
    uVar5 = SUB168(ZEXT816(0x30) * auVar4,0);
    if (SUB168(ZEXT816(0x30) * auVar4,8) != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    puVar6 = (undefined8 *)thunk_FUN_180060a9c(uVar5);
    if (puVar6 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_180061330(puVar6,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x30
                 );
    FUN_180060ac0((LPVOID)*param_1);
    *param_1 = (longlong)puVar6;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  }
  uVar9 = *(uint *)(param_1 + 1);
  uVar8 = (ulonglong)uVar9;
  while (param_2 < uVar9) {
    lVar3 = *param_1;
    uVar9 = (int)uVar8 - 1;
    uVar10 = (ulonglong)uVar9;
    puVar6 = (undefined8 *)(lVar3 + uVar10 * 0x30);
    uVar5 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x30);
    *puVar1 = *puVar6;
    puVar1[1] = uVar5;
    puVar6 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 0x30);
    uVar5 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + 0x10 + uVar8 * 0x30);
    *puVar1 = *puVar6;
    puVar1[1] = uVar5;
    puVar6 = (undefined8 *)(lVar3 + 0x20 + uVar10 * 0x30);
    uVar5 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar8 * 0x30);
    *puVar1 = *puVar6;
    puVar1[1] = uVar5;
    uVar8 = uVar10;
  }
  uVar5 = param_3[1];
  lVar3 = *param_1;
  puVar6 = (undefined8 *)(lVar3 + uVar7 * 0x30);
  *puVar6 = *param_3;
  puVar6[1] = uVar5;
  uVar5 = param_3[3];
  puVar6 = (undefined8 *)(lVar3 + 0x10 + uVar7 * 0x30);
  *puVar6 = param_3[2];
  puVar6[1] = uVar5;
  uVar5 = param_3[5];
  puVar6 = (undefined8 *)(lVar3 + 0x20 + uVar7 * 0x30);
  *puVar6 = param_3[4];
  puVar6[1] = uVar5;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}

