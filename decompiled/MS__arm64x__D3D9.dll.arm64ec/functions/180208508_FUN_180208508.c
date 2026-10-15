/*
 * FUN_180208508 at 180208508
 * undefined FUN_180208508(void)
 * Address ranges: 180208508-1802085db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180208508(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  
  if (*(int *)(param_1 + 0xb50) == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xb48) + 1;
    *(longlong *)(param_1 + 0xb48) = lVar5;
    FUN_180206f40();
    FUN_180206ff8(param_1);
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    uVar1 = *(uint *)(param_1 + 0xb50);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_38 = (*extraout_x11)();
    uVar2 = (ulonglong)uVar1 * 8;
    local_30 = (undefined4)lVar5;
    local_48 = local_38 + (uVar2 | 4);
    local_40 = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_38 = local_38 + uVar2;
    local_50 = 0x200000002;
    uVar4 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(uVar4,2,&local_48,&local_50);
  }
  return lVar5;
}

