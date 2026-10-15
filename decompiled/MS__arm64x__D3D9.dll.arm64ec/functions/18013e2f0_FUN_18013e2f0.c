/*
 * FUN_18013e2f0 at 18013e2f0
 * undefined FUN_18013e2f0(void)
 * Address ranges: 18013e2f0-18013e3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013e2f0(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = 0;
  local_28 = *(undefined4 *)(param_1 + 0x2c);
  *(ulonglong *)(param_1 + 0x10) =
       *(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x28) * 0x18c0 + 0x6b0;
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  bVar2 = *(int *)(param_1 + 0x30) != 1;
  uStack_24 = 2;
  if (bVar2) {
    uStack_24 = 0;
  }
  uStack_1c = 0x10000;
  if (bVar2) {
    uStack_1c = 0;
  }
  local_20 = 1;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar3 = (*extraout_x11)(uVar4,&local_28,0,param_1 + 0x18);
  if (iVar3 < 0) {
LAB_18013e3d8:
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x30) == 1) {
      local_30 = 0;
      uVar4 = (*(code *)puVar1)(0x180224000);
      iVar3 = (*extraout_x11_00)(uVar4,&local_30,param_1 + 0x20);
      if (iVar3 < 0) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_01)();
        *(undefined8 *)(param_1 + 0x18) = 0;
        goto LAB_18013e3d8;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}

