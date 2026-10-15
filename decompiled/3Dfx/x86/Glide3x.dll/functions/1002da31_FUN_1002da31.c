/*
 * FUN_1002da31 at 1002da31
 * undefined4 __thiscall FUN_1002da31(void * this, undefined4 * param_1)
 * Address ranges: 1002da31-1002db0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002da31(void *this,undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  SIZE_T SVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar2) {
    if (iVar2 == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = iVar2 * 2;
    }
    uVar8 = (uint)((ulonglong)uVar6 * 0x1c);
    if ((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) {
      uVar8 = 0xffffffff;
    }
    SVar3 = uVar8 + 4;
    if (0xfffffffb < uVar8) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (uint *)FUN_10052293(SVar3);
    puVar7 = (uint *)0x0;
    if (puVar4 != (uint *)0x0) {
      puVar1 = puVar4 + 1;
      *puVar4 = uVar6;
      puVar7 = puVar1;
      for (uVar8 = uVar6; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7 = puVar7 + 7;
      }
      if (puVar1 != (uint *)0x0) {
        uVar8 = *(uint *)((int)this + 8);
        iVar2 = *(int *)this;
        if (uVar8 != 0) {
          uVar9 = 0;
          do {
            FUN_1002db4f(puVar1 + uVar9 * 7,(undefined4 *)(uVar9 * 0x1c + iVar2));
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
        if (*(int *)this != 0) {
          FUN_1002dc0d(*(int *)this);
        }
        *(uint **)this = puVar1;
        *(uint *)((int)this + 8) = uVar6;
        goto LAB_1002daed;
      }
    }
    uVar6 = (uint)puVar7 & 0xffffff00;
  }
  else {
LAB_1002daed:
    iVar2 = *(int *)((int)this + 4);
    *(int *)((int)this + 4) = iVar2 + 1;
    puVar5 = FUN_1002db4f((void *)(iVar2 * 0x1c + *(int *)this),param_1);
    uVar6 = CONCAT31((int3)((uint)puVar5 >> 8),1);
  }
  return uVar6;
}

