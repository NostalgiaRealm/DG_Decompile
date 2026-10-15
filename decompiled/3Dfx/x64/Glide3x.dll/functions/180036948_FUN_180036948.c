/*
 * FUN_180036948 at 180036948
 * undefined1 __fastcall FUN_180036948(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 180036948-180036a54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180036948(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 1;
  if (param_6 == 1) {
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    iVar2 = FUN_180060b28(pbVar3,&DAT_1800650b8);
    if (iVar2 == 0) {
      *param_5 = 1;
    }
    else {
      iVar2 = FUN_180060b28(pbVar3,(byte *)"appdriven");
      if (iVar2 == 0) {
        *param_5 = 0;
      }
      else {
        iVar2 = FUN_180060b28(pbVar3,&DAT_1800650cc);
        if (iVar2 == 0) {
          *param_5 = 2;
        }
        else {
          iVar2 = FUN_180060b28(pbVar3,&DAT_1800650d0);
          if (iVar2 == 0) {
            *param_5 = 4;
          }
          else {
            iVar2 = FUN_180060b28(pbVar3,&DAT_1800650d4);
            if (iVar2 == 0) {
              *param_5 = 8;
            }
            else {
              iVar2 = FUN_180060b28(pbVar3,&DAT_1800650d8);
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

