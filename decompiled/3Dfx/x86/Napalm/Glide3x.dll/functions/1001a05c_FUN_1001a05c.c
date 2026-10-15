/*
 * FUN_1001a05c at 1001a05c
 * undefined4 __fastcall FUN_1001a05c(int param_1)
 * Address ranges: 1001a05c-1001a10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001a05c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x3688);
  this = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1001a0e0:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_1001a110(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_1002dff0(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_100165f0(this);
      goto LAB_1001a0e0;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_1001a110;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1001a0f7;
    }
  }
  *this = 0;
LAB_1001a0f7:
  FUN_1002ea00(*(int *)(param_1 + 0x3688) + 0x11c0);
  return local_8;
}

