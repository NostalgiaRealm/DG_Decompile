/*
 * FUN_10053dd5 at 10053dd5
 * undefined __thiscall FUN_10053dd5(void * this, uint param_1, int param_2, byte param_3, uint param_4, float param_5, undefined1 param_6)
 * Address ranges: 10053dd5-10054108
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10053dd5(void *this,uint param_1,int param_2,byte param_3,uint param_4,float param_5,
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
    *(uint *)((int)this + 0x69a0) = param_4 >> 0x10 & 0xff;
    *(uint *)((int)this + 0x69a4) = param_4 >> 8 & 0xff;
    *(uint *)((int)this + 0x69a8) = param_4 & 0xff;
    uVar3 = 0xf;
    *(uint *)((int)this + 0x69ac) = param_4 >> 0x18;
  }
  bVar5 = (param_3 & 2) == 0;
  *(undefined1 *)((int)this + 0xde4) = uVar3;
  if (bVar5) {
    param_5 = 0.0;
  }
  else {
    *(undefined4 *)((int)this + 0xb98) = 1;
    *(undefined4 *)((int)this + 0xb9c) = 8;
  }
  *(uint *)((int)this + 0xb94) = (uint)!bVar5;
  if ((param_3 & 4) == 0) {
    *(undefined4 *)((int)this + 0xba0) = 0;
  }
  else {
    *(undefined4 *)((int)this + 0xbb0) = 3;
    *(undefined4 *)((int)this + 0xba8) = 3;
    *(undefined4 *)((int)this + 0xbac) = 3;
    *(undefined4 *)((int)this + 0xbc0) = 3;
    *(undefined4 *)((int)this + 3000) = 3;
    *(undefined4 *)((int)this + 0xbbc) = 3;
    *(undefined4 *)((int)this + 0xba0) = 1;
    *(undefined4 *)((int)this + 0xbc4) = 8;
    *(undefined1 *)((int)this + 0x7581) = param_6;
  }
  *(undefined1 *)((int)this + 0xf671) = 1;
  *(undefined1 *)((int)this + 0xf66b) = 1;
  *(undefined1 *)((int)this + 0xf66c) = 1;
  *(undefined1 *)((int)this + 0xf66d) = 1;
  uVar4 = 0;
  if (param_1 != 0) {
    do {
      pfVar1 = *(float **)((int)this + 0x4c);
      *pfVar1 = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[2] = param_5;
      pfVar1[1] = (float)iVar2;
      pfVar1[3] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                  *(float *)((int)this + 0xe98);
      pfVar1[4] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0xe94)) /
                  *(float *)((int)this + 0xe9c);
      pfVar1[5] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[7] = param_5;
      pfVar1[6] = (float)iVar2;
      pfVar1[8] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                  *(float *)((int)this + 0xe98);
      pfVar1[9] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0xe94)) /
                  *(float *)((int)this + 0xe9c);
      pfVar1[10] = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0xc] = param_5;
      pfVar1[0xb] = (float)iVar2;
      pfVar1[0xd] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                    *(float *)((int)this + 0xe98);
      pfVar1[0xe] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0xe94))
                    / *(float *)((int)this + 0xe9c);
      pfVar1[0xf] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 4 + uVar4 * 0x10);
      pfVar1[0x11] = param_5;
      pfVar1[0x10] = (float)iVar2;
      pfVar1[0x12] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                     *(float *)((int)this + 0xe98);
      pfVar1[0x13] = ((float)*(int *)(param_2 + 4 + uVar4 * 0x10) - *(float *)((int)this + 0xe94)) /
                     *(float *)((int)this + 0xe9c);
      pfVar1[0x14] = (float)*(int *)(param_2 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0x16] = param_5;
      pfVar1[0x15] = (float)iVar2;
      pfVar1[0x17] = ((float)*(int *)(param_2 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                     *(float *)((int)this + 0xe98);
      pfVar1[0x18] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0xe94))
                     / *(float *)((int)this + 0xe9c);
      pfVar1[0x19] = (float)*(int *)(param_2 + 8 + uVar4 * 0x10);
      iVar2 = *(int *)(param_2 + 0xc + uVar4 * 0x10);
      pfVar1[0x1b] = param_5;
      pfVar1[0x1a] = (float)iVar2;
      pfVar1[0x1c] = ((float)*(int *)(param_2 + 8 + uVar4 * 0x10) - *(float *)((int)this + 0xe90)) /
                     *(float *)((int)this + 0xe98);
      pfVar1[0x1d] = ((float)*(int *)(param_2 + 0xc + uVar4 * 0x10) - *(float *)((int)this + 0xe94))
                     / *(float *)((int)this + 0xe9c);
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + 0x78;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_1);
  }
  *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + param_1 * 6;
  return;
}

