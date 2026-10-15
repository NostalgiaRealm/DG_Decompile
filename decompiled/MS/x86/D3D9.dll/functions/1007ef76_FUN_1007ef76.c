/*
 * FUN_1007ef76 at 1007ef76
 * undefined __thiscall FUN_1007ef76(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, int param_7, int param_8, int param_9, int param_10, undefined4 param_11, undefined4 * param_12, undefined4 param_13, int * param_14, undefined4 * param_15)
 * Address ranges: 1007ef76-1007f29b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
FUN_1007ef76(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
            undefined4 param_11,undefined4 *param_12,undefined4 param_13,int *param_14,
            undefined4 *param_15)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fStack_10d0;
  float fStack_10cc;
  float fStack_10c8;
  float fStack_10c4;
  float fStack_10c0;
  float fStack_10bc;
  float fStack_10b8;
  float fStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined4 uStack_10a4;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  int *piStack_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined1 auStack_1060 [4];
  undefined1 auStack_105c [28];
  undefined1 local_1040 [24];
  int iStack_1028;
  float afStack_1010 [1027];
  
  afStack_1010[0x401] = 2.6808578e-29;
  (**(code **)(*param_14 + 0x28))(param_14,local_1040);
  *(undefined4 *)((int)this + 0x1ce38) = 0;
  *(undefined4 *)((int)this + 0x1ce3c) = 0;
  *(undefined4 *)((int)this + 0x1ce74) = 0;
  *(undefined4 *)((int)this + 0x1ce78) = 0;
  if (iStack_1028 == 0x3c) {
    uVar8 = 0;
    if ((&DAT_100d2700)[param_1] == '\0') {
      uVar8 = 0x4000;
    }
    uVar8 = uVar8 | *(uint *)(&DAT_100d2730 + param_1 * 4) & 0xf | 0x80000010;
    FUN_100cfed0((int *)afStack_1010,0,0x1000);
    if (param_6 != 0) {
      uVar6 = 0;
      do {
        bVar1 = *(byte *)(param_6 + 1 + uVar6 * 4);
        afStack_1010[uVar6 * 4] = (float)*(byte *)(param_6 + 2 + uVar6 * 4);
        bVar2 = *(byte *)(param_6 + uVar6 * 4);
        afStack_1010[uVar6 * 4 + 1] = (float)bVar1;
        bVar1 = *(byte *)(param_6 + 3 + uVar6 * 4);
        uVar7 = uVar6 + 1;
        afStack_1010[uVar6 * 4 + 2] = (float)bVar2 + 0.0;
        afStack_1010[uVar6 * 4 + 3] = (float)bVar1;
        uVar6 = uVar7;
      } while (uVar7 < 0x100);
    }
    iVar3 = *(int *)((int)this + 0x1cf04);
    this_00 = *(void **)(iVar3 + 0x1304);
    piVar4 = *(int **)((int)this + 0x1cf08);
    iVar5 = (**(code **)(*piVar4 + 0x38))(piVar4,auStack_105c,auStack_1060);
    if (-1 < iVar5) {
      FUN_100bcb54(this_00,(uint)piVar4,(void *)(iVar3 + 0x1430),0x1000,0x2000,afStack_1010);
    }
    if (*(int *)(*(int *)((int)this + 0x1cf04) + 4) == 0x10de) {
      FUN_100baf7e(*(void **)(*(int *)((int)this + 0x1cf04) + 0x1304),*(uint *)((int)this + 0x1cf08)
                   ,0,1,0);
    }
  }
  else if ((iStack_1028 == 0x44) || (iStack_1028 == 0x45)) {
    uVar8 = 0x80004017;
  }
  else if (((iStack_1028 == 0x46) || (iStack_1028 == 0x49)) || (iStack_1028 == 0x4c)) {
    uVar8 = 0x80000016;
  }
  else {
    uVar8 = 0;
    if ((&DAT_100d2700)[param_1] == '\0') {
      uVar8 = 0x4000;
    }
    uVar8 = uVar8 | *(uint *)(&DAT_100d2730 + param_1 * 4) & 0xf | 0x80000010;
  }
  uStack_10ac = param_3;
  uStack_10a0 = param_3;
  uStack_10b0 = param_2;
  uStack_10a4 = param_2;
  uStack_1094 = 0;
  uStack_1084 = 0;
  uStack_1078 = 0;
  uStack_106c = 0;
  uStack_1068 = 0;
  fStack_10d0 = (float)((double)param_7 + (double)(&DAT_100d97a0)[-(param_7 >> 0x1f)]);
  fStack_10cc = (float)((double)param_8 + (double)(&DAT_100d97a0)[-(param_8 >> 0x1f)]);
  fStack_10c8 = (float)((double)param_9 + (double)(&DAT_100d97a0)[-(param_9 >> 0x1f)]);
  uStack_10a8 = param_5;
  uStack_109c = param_4;
  fStack_10c4 = (float)((double)param_10 + (double)(&DAT_100d97a0)[-(param_10 >> 0x1f)]);
  uStack_1098 = param_11;
  piStack_1088 = param_14;
  uStack_1070 = param_13;
  if (param_12 == (undefined4 *)0x0) {
    uStack_1090 = 0;
  }
  else {
    uStack_1090 = *param_12;
  }
  uStack_108c = 0;
  if (param_15 == (undefined4 *)0x0) {
    uStack_1080 = 0;
  }
  else {
    uStack_1080 = *param_15;
  }
  uStack_107c = 0;
  uStack_1074 = 0;
  fStack_10c0 = fStack_10d0;
  fStack_10bc = fStack_10cc;
  fStack_10b8 = fStack_10c8;
  fStack_10b4 = fStack_10c4;
  FUN_1007cf8b(this,&fStack_10d0,6,param_1,uVar8,'\0',(float *)0x0,0.0);
  return;
}

