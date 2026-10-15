/*
 * FUN_1007cde1 at 1007cde1
 * undefined __thiscall FUN_1007cde1(void * this, uint param_1, undefined4 * param_2, int param_3)
 * Address ranges: 1007cde1-1007ced4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007cde1(void *this,uint param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar2 = MXCSR;
  MXCSR = 0x3fc0;
  puVar4 = (undefined4 *)((param_1 + 0x122) * 0x10 + (int)this);
  for (iVar3 = param_3 << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar5 = param_1 + param_3;
  if (*(uint *)((int)this + 0x58b0) < *(uint *)((int)this + 0x58b4)) {
    if ((param_1 <= *(uint *)((int)this + 0x58b4)) && (*(uint *)((int)this + 0x58b0) <= uVar5)) {
      if (*(uint *)((int)this + 0x58b0) < param_1) {
        param_1 = *(uint *)((int)this + 0x58b0);
      }
      *(uint *)((int)this + 0x58b0) = param_1;
      if (uVar5 < *(uint *)((int)this + 0x58b4)) {
        uVar5 = *(uint *)((int)this + 0x58b4);
      }
      goto LAB_1007cec1;
    }
    uVar1 = *(undefined4 *)((int)this + 0x58b8);
    if (*(uint *)((int)this + 0x58b0) < *(uint *)((int)this + 0x58b4)) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x94))
                (*(int *)((int)this + 0x58b0),*(undefined4 *)((int)this + 0x58b4),
                 (void *)((*(int *)((int)this + 0x58b0) + 0x122) * 0x10 + (int)this));
    }
    *(undefined4 *)((int)this + 0x58b8) = uVar1;
  }
  *(uint *)((int)this + 0x58b0) = param_1;
LAB_1007cec1:
  *(uint *)((int)this + 0x58b4) = uVar5;
  MXCSR = uVar2;
  return;
}

