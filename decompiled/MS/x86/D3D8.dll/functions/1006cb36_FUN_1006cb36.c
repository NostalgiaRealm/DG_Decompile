/*
 * FUN_1006cb36 at 1006cb36
 * undefined __thiscall FUN_1006cb36(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5, undefined4 * param_6)
 * Address ranges: 1006cb36-1006cc41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006cb36(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  undefined4 *puVar5;
  undefined4 local_44 [10];
  undefined4 local_1c [6];
  
  iVar4 = *(int *)(*(int *)this + 0x44);
  this_00 = (int *)(iVar4 + 0x11c0);
  puVar1 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_6;
    param_6 = param_6 + 1;
    puVar1 = puVar1 + 1;
  }
  puVar1 = local_44;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_5;
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  }
  FUN_100abd50(this_00);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_100abc70(this_00,0x50);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x50;
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      puVar1[4] = param_3;
      puVar1[5] = param_4;
      puVar3 = local_44;
      puVar5 = puVar1 + 6;
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = local_1c;
      puVar5 = puVar1 + 0x10;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x5bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar1 = FUN_1006cc42;
      this_00[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1006cc35;
    }
    FUN_1002f90d(this_00);
  }
  puVar1 = *(undefined4 **)(iVar4 + 0x12d0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar3 = local_44;
  puVar5 = puVar1 + 4;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = local_1c;
  puVar5 = puVar1 + 0xe;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_1006cc42(puVar1);
LAB_1006cc35:
  *this_00 = 0;
  return;
}

