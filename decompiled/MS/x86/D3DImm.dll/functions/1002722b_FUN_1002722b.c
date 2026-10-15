/*
 * FUN_1002722b at 1002722b
 * undefined __thiscall FUN_1002722b(void * this, uint param_1, int param_2, int param_3, int param_4, int param_5, undefined1 param_6, undefined1 param_7)
 * Address ranges: 1002722b-10027328
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002722b(void *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
            undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  if (7 < param_1) {
    return;
  }
  iVar1 = *(int *)((int)this + 0x1d54);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1005c1d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1005c0f0(this_00,0x20);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x20;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[7] = param_5;
      *(undefined1 *)(puVar2 + 8) = param_6;
      *(undefined1 *)(puVar2 + 9) = param_7;
      puVar3 = (undefined4 *)((int)puVar2 + 0x2bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10027329;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1002731c;
    }
    FUN_1001b0b6(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[5] = param_5;
  *(undefined1 *)(puVar2 + 6) = param_6;
  *(undefined1 *)(puVar2 + 7) = param_7;
  FUN_10027329(puVar2);
LAB_1002731c:
  *this_00 = 0;
  return;
}

