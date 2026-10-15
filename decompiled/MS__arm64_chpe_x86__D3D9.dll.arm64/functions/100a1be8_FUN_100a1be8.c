/*
 * FUN_100a1be8 at 100a1be8
 * undefined FUN_100a1be8(void)
 * Address ranges: 100a1be8-100a236f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_100a1be8(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined4 *extraout_w11;
  undefined4 *extraout_w11_00;
  undefined4 *extraout_w11_01;
  undefined4 *extraout_w11_02;
  undefined4 *extraout_w11_03;
  undefined4 *extraout_w11_04;
  undefined4 *extraout_w11_05;
  undefined4 *extraout_w11_06;
  undefined4 *extraout_w11_07;
  undefined4 *extraout_w11_08;
  undefined4 *extraout_w11_09;
  undefined4 *extraout_w11_10;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar12 = (ulonglong)(param_2 + 300);
  uVar6 = param_2 + 0x18;
  uVar9 = 0;
  do {
    uVar6 = FUN_10121648(uVar6,*(undefined4 *)((int)uVar12 + uVar9 * 4));
    uVar9 = uVar9 + 1;
    *extraout_w11 = 0;
  } while (uVar9 < 0x20);
  uVar9 = 0;
  uVar12 = (ulonglong)(param_2 + 0xec);
  do {
    uVar5 = *(uint *)((int)uVar12 + uVar9 * 4);
    if ((uVar5 & 0x3f00) == 0) {
      uVar6 = FUN_10121648(uVar6,uVar5);
      *(undefined4 *)(param_2 + uVar9 * 4 + 0xec) = 0;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  uVar12 = (ulonglong)uVar6;
  if ((*(uint *)(param_2 + 0x224) & 0x3f00) == 0) {
    FUN_10121648(uVar12,*(uint *)(param_2 + 0x224));
    *extraout_w11_00 = 0;
  }
  iVar11 = 0xa8;
  iVar10 = 4;
  do {
    uVar6 = *(uint *)(param_2 + iVar11 * 4);
    if ((uVar6 & 0x3f00) == 0) {
      uVar12 = FUN_10121648(uVar12 & 0xffffffff,uVar6);
      *extraout_w11_01 = 0;
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  uVar14 = uVar12 & 0xffffffff;
  if ((*(uint *)(param_2 + 0x2b0) & 0x3f00) == 0) {
    uVar12 = FUN_10121648(uVar14,*(uint *)(param_2 + 0x2b0));
    *extraout_w11_02 = 0;
  }
  piVar1 = (int *)(param_2 + 0x10);
  bVar13 = *(byte *)(*piVar1 + 0x4a6c);
  if (bVar13 != 0 && bVar13 < 3 || bVar13 == 3) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(bVar13) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
      uVar8 = FUN_100a1af8(uVar12,param_2,param_3);
      bVar13 = 0xe;
      if (*(char *)(*piVar1 + 0x443) != '\0') {
        bVar13 = 0;
      }
      uVar8 = FUN_10095bb0(uVar8,param_2,param_3,4,bVar13 | *(char *)(*piVar1 + 0x442) == '\0');
      uVar8 = FUN_10095bb0(uVar8,param_2,param_3,2,~*(byte *)(*piVar1 + 0x444));
      uVar8 = FUN_10095bb0(uVar8,param_2,param_3,3,~*(byte *)(*piVar1 + 0x445));
      uVar6 = 0;
      do {
        uVar8 = FUN_10095bb0(uVar8,param_2,param_3,uVar6 + 5,~*(byte *)(*piVar1 + uVar6 + 0x446));
        uVar9 = *(uint *)(param_2 + (uVar6 + 0x7f) * 4);
        if ((uVar9 & 0x3f00) == 0) {
          uVar8 = FUN_10121648(uVar14,uVar9);
          *extraout_w11_03 = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      if ((*(uint *)(param_2 + 0x1ec) & 0x3f00) == 0) {
        FUN_10121648(uVar14,*(uint *)(param_2 + 0x1ec));
        *extraout_w11_04 = 0;
      }
      if ((*(uint *)(param_2 + 0x1f0) & 0x3f00) == 0) {
        FUN_10121648(uVar14,*(uint *)(param_2 + 0x1f0));
        *extraout_w11_05 = 0;
      }
      if ((*(uint *)(param_2 + 500) & 0x3f00) == 0) {
        FUN_10121648(uVar14,*(uint *)(param_2 + 500));
        *extraout_w11_06 = 0;
      }
      if ((*(uint *)(param_2 + 0x1f8) & 0x3f00) == 0) {
        FUN_10121648(uVar14,*(uint *)(param_2 + 0x1f8));
        *extraout_w11_07 = 0;
      }
      break;
    default:
      uVar8 = FUN_100a1af8(uVar12,param_2,param_3);
      puVar2 = (uint *)(param_2 + 500);
      uVar8 = FUN_10095dd8(uVar8,param_2,param_3,*puVar2,~*(byte *)(*piVar1 + 0x444),2);
      puVar3 = (uint *)(param_2 + 0x1f8);
      uVar8 = FUN_10095dd8(uVar8,param_2,param_3,*puVar3,~*(byte *)(*piVar1 + 0x445),3);
      puVar4 = (uint *)(param_2 + 0x1ec);
      bVar13 = 0xe;
      if (*(char *)(*piVar1 + 0x443) != '\0') {
        bVar13 = 0;
      }
      FUN_10095dd8(uVar8,param_2,param_3,*puVar4,bVar13 | *(char *)(*piVar1 + 0x442) == '\0',4);
      uVar6 = 0;
      piVar7 = piVar1;
      do {
        piVar7 = (int *)FUN_10095dd8(piVar7,param_2,param_3,
                                     *(undefined4 *)(param_2 + 0x1fc + uVar6 * 4),
                                     ~*(byte *)(uVar6 + *piVar1 + 0x446),uVar6 + 5);
        uVar9 = *(uint *)(param_2 + (uVar6 + 0x7f) * 4);
        if ((uVar9 & 0x3f00) == 0) {
          piVar7 = (int *)FUN_10121648(uVar14,uVar9);
          *extraout_w11_08 = 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 8);
      if ((*puVar4 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar4);
        *puVar4 = 0;
      }
      if ((*(uint *)(param_2 + 0x1f0) & 0x3f00) == 0) {
        FUN_10121648(uVar14,*(uint *)(param_2 + 0x1f0));
        *extraout_w11_09 = 0;
      }
      if ((*puVar2 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar2);
        *puVar2 = 0;
      }
      if ((*puVar3 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar3);
        *puVar3 = 0;
      }
      break;
    case 3:
      puVar2 = (uint *)(param_2 + 0x26c);
      FUN_100a17d8(uVar12,param_2,param_3,*puVar2);
      if ((*puVar2 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar2);
        *puVar2 = 0;
      }
      uVar12 = FUN_10121590(uVar14,4,1);
      uVar15 = uVar12 & 0xffffffff;
      uVar8 = FUN_10095ee0(uVar12,param_2,param_3,uVar15,7,2,3,4,0);
      puVar2 = (uint *)(param_2 + 0x274);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*puVar2,uVar15,0,2);
      puVar3 = (uint *)(param_2 + 0x278);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*puVar3,uVar15,0x55,3);
      puVar4 = (uint *)(param_2 + 0x27c);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*puVar4,uVar15,0xaa,4);
      uVar8 = FUN_10095ee0(uVar8,param_2,param_3,uVar15,0xf,5,6,7,8);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x280),uVar15,0,5);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x284),uVar15,0x55,6);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x288),uVar15,0xaa,7);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x28c),uVar15,0xff,8);
      uVar8 = FUN_10095ee0(uVar8,param_2,param_3,uVar15,0xf,9,10,0xb,0xc);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x290),uVar15,0,9);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x294),uVar15,0x55,10);
      uVar8 = FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x298),uVar15,0xaa,0xb);
      FUN_10095fd8(uVar8,param_2,param_3,*(undefined4 *)(param_2 + 0x29c),uVar15,0xff,0xc);
      FUN_10121648(uVar14,uVar15);
      if ((*puVar4 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar4);
        *puVar4 = 0;
      }
      if ((*puVar2 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar2);
        *puVar2 = 0;
      }
      if ((*puVar3 & 0x3f00) == 0) {
        FUN_10121648(uVar14,*puVar3);
        *puVar3 = 0;
      }
      iVar11 = 0xa0;
      iVar10 = 8;
      do {
        uVar6 = *(uint *)(param_2 + iVar11 * 4);
        if ((uVar6 & 0x3f00) == 0) {
          FUN_10121648(uVar14,uVar6);
          *extraout_w11_10 = 0;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}

