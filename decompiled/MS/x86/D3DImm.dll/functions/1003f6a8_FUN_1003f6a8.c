/*
 * FUN_1003f6a8 at 1003f6a8
 * undefined __thiscall FUN_1003f6a8(void * this, int param_1)
 * Address ranges: 1003f6a8-1003f750
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f6a8(void *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == *(int *)((int)this + local_8 * 4 + 0x14d4)) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x74))(local_8,0,0,0,0,0,0);
      (**(code **)**(undefined4 **)((int)this + local_8 * 4 + 0x14d4))();
      iVar6 = (**(code **)(**(int **)((int)this + local_8 * 4 + 0x14d4) + 0x38))();
      if (((*(uint *)(iVar6 + 4) & 0x10000) == 0) ||
         (param_1 = 1, (*(byte *)(iVar6 + 0x4c) & 4) != 0)) {
        param_1 = 0;
      }
      uVar1 = *(undefined4 *)(iVar6 + 0x40);
      piVar2 = *(int **)((int)this + local_8 * 4 + 0x14d4);
      iVar6 = piVar2[1];
      iVar3 = **(int **)((int)this + 0x14);
      uVar4 = *(undefined4 *)(iVar6 + 0x50);
      uVar5 = *(undefined4 *)(iVar6 + 0x6c);
      uVar7 = (**(code **)(*piVar2 + 0x3c))(param_1,0);
      (**(code **)(iVar3 + 0x74))(local_8,uVar5,uVar4,uVar1,uVar7);
      return;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return;
}

