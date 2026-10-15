/*
 * FUN_10041283 at 10041283
 * undefined4 __thiscall FUN_10041283(void * this, int param_1, int param_2, uint * param_3, int param_4, int param_5)
 * Address ranges: 10041283-100414f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10041283(void *this,int param_1,int param_2,uint *param_3,int param_4,int param_5)

{
  float fVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort in_FPUControlWord;
  float fVar6;
  uint local_18;
  int local_14;
  uint *local_10;
  void *local_c;
  uint local_8;
  
  local_c = this;
  BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar3 == 0) {
    FUN_1003c603();
  }
  local_10 = &local_18;
  local_8 = CONCAT22(local_8._2_2_,in_FPUControlWord);
  local_18 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_18 = (uint)in_FPUControlWord;
    local_8 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar5 = 0x80070057;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (uint *)0x0)) &&
     ((param_4 == 0 && (param_5 != 0)))) {
    FUN_100477cb((int)this);
    uVar5 = 0x88760824;
    if (*(char *)((int)this + 0x90b) != '\0') {
      local_10 = (uint *)0x0;
      if (param_3 != (uint *)0x0) {
        do {
          uVar4 = 0;
          fVar1 = *(float *)(param_2 + (int)local_10 * 4);
          local_14 = (int)local_10 * 0xc;
          local_8 = 0;
          do {
            fVar6 = *(float *)(param_1 + 4 + local_14) *
                    *(float *)((int)local_c + local_8 * 0x10 + 0x175c) +
                    *(float *)(param_1 + local_14) *
                    *(float *)((int)local_c + local_8 * 0x10 + 0x1758) +
                    *(float *)(param_1 + 8 + local_14) *
                    *(float *)((int)local_c + local_8 * 0x10 + 0x1760) +
                    *(float *)((int)local_c + local_8 * 0x10 + 0x1764);
            bVar2 = 0;
            if (fVar6 < -(fVar1 * 1.15)) {
              bVar2 = 2;
            }
            bVar2 = bVar2 | fVar6 < fVar1 * 1.15;
            if (bVar2 != 0) {
              uVar4 = uVar4 | *(uint *)(&DAT_1005f3d8 + local_8 * 4);
            }
            if (bVar2 == 3) {
              uVar4 = uVar4 | *(uint *)(&DAT_1005f3c0 + local_8 * 4);
            }
            local_8 = local_8 + 1;
          } while (local_8 < 6);
          local_8 = 0;
          do {
            if (((&DAT_1005f3b8)[local_8] & (byte)*(undefined4 *)((int)local_c + 0x4f0)) != 0) {
              fVar6 = *(float *)(param_1 + local_14) *
                      *(float *)((int)local_c + local_8 * 0x10 + 0x230) +
                      *(float *)(param_1 + 4 + local_14) *
                      *(float *)((int)local_c + local_8 * 0x10 + 0x234) +
                      *(float *)(param_1 + 8 + local_14) *
                      *(float *)((int)local_c + local_8 * 0x10 + 0x238) +
                      *(float *)((int)local_c + local_8 * 0x10 + 0x23c);
              bVar2 = 0;
              if (fVar6 < -fVar1) {
                bVar2 = 2;
              }
              bVar2 = bVar2 | fVar6 < fVar1;
              if (bVar2 != 0) {
                uVar4 = uVar4 | *(uint *)(&DAT_1005f3a0 + local_8 * 4);
              }
              if (bVar2 == 3) {
                uVar4 = *(uint *)(&DAT_1005f388 + local_8 * 4) | uVar4;
              }
            }
            local_8 = local_8 + 1;
          } while (local_8 < 6);
          *(uint *)(param_5 + (int)local_10 * 4) = uVar4;
          local_10 = (uint *)((int)local_10 + 1);
        } while (local_10 < param_3);
      }
      uVar5 = 0;
    }
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar5;
}

