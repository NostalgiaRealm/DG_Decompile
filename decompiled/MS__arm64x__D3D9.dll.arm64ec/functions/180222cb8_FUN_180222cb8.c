/*
 * FUN_180222cb8 at 180222cb8
 * undefined FUN_180222cb8(void)
 * Address ranges: 180222cb8-180222cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180222cb8(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  bVar2 = *param_2;
  while( true ) {
    uVar4 = (uint)bVar1;
    uVar3 = (uint)bVar2;
    if (uVar4 != uVar3) break;
    if (*param_2 == 0) goto LAB_180222ce8;
    param_1 = param_1 + 1;
    bVar1 = *param_1;
    param_2 = param_2 + 1;
    bVar2 = *param_2;
  }
  if ((int)(uVar4 - uVar3) < 0) {
    uVar3 = 0xffffffff;
  }
  else {
LAB_180222ce8:
    uVar3 = (uint)(uVar4 != uVar3);
  }
  return uVar3;
}

