/*
 * FUN_100964ab at 100964ab
 * undefined __thiscall FUN_100964ab(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 100964ab-100965a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100964ab(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar2 = MXCSR;
  MXCSR = 0x3fc0;
  puVar8 = param_3;
  puVar10 = (undefined4 *)((int)this + (param_2 + 0x19ea) * 4);
  for (iVar4 = param_4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar8 = (undefined4 *)((int)this + (param_2 + 0x2c50) * 4);
  for (iVar4 = param_4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *param_3;
    param_3 = param_3 + 1;
    puVar8 = puVar8 + 1;
  }
  uVar3 = param_4 + param_2;
  if (param_1 != 0) {
    iVar4 = 0;
    sVar1 = *(short *)(param_1 + 0x834);
    while (sVar1 != -1) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x834 + iVar4 * 2);
      uVar5 = (uint)*(ushort *)(param_1 + 0x836 + iVar4 * 2);
      if (uVar3 < uVar9) break;
      if (param_2 <= uVar5) {
        if (uVar9 < param_2) {
          uVar9 = param_2;
        }
        uVar6 = uVar3;
        if (uVar5 < uVar3) {
          uVar6 = uVar5;
        }
        puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0x49e8 + uVar9 * 4);
        puVar10 = (undefined4 *)((uVar9 + 0xb14) * 0x10 + (int)this);
        for (iVar7 = uVar6 - uVar9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      iVar4 = iVar4 + 2;
      sVar1 = *(short *)(param_1 + 0x834 + iVar4 * 2);
    }
  }
  iVar4 = param_2 + 0x2c50;
  if (*(char *)((int)this + 0x11) != '\0') {
    iVar4 = param_2 + 0x19ea;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0xc4))
            (param_2,param_4 + param_2,(void *)((int)this + iVar4 * 4));
  MXCSR = uVar2;
  return;
}

