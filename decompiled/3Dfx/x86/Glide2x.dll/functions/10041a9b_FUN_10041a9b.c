/*
 * FUN_10041a9b at 10041a9b
 * undefined __fastcall FUN_10041a9b(undefined4 * param_1)
 * Address ranges: 10041a9b-10041acf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10041a9b(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_10054918;
  FUN_10042258((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_1003fb9c((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10041f44(param_1);
  return;
}

