/*
 * FUN_100068c0 at 100068c0
 * undefined __thiscall FUN_100068c0(void * this, int param_1, undefined4 * param_2, uint param_3, int param_4, int param_5, int param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 100068c0-10006a5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100068c0(void *this,int param_1,undefined4 *param_2,uint param_3,int param_4,int param_5,
            int param_6,uint param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar7 = (uint)param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) &&
         (uVar7 < *(uint *)(*(int *)((int)this + 0x1c) + 0x793))) &&
        (uVar5 = FUN_1000419c(param_4,param_5,param_6,param_7), (char)uVar5 != '\0')) &&
       (uVar5 = FUN_100041c6(param_3,param_4,param_5,param_6,param_7), uVar5 != 0)) {
      if (param_3 == 3) {
        iVar2 = *(int *)((int)this + 0xc);
        uVar3 = *(uint *)(param_1 * 0x4e8 + 800 + iVar2);
        if (uVar3 < uVar5 + uVar7) {
          uVar5 = uVar3 - uVar7;
        }
        puVar6 = (undefined4 *)
                 (*(int *)(param_1 * 0x4e8 + 0x31c + iVar2) + *(int *)(iVar2 + 0x318) + uVar7);
        FUN_10052930(puVar6,param_8,uVar5);
        (**(code **)(**(int **)((int)this + 0xc) + 0x148))
                  (puVar6,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 199] + uVar7,uVar5);
      }
      else {
        param_2 = param_8;
        for (; param_4 <= param_5; param_5 = param_5 + -1) {
          uVar5 = FUN_100041c6(3,param_5,param_5,param_6,param_7);
          bVar4 = FUN_10004183((byte)param_5,param_3);
          if (bVar4) {
            iVar2 = *(int *)((int)this + 0xc);
            uVar3 = *(uint *)(param_1 * 0x4e8 + 800 + iVar2);
            if (uVar3 < uVar5 + uVar7) {
              uVar5 = uVar3 - uVar7;
            }
            puVar6 = (undefined4 *)
                     (*(int *)(param_1 * 0x4e8 + 0x31c + iVar2) + *(int *)(iVar2 + 0x318) + uVar7);
            FUN_10052930(puVar6,param_2,uVar5);
            (**(code **)(**(int **)((int)this + 0xc) + 0x148))
                      (puVar6,(*(int **)((int)this + 0xc))[param_1 * 0x13a + 199] + uVar7,uVar5);
            uVar7 = uVar7 + uVar5;
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

