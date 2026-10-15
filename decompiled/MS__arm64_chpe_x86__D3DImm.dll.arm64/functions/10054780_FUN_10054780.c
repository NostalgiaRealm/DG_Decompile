/*
 * FUN_10054780 at 10054780
 * undefined FUN_10054780(void)
 * Address ranges: 10054780-10054897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054780(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  code *extraout_w11;
  undefined4 uVar5;
  undefined1 auStack_40 [8];
  int local_38;
  undefined4 uStack_34;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_40);
  uVar5 = 0x80070057;
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x84) == 0) {
      uVar1 = *(uint *)(param_1 + 0x1528);
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = 0;
        do {
          if (*(int *)(*(int *)(param_1 + 0x1524) + uVar4 * 8) == param_3) goto LAB_10054868;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      if (uVar4 == uVar1) {
        uVar5 = 0x8007000e;
        local_38 = param_3;
        uStack_34 = param_2;
        uVar3 = FUN_100593d0(param_1 + 0x1524,&local_38);
        if ((uVar3 & 1) != 0) {
          (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(param_2);
          *(int *)(param_3 + 0x84) = param_1;
          uVar5 = 0;
        }
      }
    }
  }
LAB_10054868:
  FUN_10096790(auStack_40);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar5;
}

