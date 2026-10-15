/*
 * FUN_100c2df1 at 100c2df1
 * uint __fastcall FUN_100c2df1(uint * param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 100c2df1-100c2e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100c2df1(uint *param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_100c3e1b(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    uVar2 = param_2 | 0x20010600;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_3 << 0xe | param_4 | 0x20020600;
  }
  return uVar2;
}

