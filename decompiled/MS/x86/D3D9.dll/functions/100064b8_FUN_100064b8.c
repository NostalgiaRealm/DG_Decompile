/*
 * FUN_100064b8 at 100064b8
 * undefined __thiscall FUN_100064b8(void * this, uint param_1, int * param_2, int * param_3)
 * Address ranges: 100064b8-10006708
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_100064b8(void *this,uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_c;
  byte local_5;
  
  piVar9 = (int *)0x0;
  local_c = 0;
  local_5 = 0;
  bVar4 = local_5;
  local_5 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
    if (param_3 == (int *)0x0) goto LAB_10006557;
    local_c = param_3[0x25];
    iVar8 = param_3[0x2c];
    param_2 = (int *)param_3[0x2a];
    pvVar6 = (void *)(param_3[5] + -0x66b4);
    piVar9 = param_3;
    local_5 = bVar4;
    if (param_3[5] == 0) {
      pvVar6 = (void *)0x0;
    }
  }
  else {
    local_c = param_2[0x11];
    iVar8 = param_2[0x18];
    pvVar6 = (void *)(param_2[5] + -0x66b4);
    if (param_2[5] == 0) {
      pvVar6 = (void *)0x0;
    }
    local_5 = *(byte *)(param_2 + 0x15) & 1;
    piVar9 = param_2;
    param_2 = (int *)param_2[0x16];
  }
  if (((iVar8 == 3) ||
      (((iVar8 == 2 && (*(int *)((int)this + 0xdc8) != 3)) || (pvVar6 != (void *)0x0)))) &&
     (pvVar6 != this)) {
    return;
  }
LAB_10006557:
  if (*(char *)((int)this + 0x3c4) == '\0') {
    if (piVar9 != *(int **)((int)this + param_1 * 4 + 0x1258)) {
      bVar3 = false;
      if (piVar9 == (int *)0x0) {
        local_c = 0;
      }
      else {
        if ((param_2 == (int *)&DAT_00000028) || (bVar3 = false, param_2 == (int *)0x29)) {
          bVar3 = true;
        }
        (**(code **)(*piVar9 + 4))();
        piVar9[0xb] = piVar9[0xb] | 1 << (param_1 & 0x1f);
      }
      (**(code **)(**(int **)((int)this + 0x14) + 0x6c))(param_1,0,local_c,0,0,0,0);
      iVar8 = *(int *)((int)this + param_1 * 4 + 0x1258);
      if (iVar8 != 0) {
        *(uint *)(iVar8 + 0x2c) = *(uint *)(iVar8 + 0x2c) & ~(1 << (param_1 & 0x1f));
        (**(code **)(**(int **)((int)this + param_1 * 4 + 0x1258) + 8))();
      }
      *(int **)((int)this + param_1 * 4 + 0x1258) = piVar9;
      *(uint *)((int)this + 0xcc8) =
           *(uint *)((int)this + 0xcc8) |
           (uint)((piVar9 != (int *)0x0) != (bool)*(char *)(param_1 + 0xc78 + (int)this)) <<
           ((byte)param_1 & 0x1f);
      *(bool *)(param_1 + 0xc78 + (int)this) = piVar9 != (int *)0x0;
      if (bVar3) {
        uVar5 = *(uint *)((int)this + 0x667c) | 1 << (param_1 & 0x1f);
        uVar7 = *(uint *)((int)this + 0x6678) | 1 << (param_1 & 0x1f);
      }
      else {
        uVar5 = *(uint *)((int)this + 0x667c) & ~(1 << (param_1 & 0x1f));
        uVar7 = *(uint *)((int)this + 0x6678) & ~(1 << (param_1 & 0x1f));
      }
      *(uint *)((int)this + 0x667c) = uVar5;
      *(byte *)((int)this + 0xcc4) = *(byte *)((int)this + 0xcc4) | local_5;
      *(uint *)((int)this + 0x6678) = uVar7;
      *(undefined1 *)(param_1 + 0xc88 + (int)this) = 0;
      iVar8 = *(int *)((int)this + param_1 * 4 + 0x1258);
      if ((iVar8 == 0) || (*(char *)(iVar8 + 0x32) == '\0')) {
        iVar8 = 0;
      }
      else {
        iVar8 = 1;
      }
      *(uint *)((int)this + 0xccc) =
           iVar8 << ((byte)param_1 & 0x1f) | *(uint *)((int)this + 0xccc) & ~(1 << (param_1 & 0x1f))
      ;
    }
  }
  else {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))();
    }
    iVar8 = *(int *)(*(int *)((int)this + 0x3b4) + *(int *)((int)this + 0x3c0) * 4);
    piVar1 = *(int **)(iVar8 + 0x52d8 + param_1 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
    *(int **)(iVar8 + 0x52d8 + param_1 * 4) = piVar9;
    pbVar2 = (byte *)(iVar8 + 0xac0c + (param_1 >> 5) * 4 + ((int)(param_1 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_1 & 7);
  }
  return;
}

