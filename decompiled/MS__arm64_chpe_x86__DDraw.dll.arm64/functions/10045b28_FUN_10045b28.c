/*
 * FUN_10045b28 at 10045b28
 * undefined FUN_10045b28(void)
 * Address ranges: 10045b28-10045e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10045b28(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  code *extraout_w11;
  undefined4 uVar9;
  
  uVar9 = 0x8876000a;
  if ((((*(int *)(param_1 + 0x15c) == *(int *)(param_3 + 0x15c)) &&
       (*(int *)(param_1 + 0x158) == *(int *)(param_3 + 0x158))) &&
      (uVar6 = FUN_1004cb90(param_1 + 0x198,param_3 + 0x198,0), (uVar6 & 1) != 0)) &&
     ((puVar1 = (uint *)(param_3 + 0x1b8), (*puVar1 & 100) == 4 || (*puVar1 & 100) == 0x40 &&
      (*(int *)(param_3 + 0x110) == 0)))) {
    bVar4 = FUN_10003be0(*(int *)(param_3 + 4));
    if (bVar4 != 0) {
      uVar6 = FUN_10039570(*(undefined4 *)(param_1 + 0xfc));
      if (((*(uint *)(param_1 + 0x1b8) & 0x2001) == 0) || (bVar3 = true, (*puVar1 & 0x2001) != 0)) {
        bVar3 = false;
      }
      if (((uVar6 & 1) == 0) || (bVar3)) {
        if (bVar3) {
          *puVar1 = *puVar1 | 0x2000;
        }
        if (*(int *)(*(int *)(*(int *)(param_3 + 4) + 0x50) + 4) != 2) {
          bVar4 = FUN_1004b5c0(param_1,param_3);
        }
      }
      if (((*(uint *)(param_1 + 0x1b8) & 0x2001) != 0) || (bVar3 = true, (*puVar1 & 0x2001) == 0)) {
        bVar3 = false;
      }
      if (((uVar6 & 1) == 0) || (bVar3)) {
        iVar7 = param_1;
        if (bVar4 == 0) {
          return 0x8876000a;
        }
        for (; *(int *)(iVar7 + 0x10c) != 0; iVar7 = *(int *)(iVar7 + 0x10c)) {
        }
        do {
          if (bVar3) {
            *(uint *)(iVar7 + 0x1b8) = *(uint *)(iVar7 + 0x1b8) | 0x2000;
          }
          bVar5 = FUN_1004b5c0(param_1,iVar7);
          bVar4 = bVar5 & bVar4;
          iVar7 = *(int *)(iVar7 + 0x110);
        } while (iVar7 != 0);
      }
      if (bVar4 != 0) {
        piVar2 = (int *)(param_1 + 0x110);
        *(int *)(param_3 + 0x110) = *piVar2;
        *(undefined4 *)(param_3 + 0x114) = *(undefined4 *)(param_1 + 0x114);
        if (*piVar2 != 0) {
          *(int *)(*piVar2 + 0x10c) = param_3;
        }
        *(undefined4 *)(param_1 + 0x114) = param_2;
        *piVar2 = param_3;
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(param_2);
        *(int *)(param_3 + 0x10c) = param_1;
        *(undefined1 *)(param_3 + 0x32) = 1;
        for (; *(int *)(param_1 + 0x10c) != 0; param_1 = *(int *)(param_1 + 0x10c)) {
        }
        if ((*(uint *)(param_1 + 0x1b8) >> 3 & 1) != 0) {
          *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + 1;
        }
        iVar7 = 0;
        do {
          uVar8 = *(uint *)(param_1 + 0x1b8);
          if (iVar7 == 0) {
            uVar8 = uVar8 | 0x30;
          }
          else if (iVar7 == 1) {
            uVar8 = uVar8 | 0x14;
          }
          else {
            uVar8 = uVar8 & 0xffffffdb | 0x10;
          }
          *(uint *)(param_1 + 0x1b8) = uVar8;
          param_1 = *(int *)(param_1 + 0x110);
          iVar7 = iVar7 + 1;
        } while (param_1 != 0);
        uVar9 = 0;
      }
    }
  }
  return uVar9;
}

