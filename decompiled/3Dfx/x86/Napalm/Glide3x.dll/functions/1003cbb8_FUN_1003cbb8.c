/*
 * FUN_1003cbb8 at 1003cbb8
 * undefined4 * __fastcall FUN_1003cbb8(undefined4 param_1, int param_2)
 * Address ranges: 1003cbb8-1003cc17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1003cbb8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_1005fa00;
  uVar2 = FUN_1004f21a(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_1005566f(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1004f33c(this,uVar1,uVar2);
    *this = &PTR_FUN_1005a670;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

