/*
 * FUN_10016a7c at 10016a7c
 * undefined __thiscall FUN_10016a7c(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10)
 * Address ranges: 10016a7c-10016ba4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10016a7c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_10015782((int)this + 0x3940);
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,0x2c);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x2c;
      puVar2[2] = this;
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[7] = param_5;
      puVar2[8] = param_6;
      puVar2[9] = param_7;
      puVar2[10] = param_8;
      puVar2[0xb] = param_9;
      puVar2[0xc] = param_10;
      puVar3 = (undefined4 *)((int)puVar2 + 0x37U & 0xfffffffc);
      *puVar3 = 0;
      *puVar2 = FUN_10016ba5;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10016b99;
    }
    FUN_100165f0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = this;
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  puVar2[5] = param_5;
  puVar2[6] = param_6;
  puVar2[7] = param_7;
  puVar2[8] = param_8;
  puVar2[9] = param_9;
  puVar2[10] = param_10;
  FUN_10016ba5(puVar2);
LAB_10016b99:
  *this_00 = 0;
  return;
}

