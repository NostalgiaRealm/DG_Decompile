/*
 * FUN_100434a8 at 100434a8
 * undefined FUN_100434a8(void)
 * Address ranges: 100434a8-100437cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100434a8(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  
  iVar7 = *(int *)(param_1 + 0x74);
  iVar4 = DAT_100a1d70;
  if (iVar7 == 0) {
    iVar4 = DAT_100a1d60;
  }
  if (iVar4 == 0xff) {
    iVar4 = DAT_100a1d74;
    if (iVar7 == 0) {
      iVar4 = DAT_100a1d64;
    }
    if (iVar4 == 0xff) {
      iVar4 = DAT_100a1d78;
      if (iVar7 == 0) {
        iVar4 = DAT_100a1d68;
      }
      if (iVar4 == 0xff) {
        return;
      }
    }
  }
  uVar12 = FUN_1003cc48(param_2,param_4,0,0,0,0,7,param_3);
  if ((uVar12 & 0xf0) != 0x80 && (uVar12 & 0xf0) != 0xf0) {
    uVar12 = FUN_1003ca78(param_2,0,0,0,0,7,0);
  }
  uVar17 = uVar12 & 0xffff;
  FUN_1003fd90(0x3c23d70a,param_2,param_3,param_4,0xa4,uVar17,uVar17,7,1);
  FUN_1003c500(param_2,uVar17,7);
  uVar11 = FUN_1003cbc0(param_2,uVar17,0xa4);
  FUN_1003c690(param_2,0,uVar17,uVar11,0,0);
  uVar15 = 0;
  if ((uVar12 & 0xf0) == 0x80) {
    uVar15 = *(uint *)(param_2 + (uVar12 & 0xf) * 4 + 0x90) >> 0x12 & 3;
  }
  bVar10 = iVar7 == 0;
  puVar5 = &DAT_100a1d70;
  if (bVar10) {
    puVar5 = &DAT_100a1d60;
  }
  puVar6 = &DAT_100a1d74;
  if (bVar10) {
    puVar6 = &DAT_100a1d64;
  }
  puVar13 = &DAT_100a1d78;
  if (bVar10) {
    puVar13 = &DAT_100a1d68;
  }
  if (uVar15 == 0) {
    uVar16 = *puVar5;
    uVar14 = 0;
    puVar5 = puVar6;
  }
  else {
    uVar14 = *puVar13;
    uVar16 = 0;
    puVar13 = puVar6;
  }
  uVar8 = *puVar13;
  puVar1 = (undefined8 *)(param_2 + 0x174);
  uVar9 = *puVar5;
  *puVar1 = 0x4e4600000005;
  *(undefined4 *)(param_2 + 0x17c) = uVar16;
  *(undefined4 *)(param_2 + 0x180) = uVar9;
  piVar2 = (int *)(param_2 + 0x154);
  piVar3 = (int *)(param_2 + 0x134);
  *(undefined4 *)(param_2 + 0x184) = uVar8;
  *(undefined4 *)(param_2 + 0x188) = uVar14;
  FUN_10073878(param_3,(*piVar3 + *piVar2 + 6U & 0x7f) << 0x18 | 1,piVar3,piVar2,puVar1,0);
  FUN_10073878(param_3,(*piVar3 + *piVar2 + 1U & 0x7f) << 0x18 | 0x56,piVar3,piVar2,0,0);
  FUN_1003c500(param_2,0x70,7);
  FUN_1003c690(param_2,0,uVar17,0xa4,0,0);
  *puVar1 = 0x400600000005;
  *(undefined4 *)(param_2 + 0x188) = 0x3b808081;
  *(undefined4 *)(param_2 + 0x184) = 0x3b808081;
  *(undefined4 *)(param_2 + 0x180) = 0x3b808081;
  *(undefined4 *)(param_2 + 0x17c) = 0x3b808081;
  FUN_10073878(param_3,(*piVar3 + *piVar2 + 6U & 0x7f) << 0x18 | 0x2038,piVar3,piVar2,puVar1,0);
  if (uVar17 != param_4) {
    FUN_1003cb80(param_2,uVar17);
  }
  return;
}

