/*
 * FUN_10015102 at 10015102
 * undefined4 __thiscall FUN_10015102(void * this, uint * param_1, uint * param_2, uint param_3)
 * Address ranges: 10015102-1001531b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10015102(void *this,uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
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
  if (*(char *)((int)this + 0x8d) == '\0') {
    return 0x8876086c;
  }
  if (*(char *)((int)this + 0x8e) != '\0' || (param_3 & 0xffff17ef) != 0) {
    return 0x8876086c;
  }
  if (((param_3 & 0x2000) != 0) && (*(char *)((int)this + 0x8c) == '\0')) {
    return 0x8876086c;
  }
  local_38[3] = *(undefined4 *)((int)this + 0x78);
  local_28 = *(undefined4 *)((int)this + 0x7c);
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_24 = *(undefined4 *)((int)this + 0x80);
  if (param_2 == (uint *)0x0) {
    puVar4 = local_38;
    puVar10 = local_50;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar10 = puVar10 + 1;
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
  uVar3 = local_50[2];
  uVar2 = local_50[1];
  uVar1 = local_50[0];
  puVar4 = local_50;
  puVar10 = local_20;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  puVar4 = (uint *)FUN_10014f27(local_20,(int *)local_50,(int *)local_38);
  puVar10 = local_38;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar5 = FUN_10014ee9(local_38,local_20);
  if ((char)uVar5 == '\0') {
    return 0x8876086c;
  }
  if (*(int *)((int)this + 0x74) == 3) {
    iVar7 = *(int *)((int)this + 100);
  }
  else {
    if ((*(char *)(*(int *)((int)this + 0x5c) + 0x669d) != '\0') &&
       (*(int *)((int)this + 0x74) == 0)) {
      return 0x8876086c;
    }
    if (*(int *)((int)this + 0x20) == 0) {
      return 0x80004005;
    }
    FUN_1002d00c((int)this);
    iVar7 = *(int *)((int)this + 0x20);
  }
  uVar5 = *(uint *)((int)this + 0x14);
  uVar8 = *(uint *)((int)this + 0x10);
  if (*(int *)((int)this + 0x18) == 0) {
    iVar9 = *(byte *)((int)this + 0x1e) * uVar1 + uVar3 * uVar5;
    iVar6 = uVar2 * uVar8;
  }
  else {
    iVar9 = ((int)(((int)uVar1 >> 0x1f & 3U) + uVar1) >> 2) * *(int *)((int)this + 0x18) +
            ((int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2) * uVar8;
    iVar6 = uVar3 * uVar5;
  }
  param_1[2] = iVar7 + iVar9 + iVar6;
  *param_1 = uVar8;
  param_1[1] = uVar5;
  if (*(int *)((int)this + 0x68) == 0x31495441) {
    uVar8 = uVar8 >> 1;
    param_1[1] = uVar5 * 2;
  }
  else {
    if (*(int *)((int)this + 0x68) != 0x32495441) goto LAB_100152f2;
    uVar8 = uVar8 >> 2;
  }
  *param_1 = uVar8;
LAB_100152f2:
  FUN_10015a1a(*(void **)((int)this + 0x60),*(int *)((int)this + 0x84),(int *)param_2);
  *(undefined1 *)((int)this + 0x8e) = 1;
  return 0;
}

