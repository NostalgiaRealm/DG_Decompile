/*
 * FUN_1009d912 at 1009d912
 * undefined4 * __fastcall FUN_1009d912(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1009d912-1009d97a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1009d912(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  bool bVar1;
  undefined4 *this;
  void *this_00;
  
  this = (undefined4 *)FUN_100ad475(0x48);
  if (this != (undefined4 *)0x0) {
    FUN_1009da42(this,param_1,param_2,param_3);
    *this = &PTR__scalar_deleting_destructor__100b52d8;
    this[0xe] = &PTR_LAB_100b52c0;
    this[0x10] = 0;
    this[0x11] = param_6;
    bVar1 = FUN_1009d888(this_00,param_4,param_5);
    if (bVar1) {
      return this;
    }
    FUN_1009d840(this);
    FUN_100ad48c(this);
  }
  return (undefined4 *)0x0;
}

