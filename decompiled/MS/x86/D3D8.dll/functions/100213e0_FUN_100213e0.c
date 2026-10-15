/*
 * FUN_100213e0 at 100213e0
 * undefined __thiscall FUN_100213e0(void * this, float * param_1, int param_2)
 * Address ranges: 100213e0-10021463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100213e0(void *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  float local_44 [16];
  
  uVar6 = 0;
  do {
    iVar5 = uVar6 * 0x10;
    fVar1 = *(float *)(iVar5 + 4 + param_2);
    fVar2 = *(float *)(iVar5 + param_2);
    fVar3 = *(float *)(iVar5 + 8 + param_2);
    fVar4 = *(float *)(iVar5 + 0xc + param_2);
    uVar8 = 0;
    do {
      iVar5 = uVar8 * 0x10;
      uVar9 = uVar8 + 1;
      local_44[uVar6 + uVar8 * 4] =
           *(float *)((int)this + iVar5 + 0xc) * fVar4 +
           *(float *)((int)this + iVar5 + 8) * fVar3 +
           *(float *)((int)this + iVar5) * fVar2 + *(float *)((int)this + iVar5 + 4) * fVar1;
      uVar8 = uVar9;
    } while (uVar9 < 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  pfVar7 = local_44;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

