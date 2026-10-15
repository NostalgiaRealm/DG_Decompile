/*
 * FUN_18019ed88 at 18019ed88
 * undefined FUN_18019ed88(void)
 * Address ranges: 18019ed88-18019f0ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019ed88(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_50 [16];
  
  if ((*(longlong *)(param_1 + -0xd0) != 0) &&
     (iVar3 = FUN_180222c00(param_2,*(longlong *)(param_1 + -0xd0),0x400), iVar3 != 0)) {
    if ((*(int *)(param_1 + -0xb4) == 0) && (*(char *)(param_1 + 0x169) != '\0')) {
      if ((*(longlong *)(param_1 + 0xb8) == 0) || (*(longlong *)(param_1 + 0xf8) == 0)) {
        FUN_18019c270(param_1 + -0xe0);
      }
      if (*(int *)(param_1 + -0xac) != 0) {
        uVar8 = 0;
        do {
          uVar10 = 0;
          if (*(int *)(param_1 + -0xb0) != 0) {
            do {
              uVar2 = uVar10 + *(int *)(param_1 + -0xa4) * uVar8;
              uVar9 = (ulonglong)uVar2;
              iVar3 = thunk_FUN_180223d24(*(longlong *)(param_1 + -0x50) + uVar9 * 0x28 + 0x18);
              if (iVar3 == 0) {
                uVar12 = (ulonglong)(uVar10 + *(int *)(param_1 + -0xa4) * uVar8);
                if (*(int *)(param_1 + -0xb4) == 0) {
                  FUN_180197918(*(undefined8 *)(param_1 + 0x30),2,*(undefined8 *)(param_1 + -0xd0));
                }
                uVar1 = *(uint *)(param_1 + -0xb4);
                uVar11 = 0x16;
                if (uVar1 != 0) {
                  if (*(char *)(param_1 + 0x168) == '\0') {
                    uVar11 = *(uint *)(&DAT_18022da80 + (ulonglong)uVar1 * 4);
                  }
                  else {
                    uVar11 = 6;
                  }
                  uVar11 = uVar11 & 0xf |
                           (*(uint *)(&DAT_18022dca0 + (ulonglong)uVar1 * 4) & 7 | 0xf8000020) << 4;
                }
                lVar4 = *(longlong *)(param_1 + 0x60);
                if (lVar4 == 0) {
                  lVar4 = FUN_18019c518(param_1 + -0xe0,0);
                }
                fVar13 = (float)(uint)(1 << (ulonglong)(uVar10 & 0x1f));
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
                FUN_180197cd8(0,0,(float)*(uint *)(param_1 + -0xbc) / fVar13,
                              (float)*(uint *)(param_1 + -0xb8) / fVar13,0,0,
                              (float)*(uint *)(param_1 + 0x90) / fVar13,
                              (float)*(uint *)(param_1 + 0x94) / fVar13,
                              *(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + -0xb4),
                              *(undefined4 *)(param_1 + -0xb4),uVar10,uVar8,uVar10,uVar8,
                              *(undefined8 *)(param_1 + 0xb8),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + uVar12 * 0x28),uVar7,
                              lVar5,lVar4,0,0,0,0,uVar11,1);
                thunk_FUN_180223bf8(*(longlong *)(param_1 + -0x50) + uVar9 * 0x28 + 0x18);
                uVar11 = *(uint *)(param_1 + -0xb8) >> (ulonglong)(uVar10 & 0x1f);
                uVar1 = *(uint *)(param_1 + -0xbc) >> (ulonglong)(uVar10 & 0x1f);
                if (uVar11 == 0) {
                  uVar11 = 1;
                }
                if (uVar1 == 0) {
                  uVar1 = 1;
                }
                thunk_FUN_180223c20(auStack_50,0,0,uVar1,uVar11);
                lVar4 = *(longlong *)(param_1 + 0xd0) + uVar9 * 0x28;
                thunk_FUN_180223c70(lVar4 + 0x18,lVar4 + 0x18,auStack_50);
                lVar4 = *(longlong *)(param_1 + 0x110) + uVar9 * 0x28;
                thunk_FUN_180223c70(lVar4 + 0x18,lVar4 + 0x18,auStack_50);
                uVar12 = (ulonglong)(uVar2 >> 6);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                lVar4 = param_1 + 0x170 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                lVar4 = param_1 + 0x1a0 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
                lVar4 = param_1 + 0x180 + uVar12 * 8;
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
                uVar6 = (ulonglong)(uVar2 >> 3) & 7;
                *(undefined1 *)(param_1 + 0x8b) = 0;
                lVar4 = param_1 + 0x78 + uVar12 * 8;
                *(byte *)(lVar4 + uVar6) =
                     *(byte *)(lVar4 + uVar6) & ((byte)(1 << (uVar9 & 7)) ^ 0xff);
              }
              else {
                uVar12 = (ulonglong)(uVar2 >> 6);
              }
              lVar4 = param_1 + (uVar12 + 0x32) * 8;
              uVar12 = (ulonglong)(uVar2 >> 3) & 7;
              uVar10 = uVar10 + 1;
              *(byte *)(lVar4 + uVar12) = *(byte *)(lVar4 + uVar12) | (byte)(1 << (uVar9 & 7));
            } while (uVar10 < *(uint *)(param_1 + -0xb0));
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + -0xac));
      }
    }
    FUN_18019bb78(param_1,param_2);
  }
  return;
}

