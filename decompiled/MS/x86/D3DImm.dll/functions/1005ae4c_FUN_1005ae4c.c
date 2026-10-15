/*
 * FUN_1005ae4c at 1005ae4c
 * undefined __thiscall FUN_1005ae4c(void * this, int param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 * param_7, uint param_8, undefined4 * param_9, uint param_10)
 * Address ranges: 1005ae4c-1005b0d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1005ae4c(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7,uint param_8,undefined4 *param_9,uint param_10)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_58 [6];
  uint local_40 [2];
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1005aa27(this,param_1);
  if (((param_2 != 0) && (param_3 != 0)) && (param_7 != (undefined4 *)0x0)) {
    iVar7 = *(int *)(param_1 + 8) * 0x16c0;
    local_28 = param_3;
    local_30 = param_2;
    local_40[0] = 3;
    local_38 = 0;
    local_2c = 0;
    local_24 = 1;
    local_22 = 1;
    local_20 = 0x1b;
    local_1c = 1;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    uVar3 = FUN_100518fa(*(void **)(iVar7 + 0x1c98 + (int)this),2);
    *(uint *)(param_1 + 0xd94) = uVar3;
    if (uVar3 != 0xffffffff) {
      puVar4 = FUN_1005b0e3(this,*(uint **)(param_1 + 8),local_40);
      *(uint **)(param_1 + 0xd8c) = puVar4;
      if (puVar4 != (uint *)0x0) {
        local_68 = 0x1c;
        local_64 = 4;
        local_60 = 0x1688;
        puVar4 = local_58;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        local_58[0] = 0;
        local_58[2] = 0;
        local_58[3] = 0;
        local_58[1] = 0xffffffff;
        FUN_10051c18(*(void **)(iVar7 + 0x1c98 + (int)this),&local_84,*(uint *)(param_1 + 0xd94),0);
        piVar1 = *(int **)(*(int *)(param_1 + 8) * 0x18 + 0x520 + (int)this);
        (**(code **)(*piVar1 + 0x48))(piVar1,*(undefined4 *)(param_1 + 0xd8c));
        local_84 = param_2;
        iStack_80 = param_3;
        uStack_7c = 1;
        bVar2 = FUN_10052e4b(*(int **)(param_1 + 0xd8c),0,(void *)(iVar7 + 0x1af0 + (int)this),
                             (int *)&stack0xffffff70,param_7,param_8);
        if (bVar2) {
          *(undefined4 *)(param_1 + 0xc40) = param_4;
          *(undefined4 *)(param_1 + 0xc44) = param_5;
          *(undefined4 *)(param_1 + 0xc48) = param_6;
          if (param_9 == (undefined4 *)0x0) {
            return;
          }
          puVar4 = FUN_1005b0e3(this,*(uint **)(param_1 + 8),local_58 + 2);
          *(uint **)(param_1 + 0xd90) = puVar4;
          if (puVar4 != (uint *)0x0) {
            piVar5 = FUN_10051c18(*(void **)(iVar7 + 0x1c98 + (int)this),(int *)&stack0xffffff6c,
                                  *(uint *)(param_1 + 0xd94),1);
            piVar1 = *(int **)(*(int *)(param_1 + 8) * 0x18 + 0x520 + (int)this);
            (**(code **)(*piVar1 + 0x48))
                      (piVar1,*(undefined4 *)(param_1 + 0xd90),auStack_78,*piVar5);
            bVar2 = FUN_10052e4b(*(int **)(param_1 + 0xd90),0,(void *)(iVar7 + 0x1af0 + (int)this),
                                 (int *)&stack0xffffff60,param_9,param_10);
            if (bVar2) {
              return;
            }
            (**(code **)(**(int **)(param_1 + 0xd90) + 8))(*(int **)(param_1 + 0xd90));
            *(undefined4 *)(param_1 + 0xd90) = 0;
          }
        }
        (**(code **)(**(int **)(param_1 + 0xd8c) + 8))(*(int **)(param_1 + 0xd8c));
        *(undefined4 *)(param_1 + 0xd8c) = 0;
      }
      FUN_10051a23(*(void **)(iVar7 + 0x1c98 + (int)this),*(uint *)(param_1 + 0xd94),2,(int *)0x0,0,
                   0);
      *(undefined4 *)(param_1 + 0xd94) = 0xffffffff;
    }
  }
  return;
}

