/*
 * FUN_10060736 at 10060736
 * undefined4 * __stdcall FUN_10060736(undefined4 * param_1)
 * Address ranges: 10060736-10060771
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10060736(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_10060bca(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1003cc64(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_1003cce0(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

