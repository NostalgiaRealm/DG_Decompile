/*
 * FUN_10060170 at 10060170
 * undefined FUN_10060170(void)
 * Address ranges: 10060170-10060193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10060170(int param_1)

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

