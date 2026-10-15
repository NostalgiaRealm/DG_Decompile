/*
 * FUN_1800d8838 at 1800d8838
 * undefined FUN_1800d8838(void)
 * Address ranges: 1800d8838-1800d88b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800d8838(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined **local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = &PTR_FUN_18023c868;
  local_20 = 1;
  local_28 = (*__imp_KERNEL32_dll_CreateFileA)(param_2,0x80000000,1,0,3,0x80,0);
  uVar1 = FUN_1800d74a0(param_1,&local_30,param_3);
  FUN_180101f20(&local_30);
  return uVar1;
}

