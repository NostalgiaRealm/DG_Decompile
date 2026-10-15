/*
 * FUN_100cd4f0 at 100cd4f0
 * undefined FUN_100cd4f0(void)
 * Address ranges: 100cd4f0-100cd57f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100cd4f0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_w1;
  
  uVar2 = FUN_100cb1a8(param_1,param_2,0,param_3);
  iVar1 = extraout_w1 * 0x2c;
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_1016f238)[iVar1],(&DAT_1016f239)[iVar1]),
                                    (&DAT_1016f23a)[iVar1]),(&DAT_1016f23b)[iVar1]);
  if (*(char *)(extraout_w1 + 0x10162948) == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  if (*(char *)(extraout_w1 + 0x10162cc8) == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

