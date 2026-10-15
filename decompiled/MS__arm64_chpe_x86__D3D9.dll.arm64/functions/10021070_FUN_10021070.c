/*
 * FUN_10021070 at 10021070
 * undefined FUN_10021070(void)
 * Address ranges: 10021070-1002128f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021070(int param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code *extraout_w11;
  uint uVar9;
  int local_348 [194];
  
  puVar1 = (uint *)(param_1 + 100);
  if (*(char *)(param_1 + 0x6d) == '\0') {
    uVar6 = 0;
    if (*puVar1 != 0) {
      do {
        uVar7 = 0;
        while( true ) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x30);
          if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
            uVar8 = 1;
          }
          if (uVar8 <= uVar7) break;
          iVar3 = *(int *)(*(int *)(param_2 + (uVar7 + uVar6 * 0x10) * 4) + 4);
          FUN_10040c08(iVar3);
          FUN_100404a8(iVar3 + 0x4c);
          uVar7 = uVar7 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *puVar1);
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar6 = 1;
    }
    FUN_101325d0(local_348,0,0x300);
    uVar8 = *puVar1;
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        if (uVar6 != 0) {
          uVar9 = 0;
          do {
            iVar3 = *(int *)(*(int *)(param_2 + uVar7 * 0x40 + uVar9 * 4) + 4);
            local_348[uVar7 * uVar6 * 2 + uVar9 * 2] = *(int *)(iVar3 + 0x20);
            iVar4 = uVar9 * 2;
            uVar9 = uVar9 + 1;
            local_348[uVar7 * uVar6 * 2 + iVar4 + 1] = *(int *)(iVar3 + 0x10);
          } while (uVar9 < uVar6);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
      uVar6 = 0;
      do {
        uVar7 = 0;
        while( true ) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x30);
          if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
            uVar8 = 1;
          }
          if (uVar8 <= uVar7) break;
          iVar3 = *(int *)(*(int *)(param_2 + (uVar7 + uVar6 * 0x10) * 4) + 4);
          FUN_10040c08(iVar3);
          FUN_100404a8(iVar3 + 0x4c);
          uVar7 = uVar7 + 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *puVar1);
    }
    piVar2 = local_348;
    if (local_348[0] == 0) {
      piVar2 = (int *)0x0;
    }
    uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_1 + 0x44),piVar2);
    (*extraout_w11)(uVar5);
    *(char *)(param_1 + 0x6d) = '\0';
  }
  *(undefined1 *)(param_1 + 0x32) = 0;
  return;
}

