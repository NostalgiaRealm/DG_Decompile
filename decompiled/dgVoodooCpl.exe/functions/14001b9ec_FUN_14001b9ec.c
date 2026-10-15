/*
 * FUN_14001b9ec at 14001b9ec
 * undefined8 __fastcall FUN_14001b9ec(longlong * param_1, undefined8 * param_2)
 * Address ranges: 14001b9ec-14001ba73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_14001b9ec(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if ((int)param_1[1] == iVar1) {
    uVar5 = 0x10;
    if (iVar1 != 0) {
      uVar5 = (ulonglong)(uint)(iVar1 * 2);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5;
    uVar3 = SUB168(ZEXT816(8) * auVar2,0);
    if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
      uVar3 = 0xffffffffffffffff;
    }
    puVar4 = (undefined8 *)thunk_FUN_14002423c(uVar3);
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    FUN_140024620(puVar4,(undefined8 *)*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    FUN_140024260((LPVOID)*param_1);
    *param_1 = (longlong)puVar4;
    *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  }
  uVar3 = *param_2;
  *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8) = uVar3;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

