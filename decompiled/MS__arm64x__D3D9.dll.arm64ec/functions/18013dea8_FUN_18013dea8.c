/*
 * FUN_18013dea8 at 18013dea8
 * undefined FUN_18013dea8(void)
 * Address ranges: 18013dea8-18013df2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013dea8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  code *extraout_x11;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0x10);
    thunk_FUN_1802236f8(lVar3 + 0x620);
    lVar2 = lVar3 + (ulonglong)uVar1 * 0x18c0;
    if (lVar4 == *(longlong *)(lVar2 + 0xb70)) {
      *(undefined8 *)(lVar2 + 0xb70) = 0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar4);
    thunk_FUN_18022370c(lVar3 + 0x620);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

