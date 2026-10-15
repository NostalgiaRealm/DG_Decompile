/*
 * FUN_10045e76 at 10045e76
 * undefined4 __thiscall FUN_10045e76(void * this, int param_1, int param_2, undefined1 param_3)
 * Address ranges: 10045e76-10046016
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10045e76(void *this,int param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  piVar2 = (int *)0x7ff;
  *(undefined4 *)(param_1 + 0x80) = 0x7ff;
  *(undefined4 *)(param_1 + 0x7c) = 0x7ff;
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x1fff000;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (*(int *)((int)this + 0x1538) == 0) {
    iVar3 = FUN_1005c789(0x200000);
    *(int *)((int)this + 0x1538) = iVar3;
    piVar2 = (int *)0x0;
    if (iVar3 != 0) {
      iVar3 = FUN_1005c789(0x40000);
      *(int *)((int)this + 0x153c) = iVar3;
      if (iVar3 == 0) {
        piVar2 = (int *)thunk_FUN_1005c76c(*(int **)((int)this + 0x1538));
        *(undefined4 *)((int)this + 0x1538) = 0;
      }
      else {
        FUN_1005c9cc(*(int **)((int)this + 0x1538),0,0x200000);
        piVar2 = FUN_1005c9cc(*(int **)((int)this + 0x153c),0,0x20000);
      }
    }
  }
  if (*(int *)((int)this + 0x153c) == 0) {
    uVar5 = (uint)piVar2 & 0xffffff00;
  }
  else {
    *(undefined4 *)((int)this + 0x166c) = *(undefined4 *)((int)this + 0x151c);
    *(int *)((int)this + 0x151c) = param_2;
    if ((*(int *)((int)this + 0x1518) != param_2) ||
       (cVar1 = *(char *)(param_2 + 0xd2), *(undefined1 *)(param_2 + 0xd2) = 0, cVar1 != '\0')) {
      *(undefined1 *)((int)this + 0x1754) = 1;
      FUN_1003dd9f(this);
    }
    *(undefined4 *)((int)this + 0x158c) = *(undefined4 *)((int)this + 0x153c);
    *(int *)((int)this + 0x1584) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x58);
    *(undefined4 *)((int)this + 0x1588) = *(undefined4 *)((int)this + 0x1538);
    *(uint *)((int)this + 0x1640) = *(uint *)(param_1 + 0x78) & 0xfff;
    *(uint *)((int)this + 0x1644) = *(uint *)(param_1 + 0x78) >> 0xc & 0xfff;
    *(float *)((int)this + 0x1648) = (float)*(int *)(param_1 + 0x7c);
    *(float *)((int)this + 0x164c) = (float)*(int *)(param_1 + 0x84);
    *(float *)((int)this + 0x1650) = (float)*(int *)(param_1 + 0x80);
    iVar3 = *(int *)(param_1 + 0x88);
    *(undefined1 *)((int)this + 0x1670) = param_3;
    *(undefined4 *)((int)this + 0x165c) = 0;
    *(undefined4 *)((int)this + 0x1658) = 0;
    *(undefined1 *)((int)this + 0x1671) = 0;
    *(float *)((int)this + 0x1654) = (float)iVar3;
    uVar4 = FUN_10047438((int)this);
    uVar5 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar5;
}

