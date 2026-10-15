/*
 * FUN_10023280 at 10023280
 * undefined4 * __fastcall FUN_10023280(undefined4 param_1, undefined4 param_2)
 * Address ranges: 10023280-100234b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10023280(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  
  iVar1 = FUN_1005c755(0x21f4);
  this = (undefined4 *)(iVar1 + 0x13U & 0xfffffff0);
  this[-1] = iVar1;
  FUN_10028590(this,param_1,0xb4);
  *this = &PTR_FUN_1005ec94;
  this[0x754] = 0;
  this[0x755] = 0;
  this[0x756] = 0;
  this[0x757] = 0;
  this[0x758] = param_2;
  this[0x759] = 0;
  this[0x75a] = 0;
  this[0x75b] = 0;
  this[0x75c] = 0;
  this[0x75d] = 0;
  this[0x75e] = 0;
  this[0x75f] = 0;
  this[0x760] = 0;
  this[0x761] = 0;
  this[0x762] = 0;
  this[0x763] = 0;
  this[0x764] = 0;
  this[0x765] = 0;
  this[0x766] = 0;
  this[0x767] = 0;
  this[0x768] = 0;
  iVar1 = FUN_1005c789(0xc00);
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
  this[0x769] = iVar1;
  this[0x76a] = 0x80;
  this[0x76b] = 0;
  this[0x76c] = 0;
  this[0x76d] = 0;
  this[0x76e] = 0;
  *(undefined1 *)(this + 0x76f) = 0;
  this[0x770] = 0;
  this[0x771] = 0;
  this[0x772] = 0;
  this[0x773] = 0;
  this[0x774] = 0;
  this[0x775] = 0;
  this[0x776] = 0;
  this[0x777] = 0;
  this[0x778] = 0;
  this[0x779] = 0;
  this[0x77a] = 0;
  this[0x7b0] = 0;
  this[0x7b1] = 0;
  this[0x7b2] = 0;
  this[0x7b3] = 0;
  this[0x77b] = 0;
  this[0x77c] = 0;
  this[0x77d] = 0;
  this[5] = 0xffffffff;
  return this;
}

