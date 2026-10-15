/*
 * FUN_10071460 at 10071460
 * undefined FUN_10071460(void)
 * Address ranges: 10071460-100714fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071460(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_1 + 0x94;
  *param_1 = &PTR_FUN_10095414;
  FUN_1007a4e0(*puVar1);
  iVar2 = 0x10;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a4e0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a4e0(*puVar1);
  } while (iVar2 != 0);
  iVar2 = 0x10;
  puVar1 = param_1 + 0x34;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    FUN_1007a4e0(*puVar1);
  } while (iVar2 != 0);
  *param_1 = &PTR_FUN_100953bc;
  return;
}

