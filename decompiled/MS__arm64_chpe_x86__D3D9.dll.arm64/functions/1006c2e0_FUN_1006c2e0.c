/*
 * FUN_1006c2e0 at 1006c2e0
 * undefined FUN_1006c2e0(void)
 * Address ranges: 1006c2e0-1006c693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006c2e0(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  
  iVar5 = *param_1;
  iVar18 = param_1[1];
  iVar6 = param_1[2];
  iVar7 = param_1[3];
  iVar8 = param_1[4];
  uVar17 = param_1[5];
  iVar13 = param_1[7];
  FUN_1005c0c8(iVar5);
  plVar1 = (longlong *)(*(int *)(*(int *)(iVar5 + 0xf6b8) + 0x1304) + 0x908);
  lVar4 = *plVar1 + 1;
  *plVar1 = lVar4;
  uVar9 = *(undefined4 *)(iVar5 + 0xfbc8);
  *(longlong *)(iVar5 + 0xfc30) = lVar4;
  uVar10 = *(undefined4 *)(iVar5 + 0x1008);
  uVar11 = *(undefined4 *)(iVar5 + 0x104c);
  if (iVar18 == 6) {
    if (2 < uVar17) {
      uVar17 = uVar17 - 2;
      iVar18 = 0;
      if (uVar17 != 0) {
        piVar2 = (int *)(iVar5 + 0x6c);
        while( true ) {
          iVar15 = *piVar2 + *(int *)(iVar5 + 0x68);
          if (0x1000U - iVar15 < 0x10) {
            FUN_1005df78(iVar5,0,1,0);
            iVar15 = 0;
          }
          uVar12 = (0x1000U - iVar15) / 3;
          if (uVar17 < (0x1000U - iVar15) / 3) {
            uVar12 = uVar17;
          }
          if (iVar7 == 0) {
            FUN_1005c208(iVar5,4,iVar6);
          }
          else {
            FUN_10061d38(iVar5,4,iVar7 + -0x18,uVar9,*(undefined4 *)(iVar5 + 0xf6d0),uVar11,uVar10,0
                         ,uVar12 * 3);
          }
          *(byte *)(iVar5 + 0xf66f) =
               (*(uint *)(iVar6 + 0x10) & (*(uint *)(iVar5 + 0xfd90) ^ 0xffffffff)) != 0 |
               *(byte *)(iVar5 + 0xf66f);
          *(uint *)(iVar5 + 0xfd90) = *(uint *)(iVar6 + 0x10);
          *(undefined1 *)(iVar5 + 0xfd94) = 1;
          uVar16 = 0;
          if (uVar12 != 0) {
            piVar3 = (int *)(iVar5 + 100);
            do {
              *(uint *)*piVar3 = iVar18 + iVar8 + 1 + uVar16;
              iVar15 = iVar18 + iVar8 + 2 + uVar16;
              uVar16 = uVar16 + 1;
              *(int *)(*piVar3 + 4) = iVar15;
              *(int *)(*piVar3 + 8) = iVar8;
              *piVar3 = *piVar3 + 0xc;
            } while (uVar16 < uVar12);
          }
          uVar17 = uVar17 - uVar12;
          *piVar2 = *piVar2 + uVar12 * 3;
          if (uVar17 == 0) break;
          iVar18 = uVar12 + iVar18;
          FUN_1005e378(iVar5,iVar6);
        }
      }
      FUN_1005df78(iVar5,0,0,0);
    }
  }
  else {
    if (iVar7 == 0) {
      FUN_1005c208(iVar5,iVar18,iVar6);
    }
    else {
      FUN_10061d38(iVar5,iVar18,iVar7 + -0x18,uVar9,*(undefined4 *)(iVar5 + 0xfbcc),uVar11,uVar10,0,
                   0);
    }
    *(byte *)(iVar5 + 0xf66f) =
         (*(uint *)(iVar6 + 0x10) & (*(uint *)(iVar5 + 0xfd90) ^ 0xffffffff)) != 0 |
         *(byte *)(iVar5 + 0xf66f);
    uVar12 = *(uint *)(iVar6 + 0x10);
    *(undefined1 *)(iVar5 + 0xfd94) = 0;
    *(uint *)(iVar5 + 0xfd90) = uVar12;
    uVar14 = FUN_10058a58(iVar5);
    if ((uVar14 & 1) != 0) {
      FUN_10116190(*(undefined4 *)(*(int *)(iVar5 + 0xf6b8) + 0x1304),uVar17,1,iVar8,0);
    }
    FUN_1005c070(iVar5);
  }
  if ((char)iVar13 != '\0') {
    FUN_10114450(*(undefined4 *)(*(int *)(iVar5 + 0xf6b8) + 0x1304),*(undefined8 *)(iVar5 + 0xfc30))
    ;
  }
  return;
}

