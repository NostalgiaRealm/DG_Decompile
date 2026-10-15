/*
 * FUN_100b67a2 at 100b67a2
 * uint __thiscall FUN_100b67a2(void * this, uint * param_1)
 * Address ranges: 100b67a2-100b682e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100b67a2(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_100b64fd(param_1);
  uVar5 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar1 = (uint)uVar9;
  uVar2 = FUN_100b6997(this,uVar1,uVar5);
  uVar3 = uVar2;
  if (uVar2 != *(uint *)((int)this + 8)) {
    iVar4 = *(int *)this;
    iVar6 = uVar2 * 0x38;
    uVar3 = uVar1;
    if (((*(uint *)(iVar6 + iVar4) == uVar1) &&
        (uVar3 = uVar5, *(uint *)(iVar6 + 4 + iVar4) == uVar5)) &&
       (uVar3 = FUN_100b649c(param_1,(uint *)(iVar4 + 8 + iVar6)), (char)uVar3 == '\0')) {
      FUN_100b6570(this,*(int **)(iVar6 + 0x30 + iVar4));
      while( true ) {
        uVar2 = uVar2 + 1;
        if (*(uint *)((int)this + 8) <= uVar2) break;
        puVar7 = (undefined4 *)(uVar2 * 0x38 + *(int *)this);
        puVar8 = puVar7 + -0xe;
        for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      iVar4 = *(uint *)((int)this + 8) - 1;
      *(int *)((int)this + 8) = iVar4;
      return CONCAT31((int3)((uint)iVar4 >> 8),1);
    }
  }
  return uVar3 & 0xffffff00;
}

