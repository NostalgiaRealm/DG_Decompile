/*
 * FUN_1000797f at 1000797f
 * undefined __thiscall FUN_1000797f(void * this, uint param_1)
 * Address ranges: 1000797f-10007a91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000797f(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 uVar4;
  int *piVar5;
  int local_48 [17];
  
  if (9 < (int)param_1) {
    uVar1 = param_1 - 10;
    pbVar3 = (byte *)((int)this + ((int)(uVar1 & 0x1f) >> 3) + (uVar1 >> 5) * 4 + 0x910);
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar1 & 7));
  }
  if (param_1 == 1) {
    iVar2 = **(int **)((int)this + 0x14);
    piVar5 = FUN_10013790((void *)(*(int *)((int)this + 0x9cc) + 0x40),local_48,(int)this + 0x964);
    (**(code **)(iVar2 + 0x5c))(1,piVar5);
    iVar2 = *(int *)((int)this + 0x9cc);
    if ((((*(float *)(iVar2 + 0x70) == 0.0) && (*(float *)(iVar2 + 0x74) == 0.0)) &&
        (*(float *)(iVar2 + 0x78) == 0.0)) && (*(float *)(iVar2 + 0x7c) == 1.0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)((int)this + 0x225) = uVar4;
  }
  else {
    pbVar3 = (byte *)((int)this + ((int)(param_1 & 0x1f) >> 3) + (param_1 >> 5) * 4 + 0x93c);
    *pbVar3 = *pbVar3 | '\x01' << (param_1 & 7);
    if (param_1 == 0) {
      *(undefined4 *)((int)this + 0x904) = 0;
      *(undefined2 *)((int)this + 0x908) = 0;
      goto LAB_10007a7f;
    }
    if (param_1 != 1) {
      if (param_1 != 10) {
        return;
      }
      *(undefined1 *)((int)this + 0x904) = 0;
      *(undefined2 *)((int)this + 0x906) = 0;
      *(undefined1 *)((int)this + 0x229) = 0;
      goto LAB_10007a7f;
    }
  }
  *(undefined2 *)((int)this + 0x906) = 0;
  *(undefined1 *)((int)this + 0x905) = 0;
LAB_10007a7f:
  *(undefined1 *)((int)this + 0x90a) = 0;
  *(undefined1 *)((int)this + 0x90c) = 0;
  return;
}

