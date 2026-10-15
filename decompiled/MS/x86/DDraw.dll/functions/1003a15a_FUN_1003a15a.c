/*
 * FUN_1003a15a at 1003a15a
 * undefined4 __fastcall FUN_1003a15a(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 1003a15a-1003a1cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall
FUN_1003a15a(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  uint in_EAX;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 1) {
    pbVar1 = (byte *)(**(code **)(*param_2 + 0x28))(param_3,param_4,0);
    iVar2 = FUN_10061253(pbVar1,(byte *)"disable");
    if (iVar2 == 0) {
      *param_5 = 0;
      param_5 = (undefined4 *)0x0;
    }
    else {
      iVar2 = FUN_10061253(pbVar1,(byte *)"enable");
      if (iVar2 == 0) {
        *param_5 = 1;
      }
      else {
        in_EAX = FUN_10061253(pbVar1,(byte *)"enablebreak");
        if (in_EAX != 0) goto LAB_1003a1c7;
        *param_5 = 2;
      }
    }
    uVar3 = CONCAT31((int3)((uint)param_5 >> 8),1);
  }
  else {
LAB_1003a1c7:
    uVar3 = in_EAX & 0xffffff00;
  }
  return uVar3;
}

