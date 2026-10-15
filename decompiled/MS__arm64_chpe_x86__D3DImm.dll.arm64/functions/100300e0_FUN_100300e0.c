/*
 * FUN_100300e0 at 100300e0
 * undefined FUN_100300e0(void)
 * Address ranges: 100300e0-10030407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100300e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  iVar4 = *param_1;
  iVar13 = param_1[1];
  iVar5 = param_1[2];
  iVar6 = param_1[3];
  iVar7 = param_1[4];
  uVar12 = param_1[5];
  FUN_10024940(iVar4);
  uVar8 = *(undefined4 *)(iVar5 + 0xc);
  if (iVar13 == 6) {
    if (2 < uVar12) {
      uVar12 = uVar12 - 2;
      iVar13 = 0;
      if (uVar12 != 0) {
        piVar1 = (int *)(iVar4 + 0x6c);
        while( true ) {
          iVar10 = *piVar1 + *(int *)(iVar4 + 0x68);
          if (0x1000U - iVar10 < 0x10) {
            FUN_10026090(iVar4,0,1,0);
            iVar10 = 0;
          }
          uVar3 = (0x1000U - iVar10) / 3;
          if (uVar12 < (0x1000U - iVar10) / 3) {
            uVar3 = uVar12;
          }
          FUN_10024a08(iVar4,4,iVar5,iVar6,*(undefined4 *)(iVar4 + 0x1d6c),0,uVar8,0,uVar3 * 3);
          *(byte *)(iVar4 + 0x1d3f) =
               (*(uint *)(iVar5 + 0x10) & (*(uint *)(iVar4 + 0x21c8) ^ 0xffffffff)) != 0 |
               *(byte *)(iVar4 + 0x1d3f);
          *(uint *)(iVar4 + 0x21c8) = *(uint *)(iVar5 + 0x10);
          *(undefined1 *)(iVar4 + 0x21cc) = 1;
          uVar11 = 0;
          if (uVar3 != 0) {
            piVar2 = (int *)(iVar4 + 100);
            do {
              *(uint *)*piVar2 = iVar13 + iVar7 + 1 + uVar11;
              iVar10 = iVar13 + iVar7 + 2 + uVar11;
              uVar11 = uVar11 + 1;
              *(int *)(*piVar2 + 4) = iVar10;
              *(int *)(*piVar2 + 8) = iVar7;
              *piVar2 = *piVar2 + 0xc;
            } while (uVar11 < uVar3);
          }
          uVar12 = uVar12 - uVar3;
          *piVar1 = *piVar1 + uVar3 * 3;
          if (uVar12 == 0) break;
          iVar13 = uVar3 + iVar13;
          FUN_10026600(iVar4,iVar5);
        }
      }
      FUN_10026090(iVar4,0,0,0);
    }
  }
  else {
    FUN_10024a08(iVar4,iVar13,iVar5,iVar6,*(undefined4 *)(iVar4 + 0x2020),0,uVar8,0,0);
    *(byte *)(iVar4 + 0x1d3f) =
         (*(uint *)(iVar5 + 0x10) & (*(uint *)(iVar4 + 0x21c8) ^ 0xffffffff)) != 0 |
         *(byte *)(iVar4 + 0x1d3f);
    *(uint *)(iVar4 + 0x21c8) = *(uint *)(iVar5 + 0x10);
    *(undefined1 *)(iVar4 + 0x21cc) = 0;
    uVar9 = FUN_1001fc20(iVar4);
    if ((uVar9 & 1) != 0) {
      FUN_10072d20(*(undefined4 *)(*(int *)(iVar4 + 0x1d54) + 0x1304),uVar12,1,iVar7,0);
    }
    FUN_100248e8(iVar4);
  }
  return;
}

