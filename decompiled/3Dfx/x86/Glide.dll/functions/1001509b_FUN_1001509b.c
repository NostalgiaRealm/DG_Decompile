/*
 * FUN_1001509b at 1001509b
 * undefined4 __thiscall FUN_1001509b(void * this, uint param_1, uint param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12)
 * Address ranges: 1001509b-100151f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1001509b(void *this,uint param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  uint local_cc [4];
  int local_bc;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_90;
  int local_8c;
  int *local_8;
  
  uVar6 = 0;
  if (*(char *)((int)this + 0x3c) != '\0') {
    local_8 = (int *)((int)this + 0x38);
    LOCK();
    *local_8 = *local_8 + 1;
    UNLOCK();
    if ((((*(int *)((int)this + 0x5c) != 0) && (param_1 != 0xffffffff)) &&
        (param_1 < *(uint *)((int)this + 0x60))) &&
       (puVar5 = (uint *)(*(int *)((int)this + 0x5c) + param_1 * 0xc4),
       (int)puVar5[0x11] < *(int *)(*(int *)((int)this + 0x1c) + 0x797))) {
      puVar7 = puVar5;
      puVar8 = local_cc;
      for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      if (param_2 != 0xffffffff) {
        local_cc[2] = param_2;
      }
      uVar1 = local_cc[2];
      if (param_3 != 0xffffffff) {
        local_cc[3] = param_3;
      }
      uVar2 = local_cc[3];
      if (param_4 != -1) {
        local_b4 = param_4;
      }
      if (param_5 != -1) {
        local_b0 = param_5;
      }
      if (param_6 != -1) {
        local_90 = param_6;
      }
      if (param_7 != -1) {
        local_8c = param_7;
      }
      if (param_8 != -1) {
        local_bc = param_8;
      }
      if (param_9 != -1) {
        local_a4 = param_9;
      }
      if (param_10 != -1) {
        local_a0 = param_10;
      }
      if (param_11 != -1) {
        local_a8 = param_11;
      }
      if (param_12 != -1) {
        local_ac = param_12;
      }
      uVar3 = FUN_10014e13(local_8c,local_bc);
      if ((uVar3 >> 0x10 == uVar1) && ((uVar3 & 0xffff) == uVar2)) {
        puVar7 = local_cc;
        for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
        uVar6 = 1;
      }
    }
    LOCK();
    *local_8 = *local_8 + -1;
    UNLOCK();
  }
  return uVar6;
}

