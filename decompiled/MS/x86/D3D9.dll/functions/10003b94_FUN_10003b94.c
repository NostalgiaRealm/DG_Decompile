/*
 * FUN_10003b94 at 10003b94
 * int __thiscall FUN_10003b94(void * this, uint param_1, uint param_2, int param_3, undefined4 * param_4)
 * Address ranges: 10003b94-10003d05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10003b94(void *this,uint param_1,uint param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  LPVOID pvVar8;
  LPVOID local_14;
  uint local_10;
  undefined4 local_c;
  int *local_8;
  
  uVar6 = 0x8876086c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    if (param_1 < *(uint *)((int)this + 0x4c)) {
      pvVar8 = (LPVOID)0x0;
      local_14 = (LPVOID)0x0;
      local_10 = 0;
      local_c = 0;
      local_8 = &DAT_100df2e8 + *(int *)(*(int *)((int)this + 0x48) + param_1 * 4) * 0x8a;
      if ((((*(byte *)(DAT_100dea74 + 0x947) & 4) != 0) &&
          (iVar3 = FUN_10002297(param_3), iVar3 == 0x20)) &&
         (cVar2 = FUN_1000347d(this,param_3), cVar2 != '\0')) {
        param_1 = CONCAT13(0x20,(undefined3)param_1);
        FUN_10003d30(&local_14,(undefined1 *)((int)&param_1 + 3));
        pvVar8 = local_14;
      }
      if ((((*(byte *)(DAT_100dea74 + 0x947) & 2) != 0) &&
          (iVar3 = FUN_10002297(param_3), iVar3 == 0x10)) &&
         (cVar2 = FUN_1000347d(this,param_3), cVar2 != '\0')) {
        param_1 = CONCAT13(0x10,(undefined3)param_1);
        FUN_10003d30(&local_14,(undefined1 *)((int)&param_1 + 3));
        pvVar8 = local_14;
      }
      iVar4 = FUN_1002a0b7();
      puVar1 = param_4;
      iVar3 = 0x200;
      if ((char)iVar4 != '\0') {
        iVar3 = 0x20c;
      }
      local_8 = (int *)(iVar3 + (int)local_8);
      if (local_10 == 0) {
        uVar6 = (-(uint)(param_2 < (uint)local_8[1]) & 0xfffffffe) + 0x8876086c;
      }
      else {
        uVar6 = 0x8876086c;
      }
      uVar7 = local_8[1];
      param_1 = param_2 / uVar7;
      uVar7 = param_2 % uVar7;
      param_2 = uVar6;
      if (param_1 < local_10) {
        iVar3 = uVar7 * 0x18;
        param_2 = 0;
        *param_4 = *(undefined4 *)(iVar3 + *local_8);
        param_4[1] = *(undefined4 *)(iVar3 + 4 + *local_8);
        param_4[2] = *(undefined4 *)(iVar3 + 0x10 + *local_8);
        uVar5 = 0x23;
        if (param_3 != 0x23) {
          uVar5 = FUN_10001ed6(this,(uint)*(byte *)((int)pvVar8 + param_1));
        }
        puVar1[3] = uVar5;
      }
      thunk_FUN_100cfd6c(pvVar8);
      uVar6 = param_2;
    }
  }
  return uVar6;
}

