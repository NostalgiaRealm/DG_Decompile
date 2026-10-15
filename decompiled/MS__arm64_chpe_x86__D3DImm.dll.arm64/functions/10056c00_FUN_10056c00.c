/*
 * FUN_10056c00 at 10056c00
 * undefined FUN_10056c00(void)
 * Address ranges: 10056c00-10056ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056c00(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_50 [16];
  
  iVar4 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar4 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_50);
  uVar8 = 0x80070057;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 == 0 && (param_6 != 0))))
  {
    FUN_10060d80(param_1);
    uVar8 = 0x88760824;
    if (*(char *)(param_1 + 0x90b) != '\0') {
      if (param_4 != 0) {
        uVar7 = 0;
        do {
          uVar6 = 0;
          fVar10 = *(float *)(param_3 + uVar7 * 4);
          uVar5 = 0;
          pfVar1 = (float *)(param_2 + 8 + uVar7 * 0xc);
          pfVar2 = (float *)(param_2 + 4 + uVar7 * 0xc);
          fVar11 = *(float *)(param_2 + uVar7 * 0xc);
          do {
            fVar9 = *(float *)(param_1 + 0x175c + uVar6 * 0x10) * *pfVar2 +
                    *(float *)(param_1 + 0x1758 + uVar6 * 0x10) * fVar11 +
                    *(float *)(param_1 + (uVar6 + 0x176) * 0x10) * *pfVar1 +
                    *(float *)(param_1 + 0x1764 + uVar6 * 0x10);
            bVar3 = 2;
            if (-(fVar10 * 1.15) <= fVar9) {
              bVar3 = 0;
            }
            bVar3 = fVar9 < fVar10 * 1.15 | bVar3;
            if (bVar3 != 0) {
              uVar5 = *(uint *)(uVar6 * 4 + 0x1009e620) | uVar5;
            }
            if (bVar3 == 3) {
              uVar5 = *(uint *)(uVar6 * 4 + 0x1009e600) | uVar5;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 6);
          uVar6 = 0;
          do {
            if (((uint)(byte)(&DAT_1009e5f8)[uVar6] & *(uint *)(param_1 + 0x4f0)) != 0) {
              iVar4 = param_1 + uVar6 * 0x10;
              fVar9 = *(float *)(param_1 + (uVar6 + 0x23) * 0x10) * fVar11 +
                      *(float *)(iVar4 + 0x234) * *pfVar2 + *(float *)(iVar4 + 0x238) * *pfVar1 +
                      *(float *)(iVar4 + 0x23c);
              bVar3 = 2;
              if (-fVar10 <= fVar9) {
                bVar3 = 0;
              }
              bVar3 = bVar3 | fVar9 < fVar10;
              if (bVar3 != 0) {
                uVar5 = *(uint *)(&DAT_1009e5e0 + uVar6 * 4) | uVar5;
              }
              if (bVar3 == 3) {
                uVar5 = *(uint *)(&DAT_1009e5c0 + uVar6 * 4) | uVar5;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 6);
          iVar4 = uVar7 * 4;
          uVar7 = uVar7 + 1;
          *(uint *)(param_6 + iVar4) = uVar5;
        } while (uVar7 < param_4);
      }
      uVar8 = 0;
    }
  }
  FUN_10096790(auStack_50);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar8;
}

