/*
 * FUN_14001a8f8 at 14001a8f8
 * undefined8 __cdecl FUN_14001a8f8(undefined8 param_1, longlong * param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, int param_6)
 * Address ranges: 14001a8f8-14001a997
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14001a8f8(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (param_6 == 1) {
    pbVar2 = (byte *)(**(code **)(*param_2 + 0x50))(param_2,param_3,param_4,0);
    uVar1 = FUN_140024ce0(pbVar2,(byte *)"disable");
    if (uVar1 == 0) {
      *param_5 = 0;
    }
    else {
      uVar1 = FUN_140024ce0(pbVar2,(byte *)"enable");
      if (uVar1 == 0) {
        uVar4 = 1;
      }
      else {
        uVar1 = FUN_140024ce0(pbVar2,(byte *)"enablebreak");
        if (uVar1 != 0) goto LAB_14001a988;
        uVar4 = 2;
      }
      *param_5 = uVar4;
    }
    uVar3 = 1;
  }
  else {
LAB_14001a988:
    uVar3 = 0;
  }
  return uVar3;
}

