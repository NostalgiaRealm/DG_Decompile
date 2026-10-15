/*
 * FUN_1007d713 at 1007d713
 * undefined4 __stdcall FUN_1007d713(int param_1, uint param_2, int param_3, uint param_4, uint param_5, int param_6, uint * param_7, int param_8, undefined4 param_9)
 * Address ranges: 1007d713-1007d8a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1007d713(int param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6,
            uint *param_7,int param_8,undefined4 param_9)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  int local_1c [3];
  uint local_10;
  bool local_c;
  undefined3 uStack_b;
  uint *local_8;
  
  uVar3 = param_2;
  iVar2 = param_1;
  uVar4 = 0x8876086c;
  if ((((((*(int *)(param_1 + -0x5898) != 3) && (*(int *)(param_1 + -0x588c) == 1)) &&
        (param_2 - 1 < 6)) &&
       ((param_8 != 0 && (param_5 < *(uint *)(*(int *)(param_1 + 0x14) + 0xb4))))) &&
      ((param_6 != 0 && ((param_7 == (uint *)0x65 || (param_7 == (uint *)0x66)))))) &&
     ((uVar4 = 0, *(char *)(param_1 + -0x23) == '\0' && (*(int *)(param_1 + -0x58c8) != 0)))) {
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    local_8 = &local_10;
    param_2 = CONCAT22(param_2._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      param_2 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    this = (void *)(iVar2 + -0x58e0);
    FUN_1007cd2d(this,local_1c);
    iVar1 = *(int *)(iVar2 + -0x5434);
    if ((iVar1 != 0) ||
       (local_8 = (uint *)((uint)local_8 & 0xffffff00), *(char *)(iVar2 + -0x21) == '\0')) {
      local_8 = (uint *)CONCAT31(local_8._1_3_,1);
    }
    _local_c = CONCAT31(uStack_b,iVar1 != 0);
    if ((*(int *)(iVar2 + -0x5638) != 0) ||
       (param_2 = param_2 & 0xffffff00, *(int *)(local_1c[0] + 4) != 0)) {
      param_2 = CONCAT31(param_2._1_3_,1);
    }
    FUN_10013ce2(this,(char)local_8,iVar1 != 0,(char)param_2);
    FUN_1007d1ed(this,*(int *)(iVar2 + 100) == 0);
    uVar4 = FUN_10008517(this,local_1c,uVar3,param_3,param_4,param_5,param_6,(int)param_7,param_8,
                         param_9);
    param_7 = &local_10;
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

