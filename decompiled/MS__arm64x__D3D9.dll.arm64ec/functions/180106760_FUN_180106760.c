/*
 * FUN_180106760 at 180106760
 * undefined FUN_180106760(void)
 * Address ranges: 180106760-18010680f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180106760(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint extraout_w10;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong uVar7;
  undefined8 *extraout_x11;
  undefined8 *extraout_x15;
  
  if (param_2 == 2) {
    puVar6 = (undefined8 *)&DAT_180246270;
    puVar5 = &DAT_1802463c8;
  }
  else {
    puVar5 = &DAT_180246578 + (ulonglong)*(uint *)(param_1 + 0x10) * 0x36;
    puVar6 = &DAT_180246560;
  }
  uVar3 = FUN_180106a90(puVar6,param_3);
  uVar4 = FUN_1801073a0(*puVar5,uVar3);
  uVar7 = extraout_x10;
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_180106a90(param_4);
    uVar4 = FUN_1801073a0(*extraout_x15,uVar3);
    uVar7 = extraout_x10_00;
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_180106a90(param_5);
      cVar2 = FUN_1801073a0(*extraout_x11,uVar3);
      uVar1 = 0;
      if (cVar2 == '\0') {
        uVar1 = extraout_w10;
      }
      uVar7 = (ulonglong)uVar1;
    }
  }
  return uVar7 & 0xffffffff;
}

