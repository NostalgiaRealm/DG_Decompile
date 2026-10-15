/*
 * FUN_18003c558 at 18003c558
 * undefined8 __cdecl FUN_18003c558(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 18003c558-18003c65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003c558(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_6 == 1) {
    uVar4 = 1;
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar1 = FUN_1800637c8(pbVar2,&DAT_1800680c8);
    if (uVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar1 = FUN_1800637c8(pbVar2,(byte *)"appdriven");
      if (uVar1 == 0) {
        *param_5 = 0;
        return 1;
      }
      uVar1 = FUN_1800637c8(pbVar2,&DAT_1800680dc);
      if (uVar1 == 0) {
        uVar3 = 2;
      }
      else {
        uVar1 = FUN_1800637c8(pbVar2,&DAT_1800680e0);
        if (uVar1 == 0) {
          uVar3 = 4;
        }
        else {
          uVar1 = FUN_1800637c8(pbVar2,&DAT_1800680e4);
          if (uVar1 == 0) {
            uVar3 = 8;
          }
          else {
            uVar1 = FUN_1800637c8(pbVar2,&DAT_1800680e8);
            if (uVar1 != 0) {
              return 0;
            }
            uVar3 = 0x10;
          }
        }
      }
    }
    *param_5 = uVar3;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

