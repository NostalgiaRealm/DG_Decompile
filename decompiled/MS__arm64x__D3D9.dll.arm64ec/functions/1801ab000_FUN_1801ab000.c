/*
 * FUN_1801ab000 at 1801ab000
 * undefined FUN_1801ab000(void)
 * Address ranges: 1801ab000-1801ab077
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801ab000(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  ulonglong local_10;
  ulonglong local_8;
  
  if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xd4) +
                     (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20);
    local_10 = (ulonglong)*puVar1;
    local_8 = (ulonglong)(puVar1[1] + *puVar1);
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,0,&local_10);
  }
  return 0;
}

