/*
 * FUN_1003e828 at 1003e828
 * undefined FUN_1003e828(void)
 * Address ranges: 1003e828-1003e953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003e828(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong extraout_x15;
  uint uVar9;
  undefined4 unaff_w29;
  
  *(undefined4 *)(ZEXT48(&stack0x00000000) - 0x50) = unaff_w29;
  iVar6 = FUN_100013c0();
  uVar5 = (ZEXT48(&stack0x00000000) - 0x50) + extraout_x15 * -0x10;
  iVar3 = *(int *)(iVar6 + 0x3018);
  iVar4 = *(int *)(iVar3 + 0x3188);
  puVar1 = (undefined4 *)(iVar6 + 0x3020);
  uVar7 = FUN_1005dbc8(*(int *)(iVar3 + 0x3180) + 0x520,*(undefined4 *)(iVar3 + 0x3184),0xf000,0,0);
  *puVar1 = uVar7;
  piVar2 = (int *)(iVar4 + 0x130c);
  uVar9 = 0;
  do {
    FUN_10047568(uVar5 & 0xffffffff,uVar9);
    uVar8 = FUN_10063dc8(*piVar2,*puVar1,iVar4 + 0x1430,uVar9 * 0x1000,uVar9 * 0x1000 + 0x1000,
                         uVar5 & 0xffffffff,0,0);
    if ((uVar8 & 1) == 0) break;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0xf);
  FUN_100600f0(*piVar2 + 4,0);
  if (uVar9 != 0xf) {
    FUN_1005d6e0(*(undefined4 *)(*(int *)(iVar6 + 0x3018) + 0x3180),*puVar1);
  }
  return uVar9 == 0xf;
}

