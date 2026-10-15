/*
 * FUN_10037e5d at 10037e5d
 * int __thiscall FUN_10037e5d(void * this, uint * param_1)
 * Address ranges: 10037e5d-10037f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10037e5d(void *this,uint *param_1)

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
  local_88 = FUN_10037b4a(param_1);
  uVar5 = (uint)((ulonglong)local_88 >> 0x20);
  uVar4 = (uint)local_88;
  piVar1 = (int *)((int)this + 0xc);
  uVar2 = FUN_10038886(piVar1,uVar4,uVar5);
  iVar7 = uVar2 * 0x18;
  if (((uVar2 == *(uint *)((int)this + 0x14)) || (*(uint *)(iVar7 + *piVar1) != uVar4)) ||
     (*(uint *)(iVar7 + 4 + *piVar1) != uVar5)) {
    FUN_1003879e(piVar1,uVar2,uVar4,uVar5,(undefined4 *)&local_88);
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
            goto LAB_10037f13;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)piVar1[1]);
    }
LAB_10037f13:
    iVar6 = FUN_10037c12(this,param_1);
    if (iVar6 != 0) {
      puVar8 = local_80;
      for (iVar7 = 0x1c; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      local_10 = iVar6;
      FUN_1003854a(piVar1,local_80);
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    }
  }
  return iVar6;
}

