/*
 * FUN_1001aff8 at 1001aff8
 * undefined __thiscall FUN_1001aff8(void * this, uint param_1, undefined4 * param_2, byte param_3)
 * Address ranges: 1001aff8-1001b14c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001aff8(void *this,uint param_1,undefined4 *param_2,byte param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  (**(code **)(**(int **)((int)this + 0x315c) + 0x28))(0,2);
  if (*(int *)(*(int *)((int)this + 0x3160) + 0x30) != 4) {
    (**(code **)(*(int *)this + 0x150))();
    *(undefined4 *)(*(int *)((int)this + 0x3160) + 0x30) = 4;
  }
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = uVar3;
    if (0 < (int)param_1 / 2) {
      do {
        if (uVar4 != 0) break;
        auVar1._4_4_ = -(uint)(1e+06 < ABS((float)param_2[uVar3 * 0x1e + 0xf]));
        auVar1._0_4_ = -(uint)(1e+06 < ABS((float)param_2[uVar3 * 0x1e + 0x10]));
        auVar1._8_4_ = -(uint)(1e+06 < ABS((float)param_2[uVar3 * 0x1e + 1]));
        auVar1._12_4_ = -(uint)(1e+06 < ABS((float)param_2[uVar3 * 0x1e]));
        uVar4 = movmskps(0,auVar1);
        uVar4 = uVar4 & 0xf;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)param_1 / 2);
    }
    if ((param_1 & 1) != 0) {
      auVar2._4_4_ = -(uint)(1e+06 < ABS((float)param_2[param_1 * 0xf + -0xf]));
      auVar2._0_4_ = -(uint)(1e+06 < ABS((float)param_2[param_1 * 0xf + -0xe]));
      auVar2._8_8_ = 0;
      uVar3 = movmskps(param_1 * 0x3c,auVar2);
      uVar4 = uVar4 | uVar3 & 3;
    }
    if (uVar4 != 0) {
      iVar5 = 1;
      if (1 < (int)(param_1 - 1)) {
        do {
          FUN_1001a439(this,param_2,param_2 + iVar5 * 0xf,param_2 + iVar5 * 0xf + 0xf);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(param_1 - 1));
      }
      goto LAB_1001b133;
    }
  }
  FUN_1001aa23(this,param_1,param_2,param_3);
LAB_1001b133:
  FUN_1001dc1c(this);
  (**(code **)(**(int **)((int)this + 0x315c) + 0x48))();
  return;
}

