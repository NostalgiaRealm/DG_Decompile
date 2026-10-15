/*
 * FUN_100b5495 at 100b5495
 * undefined __fastcall FUN_100b5495(undefined4 * param_1)
 * Address ranges: 100b5495-100b54c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b5495(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_100d8780;
  FUN_100b7016((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_100b313f((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_100b6d02(param_1);
  return;
}

