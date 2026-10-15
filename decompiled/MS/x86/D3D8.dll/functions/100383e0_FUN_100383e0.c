/*
 * FUN_100383e0 at 100383e0
 * undefined4 * __fastcall FUN_100383e0(undefined4 param_1, undefined4 param_2)
 * Address ranges: 100383e0-1003864f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_100383e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  
  iVar1 = FUN_100ad475(0xde84);
  this = (undefined4 *)(iVar1 + 0x13U & 0xfffffff0);
  this[-1] = iVar1;
  FUN_100406f0(this,param_1,0x100);
  *this = &PTR_FUN_100b22f8;
  this[0x366c] = &PTR_FUN_100b22f4;
  this[0x366d] = 0;
  this[0x366e] = 0;
  this[0x366f] = 0;
  this[0x3670] = 0;
  this[0x3671] = param_2;
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
  this[0x367d] = 0;
  this[0x367e] = 0;
  this[0x367f] = 0;
  this[0x3680] = 0;
  this[0x3681] = 0;
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
  this[0x3682] = iVar1;
  this[0x3683] = 0x80;
  this[0x3684] = 0;
  this[0x3685] = 0;
  this[0x3686] = 0;
  this[0x3687] = 0;
  *(undefined1 *)(this + 0x3688) = 0;
  this[0x3689] = 0;
  this[0x368a] = 0;
  this[0x368b] = 0;
  this[0x368c] = 0;
  this[0x368d] = 0;
  this[0x368e] = 0;
  this[0x368f] = 0;
  this[0x3690] = 0;
  this[0x3691] = 0;
  this[0x3692] = 0;
  this[0x3693] = 0;
  this[0x3694] = 0;
  this[0x3695] = 0;
  this[0x3696] = 0;
  this[0x3697] = 0;
  this[0x3698] = 0;
  this[0x36ce] = 0;
  this[0x36cf] = 0;
  this[0x36d0] = 0;
  this[0x36d1] = 0;
  this[0x3699] = 0;
  this[0x369a] = 0;
  this[0x369b] = 0;
  this[5] = 0xffffffff;
  return this;
}

