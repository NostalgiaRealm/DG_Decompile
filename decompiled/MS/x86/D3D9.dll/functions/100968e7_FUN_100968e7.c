/*
 * FUN_100968e7 at 100968e7
 * undefined1 __thiscall FUN_100968e7(void * this, int param_1, int param_2)
 * Address ranges: 100968e7-10096da4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100968e7(void *this,int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 local_22;
  int local_18;
  uint local_14 [4];
  
  local_22 = 1;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  if (*(int *)((int)this + 0xc288) != 0) {
    local_14[0] = *(uint *)((int)this + 0xc288);
    iVar4 = FUN_1009c1d2((void *)((int)this + 0x672c),local_14);
    if (iVar4 != 0) {
      if ((*(char *)((int)this + 0x11) == '\0') || (*(char *)(*(int *)(iVar4 + 8) + 0x44e) != '\0'))
      {
        bVar2 = true;
      }
      else {
        bVar2 = false;
        FUN_10092b91(this);
      }
      local_14[0] = 0;
      sVar1 = *(short *)(iVar4 + 0xc);
      while (sVar1 != -1) {
        puVar7 = (uint *)((int)this + 0x6690);
        uVar9 = (uint)*(ushort *)(iVar4 + 0xc + local_14[0] * 4);
        uVar5 = (uint)*(ushort *)(iVar4 + 0xe + local_14[0] * 4);
        puVar8 = (undefined4 *)(uVar9 * 0x10 + 0x12ac + (int)this);
        puVar10 = (undefined4 *)((uVar9 + 0x6ff) * 0x10 + (int)this);
        for (iVar6 = (uVar5 - uVar9) * 4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        if (bVar2) {
          if (*(int *)((int)this + 0x6698) == 1) {
            if (*puVar7 < *(uint *)((int)this + 0x6694)) {
              if ((*(uint *)((int)this + 0x6694) < uVar9) || (uVar5 < *puVar7)) {
                uVar11 = *(uint *)((int)this + 0x6698);
                goto LAB_10096a06;
              }
              if (*puVar7 < uVar9) {
                uVar9 = *puVar7;
              }
              *puVar7 = uVar9;
              if (uVar5 < *(uint *)((int)this + 0x6694)) {
                uVar5 = *(uint *)((int)this + 0x6694);
              }
            }
            else {
              *puVar7 = uVar9;
            }
            *(uint *)((int)this + 0x6694) = uVar5;
          }
          else {
            uVar11 = 1;
LAB_10096a06:
            FUN_100980e2(puVar7,uVar9,uVar5,uVar11,this);
          }
        }
        local_14[0] = local_14[0] + 1;
        sVar1 = *(short *)(iVar4 + 0xc + local_14[0] * 4);
      }
      local_14[0] = 0;
      sVar1 = *(short *)(iVar4 + 0x810);
      while (sVar1 != -1) {
        uVar5 = (uint)*(ushort *)(iVar4 + 0x810 + local_14[0] * 4);
        uVar9 = (uint)*(ushort *)(iVar4 + 0x812 + local_14[0] * 4);
        puVar8 = (undefined4 *)(uVar5 * 0x10 + 0x67e8 + (int)this);
        puVar10 = (undefined4 *)((uVar5 + 0xb04) * 0x10 + (int)this);
        for (iVar6 = (uVar9 - uVar5) * 4; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        if (*(char *)((int)this + 0x11) == '\0') {
          (**(code **)(**(int **)((int)this + 0x14) + 0xc0))
                    (uVar5,uVar9,uVar5 * 0x10 + 0x67e8 + (int)this);
        }
        local_14[0] = local_14[0] + 1;
        sVar1 = *(short *)(iVar4 + 0x810 + local_14[0] * 4);
      }
      local_14[0] = 0;
      sVar1 = *(short *)(iVar4 + 0x834);
      while (sVar1 != -1) {
        uVar5 = (uint)*(ushort *)(iVar4 + 0x834 + local_14[0] * 4);
        uVar9 = (uint)*(ushort *)(iVar4 + 0x836 + local_14[0] * 4);
        puVar8 = (undefined4 *)((int)this + uVar5 * 4 + 0x67a8);
        puVar10 = (undefined4 *)((int)this + uVar5 * 4 + 0xb140);
        for (iVar6 = uVar9 - uVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        if (*(char *)((int)this + 0x11) == '\0') {
          (**(code **)(**(int **)((int)this + 0x14) + 0xc4))
                    (uVar5,uVar9,(int)this + uVar5 * 4 + 0x67a8);
        }
        local_14[0] = local_14[0] + 1;
        sVar1 = *(short *)(iVar4 + 0x834 + local_14[0] * 4);
      }
    }
    FUN_1009e840(*(undefined4 **)((int)this + 0xc288));
  }
  uVar3 = MXCSR;
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0xc288) = 0;
  }
  else if (param_2 == 0) {
    local_22 = 0;
  }
  else {
    *(int *)((int)this + 0xc288) = param_1;
    local_14[0] = 0x3fc0;
    MXCSR = 0x3fc0;
    if ((*(char *)((int)this + 0x11) == '\0') || (*(char *)(*(int *)(param_2 + 8) + 0x44e) != '\0'))
    {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    local_18 = 0;
    sVar1 = *(short *)(param_2 + 0xc);
    while (sVar1 != -1) {
      if (!bVar2) {
        FUN_10092b91(this);
      }
      puVar7 = (uint *)((int)this + 0x6690);
      local_14[0] = (uint)*(ushort *)(param_2 + 0xc + local_18 * 4);
      uVar9 = (uint)*(ushort *)(param_2 + 0xe + local_18 * 4);
      puVar8 = (undefined4 *)((local_14[0] + 0x85) * 0x10 + *(int *)(param_2 + 8));
      puVar10 = (undefined4 *)((local_14[0] + 0x6ff) * 0x10 + (int)this);
      for (iVar4 = (uVar9 - local_14[0]) * 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      if (bVar2) {
        if (*(int *)((int)this + 0x6698) == 1) {
          if (*puVar7 < *(uint *)((int)this + 0x6694)) {
            if ((*(uint *)((int)this + 0x6694) < local_14[0]) || (uVar9 < *puVar7)) {
              uVar5 = *(uint *)((int)this + 0x6698);
              goto LAB_10096c2f;
            }
            uVar5 = local_14[0];
            if (*puVar7 < local_14[0]) {
              uVar5 = *puVar7;
            }
            *puVar7 = uVar5;
            if (uVar9 < *(uint *)((int)this + 0x6694)) {
              uVar9 = *(uint *)((int)this + 0x6694);
            }
          }
          else {
            *puVar7 = local_14[0];
          }
          *(uint *)((int)this + 0x6694) = uVar9;
        }
        else {
          uVar5 = 1;
LAB_10096c2f:
          FUN_10098116(puVar7,local_14[0],uVar9,uVar5,this);
        }
      }
      local_18 = local_18 + 1;
      sVar1 = *(short *)(param_2 + 0xc + local_18 * 4);
    }
    iVar4 = 0;
    sVar1 = *(short *)(param_2 + 0x810);
    while (sVar1 != -1) {
      uVar9 = (uint)*(ushort *)(param_2 + 0x810 + iVar4 * 4);
      local_14[0] = (uint)*(ushort *)(param_2 + 0x812 + iVar4 * 4);
      puVar8 = (undefined4 *)(*(int *)(param_2 + 8) + uVar9 * 0x10 + 0x48d8);
      puVar10 = (undefined4 *)((uVar9 + 0xb04) * 0x10 + (int)this);
      for (iVar6 = (local_14[0] - uVar9) * 4; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      if (*(char *)((int)this + 0x11) == '\0') {
        (**(code **)(**(int **)((int)this + 0x14) + 0xc0))
                  (uVar9,local_14[0],*(int *)(param_2 + 8) + uVar9 * 0x10 + 0x48d8);
      }
      iVar4 = iVar4 + 1;
      sVar1 = *(short *)(param_2 + 0x810 + iVar4 * 4);
    }
    local_14[0] = 0;
    sVar1 = *(short *)(param_2 + 0x834);
    while (sVar1 != -1) {
      uVar5 = (uint)*(ushort *)(param_2 + 0x834 + local_14[0] * 4);
      uVar9 = (uint)*(ushort *)(param_2 + 0x836 + local_14[0] * 4);
      puVar8 = (undefined4 *)(*(int *)(param_2 + 8) + (uVar5 + 0x127a) * 4);
      puVar10 = (undefined4 *)((int)this + (uVar5 + 0x2c50) * 4);
      for (iVar4 = uVar9 - uVar5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      if (*(char *)((int)this + 0x11) == '\0') {
        (**(code **)(**(int **)((int)this + 0x14) + 0xc4))
                  (uVar5,uVar9,*(int *)(param_2 + 8) + uVar5 * 4 + 0x49e8);
      }
      local_14[0] = local_14[0] + 1;
      sVar1 = *(short *)(param_2 + 0x834 + local_14[0] * 4);
    }
  }
  *(undefined1 *)((int)this + 0xc2ee) = 1;
  MXCSR = uVar3;
  return local_22;
}

