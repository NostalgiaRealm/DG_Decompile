/*
 * FUN_1801fa548 at 1801fa548
 * undefined FUN_1801fa548(void)
 * Address ranges: 1801fa548-1801fa693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801fa548(longlong param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar6;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar6 = 0;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar2 = (*extraout_x11)();
  if (iVar2 != 0) {
    do {
      uVar4 = (*(code *)puVar1)();
      uVar4 = (*extraout_x11_00)(uVar4,param_2,uVar6);
      iVar2 = FUN_180222cb8(uVar4,s_datafolderredirection_180237de0);
      if (iVar2 == 0) {
        uVar4 = (*(code *)puVar1)(0x180224000);
        iVar2 = (*extraout_x11_01)(uVar4,param_2,uVar6);
        if (iVar2 == 1) {
          uVar4 = (*(code *)puVar1)(0x180224000);
          pcVar5 = (char *)(*extraout_x11_03)(uVar4,param_2,uVar6,0);
          if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
            thunk_FUN_180223950(0,0,pcVar5,0xffffffff,*(undefined8 *)(param_1 + 8),
                                *(undefined4 *)(param_1 + 0x10));
          }
          return 1;
        }
      }
      uVar6 = uVar6 + 1;
      uVar4 = (*(code *)puVar1)();
      uVar3 = (*extraout_x11_02)(uVar4,param_2);
    } while (uVar6 < uVar3);
  }
  return 0;
}

