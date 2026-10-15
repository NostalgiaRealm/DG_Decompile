/*
 * FUN_100303b9 at 100303b9
 * uint __fastcall FUN_100303b9(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, byte param_6, char param_7)
 * Address ranges: 100303b9-10030468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100303b9(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6,
            char param_7)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  byte extraout_DL;
  byte extraout_DL_00;
  byte extraout_DL_01;
  int iVar4;
  uint uVar5;
  
  bVar1 = FUN_100304cc(param_2,param_6);
  if ((((bVar1) || (bVar1 = FUN_100304cc(param_3,extraout_DL), bVar1)) ||
      (bVar1 = FUN_100304cc(param_4,extraout_DL_00), bVar1)) ||
     ((bVar1 = FUN_100304cc(param_5,extraout_DL_01), bVar1 || (*(char *)(param_1 + 0xa4) != '\0'))))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (*(int *)(param_1 + 0xa0) != 0) {
      return 0xf0;
    }
  }
  if (param_7 != '\0') {
    *(undefined1 *)(param_1 + 0xa4) = uVar2;
  }
  if (param_6 == 0xf) {
    iVar4 = 4;
  }
  else {
    iVar4 = (uint)(param_6 == 7) * 2 + 1;
  }
  uVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x90 + uVar5 * 4) == 0) {
      uVar3 = FUN_10047ec0(param_1,iVar4,'\x01');
      *(uint *)(param_1 + 0x90 + uVar5 * 4) = uVar3;
      return uVar5 & 0xffff | 0x80;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return 0xf0;
}

