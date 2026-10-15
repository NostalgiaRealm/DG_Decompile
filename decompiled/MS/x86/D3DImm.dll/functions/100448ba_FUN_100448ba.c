/*
 * FUN_100448ba at 100448ba
 * undefined4 __thiscall FUN_100448ba(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 100448ba-100449bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100448ba(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_b8 [45];
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  FUN_10042b7c((void *)((int)this + 0x940),local_b8,&param_2);
  *(int *)((int)this + 0x1678) = param_1;
  puVar5 = local_b8;
  puVar6 = (undefined4 *)((int)this + 0x1684);
  for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_1 - 1U < 6) {
    uVar4 = (uint)(byte)(&DAT_1005f490)[param_1];
  }
  else {
    uVar4 = 0;
  }
  *(uint *)((int)this + 0x167c) = uVar4;
  if (param_1 - 1U < 6) {
    uVar4 = (uint)(byte)(&DAT_1005f488)[param_1];
  }
  else {
    uVar4 = 0;
  }
  *(uint *)((int)this + 0x1680) = uVar4;
  *(undefined4 *)((int)this + 0x1740) = 0;
  *(undefined4 *)((int)this + 0x1744) = 0;
  lpCriticalSection = DAT_1006bbd0;
  if (*(int *)((int)this + 0x1688) == 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(0x4000 / (ulonglong)*(uint *)((int)this + 0x1690)) & 0xfffffffc;
  }
  *(uint *)((int)this + 0x1738) = uVar2;
  *(undefined4 *)((int)this + 0x1748) = param_3;
  *(undefined4 *)((int)this + 0x174c) = param_4;
  *(undefined4 *)((int)this + 0x1734) = param_5;
  *(undefined4 *)((int)this + 0x173c) = 0x2000;
  *(undefined1 *)((int)this + 0x1750) = 1;
  *(bool *)((int)this + 0x1751) = uVar4 != 0;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

