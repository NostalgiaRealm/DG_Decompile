/*
 * FUN_18019fc90 at 18019fc90
 * undefined FUN_18019fc90(void)
 * Address ranges: 18019fc90-18019fd9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18019fc90(longlong param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
             ulonglong param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_x8;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong local_50;
  int local_48;
  int iStack_44;
  
  if (*(char *)(param_1 + -3) == '\0') {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
    (*extraout_x11_00)(uVar1,*(undefined8 *)(param_1 + 0x20),param_2,0,extraout_x8,
                       param_4 & 0xffffffff,param_5 & 0xffffffff);
  }
  else {
    FUN_1801bb310(param_1 + -0x20,&local_50,*(undefined8 *)(param_1 + 0x18),param_2,param_3,
                  param_4 & 0xffffffff,param_5 & 0xffffffff);
    if (local_50 == 0) {
      return 0;
    }
    iVar2 = iStack_44 * local_48;
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(uVar1,*(undefined8 *)(param_1 + 0x20),param_2,0,local_50,local_48 << 2,
                    iVar2 << 2);
    FUN_1802229d8(local_50);
  }
  return 1;
}

