/*
 * FUN_100220c6 at 100220c6
 * undefined __thiscall FUN_100220c6(void * this, int param_1, int param_2, int param_3, int param_4, undefined4 * param_5, int param_6)
 * Address ranges: 100220c6-100221d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100220c6(void *this,int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *this_00;
  undefined4 *puVar6;
  
  FUN_100210e5((int)this + 0x3440);
  iVar1 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_100360e0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_10036000(this_00,0xac);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0xac;
      puVar5 = (undefined4 *)((int)puVar3 + 0x27U & 0xfffffffc);
      puVar3[3] = this;
      puVar3[4] = param_1;
      puVar3[5] = param_2;
      puVar3[6] = param_3;
      puVar3[7] = param_4;
      puVar3[8] = param_6;
      puVar3[2] = puVar5;
      puVar6 = puVar5;
      for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *param_5;
        param_5 = param_5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5[0x24] = 0;
      *puVar3 = FUN_100221d2;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar5 + 0x24);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_100221c5;
    }
    FUN_10021ec0(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)param_5;
  piVar2[1] = (int)this;
  piVar2[2] = param_1;
  piVar2[3] = param_2;
  piVar2[4] = param_3;
  piVar2[5] = param_4;
  piVar2[6] = param_6;
  FUN_100221d2(piVar2);
LAB_100221c5:
  *this_00 = 0;
  return;
}

