/*
 * FUN_180157048 at 180157048
 * undefined FUN_180157048(void)
 * Address ranges: 180157048-180157097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157048(longlong *param_1)

{
  code *extraout_x11;
  longlong lVar1;
  
  lVar1 = *param_1;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar1,0);
  *(uint *)(lVar1 + 4000) = *(uint *)(lVar1 + 4000) & 0x7fffffff;
  return;
}

