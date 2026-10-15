/*
 * FUN_180190760 at 180190760
 * undefined FUN_180190760(void)
 * Address ranges: 180190760-1801907fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180190760(longlong param_1)

{
  undefined *puVar1;
  code *extraout_x11;
  longlong lVar2;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar2 = 0;
  do {
    if (*(longlong *)(param_1 + 0x1d2b8 + lVar2 * 8) != 0) {
      FUN_1801feb08(*(undefined8 *)(param_1 + 0x1cf10),*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x1d2b8 + lVar2 * 8) = 0;
    }
    if (*(longlong *)(param_1 + 0x1d0b8 + lVar2 * 8) != 0) {
      (*(code *)puVar1)();
      (*extraout_x11)();
      *(undefined8 *)(param_1 + 0x1d0b8 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x40);
  return;
}

