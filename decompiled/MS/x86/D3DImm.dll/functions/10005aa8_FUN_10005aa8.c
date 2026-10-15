/*
 * FUN_10005aa8 at 10005aa8
 * undefined4 * __fastcall FUN_10005aa8(undefined4 * param_1)
 * Address ranges: 10005aa8-10005b24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10005aa8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  iVar1 = 0xe;
  *param_1 = 0;
  piVar2 = param_1 + 0x163;
  param_1[1] = 0;
  do {
    FUN_10013705(piVar2);
    piVar2 = piVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  param_1[0x275] = 0;
  param_1[0x276] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  puVar3 = param_1 + 0x28c;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x293] = 0;
  param_1[0x294] = 0;
  param_1[0x295] = 0;
  *(undefined2 *)(param_1 + 0x296) = 0;
  return param_1;
}

