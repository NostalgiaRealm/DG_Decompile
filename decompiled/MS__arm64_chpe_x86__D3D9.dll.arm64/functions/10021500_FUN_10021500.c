/*
 * FUN_10021500 at 10021500
 * undefined FUN_10021500(void)
 * Address ranges: 10021500-100216c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10021500(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*(int *)(param_1 + 0x60) == 1) && (puVar1 = (uint *)(param_1 + 0x48), *puVar1 == 0)) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x30);
    if ((*(uint *)(param_1 + 0x54) & 0x400) != 0) {
      uVar9 = 1;
    }
    iVar6 = FUN_100212a0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),uVar9,1,
                         *(undefined4 *)(param_1 + 0x58));
    puVar2 = (uint *)(param_1 + 100);
    uVar10 = *puVar2;
    iVar7 = FUN_101321c0(uVar10 * iVar6 + 0x2c);
    uVar11 = iVar7 + 0x23U & 0xffffffe0;
    *(int *)(uVar11 - 4) = iVar7;
    *puVar1 = uVar11;
    FUN_101325d0(uVar11,0,uVar10 * iVar6 + 8);
    uVar11 = 0;
    if (*puVar2 != 0) {
      do {
        uVar10 = 0;
        uVar4 = *puVar1;
        if (uVar9 != 0) {
          do {
            iVar8 = FUN_100212a0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50),
                                 uVar10,1,*(undefined4 *)(param_1 + 0x58));
            iVar7 = uVar10 * 4 + uVar11 * 0x40;
            uVar10 = uVar10 + 1;
            iVar5 = *(int *)(*(int *)(iVar7 + *(int *)(param_1 + 0x38)) + 4);
            *(undefined4 *)(iVar5 + 0xb4) = 0;
            *(uint *)(iVar5 + 0x20) = iVar8 + uVar4 + uVar11 * iVar6;
            *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | 0x28;
            puVar3 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar7) + 4) + 0x34);
            *puVar3 = *puVar3 | 1;
          } while (uVar10 < uVar9);
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *puVar2);
    }
  }
  return 1;
}

