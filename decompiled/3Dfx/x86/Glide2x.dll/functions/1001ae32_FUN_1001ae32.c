/*
 * FUN_1001ae32 at 1001ae32
 * undefined __thiscall FUN_1001ae32(void * this, float * param_1, float * param_2, float * param_3, byte param_4)
 * Address ranges: 1001ae32-1001af0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ae32(void *this,float *param_1,float *param_2,float *param_3,byte param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  uint uVar5;
  
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,2);
  uVar4 = extraout_ECX;
  if (*(int *)(*(int *)((int)this + 0x3160) + 0x30) != 4) {
    (**(code **)(*(int *)this + 0x150))();
    *(undefined4 *)(*(int *)((int)this + 0x3160) + 0x30) = 4;
    uVar4 = extraout_ECX_00;
  }
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    auVar1._4_4_ = -(uint)(1e+06 < *param_3);
    auVar1._0_4_ = -(uint)(1e+06 < param_3[1]);
    auVar1._8_4_ = -(uint)(1e+06 < param_3[1]);
    auVar1._12_4_ = -(uint)(1e+06 < *param_3);
    uVar5 = movmskps(uVar4,auVar1);
    auVar2._4_4_ = -(uint)(1e+06 < ABS(*param_2));
    auVar2._0_4_ = -(uint)(1e+06 < ABS(param_2[1]));
    auVar2._8_4_ = -(uint)(1e+06 < ABS(param_1[1]));
    auVar2._12_4_ = -(uint)(1e+06 < ABS(*param_1));
    uVar3 = movmskps(param_1,auVar2);
    if ((uVar3 & 0xf) != 0 || (uVar5 & 3) != 0) {
      FUN_1001a439(this,param_1,param_2,param_3);
      goto LAB_1001aef4;
    }
  }
  FUN_1001a993(this,param_1,param_2,param_3,param_4);
LAB_1001aef4:
  FUN_1001dc1c(this);
  (**(code **)(**(int **)((int)this + 0x315c) + 0x48))();
  return;
}

