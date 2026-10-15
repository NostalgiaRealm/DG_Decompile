/*
 * FUN_180206858 at 180206858
 * undefined FUN_180206858(void)
 * Address ranges: 180206858-1802068e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180206858(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  undefined1 auStack_70 [8];
  longlong local_68;
  
  puVar1 = PTR_s_DGD3D12ROOT_18024c680;
  uVar3 = thunk_FUN_1802239b4(0);
  iVar2 = thunk_FUN_180223ff4(uVar3,puVar1,auStack_70);
  if ((iVar2 == 0) || (local_68 == 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_68 = (*extraout_x11)(param_1,param_2);
    if (local_68 == 0) {
      return 0;
    }
  }
  FUN_1801042e0(local_68 + 8);
  return local_68;
}

