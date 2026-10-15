/*
 * FUN_18019ad50 at 18019ad50
 * undefined FUN_18019ad50(void)
 * Address ranges: 18019ad50-18019aebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019ad50(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar4;
  uint uVar5;
  undefined4 local_50 [8];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar3 = (*extraout_x11)(param_1 + -0xe0);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + -0x28) == 0) {
      FUN_1801bad48(local_50,*(undefined4 *)(param_1 + -0xb4));
      FUN_180198608(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),
                    *(undefined4 *)(param_1 + -0xb8),*(undefined4 *)(param_1 + -0xb0),
                    *(undefined4 *)(param_1 + -0xac),1,local_50[0],0,0,0,3,0,0x30000,0,0,0,0);
      uVar5 = 0;
      if (*(int *)(param_1 + -0xac) != 0) {
        do {
          uVar4 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar4);
              uVar2 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
              thunk_FUN_180223c20(*(longlong *)(param_1 + -0x50) +
                                  (ulonglong)(uVar4 + *(int *)(param_1 + -0xa4) * uVar5) * 0x28 +
                                  0x18,0,0,uVar2);
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)(param_1 + -0xb0));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + -0xac));
      }
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(param_1 + -0xe0,param_2,param_3);
    }
  }
  return;
}

