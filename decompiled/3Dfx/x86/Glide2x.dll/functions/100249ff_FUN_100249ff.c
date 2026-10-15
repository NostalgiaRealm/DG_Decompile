/*
 * FUN_100249ff at 100249ff
 * undefined __fastcall FUN_100249ff(int param_1)
 * Address ranges: 100249ff-10024a92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100249ff(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this;
  
  iVar1 = *(int *)(param_1 + 0x3188);
  this = (int *)(iVar1 + 0x11c0);
  FUN_10035d50(this);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_10035c70(this,4);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 4;
      puVar4 = (undefined4 *)((int)puVar3 + 0xfU & 0xfffffffc);
      puVar3[2] = param_1;
      *puVar4 = 0;
      *puVar3 = FUN_10024a93;
      this[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10024a8a;
    }
    FUN_10021b34(this);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = param_1;
  FUN_10024a93(piVar2);
LAB_10024a8a:
  *this = 0;
  return;
}

