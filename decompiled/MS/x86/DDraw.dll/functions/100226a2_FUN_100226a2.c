/*
 * FUN_100226a2 at 100226a2
 * undefined4 * __fastcall FUN_100226a2(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined2 * param_7, undefined4 * param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined1 param_13, byte param_14)
 * Address ranges: 100226a2-10022704
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_100226a2(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined2 *param_7,undefined4 *param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined1 param_13,byte param_14)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_10060bca(0x1f0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_10029c62(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,param_11,param_12,param_13,param_14);
    *this = &PTR_FUN_1006421c;
    this[0x7a] = &PTR_LAB_10064214;
  }
  return this;
}

