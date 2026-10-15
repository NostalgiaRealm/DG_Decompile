/*
 * FUN_10001692 at 10001692
 * undefined4 * __thiscall FUN_10001692(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined2 param_6, int param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)
 * Address ranges: 10001692-1000170f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10001692(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,int param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 uVar1;
  undefined4 *extraout_ECX;
  
  FUN_10013bb7(this,param_3,param_7,param_6);
  extraout_ECX[0xe] = param_1;
  extraout_ECX[0xf] = param_2;
  extraout_ECX[0x10] = param_12;
  extraout_ECX[0x13] = param_4;
  extraout_ECX[0x14] = param_5;
  extraout_ECX[0x15] = param_8;
  extraout_ECX[0x16] = param_9;
  extraout_ECX[0x17] = param_11;
  extraout_ECX[0x18] = param_10;
  extraout_ECX[0x11] = 0;
  uVar1 = 1;
  if (param_7 == 5) {
    uVar1 = 6;
  }
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x19] = uVar1;
  extraout_ECX[0x1a] = param_13;
  *(undefined2 *)(extraout_ECX + 0x1b) = 0;
  *extraout_ECX = &PTR_FUN_100d1578;
  extraout_ECX[0x1c] = &PTR_LAB_100d1570;
  return extraout_ECX;
}

