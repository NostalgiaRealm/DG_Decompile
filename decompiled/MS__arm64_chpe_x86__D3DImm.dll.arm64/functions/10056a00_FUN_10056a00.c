/*
 * FUN_10056a00 at 10056a00
 * undefined FUN_10056a00(void)
 * Address ranges: 10056a00-10056be3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10056a00(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_50 [16];
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_50);
  uVar6 = 0x80070057;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 == 0 && (param_6 != 0))))
  {
    FUN_100514e0(param_1);
    FUN_10060d80(param_1);
    uVar6 = 0x88760824;
    if (*(char *)(param_1 + 0x90b) != '\0') {
      uVar5 = 0;
      if (param_4 != 0) {
        do {
          uVar3 = 0;
          uVar4 = 0;
          fVar8 = *(float *)(param_3 + uVar5 * 4) * 1.15;
          do {
            fVar7 = *(float *)(param_1 + 0x175c + uVar4 * 0x10) *
                    *(float *)(param_2 + 4 + uVar5 * 0xc) +
                    *(float *)(param_1 + 0x1758 + uVar4 * 0x10) * *(float *)(param_2 + uVar5 * 0xc)
                    + *(float *)(param_1 + (uVar4 + 0x176) * 0x10) *
                      *(float *)(param_2 + 8 + uVar5 * 0xc) +
                    *(float *)(param_1 + 0x1764 + uVar4 * 0x10);
            bVar2 = 2;
            if (-fVar8 <= fVar7) {
              bVar2 = 0;
            }
            bVar2 = bVar2 | fVar7 < fVar8;
            if (bVar2 == 3) {
              uVar3 = (&DAT_1009e660)[uVar4] | uVar3 | 2;
            }
            else if (bVar2 != 0) {
              uVar3 = (&DAT_1009e640)[uVar4] | uVar3 | 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 6);
          iVar1 = uVar5 * 4;
          uVar5 = uVar5 + 1;
          *(uint *)(param_6 + iVar1) = uVar3;
        } while (uVar5 < param_4);
      }
      uVar6 = 0;
    }
  }
  FUN_10096790(auStack_50);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar6;
}

