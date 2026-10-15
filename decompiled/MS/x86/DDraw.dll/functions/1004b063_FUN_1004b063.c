/*
 * FUN_1004b063 at 1004b063
 * undefined __fastcall FUN_1004b063(undefined4 * param_1)
 * Address ranges: 1004b063-1004b108
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004b063(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  *param_1 = &PTR_LAB_1006630c;
  param_1[0x142] = &PTR_FUN_100663e8;
  param_1[0x143] = &PTR_FUN_10066354;
  if (param_1[0x146] != 0) {
    do {
      (**(code **)(**(int **)(param_1[0x145] + uVar2 * 4) + 4))(param_1 + 0x143);
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)param_1[0x146]);
  }
  puVar1 = DAT_1006c298;
  if (DAT_1006c298 != (undefined4 *)0x0) {
    FUN_1004fbb0(DAT_1006c298);
    FUN_10060be1(puVar1);
  }
  DAT_1006c298 = (undefined4 *)0x0;
  param_1[0x1a8] = 0;
  FUN_10047731((int)param_1);
  iVar3 = 0x10;
  puVar1 = param_1 + 0x5cb0;
  do {
    puVar1 = puVar1 + -0x5b0;
    FUN_1004af68((int)puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_100590cd(param_1 + 0x143);
  FUN_1004741d(param_1);
  return;
}

