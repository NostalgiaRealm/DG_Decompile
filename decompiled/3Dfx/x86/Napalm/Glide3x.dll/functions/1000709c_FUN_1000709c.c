/*
 * FUN_1000709c at 1000709c
 * undefined __thiscall FUN_1000709c(void * this, int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 1000709c-100071d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000709c(void *this,int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var;
  int extraout_EDX;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    uVar5 = param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) && (param_9 <= param_10)) &&
        (-1 < param_9)) &&
       ((uVar3 = FUN_1000439e(this,param_3,param_4,param_5,param_6), (char)uVar3 != '\0' &&
        (bVar1 = FUN_10004385((byte)param_3,param_7), bVar1)))) {
      for (; param_3 < param_4; param_4 = param_4 + -1) {
        iVar4 = FUN_1000440d(param_7,param_4,param_4,param_5,param_6);
        uVar5 = uVar5 + iVar4;
      }
      uVar3 = *(uint *)(param_1 * 0x4e8 + 0x45c + *(int *)((int)this + 0xc));
      if (uVar5 < uVar3) {
        FUN_1000435d(param_3,param_5);
        uVar2 = FUN_100054be(param_6);
        iVar4 = extraout_EDX * CONCAT31(extraout_var,uVar2);
        uVar7 = ((param_10 - param_9) + 1) * iVar4;
        if (uVar3 < uVar7 + uVar5) {
          uVar7 = uVar3 - uVar5;
        }
        iVar4 = iVar4 * param_9 + uVar5 +
                *(int *)(param_1 * 0x4e8 + 0x458 + *(int *)((int)this + 0xc));
        puVar6 = (undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 0x454) + iVar4);
        FUN_10055d40(puVar6,param_8,uVar7);
        (**(code **)(**(int **)((int)this + 0xc) + 0x13c))(puVar6,iVar4,uVar7);
      }
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

