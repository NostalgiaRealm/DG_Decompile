/*
 * FUN_1800a1540 at 1800a1540
 * undefined FUN_1800a1540(void)
 * Address ranges: 1800a1540-1800a15bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a1540(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  int extraout_w1;
  
  uVar2 = FUN_1800a0038(param_1,param_2,0,param_3);
  lVar1 = (longlong)extraout_w1 * 0x2c;
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_18024a978)[lVar1],(&DAT_18024a979)[lVar1]),
                                    (&DAT_18024a97a)[lVar1]),(&DAT_18024a97b)[lVar1]);
  if ((&DAT_180231858)[extraout_w1] == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  if ((&DAT_180231518)[extraout_w1] == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

