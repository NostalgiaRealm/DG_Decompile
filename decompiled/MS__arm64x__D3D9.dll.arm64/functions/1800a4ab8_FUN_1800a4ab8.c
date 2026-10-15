/*
 * FUN_1800a4ab8 at 1800a4ab8
 * undefined FUN_1800a4ab8(void)
 * Address ranges: 1800a4ab8-1800a4b93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4ab8(longlong param_1,uint param_2,int param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x9;
  uint extraout_w10;
  ulonglong uVar6;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  undefined8 *extraout_x11;
  undefined8 *extraout_x12;
  
  uVar6 = 0x8876086c;
  if (((param_2 < *(uint *)(param_1 + -0x30)) && (param_3 - 1U < 4)) &&
     (uVar4 = FUN_180002178(param_1 + -0xa0,param_3), uVar6 = extraout_x10, (uVar4 & 1) != 0)) {
    if (param_3 == 2) {
      puVar5 = (undefined8 *)&DAT_180248b80;
    }
    else {
      puVar5 = &DAT_180248e70;
    }
    uVar3 = func_0x000180106a90(puVar5,param_4);
    uVar4 = func_0x0001801073a0(*extraout_x9,uVar3);
    uVar6 = extraout_x10_00;
    if ((uVar4 & 1) != 0) {
      uVar3 = func_0x000180106a90(param_5);
      uVar4 = func_0x0001801073a0(*extraout_x12,uVar3);
      uVar6 = extraout_x10_01;
      if ((uVar4 & 1) != 0) {
        uVar3 = func_0x000180106a90(param_6);
        cVar2 = func_0x0001801073a0(*extraout_x11,uVar3);
        uVar1 = 0;
        if (cVar2 == '\0') {
          uVar1 = extraout_w10;
        }
        uVar6 = (ulonglong)uVar1;
      }
    }
  }
  return uVar6 & 0xffffffff;
}

