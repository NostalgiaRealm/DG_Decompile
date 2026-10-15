/*
 * FUN_100248b5 at 100248b5
 * undefined __fastcall FUN_100248b5(int param_1)
 * Address ranges: 100248b5-10024951
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100248b5(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10024931:
    **(int **)(iVar1 + 0x12d0) = param_1;
  }
  else {
    puVar2 = (undefined4 *)FUN_10036000(this,4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10021ec0(this);
      goto LAB_10024931;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 4;
    puVar3 = (undefined4 *)((int)puVar2 + 0xfU & 0xfffffffc);
    puVar2[2] = param_1;
    *puVar3 = 0;
    *puVar2 = guMPInit;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_1002493f;
    }
  }
  *this = 0;
LAB_1002493f:
  FUN_10036a10(*(int *)(param_1 + 0x3188) + 0x11c0);
  return;
}

