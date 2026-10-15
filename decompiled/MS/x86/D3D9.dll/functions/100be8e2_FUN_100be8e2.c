/*
 * FUN_100be8e2 at 100be8e2
 * int __thiscall FUN_100be8e2(void * this, uint * param_1)
 * Address ranges: 100be8e2-100be9e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100be8e2(void *this,uint *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 local_88;
  uint local_80 [28];
  int local_10;
  
  iVar6 = 0;
  local_88 = FUN_100be5cf(param_1);
  uVar5 = (uint)((ulonglong)local_88 >> 0x20);
  uVar4 = (uint)local_88;
  piVar1 = (int *)((int)this + 0xc);
  uVar2 = FUN_100bf2f1(piVar1,uVar4,uVar5);
  iVar7 = uVar2 * 0x18;
  if (((uVar2 == *(uint *)((int)this + 0x14)) || (*(uint *)(iVar7 + *piVar1) != uVar4)) ||
     (*(uint *)(iVar7 + 4 + *piVar1) != uVar5)) {
    FUN_100bf209(piVar1,uVar2,uVar4,uVar5,(undefined4 *)&local_88);
  }
  puVar3 = (undefined4 *)(*piVar1 + 0x10 + iVar7);
  if (puVar3 != (undefined4 *)0x0) {
    piVar1 = (int *)*puVar3;
    uVar4 = 0;
    if (piVar1[1] != 0) {
      do {
        iVar7 = uVar4 * 0x74 + *piVar1;
        iVar6 = 0;
        while (*(uint *)(iVar7 + iVar6 * 4) == param_1[iVar6]) {
          iVar6 = iVar6 + 1;
          if (iVar6 == 0x1c) {
            iVar6 = *(int *)(iVar7 + 0x70);
            if (iVar6 != 0) {
              return iVar6;
            }
            goto LAB_100be998;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)piVar1[1]);
    }
LAB_100be998:
    iVar6 = FUN_100be697(this,param_1);
    if (iVar6 != 0) {
      puVar8 = local_80;
      for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      local_10 = iVar6;
      FUN_100befcf(piVar1,local_80);
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    }
  }
  return iVar6;
}

