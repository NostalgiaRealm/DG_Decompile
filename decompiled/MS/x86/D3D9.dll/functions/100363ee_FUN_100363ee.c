/*
 * FUN_100363ee at 100363ee
 * undefined1 __thiscall FUN_100363ee(void * this, undefined4 * param_1)
 * Address ranges: 100363ee-1003647c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100363ee(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 local_5;
  
  local_5 = 0;
  uVar8 = FUN_10036e49(param_1);
  for (uVar5 = *(uint *)((int)this + 8); uVar5 != 0; uVar5 = uVar5 - 1) {
    if ((*(uint *)(*(int *)this + -0x18 + uVar5 * 0x18) & 0x7fffffff) == ((uint)uVar8 & 0x7fffffff))
    {
      piVar1 = *(int **)(*(int *)this + -4 + uVar5 * 0x18);
      (**(code **)(*piVar1 + 8))(piVar1);
      uVar2 = *(uint *)((int)this + 8);
      uVar4 = uVar5;
      if (uVar5 < uVar2) {
        do {
          puVar6 = (undefined4 *)(uVar4 * 0x18 + *(int *)this);
          uVar4 = uVar4 + 1;
          puVar7 = puVar6 + -6;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          uVar2 = *(uint *)((int)this + 8);
        } while (uVar4 < uVar2);
      }
      *(uint *)((int)this + 8) = uVar2 - 1;
      local_5 = 1;
    }
  }
  return local_5;
}

