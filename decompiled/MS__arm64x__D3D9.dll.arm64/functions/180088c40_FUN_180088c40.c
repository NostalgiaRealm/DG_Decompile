/*
 * FUN_180088c40 at 180088c40
 * undefined FUN_180088c40(void)
 * Address ranges: 180088c40-180088fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180088c40(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_60 [16];
  
  if ((*(longlong *)(param_1 + -0xd0) != 0) &&
     (iVar3 = func_0x000180222c00(param_2,*(longlong *)(param_1 + -0xd0),0x400), iVar3 != 0)) {
    if ((*(int *)(param_1 + -0xb4) == 0) && (*(char *)(param_1 + 0x169) != '\0')) {
      if ((*(longlong *)(param_1 + 0xb8) == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) {
        FUN_180086290(param_1 + -0xe0);
      }
      if (*(int *)(param_1 + -0xac) != 0) {
        uVar11 = 0;
        do {
          uVar9 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              uVar2 = uVar9 + *(int *)(param_1 + -0xa4) * uVar11;
              uVar8 = (ulonglong)uVar2;
              iVar3 = (*__imp_USER32_dll_IsRectEmpty)
                                (*(longlong *)(param_1 + -0x50) + uVar8 * 0x28 + 0x18);
              if (iVar3 == 0) {
                uVar12 = (ulonglong)(uVar9 + *(int *)(param_1 + -0xa4) * uVar11);
                if (*(int *)(param_1 + -0xb4) == 0) {
                  FUN_180082250(*(undefined8 *)(param_1 + 0x30),2,*(undefined8 *)(param_1 + -0xd0));
                }
                uVar1 = *(uint *)(param_1 + -0xb4);
                uVar10 = 0x16;
                if (uVar1 != 0) {
                  if (*(char *)(param_1 + 0x168) == '\0') {
                    uVar10 = *(uint *)(&DAT_180231550 + (ulonglong)uVar1 * 4);
                  }
                  else {
                    uVar10 = 6;
                  }
                  uVar10 = uVar10 & 0xf |
                           (*(uint *)(&DAT_180231770 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4;
                }
                lVar4 = *(longlong *)(param_1 + 0x60);
                if (lVar4 == 0) {
                  lVar4 = FUN_180086520(param_1 + -0xe0,0);
                }
                fVar13 = (float)(uint)(1 << (ulonglong)(uVar9 & 0x1f));
                if (*(longlong *)(param_1 + 0xf8) == 0) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x110) + uVar12 * 0x28);
                }
                lVar5 = *(longlong *)(param_1 + -0x60);
                if (lVar5 == 0) {
                  lVar5 = *(longlong *)(param_1 + -0x68);
                }
                FUN_1800825d8(0,0,(float)*(uint *)(param_1 + -0xbc) / fVar13,
                              (float)*(uint *)(param_1 + -0xb8) / fVar13,0,0,
                              (float)*(uint *)(param_1 + 0x90) / fVar13,
                              (float)*(uint *)(param_1 + 0x94) / fVar13,
                              *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + -0xb4),
                              *(undefined4 *)(param_1 + -0xb4),uVar9,uVar11,uVar9,uVar11,
                              *(undefined8 *)(param_1 + 0xb8),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + uVar12 * 0x28),uVar7,
                              lVar5,lVar4,0,0,0,0,uVar10,1);
                (*__imp_USER32_dll_SetRectEmpty)
                          (*(longlong *)(param_1 + -0x50) + uVar8 * 0x28 + 0x18);
                uVar10 = *(uint *)(param_1 + -0xb8) >> (ulonglong)(uVar9 & 0x1f);
                uVar1 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar9 & 0x1f);
                if (uVar10 == 0) {
                  uVar10 = 1;
                }
                if (uVar1 == 0) {
                  uVar1 = 1;
                }
                (*__imp_USER32_dll_SetRect)(auStack_60,0,0,uVar1,uVar10);
                lVar4 = *(longlong *)(param_1 + 0xd0) + uVar8 * 0x28;
                (*__imp_USER32_dll_UnionRect)(lVar4 + 0x18,lVar4 + 0x18,auStack_60);
                lVar4 = *(longlong *)(param_1 + 0x110) + uVar8 * 0x28;
                (*__imp_USER32_dll_UnionRect)(lVar4 + 0x18,lVar4 + 0x18,auStack_60);
                uVar12 = (ulonglong)(uVar2 >> 6);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                lVar4 = param_1 + 0x170 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                lVar4 = param_1 + 0x1a0 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                lVar4 = param_1 + 0x180 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
                lVar4 = param_1 + 0x78 + uVar12 * 8;
                *(undefined1 *)(param_1 + 0x8b) = 0;
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar8 & 7)) ^ 0xff);
              }
              else {
                uVar12 = (ulonglong)(uVar2 >> 6);
              }
              lVar4 = param_1 + (uVar12 + 0x32) * 8;
              uVar12 = (ulonglong)(uVar2 >> 3) & 7;
              uVar9 = uVar9 + 1;
              *(byte *)(lVar4 + uVar12) = *(byte *)(lVar4 + uVar12) | (byte)(1 << (uVar8 & 7));
            } while (uVar9 < *(uint *)(param_1 + -0xb0));
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(param_1 + -0xac));
      }
    }
    FUN_180085cf8(param_1,param_2);
  }
  return;
}

