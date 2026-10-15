/*
 * FUN_10018e40 at 10018e40
 * undefined4 * __fastcall FUN_10018e40(undefined4 param_1, int param_2)
 * Address ranges: 10018e40-10019000
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_10018e40(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *this;
  
  iVar1 = FUN_1005c755(0x2294);
  this = (undefined4 *)(iVar1 + 0x13U & 0xfffffff0);
  this[-1] = iVar1;
  FUN_10028590(this,param_1,0xb4);
  *this = &PTR_FUN_1005e85c;
  this[0x754] = 0;
  this[0x755] = 0;
  this[0x756] = param_2;
  this[0x757] = 0;
  this[0x758] = 0;
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
  this[0x765] = iVar1;
  this[0x766] = 0x80;
  this[0x76a] = param_2 + 4;
  this[0x767] = 0;
  this[0x768] = 0;
  this[0x769] = 0xffffffff;
  this[0x76b] = param_2 + 0x38;
  this[0x76c] = 0;
  this[0x76d] = 0;
  *(undefined1 *)(this + 0x76e) = 0;
  this[0x76f] = 0;
  this[0x770] = 0;
  this[0x771] = 0;
  this[0x772] = 0;
  this[0x773] = 0;
  this[0x774] = 0xa000;
  FUN_1005c9cc(this + 0x775,0,0x4a0);
  return this;
}

