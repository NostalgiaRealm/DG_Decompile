/*
 * FUN_10042513 at 10042513
 * int __thiscall FUN_10042513(void * this, uint param_1)
 * Address ranges: 10042513-100426a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10042513(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  BOOL BVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  ushort in_FPUControlWord;
  uint local_18;
  uint local_14;
  uint local_10;
  uint *local_c;
  void *local_8;
  
  local_8 = this;
  BVar4 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar4 == 0) {
    FUN_1003c603();
  }
  local_c = &local_10;
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
  }
  local_c = (uint *)FUN_10007573(this,param_1);
  if (-1 < (int)local_c) {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + -4 + param_1 * 4);
    local_14 = 0;
    local_18 = *(uint *)(iVar1 + 0xa50);
    while( true ) {
      uVar7 = 0;
      if (local_18 != 0) {
        for (; (local_18 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      if (local_18 != 0) {
        pbVar3 = (byte *)((int)&local_18 + ((int)uVar7 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar7 & 7));
        iVar8 = local_14 + uVar7;
        uVar7 = local_14;
        pvVar6 = local_8;
        goto joined_r0x100425d6;
      }
      local_14 = local_14 + 0x20;
      if (7 < local_14) break;
      local_18 = *(uint *)(iVar1 + 0xa50 + (local_14 >> 5) * 4);
    }
    iVar8 = -1;
    uVar7 = local_14;
    pvVar6 = local_8;
joined_r0x100425d6:
    local_14 = uVar7;
    if (iVar8 != -1) {
      piVar2 = *(int **)((int)pvVar6 + iVar8 * 4 + 0x14f4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))(piVar2);
        pvVar6 = local_8;
      }
      piVar2 = *(int **)(iVar1 + 0x9fc + iVar8 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        pvVar6 = local_8;
      }
      *(undefined4 *)(iVar1 + 0x9dc + iVar8 * 4) = *(undefined4 *)((int)pvVar6 + iVar8 * 4 + 0x14d4)
      ;
      *(undefined4 *)(iVar1 + 0x9fc + iVar8 * 4) = *(undefined4 *)((int)pvVar6 + iVar8 * 4 + 0x14f4)
      ;
      uVar5 = 0;
      if (local_18 != 0) {
        for (; (local_18 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (local_18 == 0) {
        do {
          uVar7 = uVar7 + 0x20;
          local_14 = uVar7;
          pvVar6 = local_8;
          if (7 < uVar7) {
            iVar8 = -1;
            uVar7 = local_14;
            goto joined_r0x100425d6;
          }
          local_18 = ((uint *)(iVar1 + 0xa50))[uVar7 >> 5];
          uVar5 = 0;
          if (local_18 != 0) {
            for (; (local_18 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
        } while (local_18 == 0);
      }
      pbVar3 = (byte *)((int)&local_18 + ((int)uVar5 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
      iVar8 = local_14 + uVar5;
      uVar7 = local_14;
      goto joined_r0x100425d6;
    }
    (**(code **)(**(int **)((int)local_8 + 0x14) + 0x80))(iVar1,*(undefined4 *)(iVar1 + 4));
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return (int)local_c;
}

