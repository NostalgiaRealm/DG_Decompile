/*
 * FUN_1002ba89 at 1002ba89
 * undefined4 __thiscall FUN_1002ba89(void * this, int * param_1, int param_2)
 * Address ranges: 1002ba89-1002bb6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002ba89(void *this,int *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_44 [16];
  
  uVar6 = 0x8876000a;
  if (((*(uint *)(param_2 + 0x15c) <= *(uint *)((int)this + 0x15c)) &&
      (*(uint *)(param_2 + 0x158) <= *(uint *)((int)this + 0x158))) &&
     (uVar2 = FUN_10031a59((uint *)((int)this + 0x198),(uint *)(param_2 + 0x198),0),
     (char)uVar2 != '\0')) {
    FUN_1002b7cf(param_2);
    uVar7 = FUN_1002b7cf((int)this);
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    iVar4 = (int)uVar7;
    if (((*(byte *)(iVar5 + 0x1b8) & 8) == 0) && ((*(byte *)(iVar4 + 0x1b8) & 8) == 0)) {
      uVar3 = 0;
      do {
        local_44[uVar3] = iVar4;
        uVar3 = uVar3 + 1;
        if (0x10 < uVar3) {
          bVar1 = false;
          goto LAB_1002bb1f;
        }
        iVar4 = *(int *)(iVar4 + 0x110);
      } while (iVar4 != 0);
      bVar1 = true;
LAB_1002bb1f:
      do {
        local_44[uVar3] = iVar5;
        uVar3 = uVar3 + 1;
        if (0x10 < uVar3) {
          return 0x8876000a;
        }
        iVar5 = *(int *)(iVar5 + 0x110);
      } while (iVar5 != 0);
      if ((bVar1) && (uVar2 = FUN_10030dc8(this,(int)local_44,uVar3,uVar3), (char)uVar2 != '\0')) {
        *(int *)((int)this + 0x110) = param_2;
        *(int **)((int)this + 0x114) = param_1;
        (**(code **)(*param_1 + 4))(param_1);
        *(void **)(param_2 + 0x10c) = this;
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}

