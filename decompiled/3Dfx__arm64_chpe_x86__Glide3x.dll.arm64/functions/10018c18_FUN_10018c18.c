/*
 * FUN_10018c18 at 10018c18
 * undefined FUN_10018c18(void)
 * Address ranges: 10018c18-10018cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10018c18(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_10098c44;
  puVar2 = param_1 + 0x43;
  iVar1 = 2;
  do {
    iVar1 = iVar1 + -1;
    FUN_1000c990(puVar2);
    puVar2 = puVar2 + 0x14;
  } while (iVar1 != 0);
  param_1[0x6c] = param_2;
  *(undefined8 *)(param_1 + 0x6d) = 0;
  *(undefined8 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  FUN_1000dbb8(param_1);
  return param_1;
}

