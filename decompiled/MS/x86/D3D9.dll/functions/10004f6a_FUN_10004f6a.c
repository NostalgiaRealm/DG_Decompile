/*
 * FUN_10004f6a at 10004f6a
 * int __thiscall FUN_10004f6a(void * this, uint param_1)
 * Address ranges: 10004f6a-10005209
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10004f6a(void *this,uint param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_14;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_8 = this;
  local_c = FUN_10019261(this,param_1);
  if (local_c < 0) {
    return local_c;
  }
  iVar2 = *(int *)(*(int *)((int)this + 0x3b4) + -4 + param_1 * 4);
  local_14 = *(uint *)(iVar2 + 0xac0c);
  local_10 = 0;
  while( true ) {
    uVar11 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_14 != 0) break;
    local_10 = local_10 + 0x20;
    if (0xf < local_10) goto LAB_1000504b;
    local_14 = *(uint *)(iVar2 + 0xac0c + (local_10 >> 5) * 4);
  }
  pbVar4 = (byte *)((int)&local_14 + ((int)uVar11 >> 3));
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
  iVar7 = uVar11 + local_10;
  while (uVar11 = local_10, iVar7 != -1) {
    piVar3 = *(int **)((int)this + iVar7 * 4 + 0x1258);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    piVar3 = *(int **)(iVar2 + 0x52d8 + iVar7 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    *(undefined4 *)(iVar2 + 0x52d8 + iVar7 * 4) = *(undefined4 *)((int)this + iVar7 * 4 + 0x1258);
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_14 == 0) {
      do {
        uVar11 = uVar11 + 0x20;
        local_10 = uVar11;
        if (0xf < uVar11) goto LAB_1000504b;
        local_14 = ((uint *)(iVar2 + 0xac0c))[uVar11 >> 5];
        uVar5 = 0;
        if (local_14 != 0) {
          for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_14 == 0);
    }
    pbVar4 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar5 & 7));
    iVar7 = local_10 + uVar5;
  }
LAB_1000504b:
  local_14 = *(uint *)(iVar2 + 0xac18);
  local_10 = 0;
  while( true ) {
    uVar11 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (local_14 != 0) break;
    local_10 = local_10 + 0x20;
    if (0xf < local_10) goto LAB_10005128;
    local_14 = *(uint *)(iVar2 + 0xac18 + (local_10 >> 5) * 4);
  }
  pbVar4 = (byte *)((int)&local_14 + ((int)uVar11 >> 3));
  *pbVar4 = *pbVar4 & ~('\x01' << (uVar11 & 7));
  iVar7 = local_10 + uVar11;
  uVar11 = local_10;
  pvVar6 = local_8;
  this = local_8;
  while (local_10 = uVar11, local_8 = this, iVar7 != -1) {
    piVar3 = *(int **)((int)pvVar6 + iVar7 * 4 + 26000);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
      pvVar6 = local_8;
    }
    piVar3 = *(int **)(iVar2 + 0xaae4 + iVar7 * 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))();
      pvVar6 = local_8;
    }
    *(undefined4 *)(iVar2 + 0xaae4 + iVar7 * 4) = *(undefined4 *)((int)pvVar6 + iVar7 * 4 + 26000);
    *(undefined4 *)(iVar2 + 0xab64 + iVar7 * 4) = *(undefined4 *)((int)pvVar6 + iVar7 * 4 + 0x65d0);
    *(undefined4 *)(iVar2 + 0xab24 + iVar7 * 4) = *(undefined4 *)((int)pvVar6 + iVar7 * 4 + 0x6610);
    uVar5 = 0;
    if (local_14 != 0) {
      for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_14 == 0) {
      do {
        uVar11 = uVar11 + 0x20;
        local_10 = uVar11;
        this = local_8;
        if (0xf < uVar11) goto LAB_10005128;
        local_14 = ((uint *)(iVar2 + 0xac18))[uVar11 >> 5];
        uVar5 = 0;
        if (local_14 != 0) {
          for (; (local_14 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
      } while (local_14 == 0);
    }
    pbVar4 = (byte *)((int)&local_14 + ((int)uVar5 >> 3));
    *pbVar4 = *pbVar4 & ~('\x01' << (uVar5 & 7));
    uVar11 = local_10;
    this = local_8;
    iVar7 = local_10 + uVar5;
  }
LAB_10005128:
  if (*(char *)(iVar2 + 0xac1e) != '\0') {
    if (*(int **)((int)this + 0x658c) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x658c) + 4))();
    }
    if (*(int **)(iVar2 + 0xaae0) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0xaae0) + 8))();
    }
    *(undefined4 *)(iVar2 + 0xaae0) = *(undefined4 *)((int)this + 0x658c);
  }
  iVar7 = 0;
  sVar1 = *(short *)(iVar2 + 0xa118);
  while (sVar1 != -1) {
    uVar11 = (uint)*(ushort *)(iVar2 + 0xa118 + iVar7 * 4);
    iVar9 = uVar11 * 0x10;
    puVar10 = (undefined4 *)((int)this + iVar9 + 0x12ac);
    puVar12 = (undefined4 *)(iVar2 + 0x6118 + iVar9);
    for (iVar8 = (*(ushort *)(iVar2 + 0xa11a + iVar7 * 4) - uVar11) * 4; iVar8 != 0;
        iVar8 = iVar8 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    iVar7 = iVar7 + 1;
    this = local_8;
    sVar1 = *(short *)(iVar2 + 0xa118 + iVar7 * 4);
  }
  iVar7 = 0;
  sVar1 = *(short *)(iVar2 + 0xa91c);
  while (sVar1 != -1) {
    uVar11 = (uint)*(ushort *)(iVar2 + 0xa91c + iVar7 * 4);
    iVar9 = uVar11 * 0x10;
    puVar10 = (undefined4 *)((int)local_8 + iVar9 + 0x52ac);
    puVar12 = (undefined4 *)(iVar2 + 0x5318 + iVar9);
    for (iVar8 = (*(ushort *)(iVar2 + 0xa91e + iVar7 * 4) - uVar11) * 4; iVar8 != 0;
        iVar8 = iVar8 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    iVar7 = iVar7 + 1;
    sVar1 = *(short *)(iVar2 + 0xa91c + iVar7 * 4);
  }
  return local_c;
}

