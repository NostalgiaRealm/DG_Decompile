/*
 * FUN_100cb0db at 100cb0db
 * undefined4 __thiscall FUN_100cb0db(void * this, int * param_1)
 * Address ranges: 100cb0db-100cb559
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100cb0db(void *this,int *param_1)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40 [6];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  int local_10;
  void *local_c;
  
  iVar8 = (int)param_1 * 0x16c0 + 0x6c0 + (int)this;
  local_c = this;
  uVar3 = FUN_100b9ed6(*(void **)(iVar8 + 0x15d8),2);
  *(uint *)(iVar8 + 0x1698) = uVar3;
  if (uVar3 != 0xffffffff) {
    uVar3 = FUN_100b9ed6(*(void **)(iVar8 + 0x15dc),2);
    *(uint *)(iVar8 + 0x169c) = uVar3;
    if (uVar3 != 0xffffffff) {
      pvVar9 = (void *)((int)this + 0x520);
      piVar4 = FUN_100ba45e(pvVar9,param_1,0x400,0,0);
      *(int **)(iVar8 + 0x16a8) = piVar4;
      if (piVar4 != (int *)0x0) {
        bVar2 = FUN_100bcb98(*(void **)(iVar8 + 0x1304),piVar4,(void *)(iVar8 + 0x1430),0,0x400,
                             (undefined4 *)&DAT_100d4270,'\0','\0');
        if (bVar2) {
          piVar4 = FUN_100ba45e(pvVar9,param_1,84000,4,0);
          *(int **)(iVar8 + 0x16ac) = piVar4;
          if (piVar4 != (int *)0x0) {
            piVar4 = FUN_100ba45e(pvVar9,param_1,0x20000,4,0);
            if (piVar4 != (int *)0x0) {
              piVar5 = FUN_100ba45e(pvVar9,param_1,84000,0,0);
              *(int **)(iVar8 + 0x16b0) = piVar5;
              if (piVar5 != (int *)0x0) {
                piVar5 = FUN_100ba45e(pvVar9,param_1,0x20000,0,0);
                *(int **)(iVar8 + 0x16b4) = piVar5;
                local_88[0] = 3;
                local_6c = 1;
                local_74 = 0;
                local_60 = 0;
                local_5c = 0;
                local_6a = 1;
                local_64 = 1;
                local_58 = 1;
                local_80 = 0;
                local_78 = 0xa0;
                local_70 = 200;
                local_68 = 0x1b;
                iVar6 = FUN_100ba507(pvVar9,(int)param_1,local_88);
                *(int *)(iVar8 + 0x16a0) = iVar6;
                if (iVar6 != 0) {
                  local_78 = 400;
                  local_74 = 0;
                  local_70 = 0x11c;
                  iVar6 = FUN_100ba507(pvVar9,(int)param_1,local_88);
                  *(int *)(iVar8 + 0x16a4) = iVar6;
                  if (iVar6 != 0) {
                    local_50 = 0x1e;
                    uVar3 = *(uint *)(iVar8 + 0x1698);
                    local_4c = 4;
                    local_48 = 0x1688;
                    puVar10 = local_40;
                    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
                      *puVar10 = 0;
                      puVar10 = puVar10 + 1;
                    }
                    local_40[0] = 0;
                    local_40[2] = 0;
                    local_40[3] = 0;
                    local_40[1] = 0xffffffff;
                    piVar7 = FUN_100ba192(*(void **)(iVar8 + 0x15d8),&local_10,uVar3,0);
                    pvVar9 = local_c;
                    iVar6 = (int)param_1 * 0x18;
                    piVar5 = *(int **)(iVar6 + 0x520 + (int)local_c);
                    (**(code **)(*piVar5 + 0x48))
                              (piVar5,*(undefined4 *)(iVar8 + 0x16a0),&local_50,*piVar7);
                    local_50 = 0x1c;
                    piVar7 = FUN_100ba192(*(void **)(iVar8 + 0x15d8),&local_10,
                                          *(int *)(iVar8 + 0x1698) + 1,0);
                    piVar5 = *(int **)(iVar6 + 0x520 + (int)pvVar9);
                    (**(code **)(*piVar5 + 0x48))
                              (piVar5,*(undefined4 *)(iVar8 + 0x16a4),&local_50,*piVar7);
                    local_28 = 0x1c;
                    local_24 = 4;
                    local_20 = 0;
                    local_18 = 0;
                    piVar7 = FUN_100ba192(*(void **)(iVar8 + 0x15dc),&local_10,
                                          *(uint *)(iVar8 + 0x169c),0);
                    piVar5 = *(int **)(iVar6 + 0x520 + (int)pvVar9);
                    (**(code **)(*piVar5 + 0x50))
                              (piVar5,*(undefined4 *)(iVar8 + 0x16a0),&local_28,*piVar7);
                    piVar7 = FUN_100ba192(*(void **)(iVar8 + 0x15dc),&local_10,
                                          *(int *)(iVar8 + 0x169c) + 1,0);
                    piVar5 = *(int **)(iVar6 + 0x520 + (int)pvVar9);
                    (**(code **)(*piVar5 + 0x50))
                              (piVar5,*(undefined4 *)(iVar8 + 0x16a4),&local_28,*piVar7);
                    puVar1 = (uint *)(iVar8 + 0x80);
                    *(undefined4 *)(iVar8 + 0x84) = *(undefined4 *)(iVar8 + 0x10e0);
                    FUN_100baf54(*(void **)(iVar8 + 0x1304),*puVar1);
                    FUN_100bb5e2(*(int *)(iVar8 + 0x1304),*puVar1);
                    iVar6 = FUN_100ca0b7((void *)(iVar8 + 0x165c),puVar1);
                    FUN_100baf54(*(void **)(iVar8 + 0x1304),iVar6);
                    FUN_100bb625(*(int *)(iVar8 + 0x1304),iVar6);
                    iVar6 = *(int *)(iVar8 + 0x1304);
                    uVar11 = (**(code **)(*piVar4 + 0x2c))(piVar4);
                    FUN_100bb974(iVar6,3,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
                    iVar6 = *(int *)(iVar8 + 0x1304);
                    uVar11 = (**(code **)(**(int **)(iVar8 + 0x16a8) + 0x2c))
                                       (*(int **)(iVar8 + 0x16a8));
                    FUN_100bb91d(iVar6,1,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
                    FUN_100baf7e(*(void **)(iVar8 + 0x1304),(uint)piVar4,0,1,0x40);
                    FUN_100baf7e(*(void **)(iVar8 + 0x1304),*(uint *)(iVar8 + 0x16a8),0,1,0x40);
                    FUN_100bc186(*(int *)(iVar8 + 0x1304),0x80,0x100,1);
                    FUN_100c4be4(iVar8,*(uint *)(iVar8 + 0x16b4),(uint)piVar4);
                    uVar3 = FUN_100bad40((void *)(*(int *)(iVar8 + 0x1304) + 4),'\0');
                    iVar8 = *(int *)(iVar8 + 0x1304);
                    if (*(int *)(iVar8 + 0x8e0) != 0) {
                      *(int **)(iVar8 + 0x760 + *(int *)(iVar8 + 0x914) * 4) = piVar4;
                      *(int *)(iVar8 + 0x914) = *(int *)(iVar8 + 0x914) + 1;
                    }
                    return CONCAT31((int3)(uVar3 >> 8),1);
                  }
                  (**(code **)(**(int **)(iVar8 + 0x16a0) + 8))(*(int **)(iVar8 + 0x16a0));
                  *(undefined4 *)(iVar8 + 0x16a0) = 0;
                }
                (**(code **)(**(int **)(iVar8 + 0x16b4) + 8))(*(int **)(iVar8 + 0x16b4));
                *(undefined4 *)(iVar8 + 0x16b4) = 0;
              }
              (**(code **)(**(int **)(iVar8 + 0x16b0) + 8))(*(int **)(iVar8 + 0x16b0));
              *(undefined4 *)(iVar8 + 0x16b0) = 0;
            }
            (**(code **)(**(int **)(iVar8 + 0x16ac) + 8))(*(int **)(iVar8 + 0x16ac));
            *(undefined4 *)(iVar8 + 0x16ac) = 0;
          }
        }
        (**(code **)(**(int **)(iVar8 + 0x16a8) + 8))(*(int **)(iVar8 + 0x16a8));
        *(undefined4 *)(iVar8 + 0x16a8) = 0;
      }
      FUN_100b9fca(*(void **)(iVar8 + 0x15dc),*(int **)(iVar8 + 0x169c),2,(int *)0x0,0,0);
    }
    uVar3 = FUN_100b9fca(*(void **)(iVar8 + 0x15d8),*(int **)(iVar8 + 0x1698),2,(int *)0x0,0,0);
  }
  return uVar3 & 0xffffff00;
}

