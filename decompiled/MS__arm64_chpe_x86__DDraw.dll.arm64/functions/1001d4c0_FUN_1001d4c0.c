/*
 * FUN_1001d4c0 at 1001d4c0
 * undefined FUN_1001d4c0(void)
 * Address ranges: 1001d4c0-1001d6df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d4c0(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  code *extraout_w11;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *local_90;
  int *local_8c;
  undefined8 local_88;
  int local_70 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_88 = 0;
  piVar1 = param_1 + 3;
  piVar2 = param_1 + 4;
  uVar9 = 0;
  piVar7 = (int *)0x0;
  *(undefined8 *)(*param_1 + param_2 * 0x50) = param_3;
  uVar12 = *param_4;
  uVar11 = param_4[3];
  uVar10 = param_4[2];
  iVar5 = *param_1 + param_2 * 0x50;
  *(undefined8 *)(iVar5 + 0x10) = param_4[1];
  *(undefined8 *)(iVar5 + 8) = uVar12;
  *(undefined8 *)(iVar5 + 0x20) = uVar11;
  *(undefined8 *)(iVar5 + 0x18) = uVar10;
  uVar10 = param_4[4];
  *(undefined8 *)(iVar5 + 0x30) = param_4[5];
  *(undefined8 *)(iVar5 + 0x28) = uVar10;
  *(undefined8 *)(iVar5 + 0x38) = param_4[6];
  iVar5 = FUN_10072bf8(*piVar1 + 0x520,*piVar2,param_4);
  if (iVar5 != 0) {
    local_90 = (int *)(param_4 + 4);
    uVar8 = 1;
    if (*local_90 == 0x2c || *local_90 == 0x2d) {
      uVar8 = 2;
    }
    local_8c = param_1 + 5;
    iVar6 = FUN_10073050(*local_8c,uVar8);
    if (iVar6 == -1) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(iVar5);
    }
    else {
      local_70[0] = *local_90;
      local_50 = 0;
      local_70[1] = 5;
      local_70[2] = 0x1688;
      local_60 = 0x100000000;
      uStack_58 = 0x100000000;
      FUN_10073b50(*local_8c,&local_90,iVar6,0);
      FUN_10072a38(*piVar1 + 0x520,*piVar2,iVar5,local_70,local_90);
      piVar7 = (int *)FUN_100913c0(0x3c);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        iVar3 = *piVar2;
        iVar4 = *piVar1;
        piVar7[1] = iVar3;
        *piVar7 = iVar4;
        piVar7[2] = iVar4 + iVar3 * 0x16c0 + 0x6c0;
        piVar7[3] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        piVar7[6] = -1;
        piVar7[7] = -1;
        piVar7[8] = -1;
        piVar7[9] = -1;
        piVar7[10] = -1;
        *(undefined2 *)(piVar7 + 0xe) = 0;
        piVar7[0xd] = 0;
        piVar7[0xb] = 0;
        piVar7[0xc] = 0;
      }
      FUN_10020778(piVar7,iVar5,iVar6,0xffffffff,0);
      uVar9 = CONCAT44(iVar6,iVar5);
    }
  }
  iVar5 = *param_1 + param_2 * 0x50;
  *(undefined8 *)(iVar5 + 0x40) = uVar9;
  *(int **)(iVar5 + 0x48) = piVar7;
  return;
}

