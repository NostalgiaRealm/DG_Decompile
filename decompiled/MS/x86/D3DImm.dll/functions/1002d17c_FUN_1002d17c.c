/*
 * FUN_1002d17c at 1002d17c
 * undefined __thiscall FUN_1002d17c(void * this, uint param_1, int param_2, byte param_3, uint param_4, float param_5, undefined1 param_6)
 * Address ranges: 1002d17c-1002d4af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002d17c(void *this,uint param_1,int param_2,byte param_3,uint param_4,float param_5,
            undefined1 param_6)

{
  float *pfVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    *(uint *)((int)this + 0xa10) = param_4 >> 0x10 & 0xff;
    *(uint *)((int)this + 0xa14) = param_4 >> 8 & 0xff;
    *(uint *)((int)this + 0xa18) = param_4 & 0xff;
    uVar3 = 0xf;
    *(uint *)((int)this + 0xa1c) = param_4 >> 0x18;
  }
  bVar5 = (param_3 & 2) == 0;
  *(undefined1 *)((int)this + 0x358) = uVar3;
  if (bVar5) {
    param_5 = 0.0;
  }
  else {
    *(undefined4 *)((int)this + 0x2cc) = 1;
    *(undefined4 *)((int)this + 0x2d0) = 8;
  }
  *(uint *)((int)this + 0x2c8) = (uint)!bVar5;
  if ((param_3 & 4) == 0) {
    *(undefined4 *)((int)this + 0x2d4) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0x2e4) = 3;
    *(undefined4 *)((int)this + 0x2dc) = 3;
    *(undefined4 *)((int)this + 0x2e0) = 3;
    *(undefined4 *)((int)this + 0x2f4) = 3;
    *(undefined4 *)((int)this + 0x2ec) = 3;
    *(undefined4 *)((int)this + 0x2f0) = 3;
    *(undefined4 *)((int)this + 0x2d4) = 1;
    *(undefined4 *)((int)this + 0x2f8) = 8;
    *(undefined1 *)((int)this + 0x1841) = param_6;
  }
  *(undefined1 *)((int)this + 0x1d41) = 1;
  *(undefined1 *)((int)this + 0x1d3b) = 1;
  *(undefined1 *)((int)this + 0x1d3c) = 1;
  *(undefined1 *)((int)this + 0x1d3d) = 1;
  uVar4 = 0;
  if (param_1 != 0) {
    do {
      pfVar1 = *(float **)((int)this + 0x4c);
      *pfVar1 = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[2] = param_5;
      pfVar1[1] = (float)iVar2;
      pfVar1[3] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                  *(float *)((int)this + 0x38c);
      pfVar1[4] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0x388)) /
                  *(float *)((int)this + 0x390);
      pfVar1[5] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[7] = param_5;
      pfVar1[6] = (float)iVar2;
      pfVar1[8] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                  *(float *)((int)this + 0x38c);
      pfVar1[9] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0x388)) /
                  *(float *)((int)this + 0x390);
      pfVar1[10] = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0xc] = param_5;
      pfVar1[0xb] = (float)iVar2;
      pfVar1[0xd] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                    *(float *)((int)this + 0x38c);
      pfVar1[0xe] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0x388))
                    / *(float *)((int)this + 0x390);
      pfVar1[0xf] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[0x11] = param_5;
      pfVar1[0x10] = (float)iVar2;
      pfVar1[0x12] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                     *(float *)((int)this + 0x38c);
      pfVar1[0x13] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0x388)) /
                     *(float *)((int)this + 0x390);
      pfVar1[0x14] = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0x16] = param_5;
      pfVar1[0x15] = (float)iVar2;
      pfVar1[0x17] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                     *(float *)((int)this + 0x38c);
      pfVar1[0x18] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0x388))
                     / *(float *)((int)this + 0x390);
      pfVar1[0x19] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0x1b] = param_5;
      pfVar1[0x1a] = (float)iVar2;
      pfVar1[0x1c] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 900)) /
                     *(float *)((int)this + 0x38c);
      pfVar1[0x1d] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0x388))
                     / *(float *)((int)this + 0x390);
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 0x78;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
  }
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + param_1 * 6;
  return;
}

