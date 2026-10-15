/*
 * FUN_1802009f0 at 1802009f0
 * undefined FUN_1802009f0(void)
 * Address ranges: 1802009f0-180200a67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802009f0(longlong param_1,longlong param_2)

{
  code *extraout_x11;
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  thunk_FUN_1802236f8(lVar1 + 0x620);
  if (param_2 == *(longlong *)(lVar2 + 0x708)) {
    *(undefined8 *)(lVar2 + 0x708) = 0;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_2);
  thunk_FUN_18022370c(lVar1 + 0x620);
  return;
}

