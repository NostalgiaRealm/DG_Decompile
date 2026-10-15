/*
 * FUN_1000faf4 at 1000faf4
 * bool __thiscall FUN_1000faf4(void * this, undefined4 param_1, undefined4 param_2, uint * param_3, uint param_4)
 * Address ranges: 1000faf4-1000fcf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_1000faf4(void *this,undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_84 [5];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58 [6];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = (int *)((int)this + 0xcf00);
  if (*(int *)((int)this + 0xd044) != 0) {
    FUN_1005050b(*(void **)(*piVar1 + 0x172c0),*(int *)((int)this + 0xd044),0);
    FUN_1004b30e((void *)*piVar1,*(int **)((int)this + 0xd044));
  }
  uVar3 = *(uint *)((int)this + 0xd048);
  piVar5 = (int *)((int)this + 0xcf04);
  if (uVar3 == 0xffffffff) {
    uVar3 = FUN_1004bbbf(*(void **)(*piVar5 + 0x15d8),1);
    *(uint *)((int)this + 0xd048) = uVar3;
  }
  if (uVar3 != 0xffffffff) {
    local_30 = param_1;
    local_28 = param_2;
    local_2c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_40[0] = 3;
    local_38 = 0;
    local_24 = 1;
    local_22 = 1;
    local_20 = 0x1c;
    local_1c = 1;
    piVar4 = (int *)FUN_1004b6b3((void *)(*piVar1 + 0x520),*(int *)((int)this + 0x14),local_40);
    *(int **)((int)this + 0xd044) = piVar4;
    if (piVar4 != (int *)0x0) {
      local_84[1] = 0;
      local_84[2] = 0;
      local_84[3] = 0;
      local_84[4] = param_1;
      local_70 = param_2;
      local_6c = 1;
      bVar2 = FUN_10054ccb(piVar4,0,(void *)(*piVar5 + 0x1430),local_84 + 1,param_3,param_4,0);
      if (bVar2) {
        FUN_10052996((void *)(*(int *)(*piVar5 + 0x1304) + 4),'\0');
        local_64 = 4;
        local_68 = 0x1c;
        local_60 = 0x1688;
        puVar7 = local_58;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_58[0] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[1] = 0xffffffff;
        piVar5 = FUN_1004be7b(*(void **)(*piVar5 + 0x15d8),local_84,*(uint *)((int)this + 0xd048),0)
        ;
        piVar1 = *(int **)(*(int *)((int)this + 0x14) * 0x18 + 0x520 + *piVar1);
        (**(code **)(*piVar1 + 0x48))(piVar1,*(undefined4 *)((int)this + 0xd044),&local_68,*piVar5);
      }
      else {
        (**(code **)(**(int **)((int)this + 0xd044) + 8))(*(int **)((int)this + 0xd044));
        *(undefined4 *)((int)this + 0xd044) = 0;
      }
    }
  }
  return *(int *)((int)this + 0xd044) != 0;
}

