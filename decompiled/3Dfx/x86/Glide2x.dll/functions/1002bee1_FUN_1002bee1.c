/*
 * FUN_1002bee1 at 1002bee1
 * undefined __thiscall FUN_1002bee1(void * this, int param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 1002bee1-1002c0ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1002bf86) */

void __thiscall FUN_1002bee1(void *this,int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x3015) = 1;
    iVar2 = 0x1014;
  }
  else if (param_1 == 1) {
    *(undefined1 *)((int)this + 0x3016) = 1;
    iVar2 = 0x2014;
  }
  else {
    if (param_1 != 2) {
      return;
    }
    *(undefined1 *)((int)this + 0x3014) = 1;
    iVar2 = 0x14;
  }
  iVar2 = iVar2 + (int)this;
  if (iVar2 != 0) {
    uVar1 = param_3;
    if ((param_1 == 0) || (param_1 == 1)) {
      for (; (int)uVar1 < param_4; uVar1 = uVar1 + 1) {
        iVar5 = (uVar1 >> 2 & 3) * 6;
        iVar6 = (uVar1 & 3) * 6;
        uVar3 = uVar1 >> 4;
        uVar4 = ((int)(short)(*(short *)(param_2 + 0x10 + iVar5) << 7) >> 7) +
                ((int)(short)(*(short *)(param_2 + 0x28 + iVar6) << 7) >> 7) +
                (uint)*(byte *)(param_2 + uVar3);
        if ((int)uVar4 < 0x100) {
          param_3 = 0;
          if (-1 < (int)uVar4) {
            param_3 = uVar4;
          }
        }
        else {
          param_3 = 0xff;
        }
        iVar7 = uVar1 * 0x10;
        *(float *)(iVar2 + iVar7) = (float)(int)param_3;
        uVar4 = ((int)(short)(*(short *)(param_2 + 0x12 + iVar5) << 7) >> 7) +
                ((int)(short)(*(short *)(param_2 + 0x2a + iVar6) << 7) >> 7) +
                (uint)*(byte *)(param_2 + uVar3);
        if ((int)uVar4 < 0x100) {
          param_3 = 0;
          if (-1 < (int)uVar4) {
            param_3 = uVar4;
          }
        }
        else {
          param_3 = 0xff;
        }
        *(float *)(iVar2 + 4 + iVar7) = (float)(int)param_3;
        uVar3 = ((int)(short)(*(short *)(param_2 + 0x14 + iVar5) << 7) >> 7) +
                ((int)(short)(*(short *)(param_2 + 0x2c + iVar6) << 7) >> 7) +
                (uint)*(byte *)(param_2 + uVar3);
        if ((int)uVar3 < 0x100) {
          param_3 = 0;
          if (-1 < (int)uVar3) {
            param_3 = uVar3;
          }
        }
        else {
          param_3 = 0xff;
        }
        *(float *)(iVar2 + 8 + iVar7) = (float)(int)param_3;
        *(undefined4 *)(iVar2 + 0xc + iVar7) = 0x437f0000;
      }
    }
    else {
      for (; (int)param_3 < param_4; param_3 = param_3 + 1) {
        iVar5 = param_3 * 0x10;
        *(float *)(iVar2 + iVar5) = (float)*(byte *)(param_2 + 2 + param_3 * 4);
        *(float *)(iVar2 + 4 + iVar5) = (float)*(byte *)(param_2 + 1 + param_3 * 4);
        *(float *)(iVar2 + 8 + iVar5) = (float)*(byte *)(param_2 + param_3 * 4);
        *(undefined4 *)(iVar2 + 0xc + iVar5) = 0x437f0000;
      }
    }
    *(undefined1 *)(*(int *)((int)this + 0xc) + 0x3156 + *(int *)((int)this + 4)) = 1;
  }
  return;
}

