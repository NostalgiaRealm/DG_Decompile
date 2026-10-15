/*
 * FUN_18019ac80 at 18019ac80
 * undefined FUN_18019ac80(void)
 * Address ranges: 18019ac80-18019ad4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019ac80(longlong param_1,ulonglong param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_180202728(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (0x180224000,*(undefined8 *)(*(longlong *)(param_1 + -0x88) + 8),extraout_x1,
                     (int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
  (*extraout_x11)(uVar2,*(undefined8 *)(param_1 + -0x28));
  local_30 = 0;
  local_28 = FUN_1801bb148(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc),param_2 & 0xffffffff);
  uVar2 = FUN_1801bb190(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8));
  local_24 = (undefined4)uVar2;
  (*(code *)puVar1)(0x180224000,uVar2,(int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
  (*extraout_x11_00)(param_1 + -0xe0,extraout_x1_00,&local_30);
  thunk_FUN_18022370c(*(longlong *)(param_1 + -0x90) + 0x620);
  return 0;
}

