/*
 * FUN_1802245e0 at 1802245e0
 * undefined FUN_1802245e0(void)
 * Address ranges: 1802245e0-180224633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802245e0(undefined1 param_1 [16],undefined4 param_2)

{
  undefined8 uVar1;
  code *in_x9;
  
  uVar1 = (*in_x9)(param_2);
                    /* WARNING: Could not recover jumptable at 0x000180224630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

