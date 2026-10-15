/*
 * FUN_10004108 at 10004108
 * uint __thiscall FUN_10004108(void * this, uint param_1, uint param_2, int param_3, undefined4 param_4)
 * Address ranges: 10004108-10004332
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10004108(void *this,uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  void *this_00;
  int *piVar8;
  uint uVar9;
  ushort in_FPUControlWord;
  uint local_10;
  int *local_c;
  uint *local_8;
  
  uVar9 = 0x8876086a;
  *(uint *)((int)this + 0xdf0) = param_1;
  local_c = &DAT_100df2e8 + param_1 * 0x8a;
  if (*local_c == 0) goto LAB_1000431c;
  *(int *)((int)this + 0xde8) = *local_c;
  local_8 = &local_10;
  param_1 = CONCAT22(param_1._2_2_,in_FPUControlWord);
  local_10 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_10 = (uint)in_FPUControlWord;
    param_1 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  iVar4 = FUN_100cfd55(0x87c4);
  piVar8 = (int *)(iVar4 + 0x13U & 0xfffffff0);
  piVar8[-1] = iVar4;
  FUN_100cfed0(piVar8,0,0x87b0);
  piVar8 = FUN_10019f55(piVar8);
  *(int **)((int)this + 0xd80) = piVar8;
  if (piVar8 == (int *)0x0) goto LAB_1000431c;
  bVar2 = FUN_10001fcb(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0));
  piVar8 = local_c;
  if (bVar2) {
    uVar9 = 0x80004005;
    param_1 = 0x80004005;
    iVar4 = (**(code **)(*(int *)*local_c + 0x1c))();
    if (iVar4 == 0) {
      puVar6 = FUN_10034bb0((&DAT_100df2f8)[*(int *)((int)this + 0xdf0) * 0x8a],piVar8[2]);
LAB_10004239:
      *(undefined4 **)((int)this + 0x14) = puVar6;
    }
    else if (iVar4 == 1) {
      iVar4 = piVar8[2];
      uVar1 = (&DAT_100df2f8)[*(int *)((int)this + 0xdf0) * 0x8a];
      iVar5 = FUN_100cfd55(0xfdc4);
      this_00 = (void *)(iVar5 + 0x13U & 0xfffffff0);
      *(int *)((int)this_00 + -4) = iVar5;
      puVar6 = FUN_1003a4f0(this_00,uVar1,iVar4,0x100);
      uVar9 = param_1;
      goto LAB_10004239;
    }
    if (*(int *)((int)this + 0x14) != 0) {
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xc) = 0;
      *(undefined1 *)((int)this + 0xd8c) = 0;
      *(undefined4 *)(*(int *)((int)this + 0x14) + 4) = 0xffffffff;
      *(undefined4 *)((int)this + 0xd84) = 0xffffffff;
      *(undefined4 *)(*(int *)((int)this + 0x14) + 8) = 0xff000000;
      *(undefined4 *)((int)this + 0xd88) = 0xff000000;
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xd) = 0;
      *(undefined1 *)(*(int *)((int)this + 0x14) + 0xe) = *(undefined1 *)(DAT_100dea74 + 0x95e);
      cVar3 = (**(code **)(**(int **)((int)this + 0x14) + 8))(param_4);
      if (cVar3 != '\0') {
        puVar7 = (undefined2 *)(**(code **)(**(int **)((int)this + 0x14) + 0x10))((int)&param_1 + 1)
        ;
        *(undefined2 *)((int)this + 0x10) = *puVar7;
        *(undefined1 *)((int)this + 0x12) = *(undefined1 *)(puVar7 + 1);
        uVar9 = FUN_10004000(this,param_2,param_3);
        if (-1 < (int)uVar9) goto LAB_1000431c;
        (**(code **)(**(int **)((int)this + 0x14) + 0xc))();
      }
      if (-1 < (int)uVar9) goto LAB_1000431c;
      (**(code **)(**(int **)((int)this + 0x14) + 4))();
      *(undefined4 *)((int)this + 0x14) = 0;
    }
  }
  if ((int)uVar9 < 0) {
    *(undefined4 *)((int)this + 0xde8) = 0;
    *(undefined4 *)((int)this + 0xdec) = 0;
    FUN_100179cf((int)this);
  }
LAB_1000431c:
  *(byte *)((int)this + 0x2a4) = (byte)(uVar9 >> 0x1f) ^ 1;
  return uVar9;
}

