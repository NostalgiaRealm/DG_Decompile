/*
 * FUN_10060d16 at 10060d16
 * int __cdecl FUN_10060d16(byte * param_1, byte * param_2, int param_3)
 * Address ranges: 10060d16-10060d44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10060d16(byte *param_1,byte *param_2,int param_3)

{
  if (param_3 != 0) {
    for (; (param_3 = param_3 + -1, param_3 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1)
    {
      param_2 = param_2 + 1;
    }
    return (uint)*param_1 - (uint)*param_2;
  }
  return 0;
}

