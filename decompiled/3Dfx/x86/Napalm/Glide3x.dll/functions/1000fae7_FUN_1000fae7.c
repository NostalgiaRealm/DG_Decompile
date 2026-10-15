/*
 * FUN_1000fae7 at 1000fae7
 * undefined __thiscall FUN_1000fae7(void * this, byte * param_1)
 * Address ranges: 1000fae7-1000fef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000fae7(void *this,byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = param_1;
  FUN_100125c2(this,(uint)*param_1);
  FUN_100125f6(this,(uint)param_1[1]);
  FUN_100204e9(this,*(uint *)(param_1 + 0x85),*(uint *)(param_1 + 0x89),*(uint *)(param_1 + 0x8d),
               *(uint *)(param_1 + 0x91),*(uint *)(param_1 + 0x95),*(int *)(param_1 + 0x99),
               *(uint *)(param_1 + 0x9d),*(int *)(param_1 + 0xa1),
               (byte)*(undefined4 *)(param_1 + 0xa5),*(uint *)(param_1 + 0xa9));
  FUN_1002052f(this,*(uint *)(param_1 + 0xad),*(uint *)(param_1 + 0xb1),*(uint *)(param_1 + 0xb5),
               *(uint *)(param_1 + 0xb9),*(uint *)(param_1 + 0xbd),*(int *)(param_1 + 0xc1),
               *(uint *)(param_1 + 0xc5),*(int *)(param_1 + 0xc9),
               (byte)*(undefined4 *)(param_1 + 0xcd),*(uint *)(param_1 + 0xd1));
  FUN_10020383(this,(uint)param_1[2],(uint)param_1[3],(uint)param_1[6],(uint)param_1[4],
               (uint)param_1[5],(uint)param_1[7]);
  FUN_10010207(this,(uint)param_1[0x43]);
  FUN_1001022a(this,param_1[0x44]);
  FUN_1001026b(this,*(int *)(param_1 + 0x45));
  FUN_10010312(this,*(uint *)(param_1 + 0x25));
  FUN_100102c7(this,*(uint *)(param_1 + 0x39));
  FUN_10010293(this,*(int *)(param_1 + 0x3d) == 1);
  FUN_1001042b(this,(uint)param_1[0x41]);
  FUN_1001045f(this,(uint)param_1[0x42]);
  FUN_1001049d(this,(int *)(param_1 + 0x49));
  FUN_10010548(this,*(uint *)(param_1 + 0x72));
  FUN_100105e1(this,(uint)*(ushort *)(param_1 + 0x70));
  FUN_10008a86(this);
  FUN_100103dd(this,*(int *)(param_1 + 0x5a) != 0,*(int *)(param_1 + 0x5e) != 0);
  FUN_10020839(this,param_1[8],param_1[9],param_1[10],param_1[0xb]);
  FUN_100206d1(this,param_1[0xc]);
  FUN_10020708(this,*(int *)(param_1 + 0xd),param_1[0x11],param_1[0x12]);
  FUN_10020764(this,param_1[0x13]);
  FUN_1002079a(this,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  FUN_10020815(this,param_1[0x20]);
  FUN_100204c4(this,*(uint *)(param_1 + 0x21));
  FUN_10012bed(this,(uint3)*(undefined4 *)(param_1 + 0x62));
  FUN_10012ccf(this,(uint)param_1[0x66]);
  FUN_10012c92(this,(uint)param_1[0x67]);
  FUN_10012e20(this,*(int *)(param_1 + 0x68) != 0);
  FUN_100126c6(this,param_1[0x6d]);
  FUN_100126f1(this,*(ushort *)(param_1 + 0x6e));
  FUN_1001271c(this,(uint)param_1[0x6c]);
  FUN_1000fa97(this,(uint)param_1[0x59]);
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      FUN_100201f0(this,(int)param_1,(uint)(pbVar1 + 0x76)[(int)param_1]);
      iVar2 = (int)param_1 * 0x9d;
      FUN_100200df(this,(int)param_1,(uint)pbVar1[iVar2 + 0x10e],(uint)pbVar1[iVar2 + 0x10f]);
      FUN_1002014b(this,(int)param_1,(uint)pbVar1[iVar2 + 0x110],(uint)pbVar1[iVar2 + 0x111]);
      FUN_10020120(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0x16b));
      FUN_10020575(this,(int)param_1,*(uint *)(pbVar1 + iVar2 + 0x13a),
                   *(uint *)(pbVar1 + iVar2 + 0x13e),*(uint *)(pbVar1 + iVar2 + 0x142),
                   *(uint *)(pbVar1 + iVar2 + 0x146),*(uint *)(pbVar1 + iVar2 + 0x14a),
                   *(int *)(pbVar1 + iVar2 + 0x14e),*(uint *)(pbVar1 + iVar2 + 0x152),
                   *(int *)(pbVar1 + iVar2 + 0x156),(byte)*(undefined4 *)(pbVar1 + iVar2 + 0x15a),
                   *(uint *)(pbVar1 + iVar2 + 0x15e));
      FUN_100205d6(this,(int)param_1,*(uint *)(pbVar1 + iVar2 + 0x112),
                   *(uint *)(pbVar1 + iVar2 + 0x116),*(uint *)(pbVar1 + iVar2 + 0x11a),
                   *(uint *)(pbVar1 + iVar2 + 0x11e),*(uint *)(pbVar1 + iVar2 + 0x122),
                   *(int *)(pbVar1 + iVar2 + 0x126),*(uint *)(pbVar1 + iVar2 + 0x12a),
                   *(int *)(pbVar1 + iVar2 + 0x12e),(byte)*(undefined4 *)(pbVar1 + iVar2 + 0x132),
                   *(uint *)(pbVar1 + iVar2 + 0x136));
      FUN_1002027a(this,(int)param_1,(uint)pbVar1[iVar2 + 0x166],*(int *)(pbVar1 + iVar2 + 0x167));
      FUN_10020224(this,(int)param_1,(int)(char)pbVar1[iVar2 + 0x16f],pbVar1[iVar2 + 0x170],
                   *(int *)(pbVar1 + iVar2 + 0x171));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  FUN_10008c6a(this,*(uint *)(pbVar1 + 0x79),*(uint *)(pbVar1 + 0x7d));
  FUN_10008c41(this,*(int *)(pbVar1 + 0x81));
  param_1 = (byte *)0x0;
  if (*(int *)(*(int *)((int)this + 4) + 0x33) != 0) {
    do {
      iVar2 = (int)param_1 * 0x9d;
      FUN_10008d13(this,(int)param_1,*(uint *)(pbVar1 + iVar2 + 0x175),
                   *(uint *)(pbVar1 + iVar2 + 0x179));
      FUN_10008cdd(this,(int)param_1,*(int *)(pbVar1 + iVar2 + 0x17d));
      param_1 = param_1 + 1;
    } while (param_1 < *(byte **)(*(int *)((int)this + 4) + 0x33));
  }
  return;
}

