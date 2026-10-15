/*
 * FUN_1003c646 at 1003c646
 * uint __thiscall FUN_1003c646(void * this, uint param_1)
 * Address ranges: 1003c646-1003c739
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003c646(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  
  uVar7 = 0xffffffff;
  if (*(uint *)((int)this + 0x10) < param_1) {
    return 0xffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1003c4c0(this);
  iVar8 = 0;
  local_8 = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((int)this + 0x38)) {
    do {
      local_8 = uVar5;
      if (uVar5 != 0xffffffff) break;
      uVar5 = FUN_1003c294(this,*(byte **)(*(int *)((int)this + 0x34) + 4 + iVar8 * 8),param_1);
      iVar8 = iVar8 + 1;
      local_8 = uVar5;
    } while (iVar8 < *(int *)((int)this + 0x38));
  }
  iVar8 = iVar8 + -1;
  if (local_8 == 0xffffffff) {
    iVar8 = FUN_1003c1ee((int)this);
    if (iVar8 == -1) goto LAB_1003c728;
    local_8 = 0;
  }
  uVar7 = param_1 + local_8;
  iVar2 = *(int *)(*(int *)((int)this + 0x34) + 4 + iVar8 * 8);
  if (local_8 < uVar7) {
    uVar5 = local_8;
    do {
      uVar6 = -1 << ((byte)uVar5 & 0x1f);
      uVar3 = uVar5 >> 5;
      uVar5 = (uVar5 & 0xffffffe0) + 0x20;
      uVar4 = 0xffffffffU >> (0x20 - ((byte)uVar7 & 0x1f) & 0x1f) & uVar6;
      if (uVar5 <= uVar7) {
        uVar4 = uVar6;
      }
      puVar1 = (uint *)(iVar2 + uVar3 * 4);
      *puVar1 = *puVar1 | uVar4;
    } while (uVar5 < uVar7);
  }
  uVar7 = iVar8 << 0x10 | local_8;
LAB_1003c728:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return uVar7;
}

