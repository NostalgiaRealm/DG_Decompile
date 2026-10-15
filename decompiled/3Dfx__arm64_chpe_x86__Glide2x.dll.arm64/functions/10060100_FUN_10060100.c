/*
 * FUN_10060100 at 10060100
 * undefined FUN_10060100(void)
 * Address ranges: 10060100-1006015b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10060100(int param_1,char param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x630) + -1;
  *(int *)(param_1 + 0x630) = iVar1;
  if ((iVar1 == 0) && (*(int *)(param_1 + 0x62c) <= *(int *)(param_1 + 0x620) || param_2 != '\0')) {
    uVar2 = FUN_1005fc70(param_1,0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

