/*
 * FUN_10121528 at 10121528
 * undefined FUN_10121528(void)
 * Address ranges: 10121528-10121587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10121528(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_w1;
  
  iVar1 = FUN_10122f60(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    uVar2 = extraout_w1 | 0x20010600;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_4 | param_3 << 0xe | 0x20020600;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

