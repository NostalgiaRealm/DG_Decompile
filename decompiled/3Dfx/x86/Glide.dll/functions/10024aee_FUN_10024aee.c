/*
 * FUN_10024aee at 10024aee
 * undefined4 __fastcall FUN_10024aee(int param_1)
 * Address ranges: 10024aee-10024ba1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10024aee(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10024b72:
    piVar2 = *(int **)(iVar1 + 0x12d0);
    *piVar2 = param_1;
    piVar2[1] = (int)&local_8;
    FUN_10024ba2(piVar2);
  }
  else {
    puVar3 = (undefined4 *)FUN_10036000(this,8);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_10021ec0(this);
      goto LAB_10024b72;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar3[1] = 8;
    puVar3[2] = param_1;
    puVar3[3] = &local_8;
    puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
    *puVar4 = 0;
    *puVar3 = FUN_10024ba2;
    this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10024b89;
    }
  }
  *this = 0;
LAB_10024b89:
  FUN_10036a10(*(int *)(param_1 + 0x3188) + 0x11c0);
  return local_8;
}

