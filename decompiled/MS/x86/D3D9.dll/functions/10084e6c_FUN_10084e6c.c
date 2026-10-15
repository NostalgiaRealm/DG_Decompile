/*
 * FUN_10084e6c at 10084e6c
 * undefined __thiscall FUN_10084e6c(void * this, undefined1 param_1)
 * Address ranges: 10084e6c-10084f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10084e6c(void *this,undefined1 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + -0x7c);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100ce620(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100ce540(this_00,8);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 8;
      puVar3[2] = (int)this + -0xc0;
      *(undefined1 *)(puVar3 + 3) = param_1;
      puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_10084f17;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10084f0b;
    }
    FUN_1003971e(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)this + -0xc0;
  *(undefined1 *)(piVar2 + 1) = param_1;
  FUN_10084f17(piVar2);
LAB_10084f0b:
  *this_00 = 0;
  return;
}

