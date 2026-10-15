/*
 * FUN_1003e7c9 at 1003e7c9
 * uint __thiscall FUN_1003e7c9(void * this, uint param_1)
 * Address ranges: 1003e7c9-1003e805
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003e7c9(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)((int)this + 4);
  if (param_1 < uVar1) {
    uVar3 = param_1 + 1;
    if (uVar3 < uVar1) {
      do {
        puVar4 = (undefined4 *)(uVar3 * 0x74 + *(int *)this);
        uVar3 = uVar3 + 1;
        puVar5 = puVar4 + -0x1d;
        for (iVar2 = 0x1d; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar1 = *(uint *)((int)this + 4);
      } while (uVar3 < uVar1);
    }
    *(uint *)((int)this + 4) = uVar1 - 1;
    uVar1 = CONCAT31((int3)(uVar1 - 1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

