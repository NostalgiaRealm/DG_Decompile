/*
 * FUN_10017661 at 10017661
 * undefined4 * __fastcall FUN_10017661(undefined4 * param_1)
 * Address ranges: 10017661-1001772d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10017661(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = 0x10a;
  *param_1 = 0;
  piVar2 = param_1 + 0x1dc;
  param_1[1] = 0;
  do {
    FUN_100289c6(piVar2);
    piVar2 = piVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x12ab] = 0;
  param_1[0x12ac] = 0;
  param_1[0x12ad] = 0;
  param_1[0x12ae] = 0;
  puVar3 = param_1 + 0x2aea;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x2af1;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x2afa;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x2b03] = 0;
  param_1[0x2b04] = 0;
  *(undefined2 *)(param_1 + 0x2b05) = 0;
  param_1[0x2b06] = 0;
  param_1[0x2b07] = 0;
  *(undefined2 *)(param_1 + 0x2b08) = 0;
  *(undefined1 *)((int)param_1 + 0xac22) = 0;
  puVar3 = param_1 + 0x2b09;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x2b10] = 0;
  param_1[0x2b11] = 0;
  param_1[0x2b12] = 0;
  param_1[0x2b13] = 0;
  param_1[0x2b14] = 0;
  FUN_100cfed0(param_1 + 0x13d5,0,0x40);
  return param_1;
}

