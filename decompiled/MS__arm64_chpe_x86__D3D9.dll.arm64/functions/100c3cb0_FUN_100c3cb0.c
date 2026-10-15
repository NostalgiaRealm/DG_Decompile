/*
 * FUN_100c3cb0 at 100c3cb0
 * undefined FUN_100c3cb0(void)
 * Address ranges: 100c3cb0-100c3e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c3cb0(undefined4 *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  iVar3 = param_1[1];
  iVar7 = FUN_10132550(uVar2,*(undefined4 *)(iVar3 + 8),0x400);
  if (iVar7 != 0) {
    if ((*(int *)(iVar3 + 0x1c) == 0) && (*(char *)(iVar3 + 0x1bd) != '\0')) {
      if ((*(int *)(iVar3 + 0x148) == 0) || (*(int *)(iVar3 + 0x184) == 0)) {
        FUN_100c10a8(iVar3);
      }
      uVar9 = 0;
      if (*(uint *)(iVar3 + 0x24) != 0) {
        do {
          uVar8 = 0;
          if (*(uint *)(iVar3 + 0x20) != 0) {
            do {
              uVar6 = uVar8 + *(int *)(iVar3 + 0x2c) * uVar9;
              iVar7 = (*(code *)PTR_FUN_1016c210)(*(int *)(iVar3 + 0x5c) + uVar6 * 0x20 + 0x10);
              if (iVar7 == 0) {
                FUN_100c1dd8(iVar3,uVar8,uVar9);
                (*(code *)PTR_FUN_1016c270)(*(int *)(iVar3 + 0x5c) + uVar6 * 0x20 + 0x10);
                uVar4 = *(uint *)(iVar3 + 0x18) >> (ulonglong)(uVar8 & 0x1f);
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                uVar5 = *(uint *)(iVar3 + 0x14) >> (ulonglong)(uVar8 & 0x1f);
                if (uVar5 == 0) {
                  uVar5 = 1;
                }
                (*(code *)PTR_FUN_1016c26c)(auStack_58,0,0,uVar5,uVar4);
                FUN_100c29a0(iVar3,uVar6,auStack_58);
              }
              pbVar1 = (byte *)((uVar6 >> 3 & 3) + iVar3 + ((uVar6 >> 5) + 0x76) * 4);
              uVar8 = uVar8 + 1;
              *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar6 & 7));
            } while (uVar8 < *(uint *)(iVar3 + 0x20));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar3 + 0x24));
      }
    }
    FUN_100beb38(iVar3,uVar2);
  }
  return;
}

