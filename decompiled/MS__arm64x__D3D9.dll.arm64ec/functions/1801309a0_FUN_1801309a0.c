/*
 * FUN_1801309a0 at 1801309a0
 * undefined FUN_1801309a0(void)
 * Address ranges: 1801309a0-1801309ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801309a0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *extraout_x11;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(lVar3 + (uVar2 & 0xffffffff) * 8));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}

