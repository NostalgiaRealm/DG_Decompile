/*
 * FUN_1003de9b at 1003de9b
 * undefined __fastcall FUN_1003de9b(undefined4 * param_1)
 * Address ranges: 1003de9b-1003df40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003de9b(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_10057460;
  param_1[0x142] = &PTR_FUN_1005753c;
  param_1[0x143] = &PTR_FUN_100574a8;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_1005b8a0;
  if (DAT_1005b8a0 != (undefined4 *)0x0) {
    FUN_1003bc7e(DAT_1005b8a0);
    FUN_10052276(puVar1);
  }
  DAT_1005b8a0 = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_10044d40((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_1003dda0((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1004ce40(param_1 + 0x143);
  FUN_10044a2c(param_1);
  return;
}

