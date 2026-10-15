/*
 * FUN_1002452b at 1002452b
 * undefined __fastcall FUN_1002452b(int param_1)
 * Address ranges: 1002452b-100245c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002452b(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100245a7:
    **(int **)(iVar1 + 0x12d0) = param_1;
  }
  else {
    puVar2 = (undefined4 *)FUN_10035c70(this,4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10021b34(this);
      goto LAB_100245a7;
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
      goto LAB_100245b5;
    }
  }
  *this = 0;
LAB_100245b5:
  FUN_10036680(*(int *)(param_1 + 0x3188) + 0x11c0);
  return;
}

