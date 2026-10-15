/*
 * FUN_180224890 at 180224890
 * undefined FUN_180224890(void)
 * Address ranges: 180224890-1802248f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224890(void)

{
  undefined8 uVar1;
  code *in_x9;
  
  uVar1 = (*in_x9)();
                    /* WARNING: Could not recover jumptable at 0x0001802248f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

