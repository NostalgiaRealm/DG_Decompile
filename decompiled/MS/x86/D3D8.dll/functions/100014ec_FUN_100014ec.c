/*
 * FUN_100014ec at 100014ec
 * byte __thiscall FUN_100014ec(void * this, undefined4 * param_1)
 * Address ranges: 100014ec-1000164b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_100014ec(void *this,undefined4 *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte local_5;
  
  piVar1 = DAT_100ba2b4;
  local_5 = 1;
  uVar3 = (**(code **)(*DAT_100ba2b4 + 0x28))(&DAT_100af2e0);
  if (uVar3 != 0) {
    iVar4 = (**(code **)*param_1)();
    uVar8 = 0;
    if (iVar4 == 0) {
      puVar5 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar5 = (uint *)&DAT_00000054;
      }
      if (((*puVar5 & 0x203) == 0) && (uVar3 != 0)) {
        do {
          puVar7 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar8);
          if (puVar7 != (undefined4 *)0x0) {
            bVar2 = (**(code **)*puVar7)
                              (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                               *(int *)((int)this + 0xacc) + 0x60U,param_1);
            local_5 = local_5 & bVar2;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
    else if (iVar4 == 1) {
      puVar5 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar5 = (uint *)&DAT_00000054;
      }
      if (((*puVar5 & 0x203) == 0) && (uVar3 != 0)) {
        do {
          piVar6 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar8);
          if (piVar6 != (int *)0x0) {
            bVar2 = (**(code **)(*piVar6 + 4))
                              (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                               *(int *)((int)this + 0xacc) + 0x60U,param_1);
            local_5 = local_5 & bVar2;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
    else if (iVar4 == 2) {
      puVar5 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar5 = (uint *)&DAT_000000a4;
      }
      if (((*puVar5 & 0x200) == 0) && (uVar3 != 0)) {
        do {
          piVar6 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar8);
          if (piVar6 != (int *)0x0) {
            bVar2 = (**(code **)(*piVar6 + 8))
                              (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                               *(int *)((int)this + 0xacc) + 0x60U,param_1);
            local_5 = local_5 & bVar2;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
  }
  return local_5;
}

