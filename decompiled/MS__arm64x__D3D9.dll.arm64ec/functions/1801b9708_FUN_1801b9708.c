/*
 * FUN_1801b9708 at 1801b9708
 * undefined FUN_1801b9708(void)
 * Address ranges: 1801b9708-1801b978b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b9708(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  int extraout_w1;
  
  uVar2 = FUN_1801b7f38(param_1,param_2,0,param_3);
  lVar1 = (longlong)extraout_w1 * 0x2c;
  uVar2 = uVar2 & CONCAT31(CONCAT21(CONCAT11((&DAT_180248468)[lVar1],(&DAT_180248469)[lVar1]),
                                    (&DAT_18024846a)[lVar1]),(&DAT_18024846b)[lVar1]);
  if ((&DAT_18022dd78)[extraout_w1] == '\0') {
    uVar2 = uVar2 & 0xff;
  }
  if ((&DAT_18022da48)[extraout_w1] == '\0') {
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

