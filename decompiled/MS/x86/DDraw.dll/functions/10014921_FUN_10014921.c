/*
 * FUN_10014921 at 10014921
 * uint __thiscall FUN_10014921(void * this, int param_1, int param_2, int param_3, int param_4, uint param_5, uint param_6, int param_7)
 * Address ranges: 10014921-10014bbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_10014921(void *this,int param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6,
            int param_7)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  piVar1 = (int *)((int)this + 8);
  local_c = piVar1;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1004bbbf(*(void **)(*piVar1 + 0x15d8),(param_2 != 0) + 1);
  }
  uVar8 = param_5 * param_6;
  *(uint *)((int)this + 0x18) = uVar3;
  if (param_3 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1004bbbf(*(void **)(*piVar1 + 0x15dc),uVar8);
  }
  *(uint *)((int)this + 0x1c) = uVar3;
  if (param_4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_1004bbbf(*(void **)(*piVar1 + 0x15e0),uVar8);
  }
  *(uint *)((int)this + 0x20) = uVar3;
  if (((param_3 == 0) || (*(int *)((int)this + 0x1c) != -1)) &&
     ((param_4 == 0 || (uVar3 != 0xffffffff)))) {
    puVar2 = (uint *)((int)this + 0x10);
    if (param_1 != 0) {
      FUN_1004be7b(*(void **)(*piVar1 + 0x15d8),(int *)&local_8,*(uint *)((int)this + 0x18),0);
      uVar3 = *puVar2;
      if ((uVar3 == 0) || ((char)param_7 == '\0')) {
        uVar3 = *(uint *)((int)this + 0xc);
      }
      uVar3 = FUN_1004b5a4((void *)(*(int *)this + 0x520),*(int *)((int)this + 4),uVar3,param_1,
                           local_8);
    }
    local_8 = 1;
    if (param_2 != 0) {
      FUN_1004be7b(*(void **)(*piVar1 + 0x15d8),&param_1,*(uint *)((int)this + 0x18),1);
      uVar3 = *puVar2;
      if ((uVar3 == 0) || ((char)param_7 == '\0')) {
        uVar3 = *(uint *)((int)this + 0xc);
      }
      uVar3 = FUN_1004b5a4((void *)(*(int *)this + 0x520),*(int *)((int)this + 4),uVar3,param_2,
                           param_1);
    }
    if (((*(int *)((int)this + 0x1c) != -1) || (*(int *)((int)this + 0x20) != -1)) &&
       ((param_3 != 0 || (param_4 != 0)))) {
      uVar3 = *puVar2;
      param_7 = uVar3;
      if (uVar3 == 0) {
        param_7 = *(int *)((int)this + 0xc);
      }
      uVar8 = 0;
      param_2 = uVar3;
      if (param_6 != 0) {
        do {
          uVar7 = 0;
          if (param_5 != 0) {
            iVar5 = uVar8 * param_5;
            do {
              param_1 = iVar5 + uVar7;
              if (param_3 == 0) {
                uVar4 = local_8;
                uVar6 = uVar8;
                if (uVar3 == 0) {
                  *(uint *)(param_4 + 0x14) = local_8;
                  uVar4 = uVar8;
                  uVar6 = uVar7;
                }
                *(uint *)(param_4 + 0xc) = uVar6;
                *(uint *)(param_4 + 0x10) = uVar4;
                FUN_1004be7b(*(void **)(*local_c + 0x15e0),&local_14,*(uint *)((int)this + 0x20),
                             param_1);
                piVar1 = *(int **)(*(int *)this + 0x520 + *(int *)((int)this + 4) * 0x18);
                (**(code **)(*piVar1 + 0x54))(piVar1,param_7,param_4,local_14);
              }
              else {
                uVar4 = local_8;
                uVar6 = uVar8;
                if (uVar3 == 0) {
                  *(uint *)(param_3 + 0x10) = local_8;
                  *(undefined4 *)(param_3 + 0x14) = 0;
                  uVar4 = uVar8;
                  uVar6 = uVar7;
                }
                *(uint *)(param_3 + 8) = uVar6;
                *(uint *)(param_3 + 0xc) = uVar4;
                FUN_1004be7b(*(void **)(*local_c + 0x15dc),&local_10,*(uint *)((int)this + 0x1c),
                             param_1);
                piVar1 = *(int **)(*(int *)this + 0x520 + *(int *)((int)this + 4) * 0x18);
                (**(code **)(*piVar1 + 0x50))(piVar1,param_7,param_3,local_10);
              }
              uVar7 = uVar7 + 1;
              uVar3 = param_2;
            } while (uVar7 < param_5);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < param_6);
      }
    }
  }
  else {
    FUN_1004bcb3(*(void **)(*piVar1 + 0x15dc),*(int **)((int)this + 0x1c),uVar8,(int *)0x0,0,0);
    uVar3 = FUN_1004bcb3(*(void **)(*piVar1 + 0x15e0),*(int **)((int)this + 0x20),uVar8,(int *)0x0,0
                         ,0);
    *(undefined4 *)((int)this + 0x18) = 0xffffffff;
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  }
  return CONCAT31((int3)(uVar3 >> 8),(undefined1)local_8);
}

