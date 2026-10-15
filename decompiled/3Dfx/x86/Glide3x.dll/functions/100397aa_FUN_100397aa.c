/*
 * FUN_100397aa at 100397aa
 * undefined4 * __fastcall FUN_100397aa(undefined4 param_1, int param_2)
 * Address ranges: 100397aa-10039809
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100397aa(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *this;
  
  uVar1 = DAT_1005b820;
  uVar2 = FUN_1004be11(*(int *)(param_2 + 0xd2));
  this = (undefined4 *)FUN_1005225f(0x3b0);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1004bf33(this,uVar1,uVar2);
    *this = &PTR_FUN_100571c4;
    this[0xea] = 0;
    this[0xeb] = 0xc000;
    *(undefined1 *)(this + 0xe9) = 0;
  }
  return this;
}

