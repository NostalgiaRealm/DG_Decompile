/*
 * FUN_180107b38 at 180107b38
 * undefined FUN_180107b38(void)
 * Address ranges: 180107b38-180107cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180107b38(undefined8 param_1,ulonglong param_2,int param_3,undefined4 param_4,
                       undefined8 param_5,uint param_6,uint param_7)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 *extraout_x9;
  uint uVar6;
  ulonglong uVar7;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  ulonglong extraout_x10_01;
  longlong extraout_x11;
  undefined8 *extraout_x11_00;
  
  param_2 = param_2 & 0xffffffff;
  uVar7 = 0x8876086c;
  if ((param_3 - 1U < 4 && (int)param_6 < 0x11) &&
     (uVar4 = FUN_1801072a0(param_1,param_3), uVar7 = extraout_x10, (uVar4 & 1) != 0)) {
    if (param_3 == 2) {
      pcVar5 = &DAT_1802463d0;
    }
    else {
      pcVar5 = &DAT_180246580 + (ulonglong)*(uint *)(extraout_x11 + 0x10) * 0x1b0;
    }
    uVar3 = FUN_180106a90(param_4);
    uVar4 = FUN_1801073a0(*extraout_x9,uVar3);
    uVar7 = extraout_x10_00;
    if (((uVar4 & 1) != 0) ||
       (uVar4 = FUN_1801073a0(*extraout_x11_00), uVar7 = extraout_x10_01, (uVar4 & 1) != 0)) {
      if ((param_6 != 0) && (param_6 != 1 || param_7 != 0)) {
        if (*(int *)(DAT_18024d928 + 0x86c) != 0) goto LAB_180107cac;
        if (param_6 == 1) {
          puVar1 = &DAT_18024e350;
          if (param_3 != 2) {
            puVar1 = &DAT_18024e340;
          }
          uVar6 = (uint)uVar7;
          if (param_7 < *(uint *)(puVar1 + param_2 * 5)) {
            uVar6 = 0;
          }
          uVar7 = (ulonglong)uVar6;
        }
        if ((int)uVar7 != 0) {
          if (param_7 == 0) {
            uVar4 = 0;
            cVar2 = *pcVar5;
            while (cVar2 != '\0') {
              if ((uint)(byte)pcVar5[uVar4] == (param_6 & 0xff)) {
                if (*(uint *)(&DAT_18024ea90 + (param_2 & 0xffffffff) * 0x4b) != 0) {
                  uVar4 = 0;
                  goto LAB_180107c8c;
                }
                break;
              }
              uVar4 = (ulonglong)((int)uVar4 + 1);
              cVar2 = pcVar5[uVar4];
            }
          }
          goto LAB_180107cac;
        }
      }
LAB_180107ca8:
      uVar7 = 0;
    }
  }
  goto LAB_180107cac;
  while (uVar6 = (int)uVar4 + 1, uVar4 = (ulonglong)uVar6,
        uVar6 < *(uint *)(&DAT_18024ea90 + (param_2 & 0xffffffff) * 0x4b)) {
LAB_180107c8c:
    if (*(uint *)((&DAT_18024ea88)[(param_2 & 0xffffffff) * 0x4b] + uVar4 * 4) == (param_6 & 0xff))
    goto LAB_180107ca8;
  }
LAB_180107cac:
  return uVar7 & 0xffffffff;
}

