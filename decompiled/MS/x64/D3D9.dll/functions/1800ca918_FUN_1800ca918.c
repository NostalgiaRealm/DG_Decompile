/*
 * FUN_1800ca918 at 1800ca918
 * undefined1 __fastcall FUN_1800ca918(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 1800ca918-1800caa24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800ca918(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 1;
  if (param_6 == 1) {
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar2 = FUN_1800fc514(pbVar3,&DAT_180105008);
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_1800fc514(pbVar3,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_1800fc514(pbVar3,&DAT_18010501c);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_1800fc514(pbVar3,&DAT_180105020);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_1800fc514(pbVar3,&DAT_180105024);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              iVar2 = FUN_1800fc514(pbVar3,&DAT_180105028);
              if (iVar2 == 0) {
                *param_5 = 0x10;
              }
              else {
                uVar1 = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

