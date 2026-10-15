/*
 * FUN_10019bbe at 10019bbe
 * undefined __thiscall FUN_10019bbe(void * this, undefined4 * param_1)
 * Address ranges: 10019bbe-10019c74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019bbe(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *this_00;
  undefined4 *puVar5;
  
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,0xc08);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0xc08;
      puVar2[3] = this;
      puVar4 = (undefined4 *)((int)puVar2 + 0x13U & 0xfffffffc);
      puVar2[2] = puVar4;
      puVar5 = puVar4;
      for (iVar3 = 0x300; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *param_1;
        param_1 = param_1 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4[0x300] = 0;
      *puVar2 = FUN_10019c75;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar4 + 0x300);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10019c68;
    }
    FUN_100165f0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar2 = param_1;
  puVar2[1] = this;
  FUN_10019c75(puVar2);
LAB_10019c68:
  *this_00 = 0;
  return;
}

