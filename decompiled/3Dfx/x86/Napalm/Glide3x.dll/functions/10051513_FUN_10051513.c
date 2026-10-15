/*
 * FUN_10051513 at 10051513
 * undefined __thiscall FUN_10051513(void * this, uint * param_1)
 * Address ranges: 10051513-10051575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10051513(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = FUN_100515b0(this,uVar2,uVar1);
  uVar4 = *(uint *)((int)this + 8);
  if (uVar3 != uVar4) {
    if ((*(uint *)(uVar3 * 0x18 + *(int *)((int)this + 4)) == uVar2) &&
       (*(uint *)(uVar3 * 0x18 + 4 + *(int *)((int)this + 4)) == uVar1)) {
      while (uVar3 = uVar3 + 1, uVar3 < uVar4) {
        puVar6 = (undefined4 *)(uVar3 * 0x18 + *(int *)((int)this + 4));
        puVar7 = puVar6 + -6;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        uVar4 = *(uint *)((int)this + 8);
      }
      *(uint *)((int)this + 8) = uVar4 - 1;
    }
  }
  return;
}

