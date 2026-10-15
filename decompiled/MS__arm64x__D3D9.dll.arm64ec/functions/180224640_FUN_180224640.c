/*
 * FUN_180224640 at 180224640
 * undefined FUN_180224640(void)
 * Address ranges: 180224640-180224693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224640(void)

{
  undefined8 uVar1;
  code *in_x9;
  
  uVar1 = (*in_x9)();
                    /* WARNING: Could not recover jumptable at 0x000180224690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

