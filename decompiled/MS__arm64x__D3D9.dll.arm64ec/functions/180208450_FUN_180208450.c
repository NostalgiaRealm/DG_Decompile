/*
 * FUN_180208450 at 180208450
 * undefined FUN_180208450(void)
 * Address ranges: 180208450-180208507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180208450(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined8 uVar5;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  local_40 = 0;
  uVar5 = 0;
  lVar1 = (ulonglong)*(uint *)(param_1 + 0xb50) * 8;
  lStack_30 = (ulonglong)(*(uint *)(param_1 + 0xb50) + 1) << 3;
  local_38 = lVar1;
  uVar4 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar3 = (*extraout_x11)(uVar4,0,&local_38,&local_40);
  if (-1 < iVar3) {
    uVar5 = FUN_180104270(lVar1 + local_40,0,0);
    local_38 = 0;
    lStack_30 = 0;
    uVar4 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(uVar4,0,&local_38);
  }
  return uVar5;
}

