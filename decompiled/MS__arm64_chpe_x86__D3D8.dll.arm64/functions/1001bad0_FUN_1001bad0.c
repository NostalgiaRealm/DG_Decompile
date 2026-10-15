/*
 * FUN_1001bad0 at 1001bad0
 * undefined FUN_1001bad0(void)
 * Address ranges: 1001bad0-1001bcdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001bad0(int param_1,int param_2)

{
  uint *puVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  code *extraout_w11;
  uint uVar10;
  uint uVar11;
  int local_348 [194];
  
  puVar1 = (uint *)(param_1 + 100);
  uVar11 = *puVar1;
  if (*(char *)(param_1 + 0x6d) == '\0') {
    uVar9 = 0;
    if (uVar11 != 0) {
      do {
        uVar11 = 0;
        if (*(ushort *)(param_1 + 0x30) != 0) {
          do {
            iVar6 = *(int *)(*(int *)(param_2 + uVar9 * 0x40 + uVar11 * 4) + 4);
            FUN_10036d08(iVar6);
            FUN_100365a8(iVar6 + 0x4c);
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(ushort *)(param_1 + 0x30));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
  }
  else {
    puVar2 = (ushort *)(param_1 + 0x30);
    uVar5 = *puVar2;
    FUN_100ff690(local_348,0,0x300);
    uVar9 = 0;
    if (uVar11 != 0) {
      do {
        if (uVar5 != 0) {
          iVar6 = uVar9 * uVar5;
          uVar10 = 0;
          do {
            iVar4 = *(int *)(*(int *)(param_2 + uVar9 * 0x40 + uVar10 * 4) + 4);
            local_348[iVar6 * 2 + uVar10 * 2] = *(int *)(iVar4 + 0x20);
            iVar7 = uVar10 * 2;
            uVar10 = uVar10 + 1;
            local_348[iVar6 * 2 + iVar7 + 1] = *(int *)(iVar4 + 0x10);
          } while (uVar10 < uVar5);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar11);
      uVar11 = 0;
      do {
        uVar9 = 0;
        if (*puVar2 != 0) {
          do {
            iVar6 = *(int *)(*(int *)(param_2 + uVar11 * 0x40 + uVar9 * 4) + 4);
            FUN_10036d08(iVar6);
            FUN_100365a8(iVar6 + 0x4c);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *puVar2);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar1);
    }
    piVar3 = local_348;
    if (local_348[0] == 0) {
      piVar3 = (int *)0x0;
    }
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x44),piVar3);
    (*extraout_w11)(uVar8);
    *(char *)(param_1 + 0x6d) = '\0';
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

