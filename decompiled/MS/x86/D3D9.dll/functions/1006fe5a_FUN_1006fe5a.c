/*
 * FUN_1006fe5a at 1006fe5a
 * undefined4 __thiscall FUN_1006fe5a(void * this, void * param_1, uint param_2)
 * Address ranges: 1006fe5a-1006ff8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1006fe5a(void *this,void *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  
  FUN_1006bac6(param_2);
  FUN_10036e19(&local_18,0x200);
  puVar1 = (uint *)(param_2 + 0x18);
  iVar2 = FUN_100c3e60((int *)&local_18,*puVar1);
  FUN_100c422d(*puVar1,(int *)&local_18);
  FUN_10036e19(local_28,0x80);
  FUN_1006fc92(this,(int *)local_28,param_2);
  FUN_100c3be1((int *)puVar1,(int *)local_28,0x3e);
  FUN_1006bbdb((int *)&local_18,param_2);
  uVar4 = 0;
  if (*(char *)(param_2 + 0x1b3) == '\0') {
    if (*(int *)(param_2 + 0x148) != 0) {
      do {
        FUN_100c4367((int *)&local_18);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_2 + 0x148));
    }
  }
  else {
    do {
      if (*(char *)(param_2 + 0x124 + uVar4) != '\0') {
        FUN_100c4367((int *)&local_18);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x11);
  }
  FUN_10069160((int *)&local_18,param_2);
  if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_100c3d50((int *)&local_18,2);
  }
  FUN_100c3eb1((int *)&local_18,(int *)local_28,iVar2);
  FUN_100c3d16(param_1,local_18,local_14 - (int)local_18);
  thunk_FUN_100cfd6c(local_28[0]);
  uVar3 = thunk_FUN_100cfd6c(local_18);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

