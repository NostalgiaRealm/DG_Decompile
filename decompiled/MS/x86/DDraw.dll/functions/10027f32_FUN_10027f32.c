/*
 * FUN_10027f32 at 10027f32
 * undefined4 __thiscall FUN_10027f32(void * this, int * param_1)
 * Address ranges: 10027f32-10028083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10027f32(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  iVar1 = param_1[1];
  uVar5 = *(uint *)(iVar1 + 0x68);
  if (((uVar5 & 0x18) != 0x18) && ((uVar5 & 0x18) != 0)) {
    return 0x88760064;
  }
  if (((uVar5 & 0x4000020) != 0) && ((char)param_1[6] == '\0')) {
    return 0x88760064;
  }
  uVar6 = uVar5 & 0x38;
  uVar4 = *(uint *)(iVar1 + 4) & 0x20;
  if (uVar4 == 0) {
    uVar3 = uVar6;
    if (uVar6 == 0x20) goto LAB_10027faa;
  }
  else {
    if (*(int *)(iVar1 + 0x14) == 0) {
      return 0x80070057;
    }
    uVar3 = uVar5 & 0x20;
  }
  if (uVar3 != 0) {
    return 0x80070057;
  }
LAB_10027faa:
  uVar8 = 0x88760234;
  if (((*(int *)((int)this + 0xf4) == 0) &&
      (((uVar8 = 0x887600e1, (*(uint *)((int)this + 0x104) >> 4 & 1) != 0 || (uVar6 == 0)) &&
       (uVar8 = 0x80070057, (*(uint *)(iVar1 + 4) & 0x180e) == 0)))) &&
     ((*(int *)(iVar1 + 0x6c) == 0 || (*(int *)(iVar1 + 0x6c) == 0x100)))) {
    iVar2 = *param_1;
    *(uint *)(iVar1 + 4) = uVar4 | 0x1007;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    puVar9 = (undefined4 *)(iVar2 + 0x48);
    puVar10 = (undefined4 *)(iVar1 + 0x48);
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar4 = 0x10004000;
    uVar5 = *(uint *)(iVar2 + 0x68) | uVar5;
    *(uint *)(iVar1 + 0x68) = uVar5;
    if (*(char *)((int)this + 0x14c) != '\0') {
      uVar4 = 0x800;
    }
    uVar4 = uVar4 | uVar5;
    *(uint *)(iVar1 + 0x68) = uVar4;
    if ((*(uint *)(iVar2 + 0x68) & 0x200000) != 0) {
      *(uint *)(iVar1 + 0x68) = uVar4 | 0x200000;
    }
    uVar5 = FUN_10031b38(this,iVar1);
    uVar8 = 0;
    param_1[7] = uVar5;
    if (uVar5 == 0xffffffff) {
      uVar8 = 0x88760091;
    }
  }
  return uVar8;
}

