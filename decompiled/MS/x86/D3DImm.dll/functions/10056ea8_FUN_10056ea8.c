/*
 * FUN_10056ea8 at 10056ea8
 * uint __fastcall FUN_10056ea8(uint * param_1, uint param_2, undefined4 param_3, uint param_4)
 * Address ranges: 10056ea8-10056ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10056ea8(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_10057dfe(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    uVar2 = param_2 | 0x20010600;
  }
  else if (iVar1 == 0x51) {
    uVar2 = param_4 | 0x20020600;
  }
  return uVar2;
}

