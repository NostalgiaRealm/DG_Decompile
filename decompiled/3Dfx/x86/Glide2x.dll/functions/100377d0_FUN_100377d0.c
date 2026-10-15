/*
 * FUN_100377d0 at 100377d0
 * undefined4 * __thiscall FUN_100377d0(void * this, byte * param_1, undefined4 * param_2)
 * Address ranges: 100377d0-10037925
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100377d0(void *this,byte *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *this_00;
  SIZE_T SVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_c;
  
  local_14 = 0;
  local_20 = 0;
  local_24 = param_2;
  local_1c = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  if (param_2 != (undefined4 *)0x0) {
    do {
      iVar9 = (int)local_1c * 0x1c;
      uVar2 = *(uint *)(param_1 + iVar9 + 0x18) + *(uint *)(param_1 + iVar9 + 0x10);
      uVar3 = uVar2 + *(uint *)(param_1 + iVar9 + 0xc);
      uVar4 = uVar3 + *(uint *)(param_1 + iVar9);
      local_18 = (undefined4 *)((int)local_24 + uVar4);
      local_14 = local_20 +
                 *(int *)(param_1 + iVar9 + 8) + *(int *)(param_1 + iVar9 + 4) +
                 *(int *)(param_1 + iVar9 + 0x14) +
                 (uint)CARRY4(*(uint *)(param_1 + iVar9 + 0x18),*(uint *)(param_1 + iVar9 + 0x10)) +
                 (uint)CARRY4(uVar2,*(uint *)(param_1 + iVar9 + 0xc)) +
                 (uint)CARRY4(uVar3,*(uint *)(param_1 + iVar9)) + (uint)CARRY4((uint)local_24,uVar4)
      ;
      local_1c = (undefined4 *)((int)local_1c + 1);
      local_24 = local_18;
      local_20 = local_14;
    } while (local_1c < param_2);
  }
  local_c = this;
  this_00 = (int *)FUN_100386fc(this,(uint *)&local_18);
  if (this_00 != (int *)0x0) {
    pvVar7 = (void *)this_00[1];
    uVar2 = 0;
    local_c = pvVar7;
    if (pvVar7 != (void *)0x0) {
      puVar6 = (undefined4 *)*this_00;
      puVar8 = (undefined4 *)((int)param_2 * 0x1c);
      local_1c = puVar8;
      local_18 = puVar6;
      do {
        puVar1 = (undefined4 *)puVar6[uVar2];
        if ((param_2 == (undefined4 *)puVar1[1]) &&
           (iVar9 = FUN_100501a2((byte *)*puVar1,param_1,(int)puVar8), puVar6 = local_18,
           pvVar7 = local_c, puVar8 = local_1c, iVar9 == 0)) {
          return puVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < pvVar7);
    }
    SVar5 = (SIZE_T)(ZEXT48(param_2) * 0x1c);
    if ((int)(ZEXT48(param_2) * 0x1c >> 0x20) != 0) {
      SVar5 = 0xffffffff;
    }
    puVar6 = (undefined4 *)FUN_1004f643(SVar5);
    if (puVar6 != (undefined4 *)0x0) {
      puVar8 = (undefined4 *)FUN_1004f60f(8);
      if (puVar8 != (undefined4 *)0x0) {
        FUN_1004fd20(puVar6,(undefined4 *)param_1,(int)param_2 * 0x1c);
        *puVar8 = puVar6;
        puVar8[1] = param_2;
        local_1c = puVar8;
        FUN_1000567e(this_00,&local_1c);
        return local_1c;
      }
      thunk_FUN_1004f626(puVar6);
    }
  }
  return (undefined4 *)0x0;
}

