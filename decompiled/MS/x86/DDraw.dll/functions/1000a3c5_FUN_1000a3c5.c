/*
 * FUN_1000a3c5 at 1000a3c5
 * undefined4 __thiscall FUN_1000a3c5(void * this, uint * param_1)
 * Address ranges: 1000a3c5-1000a46a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000a3c5(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *param_1;
  uVar5 = (int)uVar1 >> 0x1f;
  uVar8 = 0;
  uVar4 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar2 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar4 = uVar6 + uVar8 >> 1;
      uVar3 = *(uint *)(iVar2 + 4 + uVar4 * 0x10);
      if ((uVar3 < uVar5) ||
         ((uVar7 = uVar4, uVar3 <= uVar5 && (*(uint *)(iVar2 + uVar4 * 0x10) <= uVar1)))) {
        uVar8 = *(uint *)(iVar2 + 4 + uVar4 * 0x10);
        if ((uVar5 < uVar8) || ((uVar5 <= uVar8 && (uVar1 <= *(uint *)(iVar2 + uVar4 * 0x10)))))
        break;
        uVar4 = uVar4 + 1;
        uVar7 = uVar6;
        uVar8 = uVar4;
      }
      uVar6 = uVar7;
    } while (uVar7 != uVar8);
  }
  if (((uVar4 == *(uint *)((int)this + 8)) || (*(uint *)(*(int *)this + uVar4 * 0x10) != uVar1)) ||
     (*(uint *)(*(int *)this + 4 + uVar4 * 0x10) != uVar5)) {
    FUN_1000a553(this,uVar4,uVar1,uVar5,param_1);
  }
  return *(undefined4 *)(*(int *)this + 0xc + uVar4 * 0x10);
}

