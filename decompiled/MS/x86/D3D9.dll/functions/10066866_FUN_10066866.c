/*
 * FUN_10066866 at 10066866
 * undefined4 __stdcall FUN_10066866(void * param_1, uint param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 10066866-10066a7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10066866(void *param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint uVar4;
  LPVOID local_34 [4];
  undefined4 *local_24;
  int local_20;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  uVar1 = param_2;
  FUN_10036e19(&local_24,0x200);
  local_14 = FUN_100c3e60((int *)&local_24,*(uint *)(param_2 + 0x18));
  FUN_10036e19(local_34,0x80);
  FUN_100c422d(*(uint *)(param_2 + 0x18),(int *)&local_24);
  uVar4 = 0;
  if (param_5 != 0) {
    do {
      if (*(char *)(uVar4 + param_3) != '\x11') {
        FUN_100c4367((int *)&local_24);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_5);
    uVar4 = 0;
    do {
      FUN_100c440d((int *)&local_24);
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_5);
    uVar4 = 0;
    uVar3 = extraout_EDX;
    do {
      local_10 = (uint)*(byte *)(uVar4 + param_3);
      if (local_10 == 0x11) {
        param_2 = FUN_100c2e34((int)(uVar1 + 0x18),1,'\x01');
        uVar2 = FUN_1006b9de(local_c,extraout_EDX_00,(int *)local_34,uVar1,3,7);
        FUN_100c3be1((int *)(uVar1 + 0x18),(int *)local_34,0x10);
        FUN_100c3be1((int *)(uVar1 + 0x18),(int *)local_34,0x44);
        FUN_100c3be1((int *)(uVar1 + 0x18),(int *)local_34,0x38);
        FUN_1006ba4f(uVar1,uVar2);
      }
      else {
        param_2 = FUN_1006b9de(local_c,uVar3,(int *)local_34,uVar1,local_10,
                               (uint)*(byte *)(local_10 + param_4));
        FUN_100c3be1((int *)(uVar1 + 0x18),(int *)local_34,0x36);
      }
      FUN_100c2ed2(uVar1 + 0x18,param_2);
      uVar4 = uVar4 + 1;
      uVar3 = extraout_EDX_01;
    } while (uVar4 < param_5);
  }
  FUN_100c3d50((int *)local_34,1);
  if (*(char *)(uVar1 + 0x4d) != '\0') {
    FUN_100c3d50((int *)&local_24,2);
  }
  FUN_100c3eb1((int *)&local_24,(int *)local_34,local_14);
  FUN_100c3d16(param_1,local_24,local_20 - (int)local_24);
  thunk_FUN_100cfd6c(local_34[0]);
  uVar3 = thunk_FUN_100cfd6c(local_24);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

