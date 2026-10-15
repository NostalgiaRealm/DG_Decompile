/*
 * FUN_10095e97 at 10095e97
 * undefined1 __thiscall FUN_10095e97(void * this, int param_1, int param_2)
 * Address ranges: 10095e97-10096232
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10095e97(void *this,int param_1,int param_2)

{
  short sVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 local_5;
  
  local_5 = 1;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_c = this;
  if (*(int *)((int)this + 0xc284) != 0) {
    local_14 = *(uint *)((int)this + 0xc284);
    local_10 = FUN_1009c076((void *)((int)this + 0x6764),&local_14);
    if ((local_10 != 0) && (*(char *)((int)this + 0x11) == '\0')) {
      local_14 = 0;
      sVar1 = *(short *)(local_10 + 0xc);
      while (pvVar2 = local_c, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(local_10 + 0xc + local_14 * 4);
        uVar5 = (uint)*(ushort *)(local_10 + 0xe + local_14 * 4);
        puVar7 = (undefined4 *)((int)this + uVar6 * 0x10 + 0x52ac);
        puVar8 = (undefined4 *)((uVar6 + 0xb33) * 0x10 + (int)local_c);
        for (iVar3 = (uVar5 - uVar6) * 4; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 0x98))
                  (uVar6,uVar5,uVar6 * 0x10 + 0x52ac + (int)local_c);
        local_14 = local_14 + 1;
        this = pvVar2;
        sVar1 = *(short *)(local_10 + 0xc + local_14 * 4);
      }
      local_14 = 0;
      sVar1 = *(short *)(local_10 + 0x1d0);
      while (pvVar2 = local_c, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(local_10 + 0x1d0 + local_14 * 4);
        uVar5 = (uint)*(ushort *)(local_10 + 0x1d2 + local_14 * 4);
        puVar7 = (undefined4 *)((int)this + uVar6 * 0x10 + 0x6868);
        puVar8 = (undefined4 *)((uVar6 + 0xc13) * 0x10 + (int)local_c);
        for (iVar3 = (uVar5 - uVar6) * 4; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 200))
                  (uVar6,uVar5,uVar6 * 0x10 + 0x6868 + (int)local_c);
        local_14 = local_14 + 1;
        this = pvVar2;
        sVar1 = *(short *)(local_10 + 0x1d0 + local_14 * 4);
      }
      local_14 = 0;
      sVar1 = *(short *)(local_10 + 500);
      while (pvVar2 = local_c, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(local_10 + 500 + local_14 * 4);
        uVar5 = (uint)*(ushort *)(local_10 + 0x1f6 + local_14 * 4);
        puVar7 = (undefined4 *)((int)this + (uVar6 + 0x1a0a) * 4);
        puVar8 = (undefined4 *)((int)this + uVar6 * 4 + 0xc230);
        for (iVar3 = uVar5 - uVar6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 0xcc))
                  (uVar6,uVar5,(int)local_c + uVar6 * 4 + 0x6828);
        local_14 = local_14 + 1;
        this = pvVar2;
        sVar1 = *(short *)(local_10 + 500 + local_14 * 4);
      }
    }
    FUN_1009c9c5(*(undefined4 **)((int)this + 0xc284));
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xc284) = 0;
    *(undefined4 *)((int)this + 0x6670) = 0;
    (**(code **)(**(int **)((int)this + 0x14) + 0x90))(0);
    uVar5 = MXCSR;
  }
  else if (param_2 == 0) {
    local_5 = 0;
    uVar5 = MXCSR;
  }
  else {
    *(int *)((int)this + 0xc284) = param_1;
    *(undefined4 *)((int)this + 0x6670) = *(undefined4 *)(param_2 + 4);
    (**(code **)(**(int **)((int)this + 0x14) + 0x90))(*(undefined4 *)(param_2 + 4));
    local_14 = MXCSR;
    uVar5 = MXCSR;
    if (*(char *)((int)this + 0x11) == '\0') {
      iVar3 = 0;
      sVar1 = *(short *)(param_2 + 0xc);
      MXCSR = 0x3fc0;
      while (pvVar2 = local_c, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(param_2 + 0xc + iVar3 * 4);
        uVar5 = (uint)*(ushort *)(param_2 + 0xe + iVar3 * 4);
        puVar7 = (undefined4 *)(*(int *)(param_2 + 8) + uVar6 * 0x10 + 0x414);
        puVar8 = (undefined4 *)((uVar6 + 0xb33) * 0x10 + (int)local_c);
        for (iVar4 = (uVar5 - uVar6) * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 0x98))
                  (uVar6,uVar5,*(int *)(param_2 + 8) + 0x414 + uVar6 * 0x10);
        iVar3 = iVar3 + 1;
        this = pvVar2;
        sVar1 = *(short *)(param_2 + 0xc + iVar3 * 4);
      }
      iVar3 = 0;
      sVar1 = *(short *)(param_2 + 0x1d0);
      while (pvVar2 = local_c, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(param_2 + 0x1d0 + iVar3 * 4);
        uVar5 = (uint)*(ushort *)(param_2 + 0x1d2 + iVar3 * 4);
        puVar7 = (undefined4 *)((uVar6 + 0x1a) * 0x10 + *(int *)(param_2 + 8));
        puVar8 = (undefined4 *)((uVar6 + 0xc13) * 0x10 + (int)local_c);
        for (iVar4 = (uVar5 - uVar6) * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 200))
                  (uVar6,uVar5,(uVar6 + 0x1a) * 0x10 + *(int *)(param_2 + 8));
        iVar3 = iVar3 + 1;
        this = pvVar2;
        sVar1 = *(short *)(param_2 + 0x1d0 + iVar3 * 4);
      }
      iVar3 = 0;
      sVar1 = *(short *)(param_2 + 500);
      while (pvVar2 = local_c, uVar5 = local_14, sVar1 != -1) {
        uVar6 = (uint)*(ushort *)(param_2 + 500 + iVar3 * 4);
        uVar5 = (uint)*(ushort *)(param_2 + 0x1f6 + iVar3 * 4);
        puVar7 = (undefined4 *)(*(int *)(param_2 + 8) + 0x2b0 + uVar6 * 4);
        puVar8 = (undefined4 *)((int)this + uVar6 * 4 + 0xc230);
        for (iVar4 = uVar5 - uVar6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (**(code **)(**(int **)((int)local_c + 0x14) + 0xcc))
                  (uVar6,uVar5,*(int *)(param_2 + 8) + uVar6 * 4 + 0x2b0);
        iVar3 = iVar3 + 1;
        this = pvVar2;
        sVar1 = *(short *)(param_2 + 500 + iVar3 * 4);
      }
    }
  }
  MXCSR = uVar5;
  *(undefined1 *)((int)this + 0xcc4) = 1;
  return local_5;
}

