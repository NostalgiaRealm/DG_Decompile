/*
 * FUN_1800850c0 at 1800850c0
 * undefined __fastcall FUN_1800850c0(undefined8 param_1, longlong param_2, uint param_3, undefined1 param_4, uint * param_5)
 * Address ranges: 1800850c0-180085133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800850c0(undefined8 param_1,longlong param_2,uint param_3,undefined1 param_4,uint *param_5
                  )

{
  undefined1 uVar1;
  
  if (((param_3 & 0x3f00) == 0x300) && (*(int *)(param_2 + 0x230) != 0)) {
    *param_5 = param_3 | 0x40000000;
    *(undefined1 *)(param_5 + 1) = param_4;
    param_5[4] = 0xffffffff;
    param_5[7] = 0xffffffff;
    param_5[6] = 0xffffffff;
    param_5[5] = 0xffffffff;
    uVar1 = *(undefined1 *)(param_2 + 0x234);
    param_5[8] = *(uint *)(param_2 + 0x230) | 0x10000000;
    *(undefined1 *)(param_5 + 9) = uVar1;
    return;
  }
  *param_5 = param_3;
  *(undefined1 *)(param_5 + 1) = param_4;
  param_5[4] = 0xffffffff;
  param_5[7] = 0xffffffff;
  param_5[6] = 0xffffffff;
  param_5[5] = 0xffffffff;
  return;
}

