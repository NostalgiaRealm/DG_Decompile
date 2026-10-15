/*
 * FUN_1000e331 at 1000e331
 * int __fastcall FUN_1000e331(int param_1, uint param_2)
 * Address ranges: 1000e331-1000e3f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1000e331(int param_1,uint param_2)

{
  void *this;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  int local_c;
  uint local_8;
  
  this = (void *)(param_1 + 0xb4);
  local_c = 0;
  local_10 = this;
  local_8 = param_2;
  uVar1 = FUN_1000fd3e(this,param_2,0);
  if (uVar1 != *(uint *)(param_1 + 0xbc)) {
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar2 = uVar1 * 0x20;
    if (((*(uint *)(iVar2 + iVar3) == param_2) && (*(int *)(iVar2 + 4 + iVar3) == 0)) &&
       (iVar2 = iVar3 + 0xc + iVar2, param_2 = local_8, iVar2 != 0)) {
      return iVar2;
    }
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_20 = 0;
  uVar1 = FUN_1000fd3e(this,param_2,0);
  iVar3 = uVar1 * 0x20;
  if (((uVar1 == *(uint *)(param_1 + 0xbc)) ||
      (iVar2 = *(int *)(param_1 + 0xb8), *(uint *)(iVar3 + iVar2) != local_8)) ||
     (*(int *)(iVar3 + 4 + iVar2) != local_c)) {
    FUN_1000fc18(local_10,uVar1,local_8,local_c,&local_8,&local_20);
  }
  else {
    *(int *)(iVar3 + 0xc + iVar2) = local_c;
    thunk_FUN_100cfd6c(*(LPVOID *)(iVar3 + 0x10 + iVar2));
    *(undefined4 *)(iVar3 + 0x10 + iVar2) = 0;
    *(undefined4 *)(iVar3 + 0x14 + iVar2) = 0;
    *(undefined4 *)(iVar3 + 0x18 + iVar2) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  thunk_FUN_100cfd6c((LPVOID)0x0);
  return iVar3 + iVar2 + 0xc;
}

