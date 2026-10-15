/*
 * FUN_10091924 at 10091924
 * undefined4 * __thiscall FUN_10091924(void * this, void * param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, char param_7)
 * Address ranges: 10091924-10091ca2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10091924(void *this,void *param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  void *this_00;
  void *this_01;
  uint uVar6;
  int iVar7;
  char extraout_DL;
  char extraout_DL_00;
  undefined4 *in_stack_00000030;
  
  *(undefined4 *)((int)this + 0x66b8) = 0;
  *(undefined4 *)((int)this + 0x66bc) = 0;
  puVar2 = (undefined4 *)((int)this + 0x66b4);
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  *(undefined4 *)((int)this + 0x66c0) = 0;
  *(undefined4 **)((int)this + 0x66c4) = puVar2;
  FUN_100cfed0((int *)((int)this + 0x66c8),0,0x30);
  FUN_10006aae(this,(int)param_1,param_2,param_3,param_4,param_5,param_6,extraout_ECX,
               (undefined4 *)&stack0x00000020);
  *(undefined4 *)((int)this + 0x66b4) = &PTR_FUN_100d6b64;
  *(undefined4 *)((int)this + 0x66a8) = 0;
  *(undefined4 *)((int)this + 0x66ac) = 0;
  *(undefined4 *)((int)this + 0x66b0) = 0;
  *(undefined ***)this = &PTR_FUN_100d6d7c;
  *(undefined ***)((int)this + 0x66a4) = &PTR_LAB_100d1540;
  *(void **)((int)this + 0x66f8) = param_1;
  uVar3 = in_stack_00000030[1];
  *(undefined4 *)((int)this + 0x66fc) = *in_stack_00000030;
  *(undefined4 *)((int)this + 0x6700) = uVar3;
  *(undefined4 *)((int)this + 0x6718) = 0;
  *(undefined4 *)((int)this + 0x671c) = 0;
  *(undefined4 *)((int)this + 0x6720) = 0;
  *(undefined4 *)((int)this + 0x6724) = 0;
  *(void **)((int)this + 0x6728) = this;
  *(undefined4 *)((int)this + 0x672c) = 0;
  *(undefined4 *)((int)this + 0x6730) = 0;
  *(undefined4 *)((int)this + 0x6734) = 0;
  *(undefined4 *)((int)this + 0x6738) = 0;
  *(undefined4 *)((int)this + 0x673c) = 0;
  *(undefined4 *)((int)this + 0x6740) = 0;
  *(undefined4 *)((int)this + 0x6744) = 0;
  *(undefined4 *)((int)this + 0x6748) = 0;
  *(undefined4 *)((int)this + 0x674c) = 0x10001;
  *(undefined4 *)((int)this + 0x6750) = 0;
  *(undefined4 *)((int)this + 0x6754) = 0;
  *(undefined4 *)((int)this + 0x6758) = 0;
  *(undefined4 *)((int)this + 0x675c) = 0;
  *(void **)((int)this + 0x6760) = this;
  *(undefined4 *)((int)this + 0x6764) = 0;
  *(undefined4 *)((int)this + 0x6768) = 0;
  *(undefined4 *)((int)this + 0x676c) = 0;
  *(undefined4 *)((int)this + 0x6770) = 0;
  uVar3 = FUN_100cfd89(0x200);
  *(undefined4 *)((int)this + 0x6774) = uVar3;
  *(undefined4 *)((int)this + 0x6778) = 0x20;
  *(undefined4 *)((int)this + 0x677c) = 0;
  *(void **)((int)this + 0x6780) = this;
  *(undefined4 *)((int)this + 0x6784) = 0;
  *(undefined4 *)((int)this + 0x6788) = 0;
  *(undefined4 *)((int)this + 0x678c) = 0;
  *(undefined4 *)((int)this + 0x6790) = 0;
  *(undefined4 *)((int)this + 0x6794) = 0;
  *(undefined4 *)((int)this + 0x6798) = 0;
  *(undefined4 *)((int)this + 0x679c) = 0;
  *(undefined4 *)((int)this + 0x67a0) = 0;
  *(undefined4 *)((int)this + 0x67a4) = 0;
  *(undefined4 *)((int)this + 0xc280) = 0;
  *(undefined4 *)((int)this + 0xc284) = 0;
  *(undefined4 *)((int)this + 0xc288) = 0;
  *(undefined4 *)((int)this + 0xc28c) = 0;
  *(undefined4 *)((int)this + 0xc2d0) = 0;
  *(undefined4 *)((int)this + 0xc2d4) = 0;
  *(undefined4 *)((int)this + 0xc2e4) = 3;
  *(undefined4 *)((int)this + 0xc2e8) = 0;
  *(undefined4 *)((int)this + 0xc2ec) = 0x1010100;
  *(undefined1 *)((int)this + 0xc2f0) = 1;
  FUN_10091025((undefined4 *)((int)this + 0x66b8),&DAT_100d1530);
  FUN_10091025(this_00,(uint *)&DAT_100d1310);
  if (*(char *)(in_stack_00000030 + 1) != extraout_DL) {
    FUN_10091025(this_01,(uint *)&DAT_100d1400);
  }
  LOCK();
  *(int *)((int)param_1 + 0x78) = *(int *)((int)param_1 + 0x78) + 1;
  UNLOCK();
  *(undefined **)((int)this + 4) = &DAT_100ddf28;
  *(undefined **)((int)this + 8) = &DAT_100de5b8;
  *(undefined1 **)((int)this + 0x6708) = &DAT_100de748;
  puVar4 = FUN_100035d8(param_1,param_3);
  *(undefined **)((int)this + 0x6704) = puVar4;
  uVar6 = *(uint *)(puVar4 + 0x24);
  *(byte *)((int)this + 0x3c7) = (byte)(uVar6 >> 0x14) & 1;
  if ((param_7 == extraout_DL_00) || (cVar1 = '\x01', (uVar6 >> 0x14 & 1) == 0)) {
    cVar1 = extraout_DL_00;
  }
  *(char *)((int)this + 0x3c8) = cVar1;
  uVar6 = *(uint *)((int)this + 0xdd0) & 0x40;
  if (uVar6 == 0) {
    uVar3 = 0x2000;
  }
  else {
    uVar3 = *(undefined4 *)((int)this + 0xdd4);
  }
  *(undefined4 *)((int)this + 0x670c) = uVar3;
  iVar7 = 0x10;
  iVar5 = 0x800;
  if (uVar6 != 0) {
    iVar5 = iVar7;
  }
  *(int *)((int)this + 0x6710) = iVar5;
  *(int *)((int)this + 0x6714) = iVar5;
  SetRectEmpty((LPRECT)((int)this + 0x6d80));
  FUN_100cfed0((int *)((int)this + 0x67a8),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x67e8),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x6828),0,0x40);
  FUN_100cfed0((int *)((int)this + 0x6868),0,0x40);
  *(undefined4 *)((int)this + 0x68a8) = 0;
  *(undefined4 *)((int)this + 0x68ac) = 0;
  *(undefined4 *)((int)this + 0x68b0) = 0;
  *(undefined4 *)((int)this + 0x68b4) = 0;
  *(undefined4 *)((int)this + 0x68b8) = 0;
  *(undefined4 *)((int)this + 0x68bc) = 0;
  *(undefined4 *)((int)this + 0x68c0) = 0;
  *(undefined4 *)((int)this + 0x68c4) = 0;
  *(undefined4 *)((int)this + 0x68c8) = 0;
  *(undefined4 *)((int)this + 0x68cc) = 0;
  *(undefined4 *)((int)this + 0x68d0) = 0;
  *(undefined4 *)((int)this + 0x68d4) = 0;
  *(undefined4 *)((int)this + 0x68d8) = 0;
  *(undefined4 *)((int)this + 0x68dc) = 0;
  *(undefined4 *)((int)this + 0x68e0) = 0;
  *(undefined4 *)((int)this + 0x68e4) = 0;
  *(undefined4 *)((int)this + 0xc2d8) = 0;
  *(undefined4 *)((int)this + 0xc2dc) = 0;
  *(undefined4 *)((int)this + 0xc2e0) = 0;
  FUN_100cfed0((int *)((int)this + 0x6d90),0,0x45a0);
  FUN_100cfed0((int *)((int)this + 0xb330),0,0xe00);
  FUN_100cfed0((int *)((int)this + 0xc130),0,0x100);
  FUN_100cfed0((int *)((int)this + 0xc230),0,0x40);
  *(undefined4 *)((int)this + 0xc270) = 0;
  *(undefined4 *)((int)this + 0xc274) = 0;
  *(undefined4 *)((int)this + 0xc278) = 0;
  *(undefined4 *)((int)this + 0xc27c) = 0;
  *(undefined4 *)((int)this + 0x1298) = 0;
  *(undefined4 *)((int)this + 0x129c) = 0;
  *(undefined4 *)((int)this + 0x12a0) = 0;
  *(undefined4 *)((int)this + 0x12a4) = 0;
  *(undefined4 *)((int)this + 0x12a8) = 0;
  puVar2 = (undefined4 *)((int)this + 0xc290);
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar2 = 1;
    puVar2 = puVar2 + 1;
  }
  return this;
}

