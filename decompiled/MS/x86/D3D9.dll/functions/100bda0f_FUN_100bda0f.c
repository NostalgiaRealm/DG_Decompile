/*
 * FUN_100bda0f at 100bda0f
 * undefined __fastcall FUN_100bda0f(undefined4 * param_1)
 * Address ranges: 100bda0f-100bdab4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100bda0f(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_100d8b68;
  param_1[0x142] = &PTR_FUN_100d8c44;
  param_1[0x143] = &PTR_FUN_100d8bb0;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_100deecc;
  if (DAT_100deecc != (undefined4 *)0x0) {
    FUN_100c0d33(DAT_100deecc);
    FUN_100cfd6c(puVar1);
  }
  DAT_100deecc = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_100b7016((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_100bd914((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100c96fd(param_1 + 0x143);
  FUN_100b6d02(param_1);
  return;
}

