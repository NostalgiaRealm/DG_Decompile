/*
 * FUN_1002701c at 1002701c
 * undefined4 __thiscall FUN_1002701c(void * this, byte param_1, byte param_2)
 * Address ranges: 1002701c-100271ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002701c(void *this,byte param_1,byte param_2)

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
  
  if (*(uint *)((int)this + 0x18) == *(uint *)((int)this + 0x28)) {
    uVar8 = *(uint *)((int)this + 0x18) & 0xffffff00;
  }
  else {
    iVar1 = *(int *)((int)this + 0x54);
    iVar2 = *(int *)(*(int *)((int)this + 0x3c) + 0x3188);
    iVar3 = *(int *)(iVar2 + 0x1304);
    uVar7 = *(undefined4 *)(iVar3 + 0x93c);
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar3 + 0x938);
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined4 *)(iVar1 + 0x1c) = uVar7;
    iVar1 = *(int *)((int)this + 0x58);
    iVar2 = *(int *)(*(int *)((int)this + 0x3c) + 0x3188);
    iVar3 = *(int *)(iVar2 + 0x1304);
    uVar7 = *(undefined4 *)(iVar3 + 0x93c);
    uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar3 + 0x938);
    *(undefined4 *)(iVar1 + 0x10) = uVar4;
    *(undefined4 *)(iVar1 + 0x1c) = uVar7;
    FUN_10027002((int)this);
    bVar5 = FUN_1001615a(*(int *)((int)this + 0x3c));
    iVar1 = *(int *)((int)this + 0x18);
    iVar2 = *(int *)((int)this + 0x28);
    iVar3 = *(int *)((int)this + 0x14);
    FUN_10016c66(*(void **)((int)this + 0x3c),*(int *)((int)this + 0x54),0x3c,
                 *(int *)((int)this + 0x58),0x2a);
    FUN_100161c6(*(int *)((int)this + 0x3c));
    this_00 = *(void **)((int)this + 0x3c);
    piVar6 = *(int **)((int)this + 0x5c);
    if (((*(char *)((int)this_00 + 0x3150) != '\0') || (*(char *)((int)this + 0x20) != '\0')) ||
       (piVar6 == (int *)0x0)) {
      piVar6 = FUN_10027ecf((void *)((int)this + 0x60),(void *)((int)this_00 + 0x2bd0),
                            *(uint **)((int)this_00 + 0x3230));
      this_00 = *(void **)((int)this + 0x3c);
      *(int **)((int)this + 0x5c) = piVar6;
      *(undefined1 *)((int)this + 0x20) = 0;
      if (piVar6 == (int *)0x0) {
        piVar6 = *(int **)((int)this +
                          *(int *)(&DAT_10051b08 + *(int *)((int)this_00 + 0x3230) * 4) * 4 + 0x40);
      }
    }
    FUN_10016310(this_00,*(int *)((int)this + 0x30),*(undefined4 *)((int)this + 0x50),
                 *(undefined4 *)((int)this + 0x4c),piVar6);
    iStack_14 = 0;
    do {
      uVar7 = FUN_1001d94c(*(void **)((int)this + 0x3c),iStack_14);
      FUN_1001684e(*(void **)((int)this + 0x3c),bVar5);
      FUN_1001635b(*(void **)((int)this + 0x3c));
      FUN_100165fc(*(void **)((int)this + 0x3c),bVar5,'\x01');
      FUN_10016b42(*(void **)((int)this + 0x3c),bVar5);
      FUN_10016cde(*(void **)((int)this + 0x3c),bVar5);
      FUN_1003e155(*(int *)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 0x1304),
                   iVar2 - iVar1 >> 2,1,iVar1 - iVar3 >> 2,0,0);
      iStack_14 = iStack_14 + 1;
    } while ((char)uVar7 != '\0');
    FUN_10016d60(*(int *)((int)this + 0x3c));
    FUN_1002c75a((int)this);
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
    uVar7 = FUN_10026f8e(this,param_1,param_2);
    uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar8;
}

