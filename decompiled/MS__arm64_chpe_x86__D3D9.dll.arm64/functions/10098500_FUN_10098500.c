/*
 * FUN_10098500 at 10098500
 * undefined FUN_10098500(void)
 * Address ranges: 10098500-1009858f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10098500(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4,
                      ulonglong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  undefined1 auVar4 [12];
  
  param_5 = param_5 & 0xff;
  auVar4 = FUN_100985b8(param_1,param_3,param_4,param_5);
  iVar3 = auVar4._8_4_;
  uVar2 = auVar4._0_8_;
  if (*(char *)(iVar3 + 0x1b4) == '\0') {
    bVar1 = param_4 == 2;
    if (param_4 == 0x10) {
      param_4 = 1;
    }
    uVar2 = FUN_10094c48(extraout_x13 & 0xffffffff,extraout_x12 & 0xffffffff,iVar3,
                         uVar2 & 0xffffffff,param_5 & 0xffffffff,0,
                         (uint)(*(ulonglong *)(*(int *)(iVar3 + 0x1a0) + 0x48) >>
                               (((ulonglong)param_4 & 0xf) << 2)) & 0xf,bVar1,0);
  }
  return uVar2 & 0xffffffff;
}

