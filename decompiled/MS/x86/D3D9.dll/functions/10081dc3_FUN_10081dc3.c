/*
 * FUN_10081dc3 at 10081dc3
 * undefined __thiscall FUN_10081dc3(void * this, uint param_1, uint param_2)
 * Address ranges: 10081dc3-10081ef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10081dc3(void *this,uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((*(int *)((int)this + 0x1c) != -1) && (*(int *)((int)this + 0x28) == -1)) {
    if (*(int *)((int)this + 0x34) == 0x1c) {
      uVar2 = FUN_100b9ed6(*(void **)(*(int *)((int)this + 8) + 0x15dc),param_1 * param_2);
      *(uint *)((int)this + 0x28) = uVar2;
      if (uVar2 != 0xffffffff) {
        iVar4 = *(int *)((int)this + 0x10);
        uVar2 = 0;
        local_10 = iVar4;
        if (param_2 != 0) {
          do {
            local_8 = 0;
            if (param_1 != 0) {
              local_18 = uVar2 * param_1;
              local_1c = 5;
              if (iVar4 != 0) {
                local_1c = 7;
              }
              do {
                iVar4 = local_10;
                local_c = local_18 + local_8;
                local_34 = 0x1d;
                local_2c = local_8;
                local_28 = uVar2;
                if (local_10 != 0) {
                  local_28 = 1;
                  local_2c = uVar2;
                }
                local_20 = 0;
                local_24 = (uint)(local_10 == 0);
                local_30 = local_1c;
                FUN_100ba192(*(void **)(*(int *)((int)this + 8) + 0x15dc),&local_14,
                             *(uint *)((int)this + 0x28),local_c);
                iVar3 = 0xc;
                if (iVar4 != 0) {
                  iVar3 = 0x10;
                }
                piVar1 = *(int **)(*(int *)this + 0x520 + *(int *)((int)this + 4) * 0x18);
                (**(code **)(*piVar1 + 0x50))
                          (piVar1,*(undefined4 *)(iVar3 + (int)this),&local_34,local_14);
                local_8 = local_8 + 1;
              } while (local_8 < param_1);
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < param_2);
        }
      }
    }
    else {
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x1c);
    }
  }
  return;
}

