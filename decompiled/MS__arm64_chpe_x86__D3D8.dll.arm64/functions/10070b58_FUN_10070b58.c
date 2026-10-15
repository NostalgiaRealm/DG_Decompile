/*
 * FUN_10070b58 at 10070b58
 * undefined FUN_10070b58(void)
 * Address ranges: 10070b58-10070b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10070b58(undefined8 param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_2;
  uVar1 = 0;
  iVar3 = 4;
  do {
    uVar1 = 1 << (ulonglong)(uVar2 & 3) & 0xffU | uVar1;
    uVar2 = uVar2 >> 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

