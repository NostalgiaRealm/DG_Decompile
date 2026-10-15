/*
 * FUN_1007ced5 at 1007ced5
 * undefined1 __thiscall FUN_1007ced5(void * this, undefined4 * param_1)
 * Address ranges: 1007ced5-1007d0cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1007ced5(void *this,undefined4 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_d5;
  int local_d4;
  undefined4 *local_d0 [2];
  uint local_c8;
  undefined4 local_c4;
  uint local_c0;
  int local_bc;
  undefined4 local_b8 [45];
  
  local_d5 = 0;
  if (((uint)param_1 & 1) == 0) {
    FUN_1007ca2e((void *)((int)this + 0xa30),local_b8,(uint *)&param_1);
    *(undefined4 **)((int)this + 0x5940) = param_1;
    puVar6 = local_b8;
    puVar7 = (undefined4 *)((int)this + 0x44);
    for (iVar4 = 0x2c; uVar2 = MXCSR, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    local_d0[0] = param_1;
    local_d0[0] = (undefined4 *)FUN_100809ad((void *)((int)this + 0x590c),(uint *)local_d0);
    if (local_d0[0] == (undefined4 *)0x0) goto LAB_1007d0ba;
    puVar7 = (undefined4 *)((int)this + 0x44);
    puVar6 = local_d0[0];
    for (iVar4 = 0x2c; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 **)((int)this + 0x5940) = param_1;
    local_bc = local_d0[0][0x5a] + 0x850;
    local_d4 = 0;
    sVar1 = *(short *)(local_d0[0] + 0x5b);
    uVar2 = 0x3fc0;
    local_c4 = MXCSR;
    while (MXCSR = uVar2, uVar2 = local_c4, sVar1 != -1) {
      local_c0 = (uint)*(ushort *)(local_d0[0] + local_d4 + 0x5b);
      uVar3 = (uint)*(ushort *)((int)local_d0[0] + local_d4 * 4 + 0x16e);
      puVar6 = (undefined4 *)(local_c0 * 0x10 + local_bc);
      puVar7 = (undefined4 *)((local_c0 + 0x122) * 0x10 + (int)this);
      for (iVar4 = (uVar3 - local_c0) * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      local_c8 = uVar3;
      if (*(uint *)((int)this + 0x58b0) < *(uint *)((int)this + 0x58b4)) {
        if ((*(uint *)((int)this + 0x58b4) < local_c0) || (uVar3 < *(uint *)((int)this + 0x58b0))) {
          uVar2 = *(undefined4 *)((int)this + 0x58b8);
          if (*(uint *)((int)this + 0x58b0) < *(uint *)((int)this + 0x58b4)) {
            (**(code **)(**(int **)((int)this + 0x14) + 0x94))
                      (*(int *)((int)this + 0x58b0),*(undefined4 *)((int)this + 0x58b4),
                       (void *)((*(int *)((int)this + 0x58b0) + 0x122) * 0x10 + (int)this));
          }
          *(uint *)((int)this + 0x58b4) = uVar3;
          *(undefined4 *)((int)this + 0x58b8) = uVar2;
          goto LAB_1007d053;
        }
        uVar5 = local_c0;
        if (*(uint *)((int)this + 0x58b0) < local_c0) {
          uVar5 = *(uint *)((int)this + 0x58b0);
        }
        *(uint *)((int)this + 0x58b0) = uVar5;
        if (uVar3 < *(uint *)((int)this + 0x58b4)) {
          uVar3 = *(uint *)((int)this + 0x58b4);
        }
        *(uint *)((int)this + 0x58b4) = uVar3;
      }
      else {
        *(uint *)((int)this + 0x58b4) = uVar3;
LAB_1007d053:
        *(uint *)((int)this + 0x58b0) = local_c0;
      }
      sVar1 = *(short *)(local_d0[0] + local_d4 + 0x5c);
      uVar2 = MXCSR;
      local_d4 = local_d4 + 1;
    }
  }
  MXCSR = uVar2;
  local_d5 = 1;
LAB_1007d0ba:
  FUN_1007b09f((int)this);
  return local_d5;
}

