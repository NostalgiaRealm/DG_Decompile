/*
 * FUN_180085fe8 at 180085fe8
 * undefined FUN_180085fe8(void)
 * Address ranges: 180085fe8-18008628b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180085fe8(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar9 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          uVar1 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar9 & 0x1f);
          if (uVar1 == 0) {
            uVar1 = 1;
          }
          uVar2 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar9 & 0x1f);
          if (uVar2 == 0) {
            uVar2 = 1;
          }
          uVar3 = uVar9 + *(int *)(param_1 + 0x3c) * uVar11;
          uVar10 = (ulonglong)uVar3;
          if (*(int *)(param_1 + 0x44) - 3U < 3) {
            if (*(longlong *)(param_1 + 0x198) != 0) {
              lVar6 = *(longlong *)(param_3 + 0x20);
              if (lVar6 == 0) {
                lVar6 = *(longlong *)(param_3 + 0x18);
              }
              lVar7 = *(longlong *)(param_2 + 0x20);
              if (lVar7 == 0) {
                lVar7 = *(longlong *)(param_2 + 0x18);
              }
              FUN_1800825d8(*(float *)(param_1 + 0x240) * 0.0,*(float *)(param_1 + 0x244) * 0.0,
                            *(float *)(param_1 + 0x240) * (float)(int)uVar1,
                            *(float *)(param_1 + 0x244) * (float)(int)uVar2,0,0,
                            *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                            *(undefined4 *)(param_1 + 0x2c),uVar9,uVar11,uVar9,uVar11,0,0,0,lVar7,
                            *(undefined8 *)(param_2 + 0x28),0,lVar6,
                            *(undefined8 *)(*(longlong *)(param_3 + 0x30) + uVar10 * 0x28 + 8),0,0xf
                            ,1);
            }
          }
          else {
            if (*(int *)(param_1 + 0x2c) == 0) {
              FUN_180082250(*(undefined8 *)(param_1 + 0x110),1,*(undefined8 *)(param_1 + 0x10));
            }
            uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
            if (*(char *)(param_1 + 0x248) == '\0') {
              uVar5 = *(uint *)(&DAT_180231770 + uVar4 * 4);
            }
            else {
              uVar5 = 1;
            }
            lVar6 = *(longlong *)(param_2 + 0x20);
            if (lVar6 == 0) {
              lVar6 = *(longlong *)(param_2 + 0x18);
            }
            FUN_1800825d8(*(float *)(param_1 + 0x240) * 0.0,*(float *)(param_1 + 0x244) * 0.0,
                          *(float *)(param_1 + 0x240) * (float)(int)uVar1,
                          *(float *)(param_1 + 0x244) * (float)(int)uVar2,0,0,
                          *(undefined8 *)(param_1 + 0x110),uVar4,uVar4,uVar9,uVar11,uVar9,uVar11,
                          *(undefined8 *)(param_3 + 0x18),
                          *(undefined8 *)(*(longlong *)(param_3 + 0x30) + uVar10 * 0x28),0,lVar6,
                          *(undefined8 *)(param_2 + 0x28),0,0,0,0,
                          *(uint *)(&DAT_180231550 + uVar4 * 4) & 0xf |
                          (uVar5 & 7 | 0xf8000000) << 4,1);
          }
          uVar4 = (ulonglong)(uVar3 >> 6);
          lVar6 = param_1 + (uVar4 + 0x4a) * 8;
          uVar8 = (ulonglong)(uVar3 >> 3) & 7;
          uVar9 = uVar9 + 1;
          *(byte *)(lVar6 + uVar8) = *(byte *)(lVar6 + uVar8) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
          lVar6 = param_1 + (uVar4 + 0x50) * 8;
          uVar8 = (ulonglong)(uVar3 >> 3) & 7;
          *(byte *)(lVar6 + uVar8) = *(byte *)(lVar6 + uVar8) & ((byte)(1 << (uVar10 & 7)) ^ 0xff);
          lVar6 = param_1 + (uVar4 + 0x1e) * 8;
          uVar4 = (ulonglong)(uVar3 >> 3) & 7;
          *(byte *)(lVar6 + uVar4) = *(byte *)(lVar6 + uVar4) | (byte)(1 << (uVar10 & 7));
        } while (uVar9 < *(uint *)(param_1 + 0x30));
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(uint *)(param_1 + 0x34));
  }
  return;
}

