/*
 * FUN_180202238 at 180202238
 * undefined FUN_180202238(void)
 * Address ranges: 180202238-1802022cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180202238(undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  int local_20 [2];
  longlong local_18;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_20[0] = 0;
  iVar4 = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 0x3c) == 3) {
      iVar4 = 1;
    }
    else {
      local_18 = 0;
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      iVar2 = (*extraout_x11)(uVar3,local_20,&local_18);
      iVar4 = local_20[0];
      if ((-1 < iVar2) && (local_18 != 0)) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_00)();
        iVar4 = local_20[0];
      }
    }
  }
  return iVar4 == 1;
}

