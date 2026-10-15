/*
 * FUN_10060380 at 10060380
 * undefined4 __fastcall FUN_10060380(byte * param_1, uint * param_2)
 * Address ranges: 10060380-100603b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10060380(byte *param_1,uint *param_2)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  uVar1 = FUN_10060a80(param_1,&local_c);
  if (((char)uVar1 != '\0') && ((local_8 == 0 || (uVar1 = local_8, local_8 == 0xffffffff)))) {
    *param_2 = local_c;
    return CONCAT31((int3)(local_c >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

