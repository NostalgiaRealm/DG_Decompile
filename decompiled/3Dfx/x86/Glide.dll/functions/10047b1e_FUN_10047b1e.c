/*
 * FUN_10047b1e at 10047b1e
 * undefined4 __thiscall FUN_10047b1e(void * this, uint * param_1)
 * Address ranges: 10047b1e-10047bee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10047b1e(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_48 [5];
  int local_34;
  int local_30;
  int *local_14;
  uint local_10;
  undefined4 local_c;
  int local_8;
  
  puVar3 = param_1;
  puVar5 = local_48;
  local_14 = this;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar4 = 0;
  uVar2 = 0;
  local_10 = (((((local_30 + -1) * 0x10 | local_34 - 1U) << 3 | local_48[3]) << 3 | local_48[2]) <<
              3 | local_48[1]) << 8 | local_48[0];
  local_c = 0;
  if (*(uint *)((int)this + 8) != 0) {
    local_8 = *(int *)this;
    uVar6 = *(uint *)((int)this + 8);
    do {
      uVar2 = uVar6 + uVar4 >> 1;
      iVar1 = uVar2 * 0x40;
      uVar7 = uVar2;
      this = local_14;
      if ((*(int *)(local_8 + 4 + iVar1) == 0) && (*(uint *)(local_8 + iVar1) <= local_10)) {
        if ((*(int *)(local_8 + 4 + iVar1) != 0) || (local_10 <= *(uint *)(local_8 + iVar1))) break;
        uVar2 = uVar2 + 1;
        uVar4 = uVar2;
        uVar7 = uVar6;
      }
      uVar6 = uVar7;
    } while (uVar7 != uVar4);
  }
  iVar1 = uVar2 * 0x40;
  if (((uVar2 == *(uint *)((int)this + 8)) || (*(uint *)(iVar1 + *(int *)this) != local_10)) ||
     (*(int *)(iVar1 + 4 + *(int *)this) != 0)) {
    FUN_10047cd6(this,uVar2,local_10,0,param_1);
  }
  return *(undefined4 *)(iVar1 + 0x3c + *(int *)this);
}

