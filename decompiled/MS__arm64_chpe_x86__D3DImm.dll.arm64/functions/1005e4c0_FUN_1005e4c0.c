/*
 * FUN_1005e4c0 at 1005e4c0
 * undefined FUN_1005e4c0(void)
 * Address ranges: 1005e4c0-1005e747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1005e4c0(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  
  piVar1 = (int *)(param_2 + 0x7c);
  piVar1[0] = 0x7ff;
  piVar1[1] = 0x7ff;
  piVar2 = (int *)(param_2 + 0x84);
  piVar2[0] = 1;
  piVar2[1] = 1;
  *(undefined8 *)(param_2 + 0x74) = 0x1fff00000000000;
  piVar3 = (int *)(param_1 + 0x1538);
  if (*piVar3 == 0) {
    iVar6 = FUN_10081da0(0x200000);
    *piVar3 = iVar6;
    if (iVar6 != 0) {
      iVar6 = FUN_10081da0(0x40000);
      *(int *)(param_1 + 0x153c) = iVar6;
      if (iVar6 == 0) {
        FUN_10081dc0(*piVar3);
        *piVar3 = 0;
      }
      else {
        FUN_10081f10(*piVar3,0,0x200000);
        FUN_10081f10(*(int *)(param_1 + 0x153c),0,0x20000);
      }
    }
  }
  if (*(int *)(param_1 + 0x153c) == 0) {
    uVar7 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x151c);
    *(int *)(param_1 + 0x151c) = param_3;
    *(int *)(param_1 + 0x166c) = iVar6;
    if ((*(int *)(param_1 + 0x1518) != param_3) ||
       (cVar5 = *(char *)(param_3 + 0xd2), *(char *)(param_3 + 0xd2) = '\0', cVar5 != '\0')) {
      *(undefined1 *)(param_1 + 0x1754) = 1;
      FUN_100514e0(param_1);
    }
    uVar7 = 1;
    *(int *)(param_1 + 0x158c) = *(int *)(param_1 + 0x153c);
    *(int *)(param_1 + 0x1584) = *(int *)(param_2 + 0x60) + *(int *)(param_2 + 0x58);
    *(int *)(param_1 + 0x1588) = *piVar3;
    *(uint *)(param_1 + 0x1640) = *(uint *)(param_2 + 0x78) & 0xfff;
    *(uint *)(param_1 + 0x1644) = *(uint *)(param_2 + 0x78) >> 0xc & 0xfff;
    *(float *)(param_1 + 0x1648) = (float)*piVar1;
    *(float *)(param_1 + 0x164c) = (float)*piVar2;
    *(float *)(param_1 + 0x1650) = (float)*(int *)(param_2 + 0x80);
    iVar6 = *(int *)(param_2 + 0x88);
    *(undefined1 *)(param_1 + 0x1671) = 0;
    *(undefined1 *)(param_1 + 0x1670) = param_4;
    *(float *)(param_1 + 0x1654) = (float)iVar6;
    *(undefined8 *)(param_1 + 0x1658) = 0;
    uVar4 = 3;
    if (*(uint *)(param_1 + 0x2b0) < 4) {
      uVar4 = *(uint *)(param_1 + 0x2b0);
    }
    *(undefined4 *)(param_1 + 0x1578) = *(undefined4 *)(&DAT_1009e720 + uVar4 * 4);
    *(uint *)(param_1 + 0x157c) = (uint)*(byte *)(uVar4 + 0x1009e71c);
  }
  return uVar7;
}

