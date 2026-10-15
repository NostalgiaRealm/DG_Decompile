/*
 * FUN_1800a47b0 at 1800a47b0
 * uint __fastcall FUN_1800a47b0(longlong param_1, uint param_2, int param_3)
 * Address ranges: 1800a47b0-1800a4822
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a47b0(longlong param_1,uint param_2,int param_3)

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
    uVar1 = FUN_1800ec8c0(param_1 + 0x10,4,'\x01');
    return uVar1;
  }
  return uVar1;
}

