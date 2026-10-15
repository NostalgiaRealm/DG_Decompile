/*
 * FUN_1001c91d at 1001c91d
 * undefined4 __thiscall FUN_1001c91d(void * this, byte param_1, byte param_2)
 * Address ranges: 1001c91d-1001cb86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001c91d(void *this,byte param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  void *this_00;
  int iStack_14;
  
  if (*(uint *)((int)this + 0x1c4) == *(uint *)((int)this + 0x1d4)) {
    uVar8 = *(uint *)((int)this + 0x1c4) & 0xffffff00;
  }
  else {
    FUN_1001fe15(*(int *)((int)this + 0x1e8));
    FUN_10011f37(*(void **)((int)this + 0x1e8),-1);
    iVar1 = *(int *)((int)this + 0x208);
    iVar2 = *(int *)(*(int *)((int)this + 0x1e8) + 0x3688);
    iVar3 = *(int *)(iVar2 + 0x1304);
    uVar7 = *(undefined4 *)(iVar3 + 0x938);
    uVar4 = *(undefined4 *)(iVar3 + 0x93c);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = uVar7;
    *(undefined4 *)(iVar1 + 0x1c) = uVar4;
    iVar1 = *(int *)((int)this + 0x20c);
    iVar2 = *(int *)(*(int *)((int)this + 0x1e8) + 0x3688);
    iVar3 = *(int *)(iVar2 + 0x1304);
    uVar7 = *(undefined4 *)(iVar3 + 0x938);
    uVar4 = *(undefined4 *)(iVar3 + 0x93c);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = uVar7;
    *(undefined4 *)(iVar1 + 0x1c) = uVar4;
    FUN_1001c8fd((int)this);
    bVar5 = FUN_1000a535(*(int *)((int)this + 0x1e8));
    iVar1 = *(int *)((int)this + 0x1c4);
    iVar2 = *(int *)((int)this + 0x1d4);
    iVar3 = *(int *)((int)this + 0x1c0);
    FUN_1000b055(*(void **)((int)this + 0x1e8),*(int *)((int)this + 0x208),0x50,
                 *(int *)((int)this + 0x20c),0x2a);
    FUN_1000a5a1(*(int *)((int)this + 0x1e8));
    this_00 = *(void **)((int)this + 0x1e8);
    piVar6 = *(int **)((int)this + 0x210);
    if (((*(char *)((int)this_00 + 0x3650) != '\0') || (*(char *)((int)this + 0x1cc) != '\0')) ||
       (piVar6 == (int *)0x0)) {
      piVar6 = FUN_1001d956((void *)((int)this + 0x214),(void *)((int)this_00 + 0x2dc0),
                            *(undefined4 **)((int)this_00 + 0x3730));
      this_00 = *(void **)((int)this + 0x1e8);
      *(int **)((int)this + 0x210) = piVar6;
      *(undefined1 *)((int)this + 0x1cc) = 0;
      if (piVar6 == (int *)0x0) {
        piVar6 = *(int **)((int)this +
                          *(int *)(&DAT_10057ac0 + *(int *)((int)this_00 + 0x3730) * 4) * 4 + 0x1ec)
        ;
      }
    }
    FUN_1000a6eb(this_00,*(int *)((int)this + 0x1dc),
                 *(undefined4 *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x200),
                 *(undefined4 *)((int)this + *(int *)((int)this + 0xf0) * 4 + 0x1f8),piVar6);
    iStack_14 = 0;
    do {
      uVar7 = FUN_1000f043(*(void **)((int)this + 0x1e8),iStack_14);
      FUN_1000ac25(*(void **)((int)this + 0x1e8),bVar5);
      FUN_1000a736(*(void **)((int)this + 0x1e8));
      FUN_1000a9d3(*(void **)((int)this + 0x1e8),bVar5,'\x01');
      FUN_1000af2b(*(void **)((int)this + 0x1e8),bVar5);
      FUN_1000b0cd(*(void **)((int)this + 0x1e8),bVar5);
      FUN_10044043(*(int *)(*(int *)(*(int *)((int)this + 0x1e8) + 0x3688) + 0x1304),
                   iVar2 - iVar1 >> 2,1,iVar1 - iVar3 >> 2,0,0);
      iStack_14 = iStack_14 + 1;
    } while ((char)uVar7 != '\0');
    FUN_1000b14f(*(int *)((int)this + 0x1e8));
    FUN_10010043((int)this);
    *(undefined4 *)((int)this + 0x1e0) = 0xffffffff;
    uVar7 = FUN_1001c880(this,param_1,param_2);
    uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar8;
}

