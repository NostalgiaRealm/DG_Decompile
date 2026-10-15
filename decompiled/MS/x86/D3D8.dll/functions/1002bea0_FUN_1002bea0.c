/*
 * FUN_1002bea0 at 1002bea0
 * undefined4 * __fastcall FUN_1002bea0(undefined4 param_1, int param_2)
 * Address ranges: 1002bea0-1002c092
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1002bea0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  
  iVar1 = FUN_100ad475(0xdf24);
  this = (undefined4 *)(iVar1 + 0x13U & 0xfffffff0);
  this[-1] = iVar1;
  FUN_100406f0(this,param_1,0x100);
  *this = &PTR_FUN_100b1e30;
  this[0x366c] = 0;
  this[0x366d] = 0;
  this[0x366e] = param_2;
  this[0x366f] = 0;
  this[0x3670] = 0;
  this[0x3671] = 0;
  this[0x3672] = 0;
  this[0x3673] = 0;
  this[0x3674] = 0;
  this[0x3675] = 0;
  this[0x3676] = 0;
  this[0x3677] = 0;
  this[0x3678] = 0;
  this[0x3679] = 0;
  this[0x367a] = 0;
  this[0x367b] = 0;
  this[0x367c] = 0;
  iVar1 = FUN_100ad4a9(0xc00);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0x80;
    iVar2 = iVar1;
    do {
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined1 *)(iVar2 + 0x10) = 0;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + 0x18;
    } while (iVar3 != 0);
  }
  this[0x367d] = iVar1;
  this[0x367e] = 0x80;
  this[0x3682] = param_2 + 4;
  this[0x367f] = 0;
  this[0x3680] = 0;
  this[0x3681] = 0xffffffff;
  this[0x3683] = param_2 + 0x48;
  this[0x3684] = 0;
  this[0x3685] = 0;
  *(undefined1 *)(this + 0x3686) = 0;
  this[0x3687] = 0;
  this[0x3688] = 0;
  this[0x3689] = 0;
  this[0x368a] = 0;
  this[0x368b] = 0;
  this[0x368c] = 0;
  this[0x368d] = 0;
  this[0x368e] = 0;
  this[0x368f] = 0;
  this[0x3690] = 0;
  this[0x3691] = 0xa000;
  FUN_100ada8e(this + 0x3692,0,0x4c0);
  return this;
}

