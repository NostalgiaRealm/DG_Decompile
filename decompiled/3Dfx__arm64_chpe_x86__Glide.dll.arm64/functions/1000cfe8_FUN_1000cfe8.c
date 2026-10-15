/*
 * FUN_1000cfe8 at 1000cfe8
 * undefined FUN_1000cfe8(void)
 * Address ranges: 1000cfe8-1000d10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1000cfe8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    iVar2 = FUN_1007a5c0(uVar1,0x10095b20);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = FUN_1007a5c0(uVar1,s_appdriven_10095b28);
      if (iVar2 == 0) {
        *param_5 = 0;
        return 1;
      }
      iVar2 = FUN_1007a5c0(uVar1,0x10095b34);
      if (iVar2 == 0) {
        uVar1 = 2;
      }
      else {
        iVar2 = FUN_1007a5c0(uVar1,0x10095b38);
        if (iVar2 == 0) {
          uVar1 = 4;
        }
        else {
          iVar2 = FUN_1007a5c0(uVar1,0x10095b3c);
          if (iVar2 == 0) {
            uVar1 = 8;
          }
          else {
            iVar2 = FUN_1007a5c0(uVar1,0x10095b40);
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

