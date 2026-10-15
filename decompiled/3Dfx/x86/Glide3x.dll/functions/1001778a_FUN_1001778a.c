/*
 * FUN_1001778a at 1001778a
 * int __fastcall FUN_1001778a(int param_1)
 * Address ranges: 1001778a-10017848
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001778a(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  int local_8;
  
  local_8 = param_1;
  FUN_1001416a(param_1 + 0x35c0);
  iVar1 = *(int *)(param_1 + 0x3308);
  this = (int *)(iVar1 + 0x11c0);
  local_8 = 0;
  FUN_1002acc0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10017819:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_10017849(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002abe0(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10014f4d(this);
      goto LAB_10017819;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_10017849;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10017830;
    }
  }
  *this = 0;
LAB_10017830:
  FUN_1002b5f0(*(int *)(param_1 + 0x3308) + 0x11c0);
  return local_8;
}

