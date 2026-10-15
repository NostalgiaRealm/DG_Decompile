/*
 * FUN_100518fa at 100518fa
 * uint __thiscall FUN_100518fa(void * this, uint param_1)
 * Address ranges: 100518fa-10051a22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100518fa(void *this,uint param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  uint local_8;
  
  uVar6 = 0xffffffff;
  if (*(uint *)((int)this + 0x10) < param_1) {
    return 0xffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  local_8 = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    if (*(int *)((int)this + 0x48) == 0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_10051940;
    }
    do {
      puVar7 = (undefined4 *)((local_8 << 4 | 8) + *(int *)((int)this + 0x44));
LAB_10051940:
      uVar10 = (**(code **)(*(int *)*puVar7 + 0x20))((int *)*puVar7);
      FUN_1005181e(this,(int *)puVar7[1],(uint)uVar10,(uint)((ulonglong)uVar10 >> 0x20));
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)((int)this + 0x48));
  }
  iVar8 = 0;
  local_8 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((int)this + 0x38)) {
    do {
      local_8 = uVar4;
      if (uVar4 != 0xffffffff) break;
      uVar4 = FUN_100516ce(this,*(byte **)(*(int *)((int)this + 0x34) + 4 + iVar8 * 8),param_1);
      iVar8 = iVar8 + 1;
      local_8 = uVar4;
    } while (iVar8 < *(int *)((int)this + 0x38));
  }
  iVar8 = iVar8 + -1;
  if (local_8 == 0xffffffff) {
    iVar8 = FUN_100515c6((int)this);
    if (iVar8 == -1) goto LAB_10051a11;
    local_8 = 0;
  }
  uVar6 = param_1 + local_8;
  iVar2 = *(int *)(*(int *)((int)this + 0x34) + 4 + iVar8 * 8);
  if (local_8 < uVar6) {
    uVar4 = local_8;
    do {
      uVar5 = -1 << ((byte)uVar4 & 0x1f);
      uVar9 = uVar4 >> 5;
      uVar4 = (uVar4 & 0xffffffe0) + 0x20;
      uVar3 = uVar5 & 0xffffffffU >> (0x20 - ((byte)uVar6 & 0x1f) & 0x1f);
      if (uVar4 <= uVar6) {
        uVar3 = uVar5;
      }
      puVar1 = (uint *)(iVar2 + uVar9 * 4);
      *puVar1 = *puVar1 | uVar3;
    } while (uVar4 < uVar6);
  }
  uVar6 = iVar8 << 0x10 | local_8;
LAB_10051a11:
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return uVar6;
}

