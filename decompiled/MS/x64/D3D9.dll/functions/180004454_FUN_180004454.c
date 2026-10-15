/*
 * FUN_180004454 at 180004454
 * undefined8 __fastcall FUN_180004454(longlong * param_1, undefined4 * param_2)
 * Address ranges: 180004454-1800044da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180004454(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar6 = 0x10;
    if (iVar1 != 0) {
      uVar6 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    uVar4 = SUB168(ZEXT816(4) * auVar3,0);
    if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(uVar4);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_1800fbec0(puVar5,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 2);
    FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = (longlong)puVar5;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  }
  uVar2 = *param_2;
  *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 4) = uVar2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}

