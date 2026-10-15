/*
 * FUN_10011231 at 10011231
 * undefined4 __thiscall FUN_10011231(void * this, int * param_1, uint * param_2, uint param_3)
 * Address ranges: 10011231-1001142b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10011231(void *this,int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint *puVar12;
  uint local_50 [4];
  uint local_40;
  uint local_3c;
  uint local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [7];
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)((int)this + 0x91) == '\0') {
    return 0x8876086c;
  }
  if (*(char *)((int)this + 0x92) != '\0' || (param_3 & 0xffff57ef) != 0) {
    return 0x8876086c;
  }
  if (((param_3 & 0x2000) != 0) && (*(char *)((int)this + 0x90) == '\0')) {
    return 0x8876086c;
  }
  local_38[3] = *(undefined4 *)((int)this + 0x7c);
  local_28 = *(undefined4 *)((int)this + 0x80);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_24 = *(undefined4 *)((int)this + 0x84);
  if (param_2 == (uint *)0x0) {
    puVar6 = local_38;
    puVar12 = local_50;
    for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    local_50[0] = *param_2;
    local_50[1] = param_2[1];
    local_50[2] = param_2[4];
    local_50[3] = param_2[2];
    local_40 = param_2[3];
    local_3c = param_2[5];
  }
  uVar5 = local_50[2];
  uVar4 = local_50[1];
  uVar3 = local_50[0];
  puVar6 = local_50;
  puVar12 = local_20;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar6 = (uint *)FUN_1001100d(local_20,(int *)local_50,(int *)local_38);
  puVar12 = local_38;
  for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar7 = FUN_10010fcf(local_38,local_20);
  if ((char)uVar7 == '\0') {
LAB_1001141c:
    uVar11 = 0x8876086c;
  }
  else {
    if (*(int *)((int)this + 0x74) == 3) {
      iVar9 = *(int *)((int)this + 100);
    }
    else {
      if ((*(char *)(*(int *)((int)this + 0x5c) + 0x58bd) != '\0') &&
         (*(int *)((int)this + 0x74) == 0)) goto LAB_1001141c;
      if (*(int *)((int)this + 0x20) == 0) {
        return 0x80004005;
      }
      FUN_100259aa((int)this);
      iVar9 = *(int *)((int)this + 0x20);
    }
    iVar1 = *(int *)((int)this + 0x14);
    uVar11 = 0;
    iVar2 = *(int *)((int)this + 0x10);
    if (*(int *)((int)this + 0x18) == 0) {
      iVar10 = *(byte *)((int)this + 0x1e) * uVar3 + uVar5 * iVar1;
      iVar8 = uVar4 * iVar2;
    }
    else {
      iVar10 = ((int)(((int)uVar3 >> 0x1f & 3U) + uVar3) >> 2) * *(int *)((int)this + 0x18) +
               ((int)(uVar4 + ((int)uVar4 >> 0x1f & 3U)) >> 2) * iVar2;
      iVar8 = uVar5 * iVar1;
    }
    param_1[2] = iVar9 + iVar10 + iVar8;
    *param_1 = iVar2;
    param_1[1] = iVar1;
    FUN_10011b37(*(void **)((int)this + 0x60),*(int *)((int)this + 0x88),(int *)param_2);
    *(undefined1 *)((int)this + 0x92) = 1;
  }
  return uVar11;
}

