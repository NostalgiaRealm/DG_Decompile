/*
 * FUN_100965aa at 100965aa
 * undefined __thiscall FUN_100965aa(void * this, int param_1, uint param_2, undefined4 * param_3, int param_4)
 * Address ranges: 100965aa-100966c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100965aa(void *this,int param_1,uint param_2,undefined4 *param_3,int param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar3 = param_2;
  uVar2 = MXCSR;
  puVar8 = param_3;
  puVar10 = (undefined4 *)((int)this + param_2 * 0x10 + 0x52ac);
  for (iVar5 = param_4 << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar10 = puVar10 + 1;
  }
  MXCSR = 0x3fc0;
  if (*(char *)((int)this + 0x11) == '\0') {
    uVar4 = param_4 + param_2;
    puVar8 = (undefined4 *)((param_2 + 0xb33) * 0x10 + (int)this);
    for (iVar5 = param_4 << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *param_3;
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 1;
    }
    if (param_1 != 0) {
      param_2 = 0;
      sVar1 = *(short *)(param_1 + 0xc);
      while (sVar1 != -1) {
        uVar9 = (uint)*(ushort *)(param_1 + 0xc + param_2 * 2);
        uVar6 = (uint)*(ushort *)(param_1 + 0xe + param_2 * 2);
        if (uVar4 < uVar9) break;
        if (uVar3 <= uVar6) {
          if (uVar9 < uVar3) {
            uVar9 = uVar3;
          }
          uVar7 = uVar4;
          if (uVar6 < uVar4) {
            uVar7 = uVar6;
          }
          puVar8 = (undefined4 *)(*(int *)(param_1 + 8) + uVar9 * 0x10 + 0x414);
          puVar10 = (undefined4 *)((uVar9 + 0xb33) * 0x10 + (int)this);
          for (iVar5 = (uVar7 - uVar9) * 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        param_2 = param_2 + 2;
        sVar1 = *(short *)(param_1 + 0xc + param_2 * 2);
      }
    }
    iVar5 = (uVar3 + 0xb33) * 0x10;
  }
  else {
    iVar5 = param_2 * 0x10 + 0x52ac;
  }
  (**(code **)(**(int **)((int)this + 0x14) + 0x98))(uVar3,param_4 + uVar3,iVar5 + (int)this);
  MXCSR = uVar2;
  return;
}

