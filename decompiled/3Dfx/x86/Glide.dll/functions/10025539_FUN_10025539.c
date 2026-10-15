/*
 * FUN_10025539 at 10025539
 * undefined __thiscall FUN_10025539(void * this, undefined1 param_1)
 * Address ranges: 10025539-100255ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025539(void *this,undefined1 param_1)

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
      *(undefined1 *)(puVar2 + 3) = param_1;
      puVar3 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_100255ee;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_100255e2;
    }
    FUN_10021ec0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  *(undefined1 *)(puVar2 + 1) = param_1;
  FUN_100255ee(puVar2);
LAB_100255e2:
  *this_00 = 0;
  return;
}

