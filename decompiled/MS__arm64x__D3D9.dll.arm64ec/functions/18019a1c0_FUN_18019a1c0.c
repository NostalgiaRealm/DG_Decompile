/*
 * FUN_18019a1c0 at 18019a1c0
 * undefined FUN_18019a1c0(void)
 * Address ranges: 18019a1c0-18019a36f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18019a1c0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar5;
  uint uVar6;
  undefined4 local_58;
  undefined4 local_50 [8];
  
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  if (*(longlong *)(param_1 + -0x28) == 0) {
    FUN_1801bad48(local_50,*(undefined4 *)(param_1 + -0xb4));
    FUN_180198608(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),*(undefined4 *)(param_1 + -0xb8),
                  *(undefined4 *)(param_1 + -0xb0),*(undefined4 *)(param_1 + -0xac),1,local_50[0],0,
                  0,0,3,0,0x30000,0,0,0,0);
    uVar6 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        uVar5 = 0;
        if (*(int *)(param_1 + -0xb0) != 0) {
          do {
            FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar5);
            uVar2 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
            thunk_FUN_180223c20(*(longlong *)(param_1 + -0x50) +
                                (ulonglong)(uVar5 + *(int *)(param_1 + -0xa4) * uVar6) * 0x28 + 0x18
                                ,0,0,uVar2);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + -0xb0));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + -0xac));
    }
  }
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = 0;
  if (*(longlong *)(param_1 + -0x28) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)
              (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
               *(longlong *)(param_1 + -0x28),(int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
    iVar3 = (*extraout_x11)();
    if (-1 < iVar3) {
      uVar4 = (*(code *)puVar1)(0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),
                                extraout_x1,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
      (*extraout_x11_00)(uVar4,*(undefined8 *)(param_1 + -0x28));
      uVar2 = local_58;
    }
  }
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar2;
}

