/*
 * FUN_100410b9 at 100410b9
 * undefined4 __thiscall FUN_100410b9(void * this, int param_1, int param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 100410b9-10041282
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100410b9(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort in_FPUControlWord;
  float fVar5;
  float fVar6;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  local_18 = &local_20;
  local_14 = CONCAT22(local_14._2_2_,in_FPUControlWord);
  local_20 = in_FPUControlWord | 0x80000000;
  if ((in_FPUControlWord & 0xf3f) != 0x23f) {
    local_20 = (uint)in_FPUControlWord;
    local_14 = in_FPUControlWord & 0xf0ff | 0x23f;
  }
  uVar3 = 0x80070057;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && ((param_4 == 0 && (param_5 != 0))))
  {
    FUN_1003dd9f(this);
    FUN_100477cb((int)this);
    uVar3 = 0x88760824;
    if (*(char *)((int)this + 0x90b) != '\0') {
      local_18 = (uint *)0x0;
      if (param_3 != 0) {
        do {
          uVar4 = 0;
          iVar2 = (int)local_18 * 0xc;
          local_14 = 0;
          fVar6 = *(float *)(param_2 + (int)local_18 * 4) * 1.15;
          do {
            fVar5 = *(float *)(param_1 + 4 + iVar2) *
                    *(float *)((int)this + local_14 * 0x10 + 0x175c) +
                    *(float *)(param_1 + iVar2) * *(float *)((int)this + local_14 * 0x10 + 0x1758) +
                    *(float *)(param_1 + 8 + iVar2) *
                    *(float *)((int)this + local_14 * 0x10 + 0x1760) +
                    *(float *)((int)this + local_14 * 0x10 + 0x1764);
            local_1c = 0;
            if (fVar5 < -fVar6) {
              local_1c = 2;
            }
            local_1c = local_1c | fVar5 < fVar6;
            if (local_1c == 3) {
              uVar4 = uVar4 | *(uint *)(&DAT_1005f408 + local_14 * 4) | 2;
            }
            else if (local_1c != 0) {
              uVar4 = uVar4 | *(uint *)(&DAT_1005f3f0 + local_14 * 4) | 1;
            }
            local_14 = local_14 + 1;
          } while (local_14 < 6);
          *(uint *)(param_5 + (int)local_18 * 4) = uVar4;
          local_18 = (uint *)((int)local_18 + 1);
        } while (local_18 < param_3);
      }
      uVar3 = 0;
    }
  }
  local_18 = &local_20;
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar3;
}

