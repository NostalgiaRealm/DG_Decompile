/*
 * FUN_100548b0 at 100548b0
 * undefined FUN_100548b0(void)
 * Address ranges: 100548b0-10054a13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100548b0(int param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *extraout_w11;
  uint uVar6;
  undefined1 auStack_40 [16];
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_40);
  uVar4 = 0x80070057;
  if ((param_3 != 0) && (*(int *)(param_3 + 0x84) != 0)) {
    uVar4 = 0x88760082;
    if (*(uint *)(param_1 + 0x1528) != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x1524) + uVar6 * 8) == param_3) {
          *(int *)(param_3 + 0x84) = 0;
          uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
          (*extraout_w11)(uVar4);
          puVar1 = (uint *)(param_1 + 0x1528);
          uVar5 = *puVar1;
          if (uVar6 < uVar5) {
            uVar6 = uVar6 + 1;
            if (uVar6 < uVar5) {
              do {
                puVar2 = (undefined8 *)(*(int *)(param_1 + 0x1524) + uVar6 * 8);
                uVar6 = uVar6 + 1;
                puVar2[-1] = *puVar2;
                uVar5 = *puVar1;
              } while (uVar6 < uVar5);
            }
            *puVar1 = uVar5 - 1;
          }
          uVar4 = 0;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x1528));
    }
  }
  FUN_10096790(auStack_40);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar4;
}

