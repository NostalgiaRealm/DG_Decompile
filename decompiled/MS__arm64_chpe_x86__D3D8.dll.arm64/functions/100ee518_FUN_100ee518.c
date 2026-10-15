/*
 * FUN_100ee518 at 100ee518
 * undefined FUN_100ee518(void)
 * Address ranges: 100ee518-100ee577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ee518(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_w1;
  
  iVar1 = FUN_100ef9e8(*param_1);
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

