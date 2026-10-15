/*
 * FUN_1802249d0 at 1802249d0
 * undefined FUN_1802249d0(void)
 * Address ranges: 1802249d0-180224a23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802249d0(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *in_x9;
  
  (*in_x9)(param_2,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x000180224a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)();
  return;
}

