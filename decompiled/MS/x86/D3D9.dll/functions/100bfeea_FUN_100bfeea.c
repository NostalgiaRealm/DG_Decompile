/*
 * FUN_100bfeea at 100bfeea
 * undefined4 * __fastcall FUN_100bfeea(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 100bfeea-100bff52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_100bfeea(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  bool bVar1;
  undefined4 *this;
  void *this_00;
  
  this = (undefined4 *)FUN_100cfd55(0x48);
  if (this != (undefined4 *)0x0) {
    FUN_100c001a(this,param_1,param_2,param_3);
    *this = &PTR__scalar_deleting_destructor__100d8d10;
    this[0xe] = &PTR_LAB_100d8cf8;
    this[0x10] = 0;
    this[0x11] = param_6;
    bVar1 = FUN_100bfe60(this_00,param_4,param_5);
    if (bVar1) {
      return this;
    }
    FUN_100bfe18(this);
    FUN_100cfd6c(this);
  }
  return (undefined4 *)0x0;
}

