/*
 * FUN_1000df0f at 1000df0f
 * undefined4 __thiscall FUN_1000df0f(void * this, undefined4 * param_1, int * param_2, SIZE_T param_3, uint param_4)
 * Address ranges: 1000df0f-1000e01e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1000df0f(void *this,undefined4 *param_1,int *param_2,SIZE_T param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  local_c = 0x8876086c;
  if ((param_2 != (int *)0x0) && (param_3 != 0)) {
    uVar1 = *(uint *)((int)this + 4);
    uVar5 = 0;
    local_c = 0x8007000e;
    if (uVar1 != 0) {
      local_10 = *(int *)this;
      do {
        iVar4 = 0;
        while (*(int *)(uVar5 * 0x20 + local_10 + iVar4 * 4) == param_1[iVar4]) {
          iVar4 = iVar4 + 1;
          if (iVar4 == 4) goto LAB_1000df74;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
LAB_1000df74:
    local_8 = this;
    if (uVar5 == uVar1) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uVar3 = FUN_1000e01f(this,&local_30);
      uVar6 = 0x8007000e;
      if ((char)uVar3 != '\0') {
        bVar2 = FUN_1000e0f0((void *)(uVar5 * 0x20 + *local_8),*param_1,param_1[1],param_1[2],
                             param_1[3],param_2,param_3,param_4);
        uVar6 = 0;
        if (!bVar2) {
          uVar6 = local_c;
        }
      }
      FUN_100017d7(&local_30);
      local_c = uVar6;
    }
    else {
      FUN_100017d7((undefined4 *)(*(int *)this + uVar5 * 0x20));
      bVar2 = FUN_1000e0f0((void *)(*local_8 + uVar5 * 0x20),*param_1,param_1[1],param_1[2],
                           param_1[3],param_2,param_3,param_4);
      if (bVar2) {
        local_c = 0;
      }
    }
  }
  return local_c;
}

