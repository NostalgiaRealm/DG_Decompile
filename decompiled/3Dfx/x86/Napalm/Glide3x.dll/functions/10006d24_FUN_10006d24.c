/*
 * FUN_10006d24 at 10006d24
 * undefined __thiscall FUN_10006d24(void * this, int param_1, undefined4 * param_2, uint param_3, int param_4, int param_5, int param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 10006d24-10006ec7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006d24(void *this,int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,
            int param_6,uint param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar8 = (uint)param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (uVar8 < *(uint *)(*(int *)((int)this + 0x1c) + 0x793))) &&
        (uVar5 = FUN_1000439e(this,param_4,param_5,param_6,param_7), (char)uVar5 != '\0')) &&
       (uVar5 = FUN_1000440d(param_3,param_4,param_5,param_6,param_7), uVar5 != 0)) {
      if (param_3 == 3) {
        iVar6 = param_1 * 0x4e8;
        iVar2 = *(int *)((int)this + 0xc);
        if (*(uint *)(iVar6 + 0x45c + iVar2) < uVar5 + uVar8) {
          uVar5 = *(int *)(iVar6 + 0x45c + iVar2) - uVar8;
        }
        puVar7 = (undefined4 *)
                 (*(int *)(iVar6 + 0x458 + iVar2) + *(int *)(*(int *)((int)this + 0xc) + 0x454) +
                 uVar8);
        FUN_10055d40(puVar7,param_8,uVar5);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                  (puVar7,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 0x116] + uVar8,uVar5);
      }
      else {
        param_2 = param_8;
        for (; param_4 <= param_5; param_5 = param_5 + -1) {
          uVar5 = FUN_1000440d(3,param_5,param_5,param_6,param_7);
          bVar4 = FUN_10004385((byte)param_5,param_3);
          if (bVar4) {
            uVar3 = *(uint *)(param_1 * 0x4e8 + 0x45c + *(int *)((int)this + 0xc));
            if (uVar3 < uVar5 + uVar8) {
              uVar5 = uVar3 - uVar8;
            }
            puVar7 = (undefined4 *)
                     (*(int *)(param_1 * 0x4e8 + 0x458 + *(int *)((int)this + 0xc)) +
                      *(int *)(*(int *)((int)this + 0xc) + 0x454) + uVar8);
            FUN_10055d40(puVar7,param_2,uVar5);
            (**(code **)(**(int **)((int)this + 0xc) + 0x13c))
                      (puVar7,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 0x116] + uVar8,uVar5);
            uVar8 = uVar8 + uVar5;
          }
          param_2 = (undefined4 *)((int)param_2 + uVar5);
        }
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

