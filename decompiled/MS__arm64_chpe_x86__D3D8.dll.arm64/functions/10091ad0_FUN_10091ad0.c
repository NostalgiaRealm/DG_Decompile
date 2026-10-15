/*
 * FUN_10091ad0 at 10091ad0
 * undefined FUN_10091ad0(void)
 * Address ranges: 10091ad0-10091cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10091ad0(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_50 [16];
  
  if ((*(int *)(param_1 + -0x80) != 0) &&
     (iVar5 = FUN_100ff610(param_2,*(int *)(param_1 + -0x80),0x400), iVar5 != 0)) {
    if ((*(int *)(param_1 + -0x6c) == 0) && (*(char *)(param_1 + 0xc9) != '\0')) {
      if ((*(int *)(param_1 + 0x6c) == 0) || (*(int *)(param_1 + 0x8c) == 0)) {
        FUN_1008f4d8(param_1 + -0x88);
      }
      uVar7 = 0;
      if (*(uint *)(param_1 + -100) != 0) {
        do {
          uVar6 = 0;
          if (*(uint *)(param_1 + -0x68) != 0) {
            do {
              uVar4 = uVar6 + *(int *)(param_1 + -0x5c) * uVar7;
              iVar5 = (*(code *)PTR_FUN_10134210)(*(int *)(param_1 + -0x28) + uVar4 * 0x1c + 0xc);
              if (iVar5 == 0) {
                FUN_10090078(param_1 + -0x88,uVar6,uVar7);
                (*(code *)PTR_FUN_10134270)(*(int *)(param_1 + -0x28) + uVar4 * 0x1c + 0xc);
                uVar2 = *(uint *)(param_1 + -0x70) >> (ulonglong)(uVar6 & 0x1f);
                if (uVar2 == 0) {
                  uVar2 = 1;
                }
                uVar3 = *(uint *)(param_1 + -0x74) >> (ulonglong)(uVar6 & 0x1f);
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                (*(code *)PTR_FUN_1013426c)(auStack_50,0,0,uVar3,uVar2);
                FUN_10090d30(param_1 + -0x88,uVar4,auStack_50);
              }
              pbVar1 = (byte *)((uVar4 >> 3 & 3) + param_1 + ((uVar4 >> 5) + 0x39) * 4);
              uVar6 = uVar6 + 1;
              *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
            } while (uVar6 < *(uint *)(param_1 + -0x68));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_1 + -100));
      }
    }
    FUN_1008e9f0(param_1,param_2);
  }
  return;
}

