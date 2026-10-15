/*
 * FUN_10054b06 at 10054b06
 * undefined4 * __fastcall FUN_10054b06(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 10054b06-10054b6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_10054b06(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  bool bVar1;
  undefined4 *this;
  void *this_00;
  
  this = (undefined4 *)FUN_1005c755(0x48);
  if (this != (undefined4 *)0x0) {
    FUN_10055540(this,param_1,param_2,param_3);
    *this = &PTR__scalar_deleting_destructor__1005fe68;
    this[0xe] = &PTR_LAB_1005fe50;
    this[0x10] = 0;
    this[0x11] = param_6;
    bVar1 = FUN_10054a7c(this_00,param_4,param_5);
    if (bVar1) {
      return this;
    }
    FUN_10054a34(this);
    FUN_1005c76c(this);
  }
  return (undefined4 *)0x0;
}

