/*
 * FUN_10026a50 at 10026a50
 * undefined FUN_10026a50(void)
 * Address ranges: 10026a50-10026fef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10026a50(int param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int extraout_w11;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined4 local_44;
  
  iVar12 = param_2 + param_3 * *(int *)(param_1 + 0x2c);
  switch(*(undefined4 *)(param_1 + 0x138)) {
  case 1:
    break;
  case 2:
    break;
  default:
    break;
  case 4:
    break;
  case 8:
    break;
  case 0x10:
  }
  if (param_4 == 2) {
    piVar2 = (int *)(param_1 + 0x44);
    local_44 = FUN_10073b50(*(undefined4 *)(*piVar2 + 0x15e0),auStack_4c,
                            *(undefined4 *)(param_1 + 0x198),iVar12);
    FUN_10073b50(*(undefined4 *)(*piVar2 + 0x15d8),auStack_48,*(undefined4 *)(param_1 + 0x60),0);
    piVar3 = (int *)(param_1 + 0x1c);
    FUN_1001c4c0(0,0,(float)*(uint *)(param_1 + 0x14),(float)*(uint *)(param_1 + 0x18),0,0,
                 (float)*(uint *)(param_1 + 0x130),(float)*(uint *)(param_1 + 0x134),
                 *(undefined4 *)(param_1 + 0xe0),*piVar3,*piVar3,param_2,iVar12,param_2,param_3,
                 iVar12,0);
    if (((*(char *)(*piVar3 + 0x100b37f0) != '\0') &&
        (iVar14 = FUN_10025ff8(param_1), *(char *)(iVar14 + extraout_w11) != '\0')) &&
       (*(char *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x18 + 0x531) != '\0')) {
      iVar13 = param_2 + (*(int *)(param_1 + 0x24) + param_3) * *(int *)(param_1 + 0x2c);
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      uVar5 = *(undefined4 *)(*piVar2 + 0x15d8);
      uVar6 = *(uint *)(param_1 + 0x134);
      uVar7 = *(uint *)(param_1 + 0x130);
      uVar8 = *(uint *)(param_1 + 0x18);
      uVar9 = *(uint *)(param_1 + 0x14);
      iVar14 = *piVar3;
      uVar10 = *(undefined4 *)(param_1 + 0xe0);
      FUN_10073b50(*(undefined4 *)(*piVar2 + 0x15e0),auStack_48,*(undefined4 *)(param_1 + 0x198),
                   iVar12);
      FUN_10073b50(uVar5,auStack_4c,uVar4,1);
      FUN_1001c4c0(0,0,(float)uVar9,(float)uVar8,0,0,(float)uVar7,(float)uVar6,uVar10,iVar14,iVar14,
                   param_2,iVar13,param_2,param_3,iVar13,0);
    }
  }
  else if (param_4 == 1) {
    uVar4 = *(undefined4 *)(param_1 + 0x60);
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15d8);
    uVar6 = *(uint *)(param_1 + 0x134);
    uVar7 = *(uint *)(param_1 + 0x130);
    uVar10 = *(undefined4 *)(param_1 + 0x1c);
    uVar11 = *(undefined4 *)(param_1 + 0xe0);
    FUN_10073b50(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x15e0),auStack_48,
                 *(undefined4 *)(param_1 + 0x110),iVar12);
    FUN_10073b50(uVar5,auStack_4c,uVar4,0);
    FUN_1001c4c0(0,0,(float)uVar7,(float)uVar6,0,0,(float)uVar7,(float)uVar6,uVar11,uVar10,uVar10,
                 param_2,iVar12,param_2,param_3,iVar12,0);
    pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x70) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  return;
}

