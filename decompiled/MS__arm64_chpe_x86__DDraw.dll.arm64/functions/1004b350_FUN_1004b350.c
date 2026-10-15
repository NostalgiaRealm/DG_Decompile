/*
 * FUN_1004b350 at 1004b350
 * undefined FUN_1004b350(void)
 * Address ranges: 1004b350-1004b5bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b350(int param_1,ulonglong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  code *extraout_w11;
  ulonglong extraout_x11;
  
  puVar1 = (uint *)(param_1 + 0x154);
  if ((*puVar1 >> 0xb & 1) == 0) {
    piVar2 = (int *)(param_1 + 4);
    if ((*(int *)(*piVar2 + 0xcc) == 0) || ((param_2 & 1) != 0)) {
      puVar3 = (uint *)(param_1 + 0x19c);
      if (((*(uint *)(param_1 + 0x1b8) >> 0x11 & 1) == 0) && ((*puVar3 >> 2 & 1) == 0)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = 0;
      }
      *(undefined4 *)(*piVar2 + 0xc4) = uVar6;
      uVar8 = FUN_1004d790(param_1 + 0x150);
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_1004d750(param_1 + 0x150);
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_10008d98(extraout_x11 & 0xffffffff);
          if (((uVar8 & 1) != 0) && ((*puVar3 >> 2 & 1) != 0)) {
            FUN_1004c1e0(param_1,*(undefined4 *)(*piVar2 + 0x20));
            *(uint *)(*piVar2 + 0x34) = *(uint *)(*piVar2 + 0x34) | 1;
          }
        }
        else if (*(int *)((int)extraout_x11 + 0x20) == 0) {
          puVar3 = (uint *)((int)extraout_x11 + 0x34);
          uVar10 = *(uint *)(param_1 + 0x1b8);
          *puVar3 = *puVar3 | 0x10;
          if ((uVar10 >> 4 & 1) != 0) {
            FUN_10003be0(*piVar2);
          }
        }
        else {
          FUN_10008d98(extraout_x11 & 0xffffffff);
        }
      }
      else {
        iVar7 = (uint)*(ushort *)(*piVar2 + 0xc) * *(int *)(*piVar2 + 0x14);
        iVar5 = FUN_100914b0(iVar7);
        if (iVar5 != 0) {
          iVar4 = *piVar2;
          *(undefined4 *)(iVar4 + 0xc4) = 0;
          *(int *)(iVar4 + 0x20) = iVar5;
          *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 0x28;
          if ((*puVar3 >> 2 & 1) == 0) {
            FUN_100917d0(iVar5,0,iVar7);
          }
          else {
            FUN_1004c1e0(param_1,iVar5);
          }
        }
      }
    }
    iVar7 = *piVar2;
    if ((*(int *)(iVar7 + 0x20) == 0) && ((*(uint *)(iVar7 + 0x34) >> 4 & 1) == 0)) {
      puVar9 = (undefined4 *)(iVar7 + 0x70);
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar7 = (*extraout_w11)(uVar6,0,*puVar9);
    }
    else {
      uVar8 = FUN_1004d420(param_1);
      if ((uVar8 & 1) == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = (uint)*(ushort *)(iVar7 + 10);
      }
      iVar7 = *(int *)(iVar7 + 0x10) * uVar10;
    }
    *(int *)(param_1 + 0x160) = iVar7;
    if (iVar7 != 0) {
      if (((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0) ||
         (uVar8 = FUN_1004d420(param_1), (uVar8 & 1) == 0)) {
        uVar10 = 8;
      }
      else {
        uVar10 = 0x80000;
      }
      *puVar1 = uVar10 | *puVar1;
    }
  }
  return;
}

