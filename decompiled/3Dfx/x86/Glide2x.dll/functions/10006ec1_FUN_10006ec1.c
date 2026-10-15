/*
 * FUN_10006ec1 at 10006ec1
 * undefined4 __thiscall FUN_10006ec1(void * this, undefined4 * param_1)
 * Address ranges: 10006ec1-10006fb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10006ec1(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  SIZE_T SVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint local_8;
  
  iVar2 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar2) {
    if (iVar2 == 0) {
      local_8 = 0x10;
    }
    else {
      local_8 = iVar2 * 2;
    }
    uVar7 = (uint)((ulonglong)local_8 * 0x10);
    if ((int)((ulonglong)local_8 * 0x10 >> 0x20) != 0) {
      uVar7 = 0xffffffff;
    }
    SVar3 = uVar7 + 4;
    if (0xfffffffb < uVar7) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (uint *)FUN_1004f643(SVar3);
    puVar6 = (uint *)0x0;
    if (puVar4 != (uint *)0x0) {
      puVar1 = puVar4 + 1;
      *puVar4 = local_8;
      puVar6 = puVar1;
      for (uVar7 = local_8; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6 = puVar6 + 4;
      }
      if (puVar1 != (uint *)0x0) {
        uVar7 = *(uint *)((int)this + 8);
        iVar2 = *(int *)this;
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            puVar1[uVar9 * 4] = *(uint *)(iVar2 + uVar9 * 0x10);
            FUN_100071c4(puVar1 + uVar9 * 4 + 1,(int *)(iVar2 + 4 + uVar9 * 0x10));
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        if (*(int *)this != 0) {
          FUN_10007090(*(int *)this);
        }
        *(uint **)this = puVar1;
        *(uint *)((int)this + 8) = local_8;
        goto LAB_10006f83;
      }
    }
    uVar7 = (uint)puVar6 & 0xffffff00;
  }
  else {
LAB_10006f83:
    puVar8 = (undefined4 *)(*(int *)((int)this + 4) * 0x10 + *(int *)this);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *puVar8 = *param_1;
    piVar5 = FUN_100071c4(puVar8 + 1,param_1 + 1);
    uVar7 = CONCAT31((int3)((uint)piVar5 >> 8),1);
  }
  return uVar7;
}

