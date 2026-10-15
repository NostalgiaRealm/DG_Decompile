/*
 * FUN_1009637c at 1009637c
 * undefined __thiscall FUN_1009637c(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 1009637c-100964aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009637c(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar4 = param_2;
  uVar3 = MXCSR;
  puVar8 = param_3;
  puVar10 = (undefined4 *)((int)this + param_2 * 0x10 + 0x67e8);
  for (iVar5 = param_4 << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  MXCSR = 0x3fc0;
  puVar8 = (undefined4 *)((param_2 + 0xb04) * 0x10 + (int)this);
  for (iVar5 = param_4 << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar1 = param_2 + param_4;
  if (param_1 != 0) {
    param_2 = 0;
    sVar2 = *(short *)(param_1 + 0x810);
    while (sVar2 != -1) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x810 + param_2 * 2);
      uVar6 = (uint)*(ushort *)(param_1 + 0x812 + param_2 * 2);
      if (uVar1 < uVar9) break;
      if (uVar4 <= uVar6) {
        if (uVar9 < uVar4) {
          uVar9 = uVar4;
        }
        uVar7 = uVar1;
        if (uVar6 < uVar1) {
          uVar7 = uVar6;
        }
        puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + uVar9 * 0x10 + 0x48d8);
        puVar10 = (undefined4 *)((uVar9 + 0xb04) * 0x10 + (int)this);
        for (iVar5 = (uVar7 - uVar9) * 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      param_2 = param_2 + 2;
      sVar2 = *(short *)(param_1 + 0x810 + param_2 * 2);
    }
  }
  if (*(char *)((int)this + 0x11) == '\0') {
    iVar5 = (uVar4 + 0xb04) * 0x10;
  }
  else {
    iVar5 = uVar4 * 0x10 + 0x67e8;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0xc0))(uVar4,uVar4 + param_4,iVar5 + (int)this);
  MXCSR = uVar3;
  return;
}

