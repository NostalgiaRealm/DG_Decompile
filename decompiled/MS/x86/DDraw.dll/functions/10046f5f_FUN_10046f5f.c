/*
 * FUN_10046f5f at 10046f5f
 * undefined __fastcall FUN_10046f5f(undefined4 * param_1)
 * Address ranges: 10046f5f-10046f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10046f5f(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_10066180;
  FUN_10047731((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_10045096((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_1004741d(param_1);
  return;
}

