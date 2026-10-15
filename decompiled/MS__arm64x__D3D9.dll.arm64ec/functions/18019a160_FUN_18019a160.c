/*
 * FUN_18019a160 at 18019a160
 * undefined FUN_18019a160(void)
 * Address ranges: 18019a160-18019a1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18019a160(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),param_2,
                     (int)param_2 + *(int *)(param_1 + 0x3c) * param_3);
  (*extraout_x11)(uVar1,*(undefined8 *)(extraout_x8 + 0xb8));
  return 0;
}

