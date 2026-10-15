/*
 * FUN_10013622 at 10013622
 * undefined4 * __fastcall FUN_10013622(undefined4 * param_1)
 * Address ranges: 10013622-100136af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10013622(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = 0x10a;
  *param_1 = 0;
  piVar2 = param_1 + 0x198;
  param_1[1] = 0;
  do {
    FUN_10021331(piVar2);
    piVar2 = piVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x1267] = 0;
  param_1[0x1268] = 0;
  param_1[0x1269] = 0;
  param_1[0x126a] = 0;
  puVar3 = param_1 + 0x24cd;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x24d3;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x24db;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x24e4] = 0;
  param_1[0x24e5] = 0;
  *(undefined2 *)(param_1 + 0x24e6) = 0;
  param_1[0x24e7] = 0;
  param_1[0x24e8] = 0;
  return param_1;
}

