/*
 * FUN_10060290 at 10060290
 * undefined FUN_10060290(void)
 * Address ranges: 10060290-100602a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10060290(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x944);
  *(int *)(param_1 + 0x944) = param_2;
  return param_2 != iVar1;
}

