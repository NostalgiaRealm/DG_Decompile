/*
 * FUN_1002de0b at 1002de0b
 * undefined __thiscall FUN_1002de0b(void * this, int param_1, uint * param_2)
 * Address ranges: 1002de0b-1002ded8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002de0b(void *this,int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar1 = *(uint *)(&DAT_100b2044 + param_1 * 4);
  iVar8 = param_1 * 0x20;
  uVar2 = *(uint *)(&DAT_100b2068 + iVar8);
  uVar3 = *(uint *)this;
  param_2[1] = *(uint *)(&DAT_100b206c + iVar8) & *(uint *)((int)this + 4);
  uVar4 = *(uint *)(&DAT_100b2074 + iVar8);
  uVar5 = *(uint *)((int)this + 0xc);
  uVar6 = *(uint *)(&DAT_100b2070 + iVar8);
  uVar7 = *(uint *)((int)this + 8);
  *param_2 = uVar2 & uVar3;
  param_2[3] = uVar4 & uVar5;
  uVar2 = *(uint *)(&DAT_100b207c + iVar8);
  param_2[2] = uVar6 & uVar7;
  uVar3 = *(uint *)(&DAT_100b2078 + iVar8);
  uVar4 = *(uint *)((int)this + 0x10);
  param_2[5] = uVar2 & *(uint *)((int)this + 0x14);
  uVar2 = *(uint *)(&DAT_100b2084 + iVar8);
  param_2[4] = uVar3 & uVar4;
  uVar3 = *(uint *)(&DAT_100b2080 + iVar8);
  param_2[7] = uVar2 & *(uint *)((int)this + 0x1c);
  uVar2 = *(uint *)((int)this + 0x24);
  uVar4 = *(uint *)((int)this + 0x20);
  param_2[6] = uVar3 & *(uint *)((int)this + 0x18);
  param_2[9] = uVar2 & uVar1;
  uVar2 = *(uint *)((int)this + 0x2c);
  uVar3 = *(uint *)((int)this + 0x28);
  param_2[8] = uVar4 & uVar1;
  param_2[0xb] = uVar2 & uVar1;
  uVar2 = *(uint *)((int)this + 0x34);
  uVar4 = *(uint *)((int)this + 0x30);
  param_2[10] = uVar3 & uVar1;
  param_2[0xd] = uVar2 & uVar1;
  param_2[0xc] = uVar4 & uVar1;
  return;
}

