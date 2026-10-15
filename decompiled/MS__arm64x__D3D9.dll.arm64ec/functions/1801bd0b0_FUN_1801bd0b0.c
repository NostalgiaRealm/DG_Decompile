/*
 * FUN_1801bd0b0 at 1801bd0b0
 * undefined FUN_1801bd0b0(void)
 * Address ranges: 1801bd0b0-1801bd18f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801bd0b0(longlong param_1,uint param_2,int param_3,undefined4 param_4,
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
     (uVar4 = FUN_1801072a0(param_1 + -0xa0,param_3), uVar6 = extraout_x10, (uVar4 & 1) != 0)) {
    if (param_3 == 2) {
      puVar5 = (undefined8 *)&DAT_180246270;
    }
    else {
      puVar5 = &DAT_180246560;
    }
    uVar3 = FUN_180106a90(puVar5,param_4);
    uVar4 = FUN_1801073a0(*extraout_x9,uVar3);
    uVar6 = extraout_x10_00;
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_180106a90(param_5);
      uVar4 = FUN_1801073a0(*extraout_x12,uVar3);
      uVar6 = extraout_x10_01;
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_180106a90(param_6);
        cVar2 = FUN_1801073a0(*extraout_x11,uVar3);
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

