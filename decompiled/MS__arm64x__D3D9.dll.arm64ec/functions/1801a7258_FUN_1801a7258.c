/*
 * FUN_1801a7258 at 1801a7258
 * undefined FUN_1801a7258(void)
 * Address ranges: 1801a7258-1801a72b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a7258(longlong param_1,undefined8 param_2)

{
  int iVar1;
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar1 = (*extraout_x11)(param_2);
  if (iVar1 == 1) {
    FUN_18021d418(*(longlong *)(param_1 + 0xc) + 0x18b8,param_2);
  }
  return;
}

