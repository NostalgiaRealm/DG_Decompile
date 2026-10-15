/*
 * FUN_1000362c at 1000362c
 * undefined4 __thiscall FUN_1000362c(void * this, int * param_1, uint param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1000362c-10003727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1000362c(void *this,int *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  LPVOID local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined4 local_8;
  
  puVar1 = param_4;
  local_8 = 0x8876086c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    if (param_1 < *(int **)((int)this + 0x4c)) {
      local_18 = (LPVOID)0x0;
      iVar7 = *(int *)(*(int *)((int)this + 0x48) + (int)param_1 * 4);
      local_14 = 0;
      local_10 = 0;
      local_c = this;
      if ((*(byte *)(DAT_100ba2b4 + 0x947) & 4) != 0) {
        param_1 = (int *)CONCAT13(0x20,param_1._0_3_);
        FUN_10003728(&local_18,(undefined1 *)((int)&param_1 + 3));
      }
      if ((*(byte *)(DAT_100ba2b4 + 0x947) & 2) != 0) {
        param_1 = (int *)CONCAT13(0x10,param_1._0_3_);
        FUN_10003728(&local_18,(undefined1 *)((int)&param_1 + 3));
      }
      pvVar2 = local_18;
      iVar3 = FUN_10022a31();
      iVar6 = 0x200;
      if ((char)iVar3 != '\0') {
        iVar6 = 0x20c;
      }
      param_1 = (int *)((int)&DAT_100ba720 + iVar6 + iVar7 * 0x228);
      uVar4 = param_2 / (uint)param_1[1];
      if (uVar4 < local_14) {
        iVar7 = (param_2 % (uint)param_1[1]) * 0x18;
        local_8 = 0;
        *puVar1 = *(undefined4 *)(iVar7 + *param_1);
        puVar1[1] = *(undefined4 *)(iVar7 + 4 + *param_1);
        puVar1[2] = *(undefined4 *)(iVar7 + 0x10 + *param_1);
        uVar5 = FUN_10001fe6(local_c,(uint)*(byte *)((int)pvVar2 + uVar4));
        puVar1[3] = uVar5;
      }
      thunk_FUN_100ad48c(pvVar2);
    }
  }
  return local_8;
}

