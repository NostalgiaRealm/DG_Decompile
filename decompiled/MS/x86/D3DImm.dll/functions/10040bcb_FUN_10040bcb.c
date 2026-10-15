/*
 * FUN_10040bcb at 10040bcb
 * undefined4 __thiscall FUN_10040bcb(void * this, uint * param_1)
 * Address ranges: 10040bcb-10040cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10040bcb(void *this,uint *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  undefined4 uVar6;
  ushort in_FPUControlWord;
  float fVar7;
  uint local_10;
  void *local_c;
  uint *local_8;
  
  uVar6 = 0x80070057;
  if (param_1 != (uint *)0x0) {
    local_c = this;
    BVar5 = TryEnterCriticalSection(DAT_1006bbd0);
    if (BVar5 == 0) {
      FUN_1003c603();
    }
    local_8 = &local_10;
    local_10 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_10 = (uint)in_FPUControlWord;
    }
    uVar2 = *param_1;
    iVar3 = *(int *)(*(int *)((int)this + 0x18) + 4);
    if ((((uVar2 < *(uint *)(iVar3 + 100)) && (param_1[2] + uVar2 <= *(uint *)(iVar3 + 100))) &&
        (uVar4 = param_1[1], uVar4 < *(uint *)(iVar3 + 0x68))) &&
       (param_1[3] + uVar4 <= *(uint *)(iVar3 + 0x68))) {
      fVar1 = (float)param_1[4];
      fVar7 = (float)param_1[5];
      if ((float)param_1[5] <= fVar1) {
        fVar7 = 1.0;
        if (fVar1 + 0.001 <= 1.0) {
          fVar7 = fVar1 + 0.001;
        }
      }
      FUN_10007d48(local_c,uVar2,uVar4,param_1[2],param_1[3],fVar1,fVar7);
      uVar6 = 0;
    }
    LeaveCriticalSection(DAT_1006bbd0);
  }
  return uVar6;
}

