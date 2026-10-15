/*
 * FUN_180001e98 at 180001e98
 * undefined FUN_180001e98(void)
 * Address ranges: 180001e98-180001f43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180001e98(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint extraout_w10;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong uVar6;
  undefined8 *extraout_x11;
  undefined8 *extraout_x13;
  undefined8 *extraout_x14;
  
  if (param_2 == 2) {
    puVar5 = (undefined8 *)&DAT_180248b80;
  }
  else {
    puVar5 = &DAT_180248e70;
  }
  uVar3 = func_0x000180106a90(puVar5,param_3);
  uVar4 = func_0x0001801073a0(*extraout_x14,uVar3);
  uVar6 = extraout_x10;
  if ((uVar4 & 1) != 0) {
    uVar3 = func_0x000180106a90(param_4);
    uVar4 = func_0x0001801073a0(*extraout_x13,uVar3);
    uVar6 = extraout_x10_00;
    if ((uVar4 & 1) != 0) {
      uVar3 = func_0x000180106a90(param_5);
      cVar2 = func_0x0001801073a0(*extraout_x11,uVar3);
      uVar1 = 0;
      if (cVar2 == '\0') {
        uVar1 = extraout_w10;
      }
      uVar6 = (ulonglong)uVar1;
    }
  }
  return uVar6 & 0xffffffff;
}

