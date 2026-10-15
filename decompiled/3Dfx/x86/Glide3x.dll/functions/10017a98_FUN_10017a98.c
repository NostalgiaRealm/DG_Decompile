/*
 * FUN_10017a98 at 10017a98
 * undefined4 __fastcall FUN_10017a98(int param_1)
 * Address ranges: 10017a98-10017b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10017a98(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x3308);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10017b1c:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_10017b4c(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002abe0(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10014f4d(this);
      goto LAB_10017b1c;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_10017b4c;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10017b33;
    }
  }
  *this = 0;
LAB_10017b33:
  FUN_1002b5f0(*(int *)(param_1 + 0x3308) + 0x11c0);
  return local_8;
}

