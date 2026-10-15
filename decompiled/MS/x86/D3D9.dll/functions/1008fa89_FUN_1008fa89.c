/*
 * FUN_1008fa89 at 1008fa89
 * undefined4 * __fastcall FUN_1008fa89(int param_1, undefined4 param_2, undefined4 param_3, int param_4, undefined4 * param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, byte param_9, byte param_10, undefined1 param_11, undefined4 param_12, undefined4 param_13, byte param_14)
 * Address ranges: 1008fa89-1008fb52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1008fa89(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,byte param_9,byte param_10,
            undefined1 param_11,undefined4 param_12,undefined4 param_13,byte param_14)

{
  undefined4 *this;
  
  this = (undefined4 *)FUN_100cfd55(0x90);
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_10011edd(this,param_1,param_3,-(uint)(param_4 != 0) & param_4 + 8U,param_5,param_6,param_7,
                 param_8,param_9,param_10,param_11,param_12,param_13,param_14);
    this[0x18] = 0;
    this[0x19] = 0;
    this[0x1a] = 0;
    this[0x1c] = 1;
    this[0x1b] = -(uint)(param_1 != 0) & param_1 + 0x66b4U;
    this[0x23] = param_4;
    this[0x1f] = this + 0x17;
    this[0x17] = &PTR_FUN_100d7090;
    this[0x22] = param_3;
    this[0x1d] = 0;
    this[0x1e] = 0;
    *this = &PTR_LAB_100d70d4;
    this[0x20] = param_1;
    this[0x21] = param_2;
  }
  return this;
}

