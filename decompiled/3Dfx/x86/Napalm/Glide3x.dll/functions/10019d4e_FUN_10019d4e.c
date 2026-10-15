/*
 * FUN_10019d4e at 10019d4e
 * int __fastcall FUN_10019d4e(int param_1)
 * Address ranges: 10019d4e-10019e0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10019d4e(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  int local_8;
  
  local_8 = param_1;
  FUN_10015782(param_1 + 0x3940);
  iVar1 = *(int *)(param_1 + 0x3688);
  this = (int *)(iVar1 + 0x11c0);
  local_8 = 0;
  FUN_1002e0d0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10019ddd:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_10019e0d(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002dff0(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100165f0(this);
      goto LAB_10019ddd;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_10019e0d;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10019df4;
    }
  }
  *this = 0;
LAB_10019df4:
  FUN_1002ea00(*(int *)(param_1 + 0x3688) + 0x11c0);
  return local_8;
}

