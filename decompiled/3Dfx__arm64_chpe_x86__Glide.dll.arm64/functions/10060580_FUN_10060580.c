/*
 * FUN_10060580 at 10060580
 * undefined FUN_10060580(void)
 * Address ranges: 10060580-100605db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10060580(int param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x630) + -1;
  *(int *)(param_1 + 0x630) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x62c) <= *(int *)(param_1 + 0x620) || param_2 != '\0')) {
    uVar2 = FUN_100600f0(param_1,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

