/*
 * FUN_1001ee7e at 1001ee7e
 * undefined4 __thiscall FUN_1001ee7e(void * this, byte param_1, byte param_2)
 * Address ranges: 1001ee7e-1001f006
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001ee7e(void *this,byte param_1,byte param_2)

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
  
  if (*(uint *)((int)this + 0x1c4) == *(uint *)((int)this + 0x1d4)) {
    uVar7 = *(uint *)((int)this + 0x1c4) & 0xffffff00;
  }
  else {
    FUN_1000cf4c(*(int *)((int)this + 0x1e8));
    iVar1 = *(int *)((int)this + 0x1c0);
    iVar2 = *(int *)((int)this + 0x1c4);
    iVar3 = *(int *)((int)this + 0x1d4);
    FUN_1001fe15(*(int *)((int)this + 0x1e8));
    FUN_10011f37(*(void **)((int)this + 0x1e8),-1);
    FUN_1001ee3f((int)this);
    FUN_1000c628(*(void **)((int)this + 0x1e8));
    this_00 = *(void **)((int)this + 0x1e8);
    puVar5 = *(undefined4 **)((int)this + 0x210);
    if (((*(char *)((int)this_00 + 0x3650) != '\0') || (*(char *)((int)this + 0x1cc) != '\0')) ||
       (puVar5 == (undefined4 *)0x0)) {
      puVar5 = FUN_1001f066((void *)((int)this + 0x214),(void *)((int)this_00 + 0x2dc0),
                            *(uint *)((int)this_00 + 0x3cc));
      this_00 = *(void **)((int)this + 0x1e8);
      *(undefined4 **)((int)this + 0x210) = puVar5;
      *(undefined1 *)((int)this + 0x1cc) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)
                  ((int)this +
                  *(int *)(&DAT_10057d04 + *(int *)((int)this_00 + 0x3cc) * 4) * 4 + 0x1ec);
      }
    }
    FUN_1000c5f4(this_00,*(int *)((int)this + 0x1dc),
                 *(int *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x200),
                 *(int *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x1f8),(int)puVar5);
    local_8 = 0;
    do {
      uVar6 = FUN_1000f043(*(void **)((int)this + 0x1e8),local_8);
      FUN_1000c351(*(int *)((int)this + 0x1e8));
      FUN_1000c178(*(int *)((int)this + 0x1e8));
      piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3688) + 4);
      (**(code **)(*piVar4 + 0x30))(piVar4,iVar3 - iVar2 >> 2,iVar2 - iVar1 >> 2,0);
      local_8 = local_8 + 1;
    } while ((char)uVar6 != '\0');
    FUN_10010043((int)this);
    *(undefined4 *)((int)this + 0x1e0) = 0xffffffff;
    FUN_1001ed92(this,param_1,param_2);
    uVar6 = FUN_1000d002(*(int *)((int)this + 0x1e8));
    uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar7;
}

