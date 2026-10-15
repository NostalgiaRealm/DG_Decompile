/*
 * FUN_1001ad8c at 1001ad8c
 * undefined __thiscall FUN_1001ad8c(void * this, int * param_1)
 * Address ranges: 1001ad8c-1001ae7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ad8c(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *this_00;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_2f0 [186];
  void *local_8;
  
  local_8 = this;
  FUN_10015782((int)this + 0x3940);
  iVar4 = *(int *)((int)this + 0x3688);
  piVar5 = local_2f0;
  for (iVar2 = 0xb9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_1;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 1;
  }
  this_00 = (int *)(iVar4 + 0x11c0);
  *(short *)piVar5 = (short)*param_1;
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar4 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_1002dff0(this_00,0x2ec);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar4 + 0x12e8) = *(int *)(iVar4 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x2ec;
      puVar1[2] = local_8;
      piVar5 = local_2f0;
      piVar7 = puVar1 + 3;
      for (iVar2 = 0xb9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
      puVar3 = (undefined4 *)((int)puVar1 + 0x2f5U & 0xfffffffc);
      *(short *)piVar7 = (short)*piVar5;
      *puVar3 = 0;
      *puVar1 = FUN_1001ae7b;
      this_00[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar4 + 0x1220));
        return;
      }
      goto LAB_1001ae6e;
    }
    FUN_100165f0(this_00);
  }
  piVar5 = *(int **)(iVar4 + 0x12d0);
  *piVar5 = (int)local_8;
  piVar6 = local_2f0;
  piVar7 = piVar5;
  for (iVar4 = 0xb9; piVar7 = piVar7 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
  }
  *(short *)piVar7 = (short)*piVar6;
  FUN_1001ae7b(piVar5);
LAB_1001ae6e:
  *this_00 = 0;
  return;
}

