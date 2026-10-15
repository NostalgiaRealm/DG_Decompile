/*
 * FUN_100a0567 at 100a0567
 * uint __fastcall FUN_100a0567(uint * param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 100a0567-100a05a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100a0567(uint *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_100a15c6(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    uVar2 = param_2 | 0x410700;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_3 << 0xe | param_4 | 0x420700;
  }
  return uVar2;
}

