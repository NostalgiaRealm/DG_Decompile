/*
 * FUN_180224710 at 180224710
 * undefined FUN_180224710(void)
 * Address ranges: 180224710-18022476b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224710(void)

{
  undefined8 uVar1;
  longlong in_x4;
  code *in_x9;
  
  uVar1 = (*in_x9)(*(undefined4 *)(in_x4 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000180224768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

