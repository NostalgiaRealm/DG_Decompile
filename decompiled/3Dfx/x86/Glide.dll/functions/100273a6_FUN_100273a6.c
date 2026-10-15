/*
 * FUN_100273a6 at 100273a6
 * undefined4 __thiscall FUN_100273a6(void * this, byte param_1, byte param_2)
 * Address ranges: 100273a6-10027577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100273a6(void *this,byte param_1,byte param_2)

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
    FUN_1002738c((int)this);
    bVar5 = FUN_100164e8(*(int *)((int)this + 0x3c));
    iVar1 = *(int *)((int)this + 0x18);
    iVar2 = *(int *)((int)this + 0x28);
    iVar3 = *(int *)((int)this + 0x14);
    FUN_10016ff4(*(void **)((int)this + 0x3c),*(int *)((int)this + 0x54),0x3c,
                 *(int *)((int)this + 0x58),0x2a);
    FUN_10016554(*(int *)((int)this + 0x3c));
    this_00 = *(void **)((int)this + 0x3c);
    piVar6 = *(int **)((int)this + 0x5c);
    if (((*(char *)((int)this_00 + 0x3150) != '\0') || (*(char *)((int)this + 0x20) != '\0')) ||
       (piVar6 == (int *)0x0)) {
      piVar6 = FUN_10028259((void *)((int)this + 0x60),(void *)((int)this_00 + 0x2bd0),
                            *(uint **)((int)this_00 + 0x3230));
      this_00 = *(void **)((int)this + 0x3c);
      *(int **)((int)this + 0x5c) = piVar6;
      *(undefined1 *)((int)this + 0x20) = 0;
      if (piVar6 == (int *)0x0) {
        piVar6 = *(int **)((int)this +
                          *(int *)(&DAT_10051b08 + *(int *)((int)this_00 + 0x3230) * 4) * 4 + 0x40);
      }
    }
    FUN_1001669e(this_00,*(int *)((int)this + 0x30),*(undefined4 *)((int)this + 0x50),
                 *(undefined4 *)((int)this + 0x4c),piVar6);
    iStack_14 = 0;
    do {
      uVar7 = FUN_1001dcd8(*(void **)((int)this + 0x3c),iStack_14);
      FUN_10016bdc(*(void **)((int)this + 0x3c),bVar5);
      FUN_100166e9(*(void **)((int)this + 0x3c));
      FUN_1001698a(*(void **)((int)this + 0x3c),bVar5,'\x01');
      FUN_10016ed0(*(void **)((int)this + 0x3c),bVar5);
      FUN_1001706c(*(void **)((int)this + 0x3c),bVar5);
      FUN_1003e4e5(*(int *)(*(int *)(*(int *)((int)this + 0x3c) + 0x3188) + 0x1304),
                   iVar2 - iVar1 >> 2,1,iVar1 - iVar3 >> 2,0,0);
      iStack_14 = iStack_14 + 1;
    } while ((char)uVar7 != '\0');
    FUN_100170ee(*(int *)((int)this + 0x3c));
    FUN_1002cae4((int)this);
    *(undefined4 *)((int)this + 0x34) = 0xffffffff;
    uVar7 = FUN_10027318(this,param_1,param_2);
    uVar8 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar8;
}

