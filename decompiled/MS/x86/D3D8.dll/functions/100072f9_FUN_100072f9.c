/*
 * FUN_100072f9 at 100072f9
 * undefined4 __thiscall FUN_100072f9(void * this, uint * param_1)
 * Address ranges: 100072f9-100073e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100072f9(void *this,uint *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  float fVar6;
  uint local_10;
  void *local_c;
  uint *local_8;
  
  uVar5 = 0x8876086c;
  if (param_1 != (uint *)0x0) {
    local_8 = &local_10;
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
    }
    if (*(int *)((int)this + 0x18) != 0) {
      iVar2 = *(int *)(*(int *)((int)this + 0x18) + 4);
      uVar3 = *param_1;
      if ((((uVar3 < *(uint *)(iVar2 + 100)) && (param_1[2] + uVar3 <= *(uint *)(iVar2 + 100))) &&
          (uVar4 = param_1[1], uVar4 < *(uint *)(iVar2 + 0x68))) &&
         (param_1[3] + uVar4 <= *(uint *)(iVar2 + 0x68))) {
        fVar1 = (float)param_1[4];
        fVar6 = (float)param_1[5];
        if ((float)param_1[5] <= fVar1) {
          fVar6 = 1.0;
          if (fVar1 + 0.001 <= 1.0) {
            fVar6 = fVar1 + 0.001;
          }
        }
        local_c = this;
        FUN_1001596d(this,uVar3,uVar4,param_1[2],param_1[3],fVar1,fVar6);
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

