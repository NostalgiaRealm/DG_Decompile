/*
 * FUN_100acd00 at 100acd00
 * undefined FUN_100acd00(void)
 * Address ranges: 100acd00-100acd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100acd00(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_w1;
  
  uVar2 = FUN_100aa9e8(param_1,param_2,0,param_3);
  iVar1 = extraout_w1 * 0x2c;
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_10136ee8)[iVar1],(&DAT_10136ee9)[iVar1]),
                                    (&DAT_10136eea)[iVar1]),(&DAT_10136eeb)[iVar1]);
  if (*(char *)(extraout_w1 + 0x1012cba0) == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  if (*(char *)(extraout_w1 + 0x1012cd80) == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

