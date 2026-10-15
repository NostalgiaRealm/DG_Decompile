/*
 * FUN_100605f0 at 100605f0
 * undefined FUN_100605f0(void)
 * Address ranges: 100605f0-10060613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100605f0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8dc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8dc) + 0xc);
  }
  return uVar1;
}

