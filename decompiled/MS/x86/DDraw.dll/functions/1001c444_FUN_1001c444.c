/*
 * FUN_1001c444 at 1001c444
 * uint __fastcall FUN_1001c444(int param_1, uint param_2, int param_3)
 * Address ranges: 1001c444-1001c4c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001c444(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = (param_2 & 0xc0000) + 0x40000 | param_2 & 0xff93ffff | 0x100000;
  }
  else if (param_3 == 1) {
    uVar1 = (param_2 & 0xc0000) + 0x80000 | param_2 & 0xffa3ffff | 0x200000;
  }
  else if (param_3 == 2) {
    uVar1 = (param_2 & 0xc0000) + 0x40000 | param_2 & 0xffb3ffff | 0x300000;
  }
  else if (param_3 == 3) {
    uVar1 = FUN_100569bf(param_1 + 0xc,4,'\x01');
  }
  return uVar1;
}

