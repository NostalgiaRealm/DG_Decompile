/*
 * FUN_10025e71 at 10025e71
 * undefined __thiscall FUN_10025e71(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, undefined1 param_6)
 * Address ranges: 10025e71-10025f65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10025e71(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
            undefined1 param_6)

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
    puVar2 = (undefined4 *)FUN_10036000(this_00,0x1c);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x1c;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[7] = param_5;
      *(undefined1 *)(puVar2 + 8) = param_6;
      puVar3 = (undefined4 *)((int)puVar2 + 0x27U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10025f66;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10025f5a;
    }
    FUN_10021ec0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[5] = param_5;
  *(undefined1 *)(puVar2 + 6) = param_6;
  FUN_10025f66(puVar2);
LAB_10025f5a:
  *this_00 = 0;
  return;
}

