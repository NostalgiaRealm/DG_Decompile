/*
 * FUN_1004798c at 1004798c
 * undefined __fastcall FUN_1004798c(undefined4 * param_1)
 * Address ranges: 1004798c-100479c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004798c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_1005b020;
  FUN_10048149((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_10045a8d((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10047e35(param_1);
  return;
}

