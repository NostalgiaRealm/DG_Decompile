/*
 * FUN_10070fe0 at 10070fe0
 * undefined FUN_10070fe0(void)
 * Address ranges: 10070fe0-1007107b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070fe0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_100953e4;
  FUN_1007a060(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a060(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a060(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a060(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_1009538c;
  return;
}

