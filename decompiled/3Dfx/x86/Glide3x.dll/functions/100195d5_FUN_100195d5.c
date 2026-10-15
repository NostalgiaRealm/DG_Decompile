/*
 * FUN_100195d5 at 100195d5
 * undefined __thiscall FUN_100195d5(void * this, int * param_1)
 * Address ranges: 100195d5-100196a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100195d5(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *this_00;
  
  FUN_1001416a((int)this + 0x35c0);
  iVar5 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar5 + 0x11c0);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  FUN_1002acc0(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_1002abe0(this_00,0x14);
    if (puVar6 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar5 + 0x12e8) = *(int *)(iVar5 + 0x12e8) + 1;
      UNLOCK();
      puVar6[1] = 0x14;
      puVar6[2] = this;
      puVar6[3] = iVar1;
      puVar7 = (undefined4 *)((int)puVar6 + 0x1fU & 0xfffffffc);
      puVar6[4] = iVar2;
      puVar6[5] = iVar3;
      puVar6[6] = iVar4;
      *puVar7 = 0;
      *puVar6 = FUN_100196a6;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_10019699;
    }
    FUN_10014f4d(this_00);
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar6 = this;
  puVar6[1] = iVar1;
  puVar6[2] = iVar2;
  puVar6[3] = iVar3;
  puVar6[4] = iVar4;
  FUN_100196a6(puVar6);
LAB_10019699:
  *this_00 = 0;
  return;
}

