/*
 * FUN_1000ee20 at 1000ee20
 * undefined FUN_1000ee20(void)
 * Address ranges: 1000ee20-1000ee73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000ee20(int param_1,uint param_2)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xd4)) {
  case 0:
    param_2 = param_2 >> 0x18 | param_2 << 8;
    break;
  case 1:
    uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
    param_2 = uVar1 >> 0x10 | uVar1 << 0x10;
    break;
  default:
    break;
  case 3:
    param_2 = param_2 >> 0x10 & 0xff00 | (param_2 & 0xffffff00) << 0x10 | param_2 & 0xff00ff;
  }
  return param_2;
}

