/*
 * FUN_1004fff2 at 1004fff2
 * undefined __fastcall FUN_1004fff2(undefined4 * param_1)
 * Address ranges: 1004fff2-10050026
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004fff2(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_1005fb20;
  FUN_10050ffc((int)param_1);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x5584;
  do {
    puVar1 = puVar1 + -0x544;
    FUN_1004ecac((int)puVar1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_10050ce8(param_1);
  return;
}

