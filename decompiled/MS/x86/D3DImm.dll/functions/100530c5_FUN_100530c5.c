/*
 * FUN_100530c5 at 100530c5
 * undefined __fastcall FUN_100530c5(undefined4 * param_1)
 * Address ranges: 100530c5-1005316a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100530c5(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_1005fd34;
  param_1[0x142] = &PTR_FUN_1005fe10;
  param_1[0x143] = &PTR_FUN_1005fd7c;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_1006bbd8;
  if (DAT_1006bbd8 != (undefined4 *)0x0) {
    FUN_100555b8(DAT_1006bbd8);
    FUN_1005c76c(puVar1);
  }
  DAT_1006bbd8 = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_10050ffc((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_10052fca((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100592aa(param_1 + 0x143);
  FUN_10050ce8(param_1);
  return;
}

