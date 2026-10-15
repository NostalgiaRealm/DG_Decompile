/*
 * FUN_18020d338 at 18020d338
 * undefined FUN_18020d338(void)
 * Address ranges: 18020d338-18020d39b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18020d338(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)
            (0x180224000,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20),param_3,param_4,
             param_5,param_6,param_7);
  uVar1 = (*extraout_x11)();
  return ~uVar1 >> 0x1f;
}

