/*
 * FUN_1001e770 at 1001e770
 * undefined __thiscall FUN_1001e770(void * this, byte * param_1)
 * Address ranges: 1001e770-1001e9e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e770(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  pbVar1 = param_1;
  FUN_1001d040(this,(uint)*param_1);
  FUN_1002ce5c(this,(uint)param_1[0x61],(uint)param_1[0x62],(uint)param_1[99],(uint)param_1[100],
               *(int *)(param_1 + 0x65),param_1[0x134]);
  FUN_1002ceb2(this,(uint)param_1[0x69],(uint)param_1[0x6a],(uint)param_1[0x6b],(uint)param_1[0x6c],
               *(int *)(param_1 + 0x6d));
  FUN_1002cb93(this,(uint)param_1[2],(uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  FUN_1002cc86(this,(uint)param_1[0x24]);
  FUN_1002cca9(this,param_1[0x25]);
  FUN_1002ccea(this,*(int *)(param_1 + 0x26));
  FUN_1002cd91(this,*(uint *)(param_1 + 6));
  FUN_1002cd46(this,*(uint *)(param_1 + 0x1a));
  FUN_1002cd12(this,*(int *)(param_1 + 0x1e) == 1);
  FUN_1002cf90(this,(uint)param_1[0x22]);
  FUN_1002cfc4(this,(uint)param_1[0x23]);
  FUN_1002d002(this,(int *)(param_1 + 0x2a));
  FUN_1002d09f(this,*(uint *)(param_1 + 0x53));
  FUN_1002d138(this,(uint)*(ushort *)(param_1 + 0x51));
  FUN_1001ae38(this);
  FUN_1002cf11(this,*(int *)(param_1 + 0x3b) != 0,*(int *)(param_1 + 0x3f) != 0);
  FUN_1001d42a(this,(ushort)*(undefined4 *)(param_1 + 0x43));
  FUN_1001d4c1(this,(uint)param_1[0x47]);
  FUN_1001d484(this,(uint)param_1[0x48]);
  FUN_1001d574(this,*(int *)(param_1 + 0x49) != 0);
  FUN_1001d074(this,param_1[0x4e]);
  FUN_1001d09f(this,*(ushort *)(param_1 + 0x4f));
  FUN_1001d0ca(this,(uint)param_1[0x4d]);
  FUN_1001e747(this,(uint)param_1[0x3a]);
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      FUN_1002c807(this,(int)param_1,(uint)(pbVar1 + 0x57)[(int)param_1]);
      iVar2 = (int)param_1 * 0x41;
      FUN_1002c6f6(this,(int)param_1,(uint)pbVar1[iVar2 + 0x71],(uint)pbVar1[iVar2 + 0x72]);
      FUN_1002c762(this,(int)param_1,(uint)pbVar1[iVar2 + 0x73],(uint)pbVar1[iVar2 + 0x74]);
      FUN_1002c737(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0x86));
      FUN_1002c838(this,(int)param_1,(uint)pbVar1[iVar2 + 0x75],(uint)pbVar1[iVar2 + 0x76],
                   (uint)pbVar1[iVar2 + 0x77],(uint)pbVar1[iVar2 + 0x78],
                   *(int *)(pbVar1 + iVar2 + 0x79),*(int *)(pbVar1 + iVar2 + 0x7d));
      FUN_1002c90e(this,(int)param_1,(uint)pbVar1[iVar2 + 0x81],*(int *)(pbVar1 + iVar2 + 0x82));
      FUN_1002c8b8(this,(int)param_1,(int)(char)pbVar1[iVar2 + 0x8a],pbVar1[iVar2 + 0x8b],
                   *(int *)(pbVar1 + iVar2 + 0x8c));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  uVar3 = 0;
  do {
    FUN_1002c96f(this,uVar3,(uint)pbVar1[uVar3 + 0x5a]);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

