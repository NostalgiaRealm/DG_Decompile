/*
 * FUN_1000d790 at 1000d790
 * undefined __thiscall FUN_1000d790(void * this, uint param_1, int param_2, int param_3)
 * Address ranges: 1000d790-1000d99d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000d790(void *this,uint param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = 0xffffffff;
  iVar4 = *(int *)((int)this + 0xe4);
  iVar3 = *(int *)((int)this + 0x2c) * param_2 + param_1;
  if (iVar4 == 1) {
    uVar2 = 0xf;
  }
  else if (iVar4 == 2) {
    uVar2 = 0x10;
  }
  else if (iVar4 == 4) {
    uVar2 = 0x11;
  }
  else if (iVar4 == 8) {
    uVar2 = 0x12;
  }
  else if (iVar4 == 0x10) {
    uVar2 = 0x13;
  }
  if (param_3 == 2) {
    iVar4 = *(int *)((int)this + 0x58);
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)this + 0x54);
    }
    FUN_1000a2b4(*(void **)((int)this + 0xa8),*(int *)((int)this + 0x1c),*(uint *)((int)this + 0x1c)
                 ,param_1,param_2,param_1,param_2,0.0,0,
                 (float)((double)*(int *)((int)this + 0x14) +
                        (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x14) >> 0x1f)]),
                 (float)((double)*(int *)((int)this + 0x18) +
                        (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0x18) >> 0x1f)]),0,0,
                 (float)((double)*(int *)((int)this + 0xdc) +
                        (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0xdc) >> 0x1f)]),
                 (float)((double)*(int *)((int)this + 0xe0) +
                        (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0xe0) >> 0x1f)]),0,0,0,iVar4,
                 *(undefined4 *)((int)this + 0x5c),0,*(undefined4 *)((int)this + 0x114),
                 *(undefined4 *)(*(int *)((int)this + 0x120) + 4 + iVar3 * 0x1c),'\0',uVar2,1);
  }
  else if (param_3 == 1) {
    iVar4 = *(int *)((int)this + 0x58);
    if (iVar4 == 0) {
      iVar4 = *(int *)((int)this + 0x54);
    }
    fVar6 = (float)((double)*(int *)((int)this + 0xe0) +
                   (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0xe0) >> 0x1f)]);
    fVar5 = (float)((double)*(int *)((int)this + 0xdc) +
                   (double)(&DAT_10066fd0)[-(*(int *)((int)this + 0xdc) >> 0x1f)]);
    FUN_1000a2b4(*(void **)((int)this + 0xa8),*(int *)((int)this + 0x1c),*(uint *)((int)this + 0x1c)
                 ,param_1,param_2,param_1,param_2,0.0,0,fVar5,fVar6,0,0,fVar5,fVar6,0,0,0,iVar4,
                 *(undefined4 *)((int)this + 0x5c),0,*(undefined4 *)((int)this + 0xb8),
                 *(undefined4 *)(*(int *)((int)this + 0xc4) + 4 + iVar3 * 0x1c),'\0',uVar2,1);
    pbVar1 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0x154);
    *pbVar1 = *pbVar1 | '\x01' << (param_1 & 7);
  }
  return;
}

