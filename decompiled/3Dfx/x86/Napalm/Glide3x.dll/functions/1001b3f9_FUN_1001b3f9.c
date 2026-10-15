/*
 * FUN_1001b3f9 at 1001b3f9
 * undefined __thiscall FUN_1001b3f9(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1001b3f9-1001b4cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001b3f9(void *this,int param_1,int param_2,int param_3,int param_4)

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
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,0x14);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x14;
      puVar3 = (undefined4 *)((int)puVar2 + 0x1fU & 0xfffffffc);
      puVar2[3] = param_1;
      puVar2[4] = param_2;
      puVar2[5] = param_3;
      puVar2[6] = param_4;
      puVar2[2] = this;
      *puVar3 = 0;
      *puVar2 = FUN_1001b4d0;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001b4c4;
    }
    FUN_100165f0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  puVar2[1] = param_1;
  puVar2[2] = param_2;
  puVar2[3] = param_3;
  puVar2[4] = param_4;
  *puVar2 = this;
  FUN_1001b4d0(puVar2);
LAB_1001b4c4:
  *this_00 = 0;
  return;
}

