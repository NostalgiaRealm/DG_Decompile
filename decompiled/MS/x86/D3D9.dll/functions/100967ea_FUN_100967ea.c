/*
 * FUN_100967ea at 100967ea
 * undefined __thiscall FUN_100967ea(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 100967ea-100968e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100967ea(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar2 = MXCSR;
  MXCSR = 0x3fc0;
  puVar8 = param_3;
  puVar10 = (undefined4 *)((int)this + (param_2 + 0x1a0a) * 4);
  for (iVar4 = param_4; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  if (*(char *)((int)this + 0x11) == '\0') {
    uVar3 = param_4 + param_2;
    puVar8 = (undefined4 *)((int)this + (param_2 + 0x308c) * 4);
    for (iVar4 = param_4; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *param_3;
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 1;
    }
    if (param_1 != 0) {
      iVar4 = 0;
      sVar1 = *(short *)(param_1 + 500);
      while (sVar1 != -1) {
        uVar9 = (uint)*(ushort *)(param_1 + 500 + iVar4 * 2);
        uVar7 = (uint)*(ushort *)(param_1 + 0x1f6 + iVar4 * 2);
        if (uVar3 < uVar9) break;
        if (param_2 <= uVar7) {
          if (uVar9 < param_2) {
            uVar9 = param_2;
          }
          uVar5 = uVar3;
          if (uVar7 < uVar3) {
            uVar5 = uVar7;
          }
          puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + 0x2b0 + uVar9 * 4);
          puVar10 = (undefined4 *)((int)this + (uVar9 + 0x308c) * 4);
          for (iVar6 = uVar5 - uVar9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        iVar4 = iVar4 + 2;
        sVar1 = *(short *)(param_1 + 500 + iVar4 * 2);
      }
    }
    iVar4 = param_2 + 0x308c;
  }
  else {
    iVar4 = param_2 + 0x1a0a;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0xcc))
            (param_2,param_4 + param_2,(void *)((int)this + iVar4 * 4));
  MXCSR = uVar2;
  return;
}

