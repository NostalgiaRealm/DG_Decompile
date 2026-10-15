/*
 * FUN_1004f4aa at 1004f4aa
 * undefined4 * __fastcall FUN_1004f4aa(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1004f4aa-1004f50e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1004f4aa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *this;
  int iVar1;
  undefined4 *puVar2;
  
  this = (undefined4 *)FUN_10060bca(0x78);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1005bbbd(this,param_1,param_2,param_4);
    this[0x10] = param_3;
    this[0x11] = param_5;
    this[0x12] = 0;
    this[0x13] = 0;
    this[0x14] = 0;
    this[0x15] = 0;
    this[0x16] = 0xffffffff;
    puVar2 = this + 0x18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *this = &PTR__scalar_deleting_destructor__10066904;
    this[0xe] = &PTR_LAB_10066940;
  }
  return this;
}

