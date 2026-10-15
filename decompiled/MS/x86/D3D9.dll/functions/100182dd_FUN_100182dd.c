/*
 * FUN_100182dd at 100182dd
 * undefined __fastcall FUN_100182dd(void * param_1)
 * Address ranges: 100182dd-100183ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100182dd(void *param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  void *local_8;
  
  local_8 = param_1;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)param_1 + 0x2ec));
  uVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x2ec) = 0;
  *(undefined4 *)((int)param_1 + 0x2f0) = 0;
  *(undefined4 *)((int)param_1 + 0x2f8) = 0;
  *(undefined4 *)((int)param_1 + 0x2f4) = 0;
  thunk_FUN_100cfd6c(*(LPVOID *)((int)param_1 + 0x2fc));
  iVar1 = 8;
  *(undefined4 *)((int)param_1 + 0x2fc) = 0;
  local_8 = (void *)((int)param_1 + 0x318);
  *(undefined4 *)((int)param_1 + 0x300) = 0;
  *(undefined4 *)((int)param_1 + 0x308) = 0;
  *(undefined4 *)((int)param_1 + 0x304) = 0;
  if (*(uint *)((int)param_1 + 0x31c) < 9) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 0x318) + uVar2 * 4) != -1) {
        (**(code **)(**(int **)((int)param_1 + 0x14) + 100))(uVar2,0);
        *(undefined4 *)(*(int *)((int)param_1 + 0x318) + uVar2 * 4) = 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
  }
  else {
    do {
      if (*(int *)(*(int *)((int)param_1 + 0x318) + uVar2 * 4) != -1) {
        (**(code **)(**(int **)((int)param_1 + 0x14) + 100))(uVar2,0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    FUN_1000fc01((undefined4 *)((int)param_1 + 0x318));
    this = local_8;
    do {
      local_8 = (void *)0xffffffff;
      FUN_10003d8f(this,&local_8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

