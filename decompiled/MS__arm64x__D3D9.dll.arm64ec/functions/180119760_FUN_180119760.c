/*
 * FUN_180119760 at 180119760
 * undefined FUN_180119760(void)
 * Address ranges: 180119760-1801197db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_180119760(longlong param_1)

{
  byte bVar1;
  code *extraout_x11;
  byte bVar2;
  
  bVar1 = 1;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    if ((*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0x90)) ||
       (bVar2 = 1, *(int *)(param_1 + 0xac) != *(int *)(param_1 + 0x94))) {
      bVar2 = 0;
    }
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    bVar1 = (*extraout_x11)();
    bVar1 = bVar1 & bVar2;
  }
  return bVar1;
}

