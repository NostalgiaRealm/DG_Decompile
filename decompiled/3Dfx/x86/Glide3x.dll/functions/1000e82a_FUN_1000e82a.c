/*
 * FUN_1000e82a at 1000e82a
 * undefined __thiscall FUN_1000e82a(void * this, byte * param_1)
 * Address ranges: 1000e82a-1000eb10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e82a(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = param_1;
  FUN_10011244(this,(uint)*param_1);
  FUN_10011278(this,(uint)param_1[1]);
  FUN_1000f01d(this,(uint)param_1[0x66],(uint)param_1[0x67],(uint)param_1[0x68],(uint)param_1[0x69],
               *(int *)(param_1 + 0x6a),param_1[0x1ae]);
  FUN_1000f073(this,(uint)param_1[0x6e],(uint)param_1[0x6f],(uint)param_1[0x70],(uint)param_1[0x71],
               *(int *)(param_1 + 0x72));
  FUN_1000ed54(this,(uint)param_1[2],(uint)param_1[3],(uint)param_1[4],(uint)param_1[5]);
  FUN_1000ee47(this,(uint)param_1[0x24]);
  FUN_1000ee6a(this,param_1[0x25]);
  FUN_1000eeab(this,*(int *)(param_1 + 0x26));
  FUN_1000ef52(this,*(uint *)(param_1 + 6));
  FUN_1000ef07(this,*(uint *)(param_1 + 0x1a));
  FUN_1000eed3(this,*(int *)(param_1 + 0x1e) == 1);
  FUN_1000f151(this,(uint)param_1[0x22]);
  FUN_1000f185(this,(uint)param_1[0x23]);
  FUN_1000f1c3(this,(int *)(param_1 + 0x2a));
  FUN_1000f26e(this,*(uint *)(param_1 + 0x53));
  FUN_1000f307(this,(uint)*(ushort *)(param_1 + 0x51));
  FUN_100084dc(this);
  FUN_1000f0d2(this,*(int *)(param_1 + 0x3b) != 0,*(int *)(param_1 + 0x3f) != 0);
  FUN_1001186f(this,(ushort)*(undefined4 *)(param_1 + 0x43));
  FUN_10011906(this,(uint)param_1[0x47]);
  FUN_100118c9(this,(uint)param_1[0x48]);
  FUN_100119b9(this,*(int *)(param_1 + 0x49) != 0);
  FUN_10011348(this,param_1[0x4e]);
  FUN_10011373(this,*(ushort *)(param_1 + 0x4f));
  FUN_1001139e(this,(uint)param_1[0x4d]);
  FUN_1000e7da(this,(uint)param_1[0x3a]);
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      FUN_100205bc(this,(int)param_1,(uint)(pbVar1 + 0x57)[(int)param_1]);
      iVar2 = (int)param_1 * 0x55;
      FUN_100204ab(this,(int)param_1,(uint)pbVar1[iVar2 + 0xaf],(uint)pbVar1[iVar2 + 0xb0]);
      FUN_10020517(this,(int)param_1,(uint)pbVar1[iVar2 + 0xb1],(uint)pbVar1[iVar2 + 0xb2]);
      FUN_100204ec(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0xc4));
      FUN_100205ed(this,(int)param_1,(uint)pbVar1[iVar2 + 0xb3],(uint)pbVar1[iVar2 + 0xb4],
                   (uint)pbVar1[iVar2 + 0xb5],(uint)pbVar1[iVar2 + 0xb6],
                   *(int *)(pbVar1 + iVar2 + 0xb7),*(int *)(pbVar1 + iVar2 + 0xbb));
      FUN_100206b9(this,(int)param_1,(uint)pbVar1[iVar2 + 0xbf],*(int *)(pbVar1 + iVar2 + 0xc0));
      FUN_10020663(this,(int)param_1,(int)(char)pbVar1[iVar2 + 200],pbVar1[iVar2 + 0xc9],
                   *(int *)(pbVar1 + iVar2 + 0xca));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  FUN_100086c0(this,*(uint *)(pbVar1 + 0x5a),*(uint *)(pbVar1 + 0x5e));
  FUN_10008697(this,*(int *)(pbVar1 + 0x62));
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      iVar2 = (int)param_1 * 0x55;
      FUN_10008769(this,(int)param_1,*(uint *)(pbVar1 + iVar2 + 0xce),
                   *(uint *)(pbVar1 + iVar2 + 0xd2));
      FUN_10008733(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0xd6));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  return;
}

