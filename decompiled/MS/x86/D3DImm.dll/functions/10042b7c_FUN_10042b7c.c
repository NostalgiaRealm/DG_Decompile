/*
 * FUN_10042b7c at 10042b7c
 * undefined __thiscall FUN_10042b7c(void * this, undefined4 * param_1, uint * param_2)
 * Address ranges: 10042b7c-10042c3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10042b7c(void *this,undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar4 = 0;
  uVar1 = *param_2;
  uVar3 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar7 = *(int *)this;
    uVar5 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      iVar2 = uVar3 * 0xc0;
      uVar6 = uVar3;
      if ((*(int *)(iVar7 + 4 + iVar2) == 0) && (*(uint *)(iVar7 + iVar2) <= uVar1)) {
        if ((*(int *)(iVar7 + 4 + iVar2) != 0) || (uVar1 <= *(uint *)(iVar7 + iVar2))) break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3;
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
    } while (uVar6 != uVar4);
  }
  iVar7 = uVar3 * 0xc0;
  if (((uVar3 == *(uint *)((int)this + 8)) || (*(uint *)(iVar7 + *(int *)this) != uVar1)) ||
     (*(int *)(iVar7 + 4 + *(int *)this) != 0)) {
    FUN_10042c3d(this,uVar3,uVar1,0,param_2);
  }
  puVar8 = (undefined4 *)(iVar7 + *(int *)this + 0xc);
  for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar8;
    puVar8 = puVar8 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

