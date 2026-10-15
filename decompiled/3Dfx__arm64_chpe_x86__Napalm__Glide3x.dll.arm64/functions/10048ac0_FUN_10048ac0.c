/*
 * FUN_10048ac0 at 10048ac0
 * undefined FUN_10048ac0(void)
 * Address ranges: 10048ac0-10048dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048ac0(int param_1,int param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  
  uVar6 = (uint)(*(int *)(param_1 + 0x74) != 0) | *(int *)(param_1 + 0xac) << 1;
  iVar1 = uVar6 * 0x10;
  puVar5 = (undefined4 *)(&DAT_100a9f30 + uVar6 * 0x10);
  if (((*(int *)(&DAT_100a9f30 + iVar1) != 0xff) || (*(int *)(&DAT_100a9f34 + iVar1) != 0xff)) ||
     (*(int *)(&DAT_100a9f38 + iVar1) != 0xff)) {
    uVar11 = FUN_10041b00(param_2,param_4,0,0,0,0,7,param_3);
    if ((uVar11 & 0xf0) != 0x80 && (uVar11 & 0xf0) != 0xf0) {
      uVar11 = FUN_10041930(param_2,0,0,0,0,7,0);
    }
    uVar15 = uVar11 & 0xffff;
    FUN_10044fb0(0x3c23d70a,param_2,param_3,param_4,0xa4,uVar15,uVar15,7,1);
    FUN_10041340(param_2,uVar15,7);
    uVar10 = FUN_10041a78(param_2,uVar15,0xa4);
    FUN_100414d0(param_2,0,uVar15,uVar10,0,0);
    uVar12 = 0;
    if ((uVar11 & 0xf0) == 0x80) {
      uVar12 = *(uint *)(param_2 + (uVar11 & 0xf) * 4 + 0x90) >> 0x12 & 3;
    }
    if (uVar12 == 0) {
      uVar14 = *(undefined4 *)(&DAT_100a9f30 + iVar1);
      puVar5 = (undefined4 *)(&DAT_100a9f34 + uVar6 * 0x10);
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)(&DAT_100a9f38 + iVar1);
      uVar14 = 0;
    }
    uVar8 = *puVar5;
    piVar2 = (int *)(param_2 + 0x154);
    piVar3 = (int *)(param_2 + 0x134);
    puVar7 = &DAT_100a9f34;
    if (uVar12 == 0) {
      puVar7 = &DAT_100a9f38;
    }
    puVar4 = (undefined8 *)(param_2 + 0x174);
    uVar9 = *(undefined4 *)(puVar7 + uVar6 * 0x10);
    *(undefined4 *)(param_2 + 0x188) = uVar13;
    *puVar4 = 0x4e4600000005;
    *(undefined4 *)(param_2 + 0x17c) = uVar14;
    *(undefined4 *)(param_2 + 0x180) = uVar8;
    *(undefined4 *)(param_2 + 0x184) = uVar9;
    FUN_10078f18(param_3,(*piVar2 + *piVar3 + 6U & 0x7f) << 0x18 | 1,piVar3,piVar2,puVar4,0);
    FUN_10078f18(param_3,(*piVar2 + *piVar3 + 1U & 0x7f) << 0x18 | 0x56,piVar3,piVar2,0,0);
    FUN_10041340(param_2,0x70,7);
    FUN_100414d0(param_2,0,uVar15,0xa4,0,0);
    *puVar4 = 0x400600000005;
    *(undefined4 *)(param_2 + 0x188) = 0x3b808081;
    *(undefined4 *)(param_2 + 0x184) = 0x3b808081;
    *(undefined4 *)(param_2 + 0x180) = 0x3b808081;
    *(undefined4 *)(param_2 + 0x17c) = 0x3b808081;
    FUN_10078f18(param_3,(*piVar2 + *piVar3 + 6U & 0x7f) << 0x18 | 0x2038,piVar3,piVar2,puVar4,0);
    if (uVar15 != param_4) {
      FUN_10041a38(param_2,uVar15);
    }
  }
  return;
}

