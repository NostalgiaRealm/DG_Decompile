/*
 * FUN_1007d57e at 1007d57e
 * undefined4 __stdcall FUN_1007d57e(int param_1, uint param_2, int param_3, uint param_4, int param_5, uint * param_6)
 * Address ranges: 1007d57e-1007d712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007d57e(int param_1,uint param_2,int param_3,uint param_4,int param_5,uint *param_6)

{
  void *this;
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  ushort in_FPUControlWord;
  uint local_1c [3];
  uint local_10;
  bool local_c;
  undefined3 uStack_b;
  uint *local_8;
  
  uVar2 = param_2;
  iVar1 = param_1;
  uVar4 = 0x8876086c;
  if ((((*(int *)(param_1 + -0x5898) != 3) && (param_2 - 1 < 6)) &&
      (param_6 < *(uint **)(*(int *)(param_1 + 0x14) + 0xb4))) && (*(int *)(param_1 + -0x128) != 0))
  {
    FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    local_8 = &local_10;
    param_2 = CONCAT22(param_2._2_2_,in_FPUControlWord);
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
      param_2 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    FUN_1007cd2d((void *)(iVar1 + -0x58e0),(int *)local_1c);
    if ((((*(uint *)(local_1c[0] + 0x10) & *(uint *)(iVar1 + -100)) == *(uint *)(local_1c[0] + 0x10)
         ) && (uVar4 = 0, *(char *)(iVar1 + -0x23) == '\0')) && (*(int *)(iVar1 + -0x58c8) != 0)) {
      if ((*(int *)(local_1c[0] + 4) == 0) && (*(int *)(iVar1 + -0x124) != 0)) {
        cVar3 = *(char *)(*(int *)(iVar1 + -0x124) + 100);
      }
      else {
        cVar3 = '\x01';
      }
      if ((cVar3 == '\0') ||
         ((*(int *)(iVar1 + -0x5434) == 0 && (*(char *)(iVar1 + -0x21) != '\0')))) {
        local_8 = (uint *)((uint)local_8._1_3_ << 8);
      }
      else {
        local_8 = (uint *)CONCAT31(local_8._1_3_,1);
      }
      bVar5 = *(int *)(iVar1 + -0x5434) != 0;
      _local_c = CONCAT31(uStack_b,bVar5);
      if ((*(int *)(iVar1 + -0x5638) != 0 || *(int *)(local_1c[0] + 4) != 0) ||
         (param_2 = param_2 & 0xffffff00, *(char *)(iVar1 + -0x21) == '\0')) {
        param_2 = CONCAT31(param_2._1_3_,1);
      }
      this = (void *)(iVar1 + -0x58e0);
      FUN_10013ce2(this,(char)local_8,bVar5,(char)param_2);
      FUN_1007d1ed(this,*(int *)(iVar1 + 100) == 0);
      uVar4 = FUN_10008ac5(this,local_1c,*(int *)(iVar1 + 0x68),uVar2,param_3,param_4,param_5,
                           (int)param_6);
    }
    param_6 = &local_10;
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar4;
}

