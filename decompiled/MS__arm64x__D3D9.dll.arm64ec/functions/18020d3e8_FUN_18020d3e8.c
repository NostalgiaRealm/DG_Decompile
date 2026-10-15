/*
 * FUN_18020d3e8 at 18020d3e8
 * undefined FUN_18020d3e8(void)
 * Address ranges: 18020d3e8-18020d42f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020d3e8(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)
            (0x180224000,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 0x20),param_3,param_4,
             param_5);
  (*extraout_x11)();
  return;
}

