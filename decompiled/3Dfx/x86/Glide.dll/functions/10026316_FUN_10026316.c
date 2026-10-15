/*
 * FUN_10026316 at 10026316
 * undefined __thiscall FUN_10026316(void * this, int * param_1)
 * Address ranges: 10026316-100263e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10026316(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *this_00;
  
  FUN_100210e5((int)this + 0x3440);
  iVar5 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar5 + 0x11c0);
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  FUN_100360e0(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar6 = (undefined4 *)FUN_10036000(this_00,0x14);
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
      *puVar6 = FUN_100263e7;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar7;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_100263da;
    }
    FUN_10021ec0(this_00);
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar6 = this;
  puVar6[1] = iVar1;
  puVar6[2] = iVar2;
  puVar6[3] = iVar3;
  puVar6[4] = iVar4;
  FUN_100263e7(puVar6);
LAB_100263da:
  *this_00 = 0;
  return;
}

