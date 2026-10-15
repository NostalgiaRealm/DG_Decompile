/*
 * FUN_180224830 at 180224830
 * undefined FUN_180224830(void)
 * Address ranges: 180224830-180224887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224830(void)

{
  undefined8 uVar1;
  code *in_x9;
  
  uVar1 = (*in_x9)();
                    /* WARNING: Could not recover jumptable at 0x000180224884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

