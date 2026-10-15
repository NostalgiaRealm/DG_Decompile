/*
 * FUN_10066f43 at 10066f43
 * undefined1 __stdcall FUN_10066f43(void * param_1, uint param_2)
 * Address ranges: 10066f43-1006705f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10066f43(void *param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID local_28 [4];
  undefined4 *local_18;
  int local_14;
  void *local_8;
  
  uVar2 = 0;
  FUN_10036e19(&local_18,0x200);
  iVar1 = FUN_1006451b((int *)&local_18,param_2);
  if (iVar1 != 0) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x148) != 0) {
      do {
        FUN_100c438a((int *)&local_18);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_2 + 0x148));
    }
    FUN_10064635((int *)&local_18,param_2);
    FUN_10036e19(local_28,0x80);
    FUN_10064748(local_8,(int *)local_28,(int *)0x0,param_2);
    uVar2 = 1;
    FUN_100c3d50((int *)local_28,1);
    FUN_1006bbdb((int *)&local_18,param_2);
    if ((*(uint *)(param_2 + 0x20) >> 3 & 1) != 0) {
      FUN_100c42a9(*(uint *)(param_2 + 0x18),(int *)&local_18);
    }
    FUN_100646ce((int *)&local_18,param_2);
    FUN_100c3eb1((int *)&local_18,(int *)local_28,iVar1);
    FUN_100c3d16(param_1,local_18,local_14 - (int)local_18);
    thunk_FUN_100cfd6c(local_28[0]);
  }
  thunk_FUN_100cfd6c(local_18);
  return uVar2;
}

