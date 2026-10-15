/*
 * FUN_100b8a20 at 100b8a20
 * undefined FUN_100b8a20(void)
 * Address ranges: 100b8a20-100b8c47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b8a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                undefined4 param_9)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  iVar6 = FUN_100074b0(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7,param_8);
  if (iVar6 < 0) {
    return iVar6;
  }
  local_58 = 0;
  uStack_64 = 1;
  iVar8 = -0x7ff8fff2;
  local_68 = param_4;
  local_60 = param_7;
  uStack_5c = param_6;
  uStack_54 = param_5;
  local_50 = param_2;
  uStack_4c = param_3;
  uVar7 = FUN_10002f00(param_4);
  iVar6 = FUN_100aeca8(param_1,0,0,0,&local_68,0,0,uVar7,param_8);
  if (iVar6 == 0) {
    return -0x7ff8fff2;
  }
  uVar9 = FUN_10017b70(iVar6,0);
  if ((uVar9 & 1) == 0) goto LAB_100b8c10;
  piVar1 = (int *)(param_1 + 0xb60);
  puVar2 = (uint *)(param_1 + 0xb68);
  puVar3 = (uint *)(param_1 + 0xb64);
  uVar4 = *puVar2;
  if (*puVar3 == uVar4) {
    uVar5 = uVar4 << 1;
    if (uVar4 == 0) {
      uVar5 = 0x10;
    }
    iVar10 = uVar5 * 4;
    if (uVar5 >> 0x1e != 0) {
      iVar10 = -1;
    }
    iVar10 = FUN_100fece0(iVar10);
    if (iVar10 != 0) {
      FUN_100ff660(iVar10,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
      FUN_100fed00(*piVar1);
      *piVar1 = iVar10;
      *puVar2 = uVar5;
      goto LAB_100b8b98;
    }
  }
  else {
LAB_100b8b98:
    *(int *)(*piVar1 + *puVar3 * 4) = iVar6;
    *puVar3 = *puVar3 + 1;
    iVar8 = FUN_100be7a0(iVar6 + 0x5c,&DAT_10129140,param_9);
    if (-1 < iVar8) {
      (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45] =
           (&DAT_101389b8)[*(int *)(param_1 + 0xb2c) * 0x45];
      return iVar8;
    }
    FUN_1000c2e0(param_1,iVar6);
  }
  FUN_10018128(iVar6);
LAB_100b8c10:
  FUN_100be690(iVar6);
  FUN_100fec90(iVar6,0x7c);
  return iVar8;
}

