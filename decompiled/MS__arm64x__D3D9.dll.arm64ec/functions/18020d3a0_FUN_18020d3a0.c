/*
 * FUN_18020d3a0 at 18020d3a0
 * undefined FUN_18020d3a0(void)
 * Address ranges: 18020d3a0-18020d3e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020d3a0(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)
            (0x180224000,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20),param_3,param_4,
             param_5);
  (*extraout_x11)();
  return;
}

