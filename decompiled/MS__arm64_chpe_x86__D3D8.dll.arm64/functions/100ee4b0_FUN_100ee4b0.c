/*
 * FUN_100ee4b0 at 100ee4b0
 * undefined FUN_100ee4b0(void)
 * Address ranges: 100ee4b0-100ee50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ee4b0(undefined4 *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint extraout_w1;
  
  iVar1 = FUN_100ef9e8(*param_1);
  if ((iVar1 - 0x40U & 0xffffffee) == 0 && iVar1 != 0x51) {
    uVar2 = extraout_w1 | 0x410700;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_4 | param_3 << 0xe | 0x420700;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

