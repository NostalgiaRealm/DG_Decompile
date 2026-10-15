/*
 * FUN_1003bc6d at 1003bc6d
 * undefined4 * __fastcall FUN_1003bc6d(int param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 1003bc6d-1003bce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1003bc6d(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *this;
  undefined4 uVar1;
  
  this = (undefined4 *)FUN_1004f60f(0x30);
  if (this != (undefined4 *)0x0) {
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    this[4] = 0;
    this[5] = 0;
    this[6] = 0;
    this[8] = 0;
    this[10] = 0;
    this[0xb] = 0;
    *this = &PTR_FUN_100543e8;
    this[7] = 4;
    this[9] = param_4;
    uVar1 = FUN_1003bc04(this,param_1,param_2,param_3,param_5);
    if ((char)uVar1 != '\0') {
      return this;
    }
    FUN_1003ba9c(this);
    FUN_1004f626(this);
  }
  return (undefined4 *)0x0;
}

