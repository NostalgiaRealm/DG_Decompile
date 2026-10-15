/*
 * FUN_10038543 at 10038543
 * int __thiscall FUN_10038543(void * this, uint param_1, uint param_2)
 * Address ranges: 10038543-100385ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10038543(void *this,uint param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  undefined4 *local_8;
  
  uVar3 = param_2;
  uVar2 = param_1;
  pvVar1 = *(void **)((int)this + 0xc);
  local_8 = this;
  uVar5 = FUN_100386c5(pvVar1,param_1,param_2);
  puVar4 = local_8;
  if (uVar5 != *(uint *)((int)pvVar1 + 8)) {
    iVar7 = *(int *)((int)pvVar1 + 4);
    iVar6 = uVar5 * 0x18;
    if (((*(uint *)(iVar6 + iVar7) == uVar2) && (*(uint *)(iVar6 + 4 + iVar7) == uVar3)) &&
       (iVar7 = iVar6 + 0x10 + iVar7, iVar7 != 0)) {
      return iVar7;
    }
  }
  (**(code **)*local_8)(&local_14,uVar2,uVar3);
  local_c = FUN_100386c5((void *)puVar4[3],uVar2,uVar3);
  iVar7 = local_c * 0x18;
  pvVar1 = (void *)local_8[3];
  if (((local_c == *(uint *)((int)pvVar1 + 8)) ||
      (iVar6 = *(int *)((int)pvVar1 + 4), *(uint *)(iVar7 + iVar6) != param_1)) ||
     (*(uint *)(iVar7 + 4 + iVar6) != uVar3)) {
    FUN_100385ed(pvVar1,local_c,param_1,uVar3,&param_1,&local_14);
  }
  else {
    *(undefined4 *)(iVar7 + 0x10 + iVar6) = local_14;
    *(undefined4 *)(iVar7 + 0x14 + iVar6) = local_10;
  }
  return *(int *)((int)pvVar1 + 4) + 0x10 + iVar7;
}

