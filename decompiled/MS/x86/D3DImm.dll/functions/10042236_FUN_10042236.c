/*
 * FUN_10042236 at 10042236
 * int __thiscall FUN_10042236(void * this, uint param_1)
 * Address ranges: 10042236-10042512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10042236(void *this,uint param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ushort in_FPUControlWord;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  void *local_1c;
  int local_18;
  undefined4 local_14;
  uint *local_10;
  uint local_c;
  int local_8;
  
  local_1c = this;
  BVar6 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar6 == 0) {
    FUN_1003c603();
  }
  local_10 = &local_20;
  local_20 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_20 = (uint)in_FPUControlWord;
  }
  local_24 = FUN_1000715b(this,param_1);
  if (-1 < local_24) {
    local_28 = 0;
    iVar8 = *(int *)(*(int *)((int)this + 0x214) + -4 + param_1 * 4);
    local_8 = iVar8;
    uVar11 = 0xffffffff;
    local_2c = *(uint *)(iVar8 + 0xa1c);
    uVar7 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    iVar10 = iVar8;
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        uVar7 = uVar11;
        if (0x98 < local_28) goto LAB_1004234b;
        local_2c = *(uint *)(iVar8 + 0xa1c + (local_28 >> 5) * 4);
        uVar7 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_2c == 0);
    }
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar7 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar7 & 7));
    uVar7 = uVar7 + local_28;
LAB_1004234b:
    uVar12 = local_28;
    if (uVar7 != 0xffffffff) {
      FUN_1003e51d(this,uVar7,*(uint *)(iVar10 + 8 + uVar7 * 4));
      uVar7 = 0;
      if (local_2c != 0) {
        for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      if (local_2c == 0) {
        do {
          uVar12 = uVar12 + 0x20;
          local_28 = uVar12;
          uVar7 = uVar11;
          iVar10 = local_8;
          if (0x98 < uVar12) goto LAB_1004234b;
          local_2c = ((uint *)(iVar8 + 0xa1c))[uVar12 >> 5];
          uVar7 = 0;
          if (local_2c != 0) {
            for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
        } while (local_2c == 0);
      }
      pbVar5 = (byte *)((int)&local_2c + ((int)uVar7 >> 3));
      *pbVar5 = *pbVar5 & ~('\x01' << (uVar7 & 7));
      uVar7 = uVar7 + local_28;
      iVar10 = local_8;
      goto LAB_1004234b;
    }
    puVar1 = (uint *)(iVar10 + 0xa50);
    local_28 = 0;
    local_2c = *puVar1;
    uVar7 = 0;
    if (local_2c != 0) {
      for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_2c == 0) {
      local_28 = 0;
      do {
        local_28 = local_28 + 0x20;
        if (7 < local_28) goto LAB_100424d4;
        local_2c = *(uint *)(iVar10 + 0xa50 + (local_28 >> 5) * 4);
        uVar7 = 0;
        if (local_2c != 0) {
          for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      } while (local_2c == 0);
    }
    pbVar5 = (byte *)((int)&local_2c + ((int)uVar7 >> 3));
    *pbVar5 = *pbVar5 & ~('\x01' << (uVar7 & 7));
    uVar11 = local_28 + uVar7;
LAB_100424d4:
    param_1 = local_28;
    if (uVar11 != 0xffffffff) {
      piVar2 = *(int **)(iVar10 + 0x9dc + uVar11 * 4);
      local_c = uVar11;
      if (piVar2 == (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x74))(uVar11,0,0,0,0,0,0);
      }
      else {
        iVar8 = (**(code **)(*piVar2 + 0x38))();
        if ((*(uint *)(iVar8 + 4) & 0x10000) == 0) {
LAB_100423cd:
          local_10 = (uint *)((uint)local_10 & 0xffffff00);
        }
        else {
          local_10 = (uint *)CONCAT31(local_10._1_3_,1);
          if ((*(byte *)(iVar8 + 0x4c) & 4) != 0) goto LAB_100423cd;
        }
        local_14 = *(undefined4 *)(iVar8 + 0x40);
        piVar2 = *(int **)(local_8 + 0x9dc + uVar11 * 4);
        local_18 = **(int **)((int)this + 0x14);
        iVar8 = piVar2[1];
        uVar3 = *(undefined4 *)(iVar8 + 0x50);
        uVar4 = *(undefined4 *)(iVar8 + 0x6c);
        uVar9 = (**(code **)(*piVar2 + 0x3c))(local_10,0);
        uVar11 = local_c;
        (**(code **)(local_18 + 0x74))(local_c,uVar4,uVar3,local_14,uVar9);
        this = local_1c;
      }
      iVar10 = local_8;
      piVar2 = *(int **)(local_8 + 0x9fc + uVar11 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      piVar2 = *(int **)((int)this + uVar11 * 4 + 0x14f4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      iVar8 = *(int *)(iVar10 + 0x9dc + uVar11 * 4);
      *(int *)((int)this + uVar11 * 4 + 0x14d4) = iVar8;
      *(undefined4 *)((int)this + uVar11 * 4 + 0x14f4) =
           *(undefined4 *)(iVar10 + 0x9fc + uVar11 * 4);
      *(uint *)((int)this + 0x934) =
           *(uint *)((int)this + 0x934) |
           (uint)((iVar8 != 0) != (bool)*(char *)((int)this + uVar11 + 0x8f4)) <<
           ((byte)uVar11 & 0x1f);
      *(bool *)((int)this + uVar11 + 0x8f4) = iVar8 != 0;
      uVar7 = 0;
      if (local_2c != 0) {
        for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      *(uint *)((int)this + 0x938) = *(uint *)((int)this + 0x938) | 1 << (uVar11 & 0x1f);
      if (local_2c == 0) {
        do {
          param_1 = param_1 + 0x20;
          local_28 = param_1;
          if (7 < param_1) {
            uVar11 = 0xffffffff;
            goto LAB_100424d4;
          }
          local_2c = puVar1[param_1 >> 5];
          uVar7 = 0;
          if (local_2c != 0) {
            for (; (local_2c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
        } while (local_2c == 0);
      }
      pbVar5 = (byte *)((int)&local_2c + ((int)uVar7 >> 3));
      *pbVar5 = *pbVar5 & ~('\x01' << (uVar7 & 7));
      uVar11 = local_28 + uVar7;
      goto LAB_100424d4;
    }
    local_c = 0xffffffff;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return local_24;
}

