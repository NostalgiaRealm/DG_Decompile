/*
 * FUN_10046968 at 10046968
 * undefined FUN_10046968(void)
 * Address ranges: 10046968-10046b0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10046968(int param_1,undefined4 param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  code *extraout_w11;
  undefined4 uVar8;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar8 = 0x80070057;
  if ((((param_4 != (undefined4 *)0x0) && (*param_4 = 0, param_3 != (uint *)0x0)) &&
      (uVar8 = 0x88760064, (*param_3 & 0x3800401) == 0)) &&
     (uVar8 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) {
    uVar4 = *(uint *)(param_1 + 0x110);
    uVar7 = (ulonglong)uVar4;
    uVar6 = 0;
    uVar5 = 0;
    if (((uVar4 != 0) && (uVar3 = FUN_1004cb00(uVar4 + 0x1b8,param_3), (uVar3 & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x1bc) & 0xfe00) != 0x200)) {
      uVar6 = uVar7 & 0xffffffff;
      uVar5 = 1;
    }
    uVar4 = 0;
    do {
      iVar2 = (int)uVar5;
      if ((int)uVar6 != 0) break;
      uVar1 = *(uint *)(param_1 + uVar4 * 4 + 0x120);
      uVar7 = (ulonglong)uVar1;
      if (((uVar1 != 0) && (uVar3 = FUN_1004cb00(uVar1 + 0x1b8,param_3), (uVar3 & 1) != 0)) &&
         ((*(uint *)((int)uVar7 + 0x1bc) & 0xfe00) != 0x200)) {
        uVar6 = uVar7 & 0xffffffff;
        uVar5 = (ulonglong)((int)uVar5 + 1);
      }
      iVar2 = (int)uVar5;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 5);
    uVar4 = *(uint *)(param_1 + 0x118);
    uVar5 = (ulonglong)uVar4;
    uVar8 = 0x887600ff;
    if ((uVar4 == 0) || (uVar7 = FUN_1004cb00(uVar4 + 0x1b8,param_3), (uVar7 & 1) == 0)) {
      if ((int)uVar6 == 0) goto LAB_10046ae8;
    }
    else {
      uVar6 = uVar5 & 0xffffffff;
      iVar2 = iVar2 + 1;
    }
    if (iVar2 == 1) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar2 = (*extraout_w11)(uVar6 & 0xffffffff,param_2,param_4,0);
      uVar8 = 0;
      if (iVar2 != 0) {
        uVar8 = 0x80004005;
      }
    }
  }
LAB_10046ae8:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar8;
}

