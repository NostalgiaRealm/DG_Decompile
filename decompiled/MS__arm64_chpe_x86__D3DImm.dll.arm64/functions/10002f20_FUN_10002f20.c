/*
 * FUN_10002f20 at 10002f20
 * undefined FUN_10002f20(void)
 * Address ranges: 10002f20-100030cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002f20(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar10;
  int local_20 [4];
  
  piVar1 = (int *)(param_1 + 0x178);
  uVar10 = 0;
  while (piVar3 = (int *)(*piVar1 + uVar10 * 4), *piVar3 != param_2) {
    uVar10 = uVar10 + 1;
    if (7 < uVar10) {
      if ((uVar10 == 8) && (8 < *(uint *)(param_1 + 0x17c))) {
        uVar10 = 8;
        do {
          if (*(int *)(*piVar1 + uVar10 * 4) == param_2) {
            puVar2 = (uint *)(param_1 + 0x17c);
            uVar9 = *puVar2;
            if (uVar9 <= uVar10) {
              return;
            }
            uVar10 = uVar10 + 1;
            if (uVar10 < uVar9) {
              do {
                puVar4 = (undefined4 *)(*piVar1 + uVar10 * 4);
                uVar10 = uVar10 + 1;
                puVar4[-1] = *puVar4;
                uVar9 = *puVar2;
              } while (uVar10 < uVar9);
            }
            *puVar2 = uVar9 - 1;
            return;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(param_1 + 0x17c));
      }
      return;
    }
  }
  local_20[0] = param_2;
  if (*(uint *)(param_1 + 0x17c) < 9) {
    *piVar3 = -1;
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar6,uVar10,0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x17c);
  uVar6 = 0xffffffff;
  if (iVar5 != 0) {
    iVar5 = iVar5 + -1;
    *(int *)(param_1 + 0x17c) = iVar5;
    uVar6 = *(undefined4 *)(*piVar1 + iVar5 * 4);
  }
  *(undefined4 *)(*piVar1 + uVar10 * 4) = uVar6;
  uVar7 = FUN_10005bc0(param_1 + 0x14c,local_20);
  uVar8 = uVar7 & 0xffffffff;
  if ((int)uVar7 == 0) {
    return;
  }
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar6,uVar10,uVar8 & 0xffffffff);
  return;
}

