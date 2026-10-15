/*
 * FUN_1801a7430 at 1801a7430
 * undefined FUN_1801a7430(void)
 * Address ranges: 1801a7430-1801a74a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801a7430(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  uint uVar2;
  code *extraout_x11;
  undefined1 auVar3 [16];
  
  uVar2 = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x24) + (param_2 & 0xffffffff) * 0x20 + 0xc) == '\0') {
    auVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar1 = (*extraout_x11)(auVar3._0_8_,auVar3._8_8_,0,0);
    uVar2 = ~uVar1 >> 0x1f;
    *(byte *)(*(longlong *)(param_1 + 0x24) + (param_2 & 0xffffffff) * 0x20 + 0xc) =
         (byte)(~uVar1 >> 0x1f);
  }
  return uVar2;
}

