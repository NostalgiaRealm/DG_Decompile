/*
 * FUN_10053258 at 10053258
 * undefined FUN_10053258(void)
 * Address ranges: 10053258-100532d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10053258(undefined8 param_1,undefined8 param_2,int *param_3,ulonglong param_4,ulonglong param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_w10;
  ulonglong extraout_x10;
  undefined4 *extraout_w11;
  undefined1 auStack_90 [128];
  
  uVar2 = 0x80070057;
  if ((param_3 != (int *)0x0) && (*param_3 == 0x6c)) {
    FUN_1004ca20(param_3,auStack_90);
    FUN_1004eb48(*extraout_w11,extraout_x10 & 0xffffffff,auStack_90,param_4 & 0xffffffff,
                 param_5 & 0xffffffff);
    cVar1 = FUN_1004caa0(auStack_90,param_3);
    uVar2 = 0x80070057;
    if (cVar1 != '\0') {
      uVar2 = extraout_w10;
    }
  }
  return uVar2;
}

