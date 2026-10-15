/*
 * FUN_10013f5d at 10013f5d
 * undefined __thiscall FUN_10013f5d(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 10013f5d-10014111
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10013f5d(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
            ,uint param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar9 = param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (uVar9 < *(uint *)(*(int *)((int)this + 0x1c) + 0x793))) &&
        (uVar5 = FUN_10014ae6(param_4,param_5,param_6,param_7), (char)uVar5 != '\0')) &&
       (uVar6 = FUN_10014b19(param_3,param_4,param_5,param_6,param_7), uVar6 != 0)) {
      if (param_3 == 3) {
        iVar2 = *(int *)((int)this + 0xc);
        uVar7 = *(uint *)(param_1 * 0x4e8 + 0x2a4 + iVar2);
        if (uVar7 < uVar6 + uVar9) {
          uVar6 = uVar7 - uVar9;
        }
        puVar8 = (undefined4 *)
                 (*(int *)(param_1 * 0x4e8 + 0x2a0 + iVar2) + *(int *)(iVar2 + 0x29c) + uVar9);
        FUN_1004fd20(puVar8,param_8,uVar6);
        (**(code **)(**(int **)((int)this + 0xc) + 0x128))
                  (puVar8,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 0xa8] + uVar9,uVar6);
      }
      else {
        for (uVar6 = FUN_10014ab8(param_5); uVar7 = FUN_10014ab8(param_4), (int)uVar7 <= (int)uVar6;
            uVar6 = uVar6 - 1) {
          uVar7 = FUN_10014b19(3,*(int *)(&DAT_100515d8 + uVar6 * 4),
                               *(int *)(&DAT_100515d8 + uVar6 * 4),param_6,param_7);
          bVar4 = FUN_10014ac8(uVar6,param_3);
          if (bVar4) {
            iVar2 = *(int *)((int)this + 0xc);
            uVar3 = *(uint *)(param_1 * 0x4e8 + 0x2a4 + iVar2);
            if (uVar3 < uVar7 + uVar9) {
              uVar7 = uVar3 - uVar9;
            }
            puVar8 = (undefined4 *)
                     (*(int *)(param_1 * 0x4e8 + 0x2a0 + iVar2) + *(int *)(iVar2 + 0x29c) + uVar9);
            FUN_1004fd20(puVar8,param_8,uVar7);
            (**(code **)(**(int **)((int)this + 0xc) + 0x128))
                      (puVar8,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 0xa8] + uVar9,uVar7);
            uVar9 = uVar9 + uVar7;
          }
          param_8 = (undefined4 *)((int)param_8 + uVar7);
        }
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

