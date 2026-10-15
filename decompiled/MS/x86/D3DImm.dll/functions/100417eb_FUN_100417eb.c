/*
 * FUN_100417eb at 100417eb
 * undefined4 __thiscall FUN_100417eb(void * this, uint param_1, int * param_2)
 * Address ranges: 100417eb-1004194f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100417eb(void *this,uint param_1,int *param_2)

{
  BOOL BVar1;
  float *pfVar2;
  int *piVar3;
  undefined4 uVar4;
  ushort in_FPUControlWord;
  float local_b0 [35];
  uint local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  
  BVar1 = TryEnterCriticalSection(DAT_1006bbd0);
  if (BVar1 == 0) {
    FUN_1003c603();
  }
  uVar4 = 0x80070057;
  local_1c = param_1;
  if (param_2 != (int *)0x0) {
    local_14 = (uint *)FUN_10008271((void *)((int)this + 0x14c),&local_1c);
    local_20 = &local_24;
    local_18 = CONCAT22(local_18._2_2_,in_FPUControlWord);
    local_24 = in_FPUControlWord | 0x80000000;
    if ((in_FPUControlWord & 0xf3f) != 0x23f) {
      local_24 = (uint)in_FPUControlWord;
      local_18 = in_FPUControlWord & 0xf0ff | 0x23f;
    }
    piVar3 = (int *)local_14;
    if (local_14 == (uint *)0x0) {
      piVar3 = (int *)((int)this + 0x184);
      FUN_100082ab((void *)((int)this + 0x14c),&local_1c,piVar3);
      pfVar2 = FUN_10008ec8(local_b0,piVar3);
      FUN_100081ef((void *)((int)this + 0x15c),&local_1c,pfVar2);
    }
    *param_2 = *piVar3;
    param_2[1] = piVar3[1];
    param_2[2] = piVar3[2];
    param_2[3] = piVar3[3];
    param_2[4] = piVar3[4];
    param_2[5] = piVar3[5];
    param_2[6] = piVar3[6];
    param_2[7] = piVar3[7];
    param_2[8] = piVar3[8];
    param_2[9] = piVar3[9];
    param_2[10] = piVar3[10];
    param_2[0xb] = piVar3[0xb];
    param_2[0xc] = piVar3[0xc];
    param_2[0xd] = piVar3[0xd];
    param_2[0xe] = piVar3[0xe];
    param_2[0xf] = piVar3[0xf];
    param_2[0x10] = piVar3[0x10];
    param_2[0x11] = piVar3[0x11];
    param_2[0x12] = piVar3[0x12];
    uVar4 = 0;
    param_2[0x13] = piVar3[0x13];
    param_2[0x14] = piVar3[0x14];
    param_2[0x15] = piVar3[0x15];
    param_2[0x16] = piVar3[0x16];
    param_2[0x17] = piVar3[0x17];
    param_2[0x18] = piVar3[0x18];
    param_2[0x19] = piVar3[0x19];
    local_14 = &local_24;
  }
  LeaveCriticalSection(DAT_1006bbd0);
  return uVar4;
}

