/*
 * FUN_1004efe1 at 1004efe1
 * int __thiscall FUN_1004efe1(void * this, uint * param_1)
 * Address ranges: 1004efe1-1004f0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004efe1(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint local_4c [5];
  int local_38;
  int local_34;
  int *local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar5 = param_1;
  puVar7 = local_4c;
  local_18 = this;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar6 = 0;
  uVar2 = 0;
  local_14 = 0;
  local_c = *(uint *)((int)this + 8);
  local_10 = (((((local_34 + -1) * 0x10 | local_38 - 1U) << 3 | local_4c[3]) << 3 | local_4c[2]) <<
              3 | local_4c[1]) << 8 | local_4c[0];
  if (local_c != 0) {
    local_8 = *(int *)this;
    uVar3 = local_c;
    do {
      uVar2 = uVar3 + uVar6 >> 1;
      iVar1 = uVar2 * 0x40;
      uVar4 = uVar2;
      this = local_18;
      if ((*(int *)(local_8 + 4 + iVar1) == 0) && (*(uint *)(local_8 + iVar1) <= local_10)) {
        if ((*(int *)(local_8 + 4 + iVar1) != 0) || (local_10 <= *(uint *)(local_8 + iVar1))) break;
        uVar2 = uVar2 + 1;
        uVar4 = uVar3;
        uVar6 = uVar2;
      }
      uVar3 = uVar4;
    } while (uVar4 != uVar6);
  }
  uVar6 = uVar2 * 0x40;
  if (((uVar2 == *(uint *)((int)this + 8)) || (*(uint *)(uVar6 + *(int *)this) != local_10)) ||
     (*(int *)(uVar6 + 4 + *(int *)this) != 0)) {
    FUN_1004f320(this,uVar2,local_10,0,param_1);
  }
  return (uVar6 | 0x3c) + *(int *)this;
}

