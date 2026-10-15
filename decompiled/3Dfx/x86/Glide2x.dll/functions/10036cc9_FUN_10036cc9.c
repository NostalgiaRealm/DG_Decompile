/*
 * FUN_10036cc9 at 10036cc9
 * undefined4 * __fastcall FUN_10036cc9(undefined4 param_1, int param_2)
 * Address ranges: 10036cc9-10036d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10036cc9(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_1005974c;
  uVar2 = FUN_10049329(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_1004f60f(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1004944b(this,uVar1,uVar2);
    *this = &PTR_FUN_10053f6c;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

