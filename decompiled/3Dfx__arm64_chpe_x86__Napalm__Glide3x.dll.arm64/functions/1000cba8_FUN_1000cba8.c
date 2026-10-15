/*
 * FUN_1000cba8 at 1000cba8
 * undefined FUN_1000cba8(void)
 * Address ranges: 1000cba8-1000cd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000cba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  int extraout_w10;
  int extraout_w10_00;
  int iVar9;
  int *extraout_w11;
  int *extraout_w11_00;
  int *piVar10;
  code *extraout_w11_01;
  uint *extraout_w12;
  uint *extraout_w12_00;
  uint *puVar11;
  undefined1 auVar12 [16];
  
  piVar10 = (int *)(param_1 + 0xc);
  iVar9 = *piVar10;
  iVar1 = *(int *)(iVar9 + 0x191);
  bVar5 = *(int *)(iVar9 + 0x199) == 1;
  bVar6 = *(int *)(iVar9 + 0x199) == 0xf;
  if (((((iVar1 == 1 || iVar1 == 0xf) && (*(int *)(iVar9 + 0x195) != 0)) ||
       ((bVar5 || bVar6 && (*(int *)(iVar9 + 0x19d) != 0)))) ||
      ((*(int *)(iVar9 + 0x1a1) == 1 || *(int *)(iVar9 + 0x1a1) == 0xf ||
       (*(int *)(iVar9 + 0x1a9) == 1 || *(int *)(iVar9 + 0x1a9) == 0xf)))) ||
     (((*(int *)(iVar9 + 0x169) == 1 || *(int *)(iVar9 + 0x169) == 0xf &&
       (*(int *)(iVar9 + 0x16d) != 0)) ||
      ((((*(int *)(iVar9 + 0x171) == 1 || *(int *)(iVar9 + 0x171) == 0xf &&
         (*(int *)(iVar9 + 0x175) != 0)) ||
        (iVar2 = *(int *)(iVar9 + 0x179), iVar2 == 1 || iVar2 == 0xf)) ||
       (((iVar3 = *(int *)(iVar9 + 0x181), iVar3 == 1 || iVar3 == 0xf ||
         (iVar2 == 2 && (bVar5 || bVar6))) ||
        ((iVar2 == 3 && (iVar1 == 1 || iVar1 == 0xf) || (uVar7 = 0, iVar3 == 2 && (bVar5 || bVar6)))
        )))))))) {
    uVar7 = 1;
  }
  puVar11 = (uint *)(iVar9 + 0x3cc);
  *puVar11 = uVar7;
  if (uVar7 == 1) {
    uVar8 = FUN_10010cf8(param_1,iVar9 + 0x1f2);
    uVar7 = ((uint)uVar8 & 0xff) + 1;
    *extraout_w12 = uVar7;
    iVar9 = extraout_w10;
    puVar11 = extraout_w12;
    piVar10 = extraout_w11;
    if (uVar7 == 2) {
      uVar7 = FUN_10010cf8(uVar8,extraout_w10 + 0x28f);
      uVar7 = (uVar7 & 0xff) + 2;
      *extraout_w12_00 = uVar7;
      iVar9 = extraout_w10_00;
      puVar11 = extraout_w12_00;
      piVar10 = extraout_w11_00;
    }
  }
  uVar4 = *(uint *)(*(int *)(iVar9 + 4) + 0x33);
  if (uVar4 < uVar7) {
    *puVar11 = uVar4;
    uVar7 = uVar4;
  }
  auVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(*piVar10,uVar7);
  (*extraout_w11_01)(auVar12._0_8_ & 0xffffffff,auVar12._8_8_ & 0xffffffff);
  return;
}

