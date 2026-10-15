/*
 * FUN_100a8242 at 100a8242
 * undefined4 __fastcall FUN_100a8242(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 100a8242-100a82b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_100a8242(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  uint in_EAX;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 1) {
    pbVar1 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    iVar2 = FUN_100d03d3(pbVar1,(byte *)"disable");
    if (iVar2 == 0) {
      *param_5 = 0;
      param_5 = (undefined4 *)0x0;
    }
    else {
      iVar2 = FUN_100d03d3(pbVar1,(byte *)"enable");
      if (iVar2 == 0) {
        *param_5 = 1;
      }
      else {
        in_EAX = FUN_100d03d3(pbVar1,(byte *)"enablebreak");
        if (in_EAX != 0) goto LAB_100a82af;
        *param_5 = 2;
      }
    }
    uVar3 = CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  else {
LAB_100a82af:
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

