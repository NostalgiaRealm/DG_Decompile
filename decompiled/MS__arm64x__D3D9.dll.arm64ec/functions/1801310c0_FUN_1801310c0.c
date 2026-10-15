/*
 * FUN_1801310c0 at 1801310c0
 * undefined FUN_1801310c0(void)
 * Address ranges: 1801310c0-180131113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801310c0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  iVar1 = (*extraout_x11)(uVar2,*(undefined4 *)(extraout_x8 + 0x94),
                          *(undefined4 *)(extraout_x8 + 0x98),0,1);
  return iVar1 == 0;
}

