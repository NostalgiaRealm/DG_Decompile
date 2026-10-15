/*
 * FUN_1003f751 at 1003f751
 * undefined __thiscall FUN_1003f751(void * this, int * param_1)
 * Address ranges: 1003f751-1003f7d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f751(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_8;
  
  local_8 = 0;
  do {
    piVar1 = *(int **)((int)this + local_8 * 4 + 0x14d4);
    if (param_1 == piVar1) {
      iVar6 = (**(code **)(*piVar1 + 0x38))();
      if (((*(uint *)(iVar6 + 4) & 0x10000) == 0) ||
         (param_1 = (int *)0x1, (*(byte *)(iVar6 + 0x4c) & 4) != 0)) {
        param_1 = (int *)0x0;
      }
      uVar2 = *(undefined4 *)(iVar6 + 0x40);
      piVar1 = *(int **)((int)this + local_8 * 4 + 0x14d4);
      iVar6 = piVar1[1];
      iVar3 = **(int **)((int)this + 0x14);
      uVar4 = *(undefined4 *)(iVar6 + 0x50);
      uVar5 = *(undefined4 *)(iVar6 + 0x6c);
      uVar7 = (**(code **)(*piVar1 + 0x3c))(param_1,0);
      (**(code **)(iVar3 + 0x74))(local_8,uVar5,uVar4,uVar2,uVar7);
      return;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  return;
}

