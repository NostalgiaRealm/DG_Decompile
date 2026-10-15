/*
 * FUN_1802246a0 at 1802246a0
 * undefined FUN_1802246a0(void)
 * Address ranges: 1802246a0-180224703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802246a0(void)

{
  undefined8 uVar1;
  longlong in_x4;
  code *in_x9;
  
  uVar1 = (*in_x9)(*(undefined4 *)(in_x4 + 0x28),*(undefined4 *)(in_x4 + 0x30),
                   *(undefined4 *)(in_x4 + 0x38),*(undefined4 *)(in_x4 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000180224700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__hybrid_os_arm64x_dispatch_ret)(uVar1);
  return;
}

