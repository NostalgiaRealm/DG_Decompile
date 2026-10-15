/*
 * FUN_180104ec0 at 180104ec0
 * undefined FUN_180104ec0(void)
 * Address ranges: 180104ec0-180104edb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180104ec0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)();
                    /* WARNING: Could not recover jumptable at 0x000180104ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

