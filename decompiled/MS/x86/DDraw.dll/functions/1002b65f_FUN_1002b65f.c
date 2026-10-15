/*
 * FUN_1002b65f at 1002b65f
 * undefined4 __thiscall FUN_1002b65f(void * this, undefined4 * param_1)
 * Address ranges: 1002b65f-1002b72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1002b65f(void *this,undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *in_EAX;
  SIZE_T SVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  iVar8 = *(int *)((int)this + 8);
  if (*(int *)((int)this + 4) == iVar8) {
    if (iVar8 == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = iVar8 * 2;
    }
    uVar7 = (uint)((ulonglong)uVar6 * 0x20);
    if ((int)((ulonglong)uVar6 * 0x20 >> 0x20) != 0) {
      uVar7 = 0xffffffff;
    }
    SVar3 = uVar7 + 4;
    if (0xfffffffb < uVar7) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (uint *)FUN_10060bfe(SVar3);
    puVar5 = puVar4;
    if (puVar4 != (uint *)0x0) {
      *puVar4 = uVar6;
      puVar1 = puVar4 + 1;
      puVar2 = puVar1;
      for (uVar7 = uVar6; uVar7 != 0; uVar7 = uVar7 - 1) {
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar5 = (uint *)0x0;
        puVar2[6] = 0;
        *(undefined1 *)(puVar2 + 7) = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2 = puVar2 + 8;
      }
      if (puVar1 != (uint *)0x0) {
        FUN_10060d80(puVar1,*(undefined4 **)this,*(int *)((int)this + 8) << 5);
        if (*(int *)this != 0) {
          FUN_1002b624(*(int *)this);
        }
        in_EAX = puVar4 + 1;
        *(uint *)((int)this + 8) = uVar6;
        *(uint **)this = in_EAX;
        goto LAB_1002b710;
      }
    }
    uVar6 = (uint)puVar5 & 0xffffff00;
  }
  else {
LAB_1002b710:
    uVar6 = CONCAT31((int3)((uint)in_EAX >> 8),1);
    puVar9 = (undefined4 *)(*(int *)((int)this + 4) * 0x20 + *(int *)this);
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *param_1;
      param_1 = param_1 + 1;
      puVar9 = puVar9 + 1;
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return uVar6;
}

