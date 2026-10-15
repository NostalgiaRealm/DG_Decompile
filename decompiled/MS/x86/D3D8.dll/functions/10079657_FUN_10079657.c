/*
 * FUN_10079657 at 10079657
 * undefined4 * __fastcall FUN_10079657(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, byte param_9, byte param_10, undefined1 param_11, undefined4 param_12, undefined4 param_13, byte param_14)
 * Address ranges: 10079657-100796ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_10079657(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9,byte param_10,
            undefined1 param_11,undefined4 param_12,undefined4 param_13,byte param_14)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_100ad475(0x7c);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_1000e1b9(this,param_1,param_3,-(uint)(param_4 != 0) & param_4 + 8U,param_5,param_6,param_7,
                 param_8,param_9,param_10,param_11,param_12,param_13,param_14);
    this[0x1e] = param_4;
    this[0x1a] = this + 0x17;
    this[0x17] = &PTR_FUN_100b3738;
    this[0x1b] = param_1;
    this[0x1d] = param_3;
    this[0x18] = 0;
    this[0x19] = 0;
    *this = &PTR_LAB_100b3764;
    this[0x1c] = param_2;
  }
  return this;
}

