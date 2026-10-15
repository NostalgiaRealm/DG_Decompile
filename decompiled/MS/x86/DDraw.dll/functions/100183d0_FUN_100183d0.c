/*
 * FUN_100183d0 at 100183d0
 * undefined __thiscall FUN_100183d0(void * this, undefined1 param_1)
 * Address ranges: 100183d0-1001847a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100183d0(void *this,undefined1 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + -0x7c);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1005f770(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1005f690(this_00,8);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 8;
      puVar3[2] = (int)this + -0xc0;
      *(undefined1 *)(puVar3 + 3) = param_1;
      puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_1001847b;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001846f;
    }
    FUN_1000f2b0(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)this + -0xc0;
  *(undefined1 *)(piVar2 + 1) = param_1;
  FUN_1001847b(piVar2);
LAB_1001846f:
  *this_00 = 0;
  return;
}

