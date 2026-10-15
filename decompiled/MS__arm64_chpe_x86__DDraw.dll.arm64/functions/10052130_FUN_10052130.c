/*
 * FUN_10052130 at 10052130
 * undefined FUN_10052130(void)
 * Address ranges: 10052130-1005219f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10052130(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *extraout_w10;
  int extraout_w11;
  undefined4 local_80 [32];
  
  uVar2 = FUN_1004ca20(param_2,local_80);
  if (((uVar2 & 1) == 0) && (extraout_w10 != (undefined4 *)0x0)) {
    local_80[0] = *extraout_w10;
  }
  uVar1 = FUN_1003f268(*(undefined4 *)(extraout_w11 + 4),0,extraout_w11,&DAT_100b1860,local_80);
  return uVar1;
}

