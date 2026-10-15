/*
 * FUN_1003a538 at 1003a538
 * undefined FUN_1003a538(void)
 * Address ranges: 1003a538-1003a703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003a538(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  int *piVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = 0x80070057;
  uVar6 = ZEXT48(param_3);
  bVar2 = true;
  bVar3 = true;
  if (param_2 != (int *)0x0) {
    iVar9 = *param_2;
    bVar2 = ((iVar9 == 0xac || iVar9 == 0x13c) || iVar9 == 0x16c) || iVar9 == 0x17c;
  }
  if (param_3 != (int *)0x0) {
    iVar9 = *param_3;
    bVar3 = ((iVar9 == 0xac || iVar9 == 0x13c) || iVar9 == 0x16c) || iVar9 == 0x17c;
  }
  if ((bVar2) && (bVar3)) {
    iVar1 = *(int *)(param_1 + 0x11c) * 0x228;
    iVar9 = (int)*(ulonglong *)(&DAT_100be340 + iVar1);
    if (0xffffffff < *(ulonglong *)(&DAT_100be340 + iVar1)) {
      iVar9 = -1;
    }
    iVar8 = (int)*(ulonglong *)(&DAT_100be348 + iVar1);
    if (0xffffffff < *(ulonglong *)(&DAT_100be348 + iVar1)) {
      iVar8 = -1;
    }
    uVar7 = ZEXT48(&DAT_100bd4f0);
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      if (iVar1 == 0xac) {
        FUN_100370e0(&DAT_100bd4f0 + *(int *)(param_1 + 0x40) * 0x1a8,param_2);
      }
      else if (iVar1 == 0x13c) {
        FUN_10037310(&DAT_100bd4f0 + *(int *)(param_1 + 0x40) * 0x1a8,param_2);
      }
      else if (iVar1 == 0x16c) {
        FUN_10037430(&DAT_100bd4f0 + *(int *)(param_1 + 0x40) * 0x1a8,param_2);
      }
      else if (iVar1 == 0x17c) {
        FUN_10037518(&DAT_100bd4f0 + *(int *)(param_1 + 0x40) * 0x1a8,param_2);
      }
      param_2[0xf] = iVar9;
      param_2[0x10] = iVar8;
    }
    piVar5 = (int *)uVar6;
    if (piVar5 != (int *)0x0) {
      iVar1 = *piVar5;
      if (iVar1 == 0xac) {
        FUN_100370e0(uVar7 & 0xffffffff,uVar6 & 0xffffffff);
      }
      else if (iVar1 == 0x13c) {
        FUN_10037310(uVar7 & 0xffffffff,uVar6 & 0xffffffff);
      }
      else if (iVar1 == 0x16c) {
        FUN_10037430(uVar7 & 0xffffffff,uVar6 & 0xffffffff);
      }
      else if (iVar1 == 0x17c) {
        FUN_10037518(uVar7 & 0xffffffff,uVar6 & 0xffffffff);
      }
      piVar5[0xf] = iVar9;
      piVar5[0x10] = iVar8;
    }
    uVar4 = 0;
  }
  return uVar4;
}

