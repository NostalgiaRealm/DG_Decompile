/*
 * FUN_10068128 at 10068128
 * undefined FUN_10068128(void)
 * Address ranges: 10068128-1006839b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068128(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  code *extraout_w11;
  undefined4 uVar9;
  undefined2 uStack_44;
  undefined2 uStack_42;
  
  uVar9 = 0x80070057;
  if (param_2 != 0) {
    uVar9 = 0x887602ef;
    if (*(int *)(param_3 + 0x9c) == 0) {
      piVar1 = (int *)(param_1 + 0x8c);
      uStack_44 = (undefined2)param_3;
      uStack_42 = (undefined2)((uint)param_3 >> 0x10);
      puVar2 = (uint *)(param_1 + 0x94);
      puVar3 = (uint *)(param_1 + 0x90);
      uVar6 = *puVar2;
      if (*puVar3 == uVar6) {
        uVar5 = uVar6 << 1;
        if (uVar6 == 0) {
          uVar5 = 0x10;
        }
        iVar7 = uVar5 * 8;
        if (uVar5 >> 0x1d != 0) {
          iVar7 = -1;
        }
        iVar7 = FUN_10081da0(iVar7);
        if (iVar7 == 0) {
          return 0x80004005;
        }
        FUN_10081ee0(iVar7,*piVar1,((ulonglong)*puVar2 & 0x1fffffff) << 3);
        FUN_10081dc0(*piVar1);
        *piVar1 = iVar7;
        *puVar2 = uVar5;
      }
      piVar4 = (int *)(param_1 + 0x98);
      *(ulonglong *)(*piVar1 + *puVar3 * 8) = CONCAT26(uStack_42,CONCAT24(uStack_44,param_2));
      *puVar3 = *puVar3 + 1;
      if (*(uint *)(param_1 + 0x9c) != 0) {
        uVar6 = 0;
        do {
          if (*(char *)(*piVar4 + 5 + uVar6 * 8) == '\0') {
            *(int *)(*piVar4 + uVar6 * 8) = *(int *)(param_1 + 0x90) + -1;
            *(undefined1 *)(*piVar4 + uVar6 * 8 + 4) = 1;
            *(undefined1 *)(*piVar4 + uVar6 * 8 + 5) = 1;
            goto LAB_100682e4;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x9c));
      }
      piVar1 = (int *)(param_1 + 0x90);
      iVar7 = *piVar1;
      puVar2 = (uint *)(param_1 + 0xa0);
      puVar3 = (uint *)(param_1 + 0x9c);
      uVar6 = *puVar2;
      if (*puVar3 == uVar6) {
        uVar5 = uVar6 << 1;
        if (uVar6 == 0) {
          uVar5 = 0x10;
        }
        iVar8 = uVar5 * 8;
        if (uVar5 >> 0x1d != 0) {
          iVar8 = -1;
        }
        iVar8 = FUN_10081da0(iVar8);
        if (iVar8 == 0) {
          if (*piVar1 == 0) {
            return 0x80004005;
          }
          *piVar1 = *piVar1 + -1;
          return 0x80004005;
        }
        FUN_10081ee0(iVar8,*piVar4,((ulonglong)*puVar2 & 0x1fffffff) << 3);
        FUN_10081dc0(*piVar4);
        *piVar4 = iVar8;
        *puVar2 = uVar5;
      }
      *(ulonglong *)(*piVar4 + *puVar3 * 8) = CONCAT26(uStack_42,CONCAT24(0x101,iVar7 + -1));
      *puVar3 = *puVar3 + 1;
LAB_100682e4:
      uVar9 = 0;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(param_2);
      *(int *)(param_3 + 0x9c) = param_1;
      *(undefined1 *)(param_1 + 0xd3) = 1;
    }
  }
  return uVar9;
}

