/*
 * FUN_10030238 at 10030238
 * undefined4 __thiscall FUN_10030238(void * this, byte param_1, char param_2, uint param_3, byte param_4)
 * Address ranges: 10030238-100304ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10030238(void *this,byte param_1,char param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  void *this_00;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint uVar7;
  int *piVar8;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined4 local_20;
  byte local_1c;
  int *local_c;
  undefined4 local_8;
  
  uVar7 = *(uint *)((int)this + 4);
  local_c = *(int **)(uVar7 + 0x4c);
  if (*(int *)(uVar7 + 0x50) != 0) goto LAB_1003037f;
  FUN_100253c5(*(void **)((int)this + 0xfc),&local_38);
  if (((*(uint *)((int)this + 0x1b8) & 0x210) == 0) ||
     ((local_38 == local_34 && (local_30 == local_2c)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  puVar1 = (uint *)((int)this + 0x158);
  uVar7 = (uint)param_1 | (param_3 & 0xff) * 2 | (uint)param_4 << 2;
  local_8 = CONCAT31(local_8._1_3_,bVar4);
  puVar2 = (uint *)((int)this + 0x15c);
  if ((*(uint *)((int)this + 0x1b8) & 0x22001) != 0 || bVar4) {
    piVar8 = &local_38;
    uVar5 = local_8;
    iVar6 = FUN_100321a7((int)this + 0x150);
    FUN_100314b0(this,&local_28,*puVar2,*puVar1,iVar6,piVar8,(char)uVar5);
    uVar3 = *(uint *)(*(int *)((int)this + 4) + 200);
    *(uint *)(*(int *)((int)this + 4) + 200) = (local_1c ^ uVar3) & 1 ^ uVar3;
    if (param_4 != 0) {
      FUN_10004dc3(local_28,local_24);
    }
    uVar5 = FUN_100321a7((int)this + 0x150);
    _param_4 = (int *)(**(code **)(*local_c + 0x28))
                                (local_28,local_24,*puVar2,*puVar1,local_20,
                                 *(undefined4 *)((int)this + 0x1cc),extraout_EDX_01,uVar5,uVar7);
    if ((char)local_8 == '\0') goto LAB_10030300;
    if (_param_4 != (int *)0x0) {
      (**(code **)(*_param_4 + 0x44))();
      goto LAB_10030306;
    }
  }
  else {
    if (param_4 != 0) {
      FUN_10004dc3(*puVar2,*puVar1);
    }
    uVar5 = FUN_100321a7((int)this + 0x150);
    _param_4 = (int *)(**(code **)(*local_c + 0x2c))
                                (*puVar2,*puVar1,*(undefined4 *)((int)this + 0x1cc),extraout_EDX,
                                 uVar5,uVar7);
LAB_10030300:
    if (_param_4 != (int *)0x0) {
LAB_10030306:
      if ((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) {
        (**(code **)(*local_c + 0x80))
                  (0,0,_param_4,0,0,0,
                   (float)((double)(int)*puVar2 + (double)(&DAT_10066fd0)[-((int)*puVar2 >> 0x1f)]),
                   (float)((double)(int)*puVar1 + (double)(&DAT_10066fd0)[-((int)*puVar1 >> 0x1f)]))
        ;
      }
    }
  }
  uVar7 = *(uint *)((int)this + 4);
  *(int **)(uVar7 + 0x50) = _param_4;
LAB_1003037f:
  this_00 = *(void **)((int)this + 4);
  if (*(int *)((int)this_00 + 0x50) == 0) {
    uVar7 = uVar7 & 0xffffff00;
  }
  else {
    if (*(int *)((int)this_00 + 0xcc) == 0) {
      if ((param_1 == 0) || (_param_4 = (int *)0x4, param_2 != '\0')) {
        _param_4 = (int *)0x1;
      }
      uVar7 = FUN_10031403((int)this + 0x150);
      FUN_100313c3(extraout_ECX);
      iVar6 = FUN_1003137a(extraout_ECX_00);
      FUN_10004dd8(this_00,*(int *)((int)this + 0x15c),*(uint *)((int)this + 0x158),extraout_ECX_01,
                   *(uint *)((int)this + 0x1a4),iVar6,extraout_EDX_00,uVar7,extraout_ECX_01,
                   (int)_param_4);
      *(undefined1 *)((int)this_00 + 0x1f) = 0;
    }
    uVar5 = FUN_1002fb13(this,'\0');
    uVar7 = CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar7;
}

