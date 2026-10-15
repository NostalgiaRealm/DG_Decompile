/*
 * FUN_1001f2d1 at 1001f2d1
 * undefined4 __thiscall FUN_1001f2d1(void * this, byte param_1, byte param_2)
 * Address ranges: 1001f2d1-1001f459
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001f2d1(void *this,byte param_1,byte param_2)

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
    FUN_1000c6f4(*(int *)((int)this + 0x1e8));
    iVar1 = *(int *)((int)this + 0x1c0);
    iVar2 = *(int *)((int)this + 0x1c4);
    iVar3 = *(int *)((int)this + 0x1d4);
    FUN_100201eb(*(int *)((int)this + 0x1e8));
    FUN_10010bce(*(void **)((int)this + 0x1e8),-1);
    FUN_1001f292((int)this);
    FUN_1000bdc7(*(void **)((int)this + 0x1e8));
    this_00 = *(void **)((int)this + 0x1e8);
    puVar5 = *(undefined4 **)((int)this + 0x210);
    if (((*(char *)((int)this_00 + 0x32d0) != '\0') || (*(char *)((int)this + 0x1cc) != '\0')) ||
       (puVar5 == (undefined4 *)0x0)) {
      puVar5 = FUN_1001f4b9((void *)((int)this + 0x214),(void *)((int)this_00 + 0x2c70),
                            *(uint *)((int)this_00 + 0x290));
      this_00 = *(void **)((int)this + 0x1e8);
      *(undefined4 **)((int)this + 0x210) = puVar5;
      *(undefined1 *)((int)this + 0x1cc) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)
                  ((int)this +
                  *(int *)(&DAT_100549e4 + *(int *)((int)this_00 + 0x290) * 4) * 4 + 0x1ec);
      }
    }
    FUN_1000bd93(this_00,*(int *)((int)this + 0x1dc),
                 *(int *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x200),
                 *(int *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x1f8),(int)puVar5);
    local_8 = 0;
    do {
      uVar6 = FUN_1000dd9c(*(void **)((int)this + 0x1e8),local_8);
      FUN_1000baf0(*(int *)((int)this + 0x1e8));
      FUN_1000b917(*(int *)((int)this + 0x1e8));
      piVar4 = *(int **)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3308) + 4);
      (**(code **)(*piVar4 + 0x30))(piVar4,iVar3 - iVar2 >> 2,iVar2 - iVar1 >> 2,0);
      local_8 = local_8 + 1;
    } while ((char)uVar6 != '\0');
    FUN_1000ec60((int)this);
    *(undefined4 *)((int)this + 0x1e0) = 0xffffffff;
    FUN_1001f1e5(this,param_1,param_2);
    uVar6 = FUN_1000c7aa(*(int *)((int)this + 0x1e8));
    uVar7 = CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar7;
}

