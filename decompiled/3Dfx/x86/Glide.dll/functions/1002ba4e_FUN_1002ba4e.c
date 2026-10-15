/*
 * FUN_1002ba4e at 1002ba4e
 * undefined4 __thiscall FUN_1002ba4e(void * this, byte param_1, byte param_2)
 * Address ranges: 1002ba4e-1002bb6a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002ba4e(void *this,byte param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  void *this_00;
  int local_8;
  
  if (*(uint *)((int)this + 0x18) == *(uint *)((int)this + 0x28)) {
    uVar7 = *(uint *)((int)this + 0x18) & 0xffffff00;
  }
  else {
    FUN_1001908e(*(int *)((int)this + 0x3c));
    iVar1 = *(int *)((int)this + 0x14);
    iVar2 = *(int *)((int)this + 0x18);
    iVar3 = *(int *)((int)this + 0x28);
    FUN_1002ba1b((int)this);
    FUN_1001870d(*(void **)((int)this + 0x3c));
    this_00 = *(void **)((int)this + 0x3c);
    puVar5 = *(undefined4 **)((int)this + 0x5c);
    if (((*(char *)((int)this_00 + 0x3150) != '\0') || (*(char *)((int)this + 0x20) != '\0')) ||
       (puVar5 == (undefined4 *)0x0)) {
      puVar5 = FUN_1002bbc4((void *)((int)this + 0x60),(void *)((int)this_00 + 0x2bd0),
                            *(uint *)((int)this_00 + 0x218));
      this_00 = *(void **)((int)this + 0x3c);
      *(undefined4 **)((int)this + 0x5c) = puVar5;
      *(undefined1 *)((int)this + 0x20) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)
                  ((int)this +
                  *(int *)(&DAT_10051be8 + *(int *)((int)this_00 + 0x218) * 4) * 4 + 0x40);
      }
    }
    FUN_1001867d(this_00,*(int *)((int)this + 0x30),*(int *)((int)this + 0x50),
                 *(int *)((int)this + 0x4c),(int)puVar5);
    local_8 = 0;
    do {
      uVar6 = FUN_1001dcd8(*(void **)((int)this + 0x3c),local_8);
      FUN_100183fd(*(int *)((int)this + 0x3c));
      FUN_1001822a(*(int *)((int)this + 0x3c));
      piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 4);
      (**(code **)(*piVar4 + 0x30))(piVar4,iVar3 - iVar2 >> 2,iVar2 - iVar1 >> 2,0);
      local_8 = local_8 + 1;
    } while ((char)uVar6 != '\0');
    FUN_1002cae4((int)this);
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
    FUN_1002b980(this,param_1,param_2);
    uVar6 = FUN_10019144(*(int *)((int)this + 0x3c));
    uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar7;
}

