/*
 * FUN_100328e0 at 100328e0
 * undefined FUN_100328e0(void)
 * Address ranges: 100328e0-1003296f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100328e0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int extraout_w1;
  
  uVar2 = FUN_10030738(param_1,param_2,0,param_3);
  iVar1 = extraout_w1 * 0x2c;
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_100bb7a8)[iVar1],(&DAT_100bb7a9)[iVar1]),
                                    (&DAT_100bb7aa)[iVar1]),(&DAT_100bb7ab)[iVar1]);
  if (*(char *)(extraout_w1 + 0x100b3810) == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  if (*(char *)(extraout_w1 + 0x100b3590) == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

