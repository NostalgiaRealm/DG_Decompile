/*
 * FUN_10003b00 at 10003b00
 * undefined FUN_10003b00(void)
 * Address ranges: 10003b00-10003b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10003b00(undefined8 param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  
  if ((((*param_3 != *(int *)(&DAT_100be2cc + param_2 * 0x45)) ||
       (param_3[1] != *(int *)((int)&DAT_100be2cc + param_2 * 0x228 + 4))) ||
      (*(int *)((int)&DAT_100be2dc + param_2 * 0x228 + 4) != param_3[5])) ||
     (uVar1 = 1,
     param_3[6] != (&DAT_100be2e4)[param_2 * 0x8a] && (&DAT_100be2e4)[param_2 * 0x8a] != 0x1c)) {
    uVar1 = 0;
  }
  return uVar1;
}

