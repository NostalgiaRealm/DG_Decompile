/*
 * FUN_1801fe488 at 1801fe488
 * undefined FUN_1801fe488(void)
 * Address ranges: 1801fe488-1801fe50f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801fe488(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *extraout_x11;
  undefined1 auStack_70 [8];
  longlong local_68;
  
  puVar1 = PTR_s_DGD3D11ROOT_18024c630;
  uVar3 = thunk_FUN_1802239b4(0);
  iVar2 = thunk_FUN_180223ff4(uVar3,puVar1,auStack_70);
  if ((iVar2 == 0) || (local_68 == 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_68 = (*extraout_x11)(param_1,0);
    if (local_68 == 0) {
      return 0;
    }
  }
  FUN_1801042e0(local_68 + 8);
  return local_68;
}

