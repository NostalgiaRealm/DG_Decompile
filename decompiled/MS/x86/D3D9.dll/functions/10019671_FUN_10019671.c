/*
 * FUN_10019671 at 10019671
 * undefined __thiscall FUN_10019671(void * this, uint param_1)
 * Address ranges: 10019671-10019783
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019671(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int *piVar5;
  int local_48 [17];
  
  if (9 < (int)param_1) {
    uVar1 = param_1 - 10;
    pbVar3 = (byte *)((int)this + ((int)(uVar1 & 0x1f) >> 3) + (uVar1 >> 5) * 4 + 0xca4);
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
  }
  if (param_1 == 1) {
    iVar2 = **(int **)((int)this + 0x14);
    piVar5 = FUN_10028a54((void *)(*(int *)((int)this + 0xd80) + 0x40),local_48,(int)this + 0xd18);
    (**(code **)(iVar2 + 0x54))(1,piVar5);
    iVar2 = *(int *)((int)this + 0xd80);
    if ((((*(float *)(iVar2 + 0x70) == 0.0) && (*(float *)(iVar2 + 0x74) == 0.0)) &&
        (*(float *)(iVar2 + 0x78) == 0.0)) && (*(float *)(iVar2 + 0x7c) == 1.0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)((int)this + 0x3c5) = uVar4;
  }
  else {
    pbVar3 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0xcd0);
    *pbVar3 = *pbVar3 | '\x01' << (param_1 & 7);
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0xc98) = 0;
      *(undefined2 *)((int)this + 0xc9c) = 0;
      goto LAB_10019771;
    }
    if (param_1 != 1) {
      if (param_1 != 10) {
        return;
      }
      *(undefined1 *)((int)this + 0xc98) = 0;
      *(undefined2 *)((int)this + 0xc9a) = 0;
      *(undefined1 *)((int)this + 0x3c9) = 0;
      goto LAB_10019771;
    }
  }
  *(undefined2 *)((int)this + 0xc9a) = 0;
  *(undefined1 *)((int)this + 0xc99) = 0;
LAB_10019771:
  *(undefined1 *)((int)this + 0xc9e) = 0;
  *(undefined1 *)((int)this + 0xca0) = 0;
  return;
}

