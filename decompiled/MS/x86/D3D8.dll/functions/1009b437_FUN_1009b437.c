/*
 * FUN_1009b437 at 1009b437
 * undefined __fastcall FUN_1009b437(undefined4 * param_1)
 * Address ranges: 1009b437-1009b4dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009b437(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_100b5130;
  param_1[0x142] = &PTR_FUN_100b520c;
  param_1[0x143] = &PTR_FUN_100b5178;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_100ba70c;
  if (DAT_100ba70c != (undefined4 *)0x0) {
    FUN_1009e76b(DAT_100ba70c);
    FUN_100ad48c(puVar1);
  }
  DAT_100ba70c = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_100949c3((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_1009b33c((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100a6e2e(param_1 + 0x143);
  FUN_100946af(param_1);
  return;
}

