/*
 * FUN_1000164c at 1000164c
 * undefined __thiscall FUN_1000164c(void * this, undefined4 * param_1)
 * Address ranges: 1000164c-1000179b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000164c(void *this,undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  
  piVar1 = DAT_100ba2b4;
  uVar2 = (**(code **)(*DAT_100ba2b4 + 0x28))(&DAT_100af2e0);
  if (uVar2 != 0) {
    iVar3 = (**(code **)*param_1)();
    uVar6 = 0;
    if (iVar3 == 0) {
      puVar4 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar4 = (uint *)&DAT_00000054;
      }
      if (((*puVar4 & 0x203) == 0) && (uVar2 != 0)) {
        do {
          piVar5 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar6);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0xc))
                      (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                       *(int *)((int)this + 0xacc) + 0x60U,param_1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
    else if (iVar3 == 1) {
      puVar4 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar4 = (uint *)&DAT_00000054;
      }
      if (((*puVar4 & 0x203) == 0) && (uVar2 != 0)) {
        do {
          piVar5 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar6);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x10))
                      (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                       *(int *)((int)this + 0xacc) + 0x60U,param_1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
    else if (iVar3 == 2) {
      puVar4 = param_1 + -7;
      if (param_1 == (undefined4 *)0x0) {
        puVar4 = (uint *)&DAT_000000a4;
      }
      if (((*puVar4 & 0x200) == 0) && (uVar2 != 0)) {
        do {
          piVar5 = (int *)(**(code **)(*piVar1 + 0x2c))(&DAT_100af2e0,uVar6);
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 0x14))
                      (-(uint)(*(int *)((int)this + 0xacc) != 0) &
                       *(int *)((int)this + 0xacc) + 0x60U,param_1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
  }
  return;
}

