/*
 * FUN_1801f2db8 at 1801f2db8
 * undefined FUN_1801f2db8(void)
 * Address ranges: 1801f2db8-1801f2e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801f2db8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *extraout_x11;
  
  if (param_6 == 1) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,param_2,param_3,param_4);
    uVar2 = (*extraout_x11)();
    iVar1 = FUN_180222cb8(uVar2,s_disable_180237c30);
    if (iVar1 == 0) {
      *param_5 = 0;
    }
    else {
      iVar1 = FUN_180222cb8(uVar2,s_enable_180237c24);
      if (iVar1 == 0) {
        uVar3 = 1;
      }
      else {
        iVar1 = FUN_180222cb8(uVar2,s_enablebreak_180237c40);
        if (iVar1 != 0) goto LAB_1801f2e5c;
        uVar3 = 2;
      }
      *param_5 = uVar3;
    }
    uVar2 = 1;
  }
  else {
LAB_1801f2e5c:
    uVar2 = 0;
  }
  return uVar2;
}

