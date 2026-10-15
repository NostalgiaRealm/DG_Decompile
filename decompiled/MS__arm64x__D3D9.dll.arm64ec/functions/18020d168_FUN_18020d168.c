/*
 * FUN_18020d168 at 18020d168
 * undefined FUN_18020d168(void)
 * Address ranges: 18020d168-18020d1e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18020d168(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  *param_2 = *param_2 + (ulonglong)(((param_3 & 0xffff) + param_4) * *(int *)(param_1 + 0x20));
  return param_2;
}

