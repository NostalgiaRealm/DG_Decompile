/*
 * FUN_1801efd00 at 1801efd00
 * undefined FUN_1801efd00(void)
 * Address ranges: 1801efd00-1801efe1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801efd00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *extraout_x11;
  undefined8 uVar4;
  
  if (param_6 == 1) {
    uVar4 = 1;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,param_2,param_3,param_4);
    uVar2 = (*extraout_x11)();
    iVar1 = FUN_180222cb8(uVar2,&DAT_180236ea8);
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    else {
      iVar1 = FUN_180222cb8(uVar2,s_appdriven_180236ec0);
      if (iVar1 == 0) {
        *param_5 = 0;
        return 1;
      }
      iVar1 = FUN_180222cb8(uVar2,&DAT_180236eb8);
      if (iVar1 == 0) {
        uVar3 = 2;
      }
      else {
        iVar1 = FUN_180222cb8(uVar2,&DAT_180236ed0);
        if (iVar1 == 0) {
          uVar3 = 4;
        }
        else {
          iVar1 = FUN_180222cb8(uVar2,&DAT_180236ecc);
          if (iVar1 == 0) {
            uVar3 = 8;
          }
          else {
            iVar1 = FUN_180222cb8(uVar2,&DAT_180236ee0);
            if (iVar1 != 0) {
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

