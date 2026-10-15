/*
 * FUN_1003b3b6 at 1003b3b6
 * undefined __fastcall FUN_1003b3b6(undefined4 * param_1)
 * Address ranges: 1003b3b6-1003b45b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003b3b6(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_10054208;
  param_1[0x142] = &PTR_FUN_100542e4;
  param_1[0x143] = &PTR_FUN_10054250;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_1005975c;
  if (DAT_1005975c != (undefined4 *)0x0) {
    FUN_10039199(DAT_1005975c);
    FUN_1004f626(puVar1);
  }
  DAT_1005975c = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_10042258((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_1003b2bb((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_1004a358(param_1 + 0x143);
  FUN_10041f44(param_1);
  return;
}

