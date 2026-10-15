/*
 * FUN_10054377 at 10054377
 * uint __thiscall FUN_10054377(void * this, uint * param_1)
 * Address ranges: 10054377-100543f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10054377(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = FUN_100546ab(this,uVar1,uVar2);
  uVar5 = uVar3;
  if (uVar3 != *(uint *)((int)this + 8)) {
    iVar4 = *(int *)this;
    iVar6 = uVar3 * 0x18;
    uVar5 = uVar1;
    if ((*(uint *)(iVar6 + iVar4) == uVar1) &&
       (uVar5 = uVar2, *(uint *)(iVar6 + 4 + iVar4) == uVar2)) {
      puVar7 = *(undefined4 **)(iVar6 + 0x10 + iVar4);
      if (puVar7 != (undefined4 *)0x0) {
        thunk_FUN_1005c76c((LPVOID)*puVar7);
        FUN_1005c76c(puVar7);
      }
      while( true ) {
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)this + 8) <= uVar3) break;
        puVar7 = (undefined4 *)(uVar3 * 0x18 + *(int *)this);
        puVar8 = puVar7 + -6;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
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
  return uVar5 & 0xffffff00;
}

