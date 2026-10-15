/*
 * FUN_100dd670 at 100dd670
 * undefined FUN_100dd670(void)
 * Address ranges: 100dd670-100dd89f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100dd670(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined1 param_9,undefined4 param_10,undefined4 param_11)

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
  
  iVar6 = FUN_10008210(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (iVar6 < 0) {
    return iVar6;
  }
  uStack_64 = 1;
  iVar8 = -0x7ff8fff2;
  local_68 = param_4;
  local_60 = param_8;
  uStack_5c = param_7;
  local_58 = param_5;
  uStack_54 = param_6;
  local_50 = param_2;
  uStack_4c = param_3;
  uVar7 = FUN_10003020(param_4);
  iVar6 = FUN_100cf9f8(param_1,0,0,0,&local_68,0,0,uVar7,param_9);
  if (iVar6 == 0) {
    return -0x7ff8fff2;
  }
  uVar9 = FUN_1001ce70(iVar6,0);
  if ((uVar9 & 1) == 0) goto LAB_100dd868;
  piVar1 = (int *)(param_1 + 0xe24);
  puVar2 = (uint *)(param_1 + 0xe2c);
  puVar3 = (uint *)(param_1 + 0xe28);
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
    iVar10 = FUN_101322b0(iVar10);
    if (iVar10 != 0) {
      FUN_101325a0(iVar10,*piVar1,((ulonglong)*puVar2 & 0x3fffffff) << 2);
      FUN_101322d0(*piVar1);
      *piVar1 = iVar10;
      *puVar2 = uVar5;
      goto LAB_100dd7f0;
    }
  }
  else {
LAB_100dd7f0:
    *(int *)(*piVar1 + *puVar3 * 4) = iVar6;
    *puVar3 = *puVar3 + 1;
    iVar8 = FUN_100e8700(iVar6 + 0x5c,&DAT_1015e4b0,param_11);
    if (-1 < iVar8) {
      (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45] =
           (&DAT_10171578)[*(int *)(param_1 + 0xdf0) * 0x45];
      return iVar8;
    }
    FUN_1000d360(param_1,iVar6);
  }
  FUN_1001d4a0(iVar6);
LAB_100dd868:
  FUN_100e85d0(iVar6);
  FUN_10132260(iVar6,0x90);
  return iVar8;
}

