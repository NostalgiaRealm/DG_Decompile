/*
 * FUN_100081ce at 100081ce
 * undefined __thiscall FUN_100081ce(void * this, int * param_1, int param_2, int param_3, uint param_4, int param_5, int param_6, int param_7, int param_8, undefined4 param_9)
 * Address ranges: 100081ce-100083d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100081ce(void *this,int *param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
            int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  uint local_dc;
  int local_d8 [53];
  
  iVar1 = *param_1;
  bVar6 = *(int *)((int)this + 0x4b0) != 0;
  bVar7 = *(int *)((int)this + 0x4ac) != 0;
  local_e4 = CONCAT31(local_e4._1_3_,bVar6);
  uVar5 = *(int *)(&DAT_100af610 + param_2 * 8) * param_5 + *(int *)(&DAT_100af614 + param_2 * 8);
  if ((((*(int *)(iVar1 + 4) == 0) || (!bVar6)) || (*(uint *)((int)this + 0x178) < 9)) ||
     (*(char *)((int)this + 0x58bf) == '\0')) {
    if ((bVar7) && (*(char *)((int)this + 0x58bf) != '\0')) {
      uVar4 = param_4;
      if (param_6 == 0) {
        param_3 = 0;
        uVar4 = uVar5;
      }
      FUN_10017452(this,param_8,iVar1,param_2,param_3,uVar4);
    }
    if (param_6 == 0) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                (param_2,*param_1,param_8,param_9,uVar5,local_e4);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                (param_2,*param_1,param_8,param_9,param_4,param_6,uVar5,0,param_7 == 0x66);
    }
  }
  else {
    local_e8 = FUN_10016bad(this,iVar1);
    local_e8 = FUN_1000903f((void *)((int)this + 0x168),&local_e8);
    local_dc = uVar5;
    if (param_6 != 0) {
      local_dc = param_3 + param_4;
    }
    bVar6 = FUN_10016851(this,local_dc,*(int *)(local_e8 + 0xc));
    if (bVar6) {
      uVar4 = 0;
      if (bVar7) {
        uVar4 = 2;
      }
      uVar3 = 0;
      if ((char)local_e4 != '\0') {
        uVar3 = 4;
      }
      local_e4 = uVar4 | uVar3 | 1;
      FUN_100169fd(*param_1,param_8,local_d8);
      uVar2 = MXCSR;
      local_e0 = 0x3fc0;
      MXCSR = 0x3fc0;
      if (param_6 == 0) {
        param_3 = 0;
        param_4 = uVar5;
      }
      FUN_10016cb2(this,local_d8,*(int *)((int)this + 0xaa8),local_e8,local_e4,param_3,param_4,0,
                   '\0');
      if (param_6 == 0) {
        (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                  (param_2,local_e8,*(undefined4 *)((int)this + 0xaa8),
                   *(undefined4 *)(local_e8 + 0xc),uVar5,0);
        MXCSR = uVar2;
      }
      else {
        (**(code **)(**(int **)((int)this + 0x14) + 0x20))
                  (param_2,local_e8,*(undefined4 *)((int)this + 0xaa8),
                   *(undefined4 *)(local_e8 + 0xc),local_dc,param_6,uVar5,0,param_7 == 0x66);
        MXCSR = uVar2;
      }
    }
  }
  return;
}

