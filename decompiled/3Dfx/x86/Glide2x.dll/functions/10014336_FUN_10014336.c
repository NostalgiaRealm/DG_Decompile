/*
 * FUN_10014336 at 10014336
 * undefined __thiscall FUN_10014336(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 10014336-10014495
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10014336(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
            ,uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int extraout_EDX;
  uint uVar6;
  undefined4 *puVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    uVar6 = param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) && (param_9 <= param_10)) &&
        (-1 < param_9)) &&
       ((uVar2 = FUN_10014ae6(param_3,param_4,param_5,param_6), (char)uVar2 != '\0' &&
        (bVar1 = FUN_10014ac8(param_3,param_7), bVar1)))) {
      uVar3 = FUN_10014ab8(param_3);
      uVar4 = FUN_10014ab8(param_4);
      if (extraout_EDX < (int)uVar4) {
        do {
          iVar5 = FUN_10014b19(param_7,*(int *)(&DAT_100515d8 + uVar4 * 4),
                               *(int *)(&DAT_100515d8 + uVar4 * 4),param_5,param_6);
          uVar6 = uVar6 + iVar5;
          uVar4 = uVar4 - 1;
        } while ((int)uVar3 < (int)uVar4);
      }
      uVar3 = *(uint *)(param_1 * 0x4e8 + 0x2a4 + *(int *)((int)this + 0xc));
      if (uVar6 < uVar3) {
        if (param_6 < 0x11) {
          param_6 = (uint)(byte)(&DAT_1005354c)[param_6];
        }
        else {
          param_6 = 0;
        }
        uVar4 = FUN_10014a85(param_3,param_5);
        iVar5 = (uVar4 >> 0x10) * param_6;
        uVar4 = ((param_10 - param_9) + 1) * iVar5;
        if (uVar3 < uVar4 + uVar6) {
          uVar4 = uVar3 - uVar6;
        }
        iVar5 = iVar5 * param_9 + uVar6 +
                *(int *)(param_1 * 0x4e8 + 0x2a0 + *(int *)((int)this + 0xc));
        puVar7 = (undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 0x29c) + iVar5);
        FUN_1004fd20(puVar7,param_8,uVar4);
        (**(code **)(**(int **)((int)this + 0xc) + 0x128))(puVar7,iVar5,uVar4);
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

