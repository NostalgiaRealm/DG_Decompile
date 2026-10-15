/*
 * FUN_10093195 at 10093195
 * undefined __fastcall FUN_10093195(undefined4 * param_1)
 * Address ranges: 10093195-100931c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10093195(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_100b4d48;
  FUN_100949c3((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_10090f40((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_100946af(param_1);
  return;
}

