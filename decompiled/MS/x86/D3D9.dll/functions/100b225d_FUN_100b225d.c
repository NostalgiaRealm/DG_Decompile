/*
 * FUN_100b225d at 100b225d
 * undefined4 * __fastcall FUN_100b225d(undefined4 param_1, int param_2)
 * Address ranges: 100b225d-100b22bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100b225d(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_100dea9c;
  uVar2 = FUN_100b2954(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_100cfd55(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_100b2a76(this,uVar1,uVar2);
    *this = &PTR_FUN_100d830c;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

