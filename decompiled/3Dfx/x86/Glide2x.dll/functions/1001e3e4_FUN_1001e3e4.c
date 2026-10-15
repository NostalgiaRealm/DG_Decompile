/*
 * FUN_1001e3e4 at 1001e3e4
 * undefined __thiscall FUN_1001e3e4(void * this, byte * param_1)
 * Address ranges: 1001e3e4-1001e659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e3e4(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  pbVar1 = param_1;
  FUN_1001ccb4(this,(uint)*param_1);
  FUN_1002cad2(this,(uint)param_1[0x61],(uint)param_1[0x62],(uint)param_1[99],(uint)param_1[100],
               *(int *)(param_1 + 0x65),param_1[0x134]);
  FUN_1002cb28(this,(uint)param_1[0x69],(uint)param_1[0x6a],(uint)param_1[0x6b],(uint)param_1[0x6c],
               *(int *)(param_1 + 0x6d));
  FUN_1002c809(this,(uint)param_1[2],(uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  FUN_1002c8fc(this,(uint)param_1[0x24]);
  FUN_1002c91f(this,param_1[0x25]);
  FUN_1002c960(this,*(int *)(param_1 + 0x26));
  FUN_1002ca07(this,*(uint *)(param_1 + 6));
  FUN_1002c9bc(this,*(uint *)(param_1 + 0x1a));
  FUN_1002c988(this,*(int *)(param_1 + 0x1e) == 1);
  FUN_1002cc06(this,(uint)param_1[0x22]);
  FUN_1002cc3a(this,(uint)param_1[0x23]);
  FUN_1002cc78(this,(int *)(param_1 + 0x2a));
  FUN_1002cd15(this,*(uint *)(param_1 + 0x53));
  FUN_1002cdae(this,(uint)*(ushort *)(param_1 + 0x51));
  FUN_1001aaad(this);
  FUN_1002cb87(this,*(int *)(param_1 + 0x3b) != 0,*(int *)(param_1 + 0x3f) != 0);
  FUN_1001d09e(this,(ushort)*(undefined4 *)(param_1 + 0x43));
  FUN_1001d135(this,(uint)param_1[0x47]);
  FUN_1001d0f8(this,(uint)param_1[0x48]);
  FUN_1001d1e8(this,*(int *)(param_1 + 0x49) != 0);
  FUN_1001cce8(this,param_1[0x4e]);
  FUN_1001cd13(this,*(ushort *)(param_1 + 0x4f));
  FUN_1001cd3e(this,(uint)param_1[0x4d]);
  FUN_1001e3bb(this,(uint)param_1[0x3a]);
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      FUN_1002c47d(this,(int)param_1,(uint)(pbVar1 + 0x57)[(int)param_1]);
      iVar2 = (int)param_1 * 0x41;
      FUN_1002c36c(this,(int)param_1,(uint)pbVar1[iVar2 + 0x71],(uint)pbVar1[iVar2 + 0x72]);
      FUN_1002c3d8(this,(int)param_1,(uint)pbVar1[iVar2 + 0x73],(uint)pbVar1[iVar2 + 0x74]);
      FUN_1002c3ad(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0x86));
      FUN_1002c4ae(this,(int)param_1,(uint)pbVar1[iVar2 + 0x75],(uint)pbVar1[iVar2 + 0x76],
                   (uint)pbVar1[iVar2 + 0x77],(uint)pbVar1[iVar2 + 0x78],
                   *(int *)(pbVar1 + iVar2 + 0x79),*(int *)(pbVar1 + iVar2 + 0x7d));
      FUN_1002c584(this,(int)param_1,(uint)pbVar1[iVar2 + 0x81],*(int *)(pbVar1 + iVar2 + 0x82));
      FUN_1002c52e(this,(int)param_1,(int)(char)pbVar1[iVar2 + 0x8a],pbVar1[iVar2 + 0x8b],
                   *(int *)(pbVar1 + iVar2 + 0x8c));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  uVar3 = 0;
  do {
    FUN_1002c5e5(this,uVar3,(uint)pbVar1[uVar3 + 0x5a]);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return;
}

