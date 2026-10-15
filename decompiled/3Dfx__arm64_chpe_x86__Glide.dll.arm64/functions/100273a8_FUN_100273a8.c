/*
 * FUN_100273a8 at 100273a8
 * undefined FUN_100273a8(void)
 * Address ranges: 100273a8-1002743b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100273a8(undefined8 param_1,byte *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if (*param_2 < 0xb) {
    uVar3 = (uint)*(byte *)(*param_2 + 0x10096dc8);
  }
  else {
    uVar3 = 0;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    if (param_2[1] < 0xd) {
      uVar2 = (uint)*(byte *)(param_2[1] + 0x10096db8);
    }
    else {
      uVar2 = 0;
    }
    uVar1 = uVar2 >> 1 & 1;
    if (((uVar2 & 1) != 0) && (param_3 == '\x01')) {
      uVar1 = 1;
    }
  }
  uVar2 = uVar1;
  if (param_2[3] == 1) {
    uVar2 = 1;
  }
  if ((uVar3 & 1) != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

