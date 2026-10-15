/*
 * FUN_1003c8ea at 1003c8ea
 * undefined __thiscall FUN_1003c8ea(void * this, int param_1, int * param_2)
 * Address ranges: 1003c8ea-1003ca12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c8ea(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *this_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar5 = *(int *)((int)this + 0xd9b8);
  iVar4 = param_2[3];
  this_00 = (int *)(iVar5 + 0x11c0);
  iVar8 = iVar1;
  iVar9 = iVar2;
  iVar10 = iVar3;
  iVar11 = iVar4;
  FUN_100abd50(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_100abc70(this_00,0x18);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar5 + 0x12e8) = *(int *)(iVar5 + 0x12e8) + 1;
      UNLOCK();
      puVar7 = (undefined4 *)((int)puVar6 + 0x23U & 0xfffffffc);
      puVar6[1] = 0x18;
      puVar6[2] = this;
      puVar6[3] = param_1;
      puVar6[4] = iVar1;
      puVar6[5] = iVar2;
      puVar6[6] = iVar3;
      puVar6[7] = iVar4;
      *puVar7 = 0;
      *puVar6 = FUN_1003ca13;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_1003ca07;
    }
    FUN_1002f90d(this_00);
    iVar8 = iVar1;
    iVar9 = iVar2;
    iVar10 = iVar3;
    iVar11 = iVar4;
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar6 = this;
  puVar6[1] = param_1;
  puVar6[2] = iVar8;
  puVar6[3] = iVar9;
  puVar6[4] = iVar10;
  puVar6[5] = iVar11;
  FUN_1003ca13(puVar6);
LAB_1003ca07:
  *this_00 = 0;
  return;
}

