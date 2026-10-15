/*
 * FUN_1801c1168 at 1801c1168
 * undefined FUN_1801c1168(void)
 * Address ranges: 1801c1168-1801c11bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c1168(void)

{
  code *extraout_x11;
  
  if ((DAT_1802588d8 == 0) &&
     (DAT_1802588d8 = FUN_1801bb848(s_DebugSetMute_18022e210), DAT_1802588d8 == 0)) {
    return;
  }
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  return;
}

