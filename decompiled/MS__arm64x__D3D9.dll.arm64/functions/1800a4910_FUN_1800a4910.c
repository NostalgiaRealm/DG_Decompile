/*
 * FUN_1800a4910 at 1800a4910
 * undefined FUN_1800a4910(void)
 * Address ranges: 1800a4910-1800a4aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4910(longlong param_1,uint param_2,int param_3,undefined4 param_4,
                       undefined8 param_5,uint param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 *extraout_x9;
  ulonglong uVar8;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  longlong extraout_x12;
  longlong extraout_x12_00;
  undefined8 *extraout_x12_01;
  
  uVar8 = 0x8876086c;
  if (((((*(uint *)(param_1 + -0x30) <= param_2) || (3 < param_3 - 1U)) ||
       (uVar5 = FUN_180002178(param_1 + -0xa0,param_3), uVar8 = extraout_x10, (uVar5 & 1) == 0)) ||
      ((3 < param_3 - 1U || (0x10 < (int)param_6)))) ||
     (uVar5 = FUN_180002178(extraout_x12 + -0xa0), uVar8 = extraout_x10_00, (uVar5 & 1) == 0))
  goto LAB_1800a4a9c;
  if (param_3 == 2) {
    pcVar7 = &DAT_180248ce0;
  }
  else {
    pcVar7 = &DAT_180248e90 + (ulonglong)*(uint *)(extraout_x12_00 + -0x90) * 0x1b0;
  }
  uVar4 = func_0x000180106a90(param_4);
  uVar8 = func_0x0001801073a0(*extraout_x9,uVar4);
  uVar5 = extraout_x11;
  if (((uVar8 & 1) == 0) &&
     (uVar6 = func_0x0001801073a0(*extraout_x12_01), uVar8 = extraout_x10_01,
     uVar5 = extraout_x11_00, (uVar6 & 1) == 0)) goto LAB_1800a4a9c;
  if (param_6 < 2) {
LAB_1800a4a5c:
    uVar8 = 0;
    if (param_7 != (undefined4 *)0x0) {
      if (param_6 == 1) {
        puVar2 = &DAT_180253350;
        if (param_3 == 2) {
          puVar2 = &DAT_180253360;
        }
        uVar4 = *(undefined4 *)(puVar2 + uVar5 * 5);
      }
      else {
        uVar4 = 1;
      }
      *param_7 = uVar4;
    }
    goto LAB_1800a4a9c;
  }
  uVar8 = 0x8876086a;
  if (*(int *)(DAT_18024de60 + 0x86c) != 0) goto LAB_1800a4a9c;
  uVar1 = 0;
  cVar3 = *pcVar7;
  while (cVar3 != '\0') {
    if ((uint)(byte)pcVar7[uVar1] == (param_6 & 0xff)) {
      if (*(uint *)(&DAT_180253aa0 + (uVar5 & 0xffffffff) * 0x4b) != 0) {
        uVar8 = 0;
        goto LAB_1800a4a3c;
      }
      break;
    }
    uVar1 = uVar1 + 1;
    cVar3 = pcVar7[uVar1];
  }
  goto LAB_1800a4a54;
  while (uVar1 = (int)uVar8 + 1, uVar8 = (ulonglong)uVar1,
        uVar1 < *(uint *)(&DAT_180253aa0 + (uVar5 & 0xffffffff) * 0x4b)) {
LAB_1800a4a3c:
    if (*(uint *)((&DAT_180253a98)[(uVar5 & 0xffffffff) * 0x4b] + uVar8 * 4) == (param_6 & 0xff))
    goto LAB_1800a4a5c;
  }
LAB_1800a4a54:
  uVar8 = 0x8876086a;
LAB_1800a4a9c:
  return uVar8 & 0xffffffff;
}

