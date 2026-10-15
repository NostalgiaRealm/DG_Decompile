/*
 * FUN_10098040 at 10098040
 * undefined4 __thiscall FUN_10098040(void * this, uint * param_1)
 * Address ranges: 10098040-100980e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10098040(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar1 = *param_1;
  uVar3 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar2 = *(int *)this;
    uVar5 = *(uint *)((int)this + 8);
    do {
      uVar3 = uVar5 + uVar4 >> 1;
      uVar6 = uVar3;
      if ((*(int *)(iVar2 + 4 + uVar3 * 0x10) == 0) && (*(uint *)(iVar2 + uVar3 * 0x10) <= uVar1)) {
        if ((*(int *)(iVar2 + 4 + uVar3 * 0x10) != 0) || (uVar1 <= *(uint *)(iVar2 + uVar3 * 0x10)))
        break;
        uVar3 = uVar3 + 1;
        uVar4 = uVar3;
        uVar6 = uVar5;
      }
      uVar5 = uVar6;
    } while (uVar6 != uVar4);
  }
  if (((uVar3 == *(uint *)((int)this + 8)) || (*(uint *)(*(int *)this + uVar3 * 0x10) != uVar1)) ||
     (*(int *)(*(int *)this + 4 + uVar3 * 0x10) != 0)) {
    FUN_1009814a(this,uVar3,uVar1,0,param_1);
  }
  return *(undefined4 *)(*(int *)this + 0xc + uVar3 * 0x10);
}

