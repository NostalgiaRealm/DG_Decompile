/*
 * FUN_1006c7e5 at 1006c7e5
 * int * __thiscall FUN_1006c7e5(void * this, int * param_1, int param_2, int param_3)
 * Address ranges: 1006c7e5-1006c866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_1006c7e5(void *this,int *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = *(int *)((int)this + 0x1c);
  uVar6 = *(uint *)(&DAT_100b04f0 + iVar3 * 4);
  uVar5 = *(uint *)(&DAT_100b05f0 + iVar3 * 4);
  *param_1 = *(int *)((int)this + 0x2c) * param_3 + param_2;
  if (uVar6 == 0x18) {
    uVar6 = 0x20;
  }
  uVar4 = *(uint *)((int)this + 0x14);
  *(bool *)(param_1 + 5) = uVar6 < 8;
  if (7 < uVar6) {
    uVar5 = uVar6 >> 3;
  }
  bVar1 = (&DAT_100b0660)[iVar3];
  param_1[2] = (uint)bVar1;
  bVar2 = (&DAT_100b067c)[iVar3];
  param_1[1] = uVar5;
  param_1[3] = (uint)bVar2;
  uVar5 = FUN_100791d2(this,uVar4,(byte)param_2);
  if (uVar6 < 8) {
    uVar5 = uVar5 / bVar1;
  }
  param_1[4] = uVar5;
  return param_1;
}

