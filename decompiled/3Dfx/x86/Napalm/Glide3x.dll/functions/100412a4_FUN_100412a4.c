/*
 * FUN_100412a4 at 100412a4
 * undefined __fastcall FUN_100412a4(undefined4 * param_1)
 * Address ranges: 100412a4-10041349
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100412a4(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_1005a90c;
  param_1[0x142] = &PTR_FUN_1005a9e8;
  param_1[0x143] = &PTR_FUN_1005a954;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_1005fa80;
  if (DAT_1005fa80 != (undefined4 *)0x0) {
    FUN_1003f08c(DAT_1005fa80);
    FUN_10055686(puVar1);
  }
  DAT_1005fa80 = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_10048149((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_100411a9((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_10050249(param_1 + 0x143);
  FUN_10047e35(param_1);
  return;
}

