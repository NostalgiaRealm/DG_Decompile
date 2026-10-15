/*
 * FUN_1800ead80 at 1800ead80
 * undefined8 __fastcall FUN_1800ead80(longlong * param_1, undefined8 * param_2)
 * Address ranges: 1800ead80-1800eae15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800ead80(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar8 = 0x10;
    if (iVar1 != 0) {
      uVar8 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar8;
    uVar6 = SUB168(ZEXT816(0xc) * auVar5,0);
    if (SUB168(ZEXT816(0xc) * auVar5,8) != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
    if (puVar7 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_1800fbec0(puVar7,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) * 0xc)
    ;
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar7;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar4 = *param_1;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + (ulonglong)uVar2 * 0xc) = *param_2;
  *(undefined4 *)(lVar4 + 8 + (ulonglong)uVar2 * 0xc) = uVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
}

