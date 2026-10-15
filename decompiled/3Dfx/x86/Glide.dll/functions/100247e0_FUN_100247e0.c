/*
 * FUN_100247e0 at 100247e0
 * int __fastcall FUN_100247e0(int param_1)
 * Address ranges: 100247e0-1002489e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100247e0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  int local_8;
  
  local_8 = param_1;
  FUN_100210e5(param_1 + 0x3440);
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  local_8 = 0;
  FUN_100360e0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_1002486f:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_1002489f(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_10036000(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021ec0(this);
      goto LAB_1002486f;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_1002489f;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10024886;
    }
  }
  *this = 0;
LAB_10024886:
  FUN_10036a10(*(int *)(param_1 + 0x3188) + 0x11c0);
  return local_8;
}

