/*
 * FUN_1002b328 at 1002b328
 * undefined FUN_1002b328(void)
 * Address ranges: 1002b328-1002b3bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1002b328(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0:
    uVar1 = param_2 & 0xff83ffff | ((param_2 >> 0x12 & 3) + 1) * 0x40000 | 0x100000;
    break;
  case 1:
    uVar1 = param_2 & 0xff83ffff | ((param_2 >> 0x12 & 3) + 2) * 0x40000 | 0x200000;
    break;
  case 2:
    uVar1 = param_2 & 0xff83ffff | ((param_2 >> 0x12 & 3) + 1) * 0x40000 | 0x300000;
    break;
  case 3:
    uVar1 = FUN_10083f38(param_1 + 0xc,4,1);
  }
  return uVar1;
}

