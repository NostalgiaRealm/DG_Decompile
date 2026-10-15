/*
 * FUN_10025150 at 10025150
 * undefined __thiscall FUN_10025150(void * this, undefined2 param_1)
 * Address ranges: 10025150-10025208
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025150(void *this,undefined2 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_100210e5((int)this + 0x3440);
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10036000(this_00,8);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 8;
      puVar2[2] = this;
      *(undefined2 *)(puVar2 + 3) = param_1;
      puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10025209;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_100251fd;
    }
    FUN_10021ec0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  *(undefined2 *)(puVar2 + 1) = param_1;
  FUN_10025209(puVar2);
LAB_100251fd:
  *this_00 = 0;
  return;
}

