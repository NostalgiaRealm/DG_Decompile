/*
 * FUN_180224900 at 180224900
 * undefined FUN_180224900(void)
 * Address ranges: 180224900-18022496f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224900(void)

{
  undefined8 uVar1;
  code *in_x9;
  
  uVar1 = (*in_x9)();
                    /* WARNING: Could not recover jumptable at 0x00018022496c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

