/*
 * FUN_100047b1 at 100047b1
 * int __thiscall FUN_100047b1(void * this, uint param_1)
 * Address ranges: 100047b1-10004a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100047b1(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint local_10;
  uint local_c;
  void *local_8;
  
  local_8 = this;
  iVar4 = FUN_10015125(this,param_1);
  pvVar7 = local_8;
  if (iVar4 < 0) {
    return iVar4;
  }
  iVar1 = *(int *)(*(int *)((int)local_8 + 0x210) + -4 + param_1 * 4);
  local_10 = *(uint *)(iVar1 + 0x9390);
  local_c = 0;
  while( true ) {
    uVar10 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_10 != 0) break;
    local_c = local_c + 0x20;
    if (7 < local_c) goto LAB_1000488c;
    local_10 = *(uint *)(iVar1 + 0x9390 + (local_c >> 5) * 4);
  }
  pbVar3 = (byte *)((int)&local_10 + ((int)uVar10 >> 3));
  *pbVar3 = *pbVar3 & ~('\x01' << (uVar10 & 7));
  iVar5 = uVar10 + local_c;
  while (uVar10 = local_c, iVar5 != -1) {
    piVar2 = *(int **)((int)pvVar7 + iVar5 * 4 + 0xf94);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      pvVar7 = local_8;
    }
    piVar2 = *(int **)(iVar1 + 0x49b4 + iVar5 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      pvVar7 = local_8;
    }
    *(undefined4 *)(iVar1 + 0x49b4 + iVar5 * 4) = *(undefined4 *)((int)pvVar7 + iVar5 * 4 + 0xf94);
    uVar8 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    if (local_10 == 0) {
      do {
        uVar10 = uVar10 + 0x20;
        local_c = uVar10;
        if (7 < uVar10) goto LAB_1000488c;
        local_10 = ((uint *)(iVar1 + 0x9390))[uVar10 >> 5];
        uVar8 = 0;
        if (local_10 != 0) {
          for (; (local_10 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
      } while (local_10 == 0);
    }
    pbVar3 = (byte *)((int)&local_10 + ((int)uVar8 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar8 & 7));
    iVar5 = local_c + uVar8;
  }
LAB_1000488c:
  local_10 = *(uint *)(iVar1 + 0x939c);
  local_c = 0;
  while( true ) {
    uVar10 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_10 != 0) goto LAB_10004937;
    local_c = local_c + 0x20;
    if (0xf < local_c) break;
    local_10 = *(uint *)(iVar1 + 0x939c + (local_c >> 5) * 4);
  }
LAB_1000494c:
  if (*(char *)(iVar1 + 0x93a2) != '\0') {
    if (*(int **)((int)pvVar7 + 0x57b8) != (int *)0x0) {
      (**(code **)(**(int **)((int)pvVar7 + 0x57b8) + 4))();
      pvVar7 = local_8;
    }
    if (*(int **)(iVar1 + 0x926c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x926c) + 8))();
      pvVar7 = local_8;
    }
    *(undefined4 *)(iVar1 + 0x926c) = *(undefined4 *)((int)pvVar7 + 0x57b8);
  }
  iVar5 = 0;
  if (*(short *)(iVar1 + 0x8a54) != -1) {
    do {
      uVar10 = (uint)*(ushort *)(iVar1 + 0x8a54 + iVar5 * 4);
      iVar6 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      puVar9 = (undefined4 *)((uVar10 + 0x122) * 0x10 + (int)pvVar7);
      puVar11 = (undefined4 *)(uVar10 * 0x10 + iVar1 + 0x4a54);
      for (iVar6 = (*(ushort *)(iVar1 + 0x8a56 + iVar6) - uVar10) * 4; iVar6 != 0;
          iVar6 = iVar6 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
    } while (*(short *)(iVar1 + 0x8a54 + iVar5 * 4) != -1);
  }
  iVar5 = 0;
  if (*(short *)(iVar1 + 0x9258) == -1) {
    return iVar4;
  }
  do {
    uVar10 = (uint)*(ushort *)(iVar1 + 0x9258 + iVar5 * 4);
    iVar6 = iVar5 * 4;
    iVar5 = iVar5 + 1;
    puVar9 = (undefined4 *)((uVar10 + 0x533) * 0x10 + (int)pvVar7);
    puVar11 = (undefined4 *)(uVar10 * 0x10 + iVar1 + 0x49d4);
    for (iVar6 = (*(ushort *)(iVar1 + 0x925a + iVar6) - uVar10) * 4; iVar6 != 0; iVar6 = iVar6 + -1)
    {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
  } while (*(short *)(iVar1 + 0x9258 + iVar5 * 4) != -1);
  return iVar4;
LAB_10004937:
  while( true ) {
    pbVar3 = (byte *)((int)&local_10 + ((int)uVar10 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar10 & 7));
    uVar8 = local_c;
    iVar5 = local_c + uVar10;
    if (iVar5 == -1) break;
    piVar2 = *(int **)((int)pvVar7 + iVar5 * 4 + 0x57bc);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
      pvVar7 = local_8;
    }
    piVar2 = *(int **)(iVar1 + 0x9270 + iVar5 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))();
      pvVar7 = local_8;
    }
    *(undefined4 *)(iVar1 + 0x9270 + iVar5 * 4) = *(undefined4 *)((int)pvVar7 + iVar5 * 4 + 0x57bc);
    *(undefined4 *)(iVar1 + 0x92f0 + iVar5 * 4) = *(undefined4 *)((int)pvVar7 + iVar5 * 4 + 0x57fc);
    *(undefined4 *)(iVar1 + 0x92b0 + iVar5 * 4) = *(undefined4 *)((int)pvVar7 + iVar5 * 4 + 0x583c);
    uVar10 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
      }
    }
    if (local_10 == 0) {
      do {
        uVar8 = uVar8 + 0x20;
        local_c = uVar8;
        if (0xf < uVar8) goto LAB_1000494c;
        local_10 = ((uint *)(iVar1 + 0x939c))[uVar8 >> 5];
        uVar10 = 0;
        if (local_10 != 0) {
          for (; (local_10 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      } while (local_10 == 0);
    }
  }
  goto LAB_1000494c;
}

