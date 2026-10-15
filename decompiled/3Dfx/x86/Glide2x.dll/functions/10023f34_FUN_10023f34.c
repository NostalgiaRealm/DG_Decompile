/*
 * FUN_10023f34 at 10023f34
 * undefined __thiscall FUN_10023f34(void * this, undefined4 * param_1)
 * Address ranges: 10023f34-1002405f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023f34(void *this,undefined4 *param_1)

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
  
  FUN_10020d59((int)this + 0x3440);
  FUN_1001ddd5(this,local_22c,(int)param_1);
  uVar1 = FUN_1001decc(this,(int)param_1,local_22c);
  if ((char)uVar1 != '\0') {
    FUN_10036680(*(int *)((int)this + 0x3188) + 0x11c0);
    FUN_1001dfb1(this,(int)param_1,local_22c);
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
  FUN_10035d50(this_00);
  if (*(char *)(iVar5 + 0x12ec) != '\0') {
    puVar2 = (undefined4 *)FUN_10035c70(this_00,0x210);
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
      *puVar2 = FUN_10024060;
      this_00[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x1220));
        return;
      }
      goto LAB_10024051;
    }
    FUN_10021b34(this_00);
  }
  puVar2 = *(undefined4 **)(iVar5 + 0x12d0);
  *puVar2 = this;
  puVar6 = local_214;
  puVar4 = puVar2;
  for (iVar5 = 0x83; puVar4 = puVar4 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
  }
  FUN_10024060(puVar2);
LAB_10024051:
  *this_00 = 0;
  return;
}

