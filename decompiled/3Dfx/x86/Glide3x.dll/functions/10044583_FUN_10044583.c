/*
 * FUN_10044583 at 10044583
 * undefined __fastcall FUN_10044583(undefined4 * param_1)
 * Address ranges: 10044583-100445b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10044583(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_10057b70;
  FUN_10044d40((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_10042684((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10044a2c(param_1);
  return;
}

