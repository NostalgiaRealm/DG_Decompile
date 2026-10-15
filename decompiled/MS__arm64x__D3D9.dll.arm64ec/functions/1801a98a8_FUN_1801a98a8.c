/*
 * FUN_1801a98a8 at 1801a98a8
 * undefined FUN_1801a98a8(void)
 * Address ranges: 1801a98a8-1801a991f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a98a8(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  ulonglong local_10;
  ulonglong local_8;
  
  if ((*(longlong *)(param_1 + 0xd4) != 0) && ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0)
     ) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xd4) +
                     (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20);
    local_10 = (ulonglong)*puVar1;
    local_8 = (ulonglong)(puVar1[1] + *puVar1);
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,0,&local_10);
  }
  return;
}

