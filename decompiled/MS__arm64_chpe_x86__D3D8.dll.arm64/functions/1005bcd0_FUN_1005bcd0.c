/*
 * FUN_1005bcd0 at 1005bcd0
 * undefined FUN_1005bcd0(void)
 * Address ranges: 1005bcd0-1005c07b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005bcd0(int *param_1)

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
  FUN_1004c8a0(iVar5);
  plVar1 = (longlong *)(*(int *)(*(int *)(iVar5 + 0xd9b8) + 0x1304) + 0x908);
  lVar4 = *plVar1 + 1;
  *plVar1 = lVar4;
  uVar9 = *(undefined4 *)(iVar5 + 0xdc90);
  *(longlong *)(iVar5 + 0xdcf0) = lVar4;
  uVar10 = *(undefined4 *)(iVar5 + 0x6e8);
  uVar11 = *(undefined4 *)(iVar5 + 0x72c);
  if (iVar18 == 6) {
    if (2 < uVar17) {
      uVar17 = uVar17 - 2;
      iVar18 = 0;
      if (uVar17 != 0) {
        piVar2 = (int *)(iVar5 + 0x6c);
        while( true ) {
          iVar15 = *piVar2 + *(int *)(iVar5 + 0x68);
          if (0x1000U - iVar15 < 0x10) {
            FUN_1004e440(iVar5,0,1,0);
            iVar15 = 0;
          }
          uVar12 = (0x1000U - iVar15) / 3;
          if (uVar17 < (0x1000U - iVar15) / 3) {
            uVar12 = uVar17;
          }
          if (iVar7 == 0) {
            FUN_1004c938(iVar5,4,iVar6);
          }
          else {
            FUN_100518c8(iVar5,4,iVar7 + -0x18,uVar9,*(undefined4 *)(iVar5 + 0xd9d0),uVar11,uVar10,0
                         ,uVar12 * 3);
          }
          *(byte *)(iVar5 + 0xd97f) =
               (*(uint *)(iVar6 + 0x10) & (*(uint *)(iVar5 + 0xde50) ^ 0xffffffff)) != 0 |
               *(byte *)(iVar5 + 0xd97f);
          *(uint *)(iVar5 + 0xde50) = *(uint *)(iVar6 + 0x10);
          *(undefined1 *)(iVar5 + 0xde54) = 1;
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
          FUN_1004e840(iVar5,iVar6);
        }
      }
      FUN_1004e440(iVar5,0,0,0);
    }
  }
  else {
    if (iVar7 == 0) {
      FUN_1004c938(iVar5,iVar18,iVar6);
    }
    else {
      FUN_100518c8(iVar5,iVar18,iVar7 + -0x18,uVar9,*(undefined4 *)(iVar5 + 0xdc94),uVar11,uVar10,0,
                   0);
    }
    *(byte *)(iVar5 + 0xd97f) =
         (*(uint *)(iVar6 + 0x10) & (*(uint *)(iVar5 + 0xde50) ^ 0xffffffff)) != 0 |
         *(byte *)(iVar5 + 0xd97f);
    uVar12 = *(uint *)(iVar6 + 0x10);
    *(undefined1 *)(iVar5 + 0xde54) = 0;
    *(uint *)(iVar5 + 0xde50) = uVar12;
    uVar14 = FUN_10048138(iVar5);
    if ((uVar14 & 1) != 0) {
      FUN_100e3940(*(undefined4 *)(*(int *)(iVar5 + 0xd9b8) + 0x1304),uVar17,1,iVar8,0);
    }
    FUN_1004c848(iVar5);
  }
  if ((char)iVar13 != '\0') {
    FUN_100e1c00(*(undefined4 *)(*(int *)(iVar5 + 0xd9b8) + 0x1304),*(undefined8 *)(iVar5 + 0xdcf0))
    ;
  }
  return;
}

