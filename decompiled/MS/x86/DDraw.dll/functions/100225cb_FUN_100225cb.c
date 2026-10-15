/*
 * FUN_100225cb at 100225cb
 * undefined4 * __fastcall FUN_100225cb(undefined1 param_1)
 * Address ranges: 100225cb-10022646
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100225cb(undefined1 param_1)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_10060bca(0x17c);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_10023e4c(this,param_1);
    *this = &PTR_FUN_100641b8;
    this[0x56] = 0;
    this[0x57] = 0;
    this[0x58] = 0;
    this[4] = &PTR_FUN_10064164;
    this[0xe] = &PTR_FUN_10064140;
    this[0x55] = &PTR_LAB_1006413c;
    this[0x59] = 0;
    this[0x5a] = 0;
    this[0x5b] = 0;
    this[0x5c] = 0;
    this[0x5d] = 0;
    this[0x5e] = 0;
  }
  return this;
}

