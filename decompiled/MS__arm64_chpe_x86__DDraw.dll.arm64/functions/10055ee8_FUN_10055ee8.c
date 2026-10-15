/*
 * FUN_10055ee8 at 10055ee8
 * undefined FUN_10055ee8(void)
 * Address ranges: 10055ee8-1005600f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10055ee8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  code *extraout_w11;
  undefined8 uVar3;
  
  if (param_6 == 1) {
    uVar3 = 1;
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_2,param_3,param_4);
    uVar1 = (*extraout_w11)(uVar1);
    iVar2 = FUN_10091880(uVar1,0x100b3f20);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = FUN_10091880(uVar1,s_appdriven_100b3f28);
      if (iVar2 == 0) {
        *param_5 = 0;
        return 1;
      }
      iVar2 = FUN_10091880(uVar1,0x100b3f34);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = FUN_10091880(uVar1,0x100b3f38);
        if (iVar2 == 0) {
          uVar1 = 4;
        }
        else {
          iVar2 = FUN_10091880(uVar1,0x100b3f3c);
          if (iVar2 == 0) {
            uVar1 = 8;
          }
          else {
            iVar2 = FUN_10091880(uVar1,0x100b3f40);
            if (iVar2 != 0) {
              return 0;
            }
            uVar1 = 0x10;
          }
        }
      }
    }
    *param_5 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

