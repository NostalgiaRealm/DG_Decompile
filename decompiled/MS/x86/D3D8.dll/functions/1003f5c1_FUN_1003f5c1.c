/*
 * FUN_1003f5c1 at 1003f5c1
 * undefined4 __thiscall FUN_1003f5c1(void * this, undefined4 * param_1)
 * Address ranges: 1003f5c1-1003f648
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003f5c1(void *this,undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 local_5;
  
  local_5 = 0;
  uVar8 = FUN_1003f794(param_1);
  uVar1 = (uint)uVar8;
  uVar5 = uVar1 & 0x7fffffff;
  for (uVar4 = *(uint *)((int)this + 8); uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar1 = *(uint *)(*(int *)this + -0x18 + uVar4 * 0x18) & 0x7fffffff;
    if (uVar1 == uVar5) {
      uVar1 = *(uint *)((int)this + 8);
      uVar3 = uVar4;
      if (uVar4 < uVar1) {
        do {
          puVar6 = (undefined4 *)(uVar3 * 0x18 + *(int *)this);
          uVar3 = uVar3 + 1;
          puVar7 = puVar6 + -6;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar1 = *(uint *)((int)this + 8);
        } while (uVar3 < uVar1);
      }
      uVar1 = uVar1 - 1;
      local_5 = 1;
      *(uint *)((int)this + 8) = uVar1;
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),local_5);
}

