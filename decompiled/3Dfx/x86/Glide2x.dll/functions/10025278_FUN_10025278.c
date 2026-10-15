/*
 * FUN_10025278 at 10025278
 * undefined __thiscall FUN_10025278(void * this, int * param_1)
 * Address ranges: 10025278-1002535d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10025278(void *this,int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *this_00;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_140 [78];
  void *local_8;
  
  local_8 = this;
  FUN_10020d59((int)this + 0x3440);
  iVar3 = *(int *)((int)this + 0x3188);
  piVar4 = local_140;
  for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  this_00 = (int *)(iVar3 + 0x11c0);
  *(char *)piVar4 = (char)*param_1;
  FUN_10035d50(this_00);
  if (*(char *)(iVar3 + 0x12ec) != '\0') {
    puVar1 = (undefined4 *)FUN_10035c70(this_00,0x13c);
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar3 + 0x12e8) = *(int *)(iVar3 + 0x12e8) + 1;
      UNLOCK();
      puVar1[1] = 0x13c;
      puVar1[2] = local_8;
      piVar4 = local_140;
      piVar6 = puVar1 + 3;
      for (iVar2 = 0x4d; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      *(char *)piVar6 = (char)*piVar4;
      *(undefined4 *)((uint)(puVar1 + 0x51) & 0xfffffffc) = 0;
      *puVar1 = FUN_1002535e;
      this_00[*(int *)(iVar3 + 0x12e4) * 5 + 0x1a] = (int)((uint)(puVar1 + 0x51) & 0xfffffffc);
      if (*(char *)(iVar3 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar3 + 0x1220));
        return;
      }
      goto LAB_10025351;
    }
    FUN_10021b34(this_00);
  }
  piVar4 = *(int **)(iVar3 + 0x12d0);
  *piVar4 = (int)local_8;
  piVar5 = local_140;
  piVar6 = piVar4;
  for (iVar3 = 0x4d; piVar6 = piVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar5;
    piVar5 = piVar5 + 1;
  }
  *(char *)piVar6 = (char)*piVar5;
  FUN_1002535e(piVar4);
LAB_10025351:
  *this_00 = 0;
  return;
}

