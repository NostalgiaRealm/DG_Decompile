/*
 * FUN_10090047 at 10090047
 * undefined4 * __fastcall FUN_10090047(undefined4 param_1, int param_2)
 * Address ranges: 10090047-100900a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10090047(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_100ba2dc;
  uVar2 = FUN_10090755(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_100ad475(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_10090877(this,uVar1,uVar2);
    *this = &PTR_FUN_100b48d4;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

