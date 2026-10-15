/*
 * FUN_18002fb50 at 18002fb50
 * undefined8 __fastcall FUN_18002fb50(longlong * param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 18002fb50-18002fc56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002fb50(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar6) {
    uVar7 = 0x10;
    if (iVar6 != 0) {
      uVar7 = (ulonglong)(uint)(iVar6 * 2);
    }
    iVar6 = (int)uVar7;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    uVar3 = SUB168(ZEXT816(0x18) * auVar2,0);
    if (SUB168(ZEXT816(0x18) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_1800fbccc(uVar3);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    puVar5 = puVar4;
    if (iVar6 != 0) {
      do {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5 = puVar5 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    FUN_1800fbec0(puVar4,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0x18
                 );
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar4;
    *(int *)((longlong)param_1 + 0xc) = iVar6;
  }
  uVar8 = *(uint *)(param_1 + 1);
  uVar7 = (ulonglong)uVar8;
  while (param_2 < uVar8) {
    lVar1 = *param_1;
    uVar8 = (int)uVar7 - 1;
    uVar9 = (ulonglong)uVar8;
    puVar4 = (undefined8 *)(lVar1 + uVar9 * 0x18);
    uVar3 = puVar4[1];
    puVar5 = (undefined8 *)(lVar1 + uVar7 * 0x18);
    *puVar5 = *puVar4;
    puVar5[1] = uVar3;
    *(undefined8 *)(lVar1 + 0x10 + uVar7 * 0x18) = *(undefined8 *)(lVar1 + 0x10 + uVar9 * 0x18);
    uVar7 = uVar9;
  }
  uVar3 = param_3[1];
  lVar1 = *param_1;
  puVar4 = (undefined8 *)(lVar1 + (ulonglong)param_2 * 0x18);
  *puVar4 = *param_3;
  puVar4[1] = uVar3;
  *(undefined8 *)(lVar1 + 0x10 + (ulonglong)param_2 * 0x18) = param_3[2];
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)(uVar7 >> 8),1);
}

