/*
 * FUN_10067aac at 10067aac
 * bool __stdcall FUN_10067aac(void * param_1, uint param_2)
 * Address ranges: 10067aac-10067ba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10067aac(void *param_1,uint param_2)

{
  int iVar1;
  LPVOID local_38 [4];
  undefined4 *local_28;
  int local_24;
  undefined4 *local_18;
  int local_14;
  void *local_8;
  
  FUN_10036e19(&local_18,0x200);
  iVar1 = FUN_1006451b((int *)&local_18,param_2);
  if (iVar1 != 0) {
    FUN_10067ba6((int *)&local_18,param_2);
    FUN_10064635((int *)&local_18,param_2);
    FUN_10036e19(local_38,0x80);
    FUN_10036e19(&local_28,0x80);
    FUN_10064748(local_8,(int *)local_38,(int *)&local_28,param_2);
    FUN_100c3be1((int *)(param_2 + 0x18),(int *)local_38,0x3e);
    FUN_100c3d16(local_38,local_28,local_24 - (int)local_28);
    FUN_10072988((int *)&local_18,param_2);
    FUN_10069de5(param_2,(int *)&local_18);
    FUN_100646ce((int *)&local_18,param_2);
    FUN_100c3eb1((int *)&local_18,(int *)local_38,iVar1);
    FUN_100c3d16(param_1,local_18,local_14 - (int)local_18);
    thunk_FUN_100cfd6c(local_28);
    thunk_FUN_100cfd6c(local_38[0]);
  }
  thunk_FUN_100cfd6c(local_18);
  return iVar1 != 0;
}

