/*
 * FUN_100237b0 at 100237b0
 * undefined4 __thiscall FUN_100237b0(void * this, int * param_1)
 * Address ranges: 100237b0-1002397c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100237b0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  SIZE_T SVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  byte local_200 [484];
  uint local_1c;
  undefined8 local_18;
  int local_10;
  uint local_c;
  
  if ((char)param_1[1] == '\0') {
    local_18 = 0;
    local_18._4_4_ = 0;
    local_c = local_18._4_4_;
  }
  else {
    local_c = 0x80000000;
  }
  uVar12 = 0;
  local_1c = *(uint *)*param_1;
  uVar14 = 0;
  if (*(uint *)((int)this + 8) != 0) {
    iVar2 = *(int *)this;
    local_18 = CONCAT44(iVar2,(undefined4)local_18);
    uVar13 = *(uint *)((int)this + 8);
    do {
      uVar14 = uVar13 + uVar12 >> 1;
      uVar3 = *(uint *)(iVar2 + uVar14 * 0x18);
      uVar4 = *(uint *)(iVar2 + 4 + uVar14 * 0x18);
      if (uVar4 < local_c) {
LAB_10023830:
        uVar12 = uVar14 + 1;
        uVar14 = uVar13;
        uVar15 = uVar12;
      }
      else {
        uVar15 = uVar14;
        if ((uVar4 == local_c) && (uVar3 <= local_1c)) {
          if ((uVar4 <= local_c) && ((uVar4 < local_c || (uVar3 < local_1c)))) goto LAB_10023830;
          break;
        }
      }
      bVar16 = uVar14 != uVar12;
      uVar13 = uVar14;
      uVar14 = uVar15;
    } while (bVar16);
  }
  local_10 = uVar14 * 0x18;
  if (((uVar14 != *(uint *)((int)this + 8)) &&
      (iVar2 = *(int *)this, *(uint *)(local_10 + iVar2) == local_1c)) &&
     (*(uint *)(local_10 + 4 + iVar2) == local_c)) {
    return *(undefined4 *)(local_10 + 0x10 + iVar2);
  }
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 4)) {
    uVar12 = *(uint *)((int)this + 4) * 2;
    SVar9 = (SIZE_T)((ulonglong)uVar12 * 0x18);
    if ((int)((ulonglong)uVar12 * 0x18 >> 0x20) != 0) {
      SVar9 = 0xffffffff;
    }
    iVar10 = FUN_1005c789(SVar9);
    local_18 = CONCAT44(iVar10,(undefined4)local_18);
    iVar2 = iVar10;
    if (iVar10 != 0) {
      for (; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)(iVar2 + 8) = 0;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined1 *)(iVar2 + 0x10) = 0;
        iVar2 = iVar2 + 0x18;
      }
      uVar12 = 0;
      if (*(int *)((int)this + 4) != 0) {
        do {
          iVar2 = *(int *)this;
          uVar13 = uVar12 + 1;
          puVar11 = (undefined4 *)(iVar2 + uVar12 * 0x18);
          uVar6 = puVar11[1];
          uVar7 = puVar11[2];
          uVar8 = puVar11[3];
          puVar1 = (undefined4 *)(iVar10 + uVar12 * 0x18);
          *puVar1 = *puVar11;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          *(undefined8 *)(iVar10 + 0x10 + uVar12 * 0x18) =
               *(undefined8 *)(iVar2 + 0x10 + uVar12 * 0x18);
          uVar12 = uVar13;
        } while (uVar13 < *(uint *)((int)this + 4));
      }
      thunk_FUN_1005c76c(*(LPVOID *)this);
      *(int *)this = iVar10;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) << 1;
    }
  }
  iVar2 = local_10;
  for (uVar12 = *(uint *)((int)this + 8); uVar14 < uVar12; uVar12 = uVar12 - 1) {
    iVar10 = *(int *)this;
    puVar1 = (undefined4 *)(iVar10 + -0x18 + uVar12 * 0x18);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar11 = (undefined4 *)(iVar10 + uVar12 * 0x18);
    *puVar11 = *puVar1;
    puVar11[1] = uVar6;
    puVar11[2] = uVar7;
    puVar11[3] = uVar8;
    *(undefined8 *)(iVar10 + 0x10 + uVar12 * 0x18) = *(undefined8 *)(iVar10 + -8 + uVar12 * 0x18);
  }
  iVar10 = *(int *)this;
  *(uint *)(local_10 + iVar10) = local_1c;
  *(uint *)(local_10 + 4 + iVar10) = local_c;
  iVar10 = *(int *)this;
  iVar5 = param_1[1];
  *(int *)(local_10 + 8 + iVar10) = *param_1;
  *(int *)(local_10 + 0xc + iVar10) = iVar5;
  puVar11 = (undefined4 *)FUN_1003072b(*param_1,(int)local_200);
  puVar11 = FUN_100536f5((void *)(*(int *)((int)this + 0xc) + 0x1630),local_200,puVar11);
  *(undefined4 **)(iVar2 + 0x10 + *(int *)this) = puVar11;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return *(undefined4 *)(iVar2 + 0x10 + *(int *)this);
}

