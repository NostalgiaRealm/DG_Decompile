/*
 * FUN_1801feb08 at 1801feb08
 * undefined FUN_1801feb08(void)
 * Address ranges: 1801feb08-1801febb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801feb08(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  code *extraout_x11;
  
  thunk_FUN_1802236f8(param_1 + 0x620);
  lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
  lVar1 = 0;
  lVar2 = lVar3 + 0x870;
  do {
    if (param_3 == *(longlong *)(lVar2 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  lVar3 = lVar3 + 0x810;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong *)(lVar3 + lVar2 * 8)) {
      *(undefined8 *)(lVar3 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_3);
  thunk_FUN_18022370c(param_1 + 0x620);
  return;
}

