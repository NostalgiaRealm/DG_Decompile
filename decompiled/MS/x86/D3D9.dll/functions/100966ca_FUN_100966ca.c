/*
 * FUN_100966ca at 100966ca
 * undefined __thiscall FUN_100966ca(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 100966ca-100967e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100966ca(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar2 = MXCSR;
  puVar9 = param_3;
  puVar10 = (undefined4 *)((int)this + param_2 * 0x10 + 0x6868);
  for (iVar4 = param_4 << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  MXCSR = 0x3fc0;
  if (*(char *)((int)this + 0x11) == '\0') {
    uVar3 = param_4 + param_2;
    puVar9 = (undefined4 *)((param_2 + 0xc13) * 0x10 + (int)this);
    for (iVar4 = param_4 << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *param_3;
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 1;
    }
    if (param_1 != 0) {
      iVar4 = 0;
      sVar1 = *(short *)(param_1 + 0x1d0);
      while (sVar1 != -1) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x1d0 + iVar4 * 2);
        uVar5 = (uint)*(ushort *)(param_1 + 0x1d2 + iVar4 * 2);
        if (uVar3 < uVar8) break;
        if (param_2 <= uVar5) {
          if (uVar8 < param_2) {
            uVar8 = param_2;
          }
          uVar6 = uVar3;
          if (uVar5 < uVar3) {
            uVar6 = uVar5;
          }
          puVar9 = (undefined4 *)((uVar8 + 0x1a) * 0x10 + *(int *)(param_1 + 8));
          puVar10 = (undefined4 *)((uVar8 + 0xc13) * 0x10 + (int)this);
          for (iVar7 = (uVar6 - uVar8) * 4; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        iVar4 = iVar4 + 2;
        sVar1 = *(short *)(param_1 + 0x1d0 + iVar4 * 2);
      }
    }
    iVar4 = (param_2 + 0xc13) * 0x10;
  }
  else {
    iVar4 = param_2 * 0x10 + 0x6868;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 200))(param_2,param_4 + param_2,iVar4 + (int)this);
  MXCSR = uVar2;
  return;
}

