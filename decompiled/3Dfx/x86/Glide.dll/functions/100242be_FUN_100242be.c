/*
 * FUN_100242be at 100242be
 * undefined __thiscall FUN_100242be(void * this, undefined4 * param_1)
 * Address ranges: 100242be-100243e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100242be(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *this_00;
  undefined4 *puVar6;
  uint local_22c [6];
  undefined4 local_214 [132];
  
  FUN_100210e5((int)this + 0x3440);
  FUN_1001e161(this,local_22c,(int)param_1);
  uVar1 = FUN_1001e258(this,(int)param_1,local_22c);
  if ((char)uVar1 != '\0') {
    FUN_10036a10(*(int *)((int)this + 0x3188) + 0x11c0);
    FUN_1001e33d(this,(int)param_1,local_22c);
    return;
  }
  iVar5 = *(int *)((int)this + 0x3188);
  this_00 = (int *)(iVar5 + 0x11c0);
  puVar2 = local_214;
  for (iVar3 = 0x83; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_100360e0(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10036000(this_00,0x210);
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar5 + 0x12e8) = *(int *)(iVar5 + 0x12e8) + 1;
      UNLOCK();
      puVar2[1] = 0x210;
      puVar2[2] = this;
      puVar4 = local_214;
      puVar6 = puVar2 + 3;
      for (iVar3 = 0x83; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar4 = (undefined4 *)((int)puVar2 + 0x21bU & 0xfffffffc);
      *puVar4 = 0;
      *puVar2 = FUN_100243ea;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_100243db;
    }
    FUN_10021ec0(this_00);
  }
  puVar2 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar2 = this;
  puVar6 = local_214;
  puVar4 = puVar2;
  for (iVar5 = 0x83; puVar4 = puVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  FUN_100243ea(puVar2);
LAB_100243db:
  *this_00 = 0;
  return;
}

