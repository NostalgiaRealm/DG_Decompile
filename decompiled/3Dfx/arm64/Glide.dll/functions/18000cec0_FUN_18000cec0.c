/*
 * FUN_18000cec0 at 18000cec0
 * undefined8 __cdecl FUN_18000cec0(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 18000cec0-18000cfc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000cec0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (param_6 == 1) {
    uVar4 = 1;
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar1 = FUN_180060ae0(pbVar2,&DAT_180063d48);
    if (uVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar1 = FUN_180060ae0(pbVar2,(byte *)"appdriven");
      if (uVar1 == 0) {
        *param_5 = 0;
        return 1;
      }
      uVar1 = FUN_180060ae0(pbVar2,&DAT_180063d5c);
      if (uVar1 == 0) {
        uVar3 = 2;
      }
      else {
        uVar1 = FUN_180060ae0(pbVar2,&DAT_180063d60);
        if (uVar1 == 0) {
          uVar3 = 4;
        }
        else {
          uVar1 = FUN_180060ae0(pbVar2,&DAT_180063d64);
          if (uVar1 == 0) {
            uVar3 = 8;
          }
          else {
            uVar1 = FUN_180060ae0(pbVar2,&DAT_180063d68);
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

