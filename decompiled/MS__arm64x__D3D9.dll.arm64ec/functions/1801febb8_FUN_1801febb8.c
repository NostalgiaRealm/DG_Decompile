/*
 * FUN_1801febb8 at 1801febb8
 * undefined FUN_1801febb8(void)
 * Address ranges: 1801febb8-1801fec43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801febb8(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *extraout_x11;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0 + 0xa70;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong *)(lVar1 + lVar2 * 8)) {
      *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_3);
  thunk_FUN_18022370c(param_1 + 0x620);
  return;
}

