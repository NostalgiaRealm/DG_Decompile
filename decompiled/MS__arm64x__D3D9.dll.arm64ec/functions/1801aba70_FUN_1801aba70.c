/*
 * FUN_1801aba70 at 1801aba70
 * undefined FUN_1801aba70(void)
 * Address ranges: 1801aba70-1801abb6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1801aba70(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  ulonglong local_28;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + -0x2c) +
                     (ulonglong)(uint)(param_2 + *(int *)(param_1 + -0xc4) * param_3) * 0x20);
    local_30 = (ulonglong)*puVar1;
    local_28 = (ulonglong)(puVar1[1] + *puVar1);
    uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar3,0,&local_30);
  }
  local_40 = 0;
  local_38 = FUN_1801bb148(param_1 + -0x100,*(undefined4 *)(param_1 + -0xdc),param_2);
  uVar3 = FUN_1801bb190(param_1 + -0x100,*(undefined4 *)(param_1 + -0xd8));
  local_34 = (undefined4)uVar3;
  (*(code *)puVar2)(0x180224000,uVar3,param_2 + *(int *)(param_1 + -0xc4) * param_3);
  (*extraout_x11_00)(param_1 + -0x100,extraout_x1,&local_40);
  FUN_1801a8d08(param_1 + -0x100,param_1 + -0xa0,param_1 + -0x50,param_4,param_5,param_2,param_3,
                &local_40);
  return 0;
}

