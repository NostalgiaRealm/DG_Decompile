/*
 * FUN_100729e6 at 100729e6
 * undefined4 __thiscall FUN_100729e6(void * this, void * param_1, uint param_2)
 * Address ranges: 100729e6-10072b47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100729e6(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  undefined4 *local_34;
  int local_30;
  LPVOID local_24 [4];
  undefined4 *local_14;
  int local_10;
  
  FUN_10036e19(&local_14,0x200);
  puVar1 = (uint *)(param_2 + 0x18);
  iVar2 = FUN_100c3e60((int *)&local_14,*puVar1);
  FUN_100c422d(*puVar1,(int *)&local_14);
  FUN_10036e19(local_24,0x80);
  FUN_1007037f(param_2,extraout_ECX,(int *)local_24);
  FUN_10070c00(this,*(uint **)(param_2 + 0xc0),param_2,(int *)local_24);
  FUN_10036e19(&local_34,0x80);
  FUN_1006b98e(this,*(int *)(param_2 + 0xc0),param_2,(int *)&local_34);
  FUN_1007281c(param_2,(int *)local_24);
  FUN_100c3be1((int *)puVar1,(int *)local_24,0x3e);
  FUN_100c3d16(local_24,local_34,local_30 - (int)local_34);
  FUN_10072988((int *)&local_14,param_2);
  FUN_10069de5(param_2,(int *)&local_14);
  FUN_100728e8((int *)&local_14,param_2);
  FUN_10069160((int *)&local_14,param_2);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100c3d50((int *)&local_14,2);
  }
  uVar4 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    do {
      FUN_100c3d50((int *)&local_14,4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_2 + 0x60));
  }
  FUN_100c3eb1((int *)&local_14,(int *)local_24,iVar2);
  FUN_100c3d16(param_1,local_14,local_10 - (int)local_14);
  thunk_FUN_100cfd6c(local_34);
  thunk_FUN_100cfd6c(local_24[0]);
  uVar3 = thunk_FUN_100cfd6c(local_14);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

