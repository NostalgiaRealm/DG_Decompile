/*
 * FUN_10074c80 at 10074c80
 * undefined FUN_10074c80(void)
 * Address ranges: 10074c80-10074d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10074c80(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_10099260;
  FUN_1007dd80(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007dd80(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007dd80(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007dd80(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_10099208;
  return;
}

