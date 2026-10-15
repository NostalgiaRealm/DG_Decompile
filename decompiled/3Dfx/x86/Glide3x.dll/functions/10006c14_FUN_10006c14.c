/*
 * FUN_10006c14 at 10006c14
 * undefined __thiscall FUN_10006c14(void * this, int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, undefined4 * param_8, int param_9, int param_10)
 * Address ranges: 10006c14-10006d5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006c14(void *this,int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,undefined4 *param_8,int param_9,int param_10)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    piVar1 = (int *)((int)this + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar6 = param_2 & 0xfffffff8;
    if ((((param_1 < *(int *)(*(int *)((int)this + 0x1c) + 0x797)) && (param_9 <= param_10)) &&
        (-1 < param_9)) &&
       ((uVar3 = FUN_1000419c(param_3,param_4,param_5,param_6), (char)uVar3 != '\0' &&
        (bVar2 = FUN_10004183((byte)param_3,param_7), bVar2)))) {
      for (; param_3 < param_4; param_4 = param_4 + -1) {
        iVar4 = FUN_100041c6(param_7,param_4,param_4,param_5,param_6);
        uVar6 = uVar6 + iVar4;
      }
      uVar3 = *(uint *)(param_1 * 0x4e8 + 800 + *(int *)((int)this + 0xc));
      if (uVar6 < uVar3) {
        if (param_6 < 0x11) {
          param_6 = (uint)(byte)(&DAT_100555d8)[param_6];
        }
        else {
          param_6 = 0;
        }
        uVar5 = FUN_1000415b(param_3,param_5);
        iVar4 = (uVar5 >> 0x10) * param_6;
        uVar5 = ((param_10 - param_9) + 1) * iVar4;
        if (uVar3 < uVar5 + uVar6) {
          uVar5 = uVar3 - uVar6;
        }
        iVar4 = iVar4 * param_9 + uVar6 +
                *(int *)(param_1 * 0x4e8 + 0x31c + *(int *)((int)this + 0xc));
        puVar7 = (undefined4 *)(*(int *)(*(int *)((int)this + 0xc) + 0x318) + iVar4);
        FUN_10052930(puVar7,param_8,uVar5);
        (**(code **)(**(int **)((int)this + 0xc) + 0x148))(puVar7,iVar4,uVar5);
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

