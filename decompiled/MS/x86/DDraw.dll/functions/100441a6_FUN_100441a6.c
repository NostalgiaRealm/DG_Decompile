/*
 * FUN_100441a6 at 100441a6
 * undefined4 * __fastcall FUN_100441a6(undefined4 param_1, int param_2)
 * Address ranges: 100441a6-10044205
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100441a6(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_1006c250;
  uVar2 = FUN_100448c5(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_10060bca(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_100449e7(this,uVar1,uVar2);
    *this = &PTR_FUN_10065d0c;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

