/*
 * FUN_180118c00 at 180118c00
 * undefined FUN_180118c00(void)
 * Address ranges: 180118c00-180118cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180118c00(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18012c408(*(undefined4 *)(param_1 + 0xa0),param_2,param_1 + -0x48);
  *param_4 = 0;
  if (lVar1 != 0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[8] = 0;
    *param_3 = lVar1;
    thunk_FUN_180223dc4(param_2,(longlong)param_3 + 0xc,0);
    uVar2 = thunk_FUN_1802242b0(0,0,0,0);
    thunk_FUN_180223e14(param_2,uVar2,0);
    thunk_FUN_18022429c(lVar1,uVar2);
    thunk_FUN_180224288(uVar2);
    thunk_FUN_180223dd8(param_2,0);
    *param_4 = 1;
  }
  return lVar1;
}

