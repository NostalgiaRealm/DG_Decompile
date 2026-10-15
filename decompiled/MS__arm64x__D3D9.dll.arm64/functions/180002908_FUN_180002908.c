/*
 * FUN_180002908 at 180002908
 * undefined FUN_180002908(void)
 * Address ranges: 180002908-180002a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180002908(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                       undefined8 param_5,uint param_6,uint param_7,uint param_8)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 *extraout_x9;
  ulonglong extraout_x10;
  ulonglong extraout_x10_00;
  longlong extraout_x11;
  undefined8 *extraout_x11_00;
  
  uVar7 = 0x8876086c;
  if (param_3 - 1U < 4 && (int)param_6 < 0x11) {
    uVar7 = 0x8876086b;
    uVar4 = FUN_180002178(param_1,param_3,param_3,param_4,0x8876086b);
    if ((uVar4 & 1) != 0) {
      uVar7 = (ulonglong)((param_8 ^ 1) & 0xff | 0x8876086a);
      if (param_3 == 2) {
        pcVar8 = &DAT_180248ce0;
      }
      else {
        pcVar8 = &DAT_180248e90 + (ulonglong)*(uint *)(extraout_x11 + 0x10) * 0x1b0;
      }
      uVar3 = func_0x000180106a90(param_4);
      uVar5 = func_0x0001801073a0(*extraout_x9,uVar3);
      uVar4 = extraout_x10;
      if (((uVar5 & 1) != 0) ||
         (uVar5 = func_0x0001801073a0(*extraout_x11_00), uVar4 = extraout_x10_00, (uVar5 & 1) != 0))
      {
        if ((param_6 != 0) && (param_6 != 1 || param_7 != 0)) {
          if (*(int *)(DAT_18024de60 + 0x86c) != 0) goto LAB_180002a78;
          if (param_6 == 1) {
            puVar1 = &DAT_180253360;
            if (param_3 != 2) {
              puVar1 = &DAT_180253350;
            }
            uVar6 = (uint)uVar7;
            if (param_7 < *(uint *)(puVar1 + uVar4 * 5)) {
              uVar6 = 0;
            }
            uVar7 = (ulonglong)uVar6;
          }
          if ((int)uVar7 != 0) {
            if (param_7 == 0) {
              uVar5 = 0;
              cVar2 = *pcVar8;
              while (cVar2 != '\0') {
                if ((uint)(byte)pcVar8[uVar5] == (param_6 & 0xff)) {
                  if (*(uint *)(&DAT_180253aa0 + (uVar4 & 0xffffffff) * 0x4b) != 0) {
                    uVar5 = 0;
                    goto LAB_180002a58;
                  }
                  break;
                }
                uVar5 = (ulonglong)((int)uVar5 + 1);
                cVar2 = pcVar8[uVar5];
              }
            }
            goto LAB_180002a78;
          }
        }
LAB_180002a74:
        uVar7 = 0;
      }
    }
  }
  goto LAB_180002a78;
  while (uVar6 = (int)uVar5 + 1, uVar5 = (ulonglong)uVar6,
        uVar6 < *(uint *)(&DAT_180253aa0 + (uVar4 & 0xffffffff) * 0x4b)) {
LAB_180002a58:
    if (*(uint *)((&DAT_180253a98)[(uVar4 & 0xffffffff) * 0x4b] + uVar5 * 4) == (param_6 & 0xff))
    goto LAB_180002a74;
  }
LAB_180002a78:
  return uVar7 & 0xffffffff;
}

