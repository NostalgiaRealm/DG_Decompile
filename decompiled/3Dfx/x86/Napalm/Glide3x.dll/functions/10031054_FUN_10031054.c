/*
 * FUN_10031054 at 10031054
 * int * __thiscall FUN_10031054(void * this, int * param_1)
 * Address ranges: 10031054-1003111e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10031054(void *this,int *param_1)

{
  int iVar1;
  SIZE_T SVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if (*(int *)this != 0) {
    FUN_1003101d(*(int *)this);
  }
  puVar5 = (uint *)0x0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1[1] != 0) {
    uVar4 = param_1[2];
    uVar6 = (uint)((ulonglong)uVar4 * 0x1c);
    if ((int)((ulonglong)uVar4 * 0x1c >> 0x20) != 0) {
      uVar6 = 0xffffffff;
    }
    SVar2 = uVar6 + 4;
    if (0xfffffffb < uVar6) {
      SVar2 = 0xffffffff;
    }
    puVar3 = (uint *)FUN_100556a3(SVar2);
    if (puVar3 != (uint *)0x0) {
      puVar5 = puVar3 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar5;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3 = puVar3 + 7;
      }
    }
    *(uint **)this = puVar5;
    if (puVar5 != (uint *)0x0) {
      uVar4 = param_1[1];
      iVar1 = *param_1;
      if (uVar4 != 0) {
        uVar6 = 0;
        do {
          FUN_10030f5f(puVar5 + uVar6 * 7,(undefined4 *)(uVar6 * 0x1c + iVar1));
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      *(int *)((int)this + 4) = param_1[1];
      *(int *)((int)this + 8) = param_1[2];
    }
  }
  return this;
}

