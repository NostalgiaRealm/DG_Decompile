/*
 * FUN_1000a036 at 1000a036
 * undefined __thiscall FUN_1000a036(void * this, uint param_1, undefined4 param_2, undefined4 param_3, int param_4, int param_5, int param_6, int param_7, int param_8, undefined4 param_9, undefined4 param_10, int * param_11, undefined4 param_12)
 * Address ranges: 1000a036-1000a2b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
FUN_1000a036(void *this,uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,int *param_11
            ,undefined4 param_12)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float local_1084 [1025];
  undefined1 local_80 [16];
  int local_70;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0x1000a043;
  FUN_10048d82(*(void **)((int)this + 0xcf00),this,(int)this);
  (**(code **)(*param_11 + 0x28))(param_11,local_80);
  *(undefined4 *)((int)this + 0xce38) = 0;
  *(undefined4 *)((int)this + 0xce3c) = 0;
  *(undefined4 *)((int)this + 0xce74) = 0;
  *(undefined4 *)((int)this + 0xce78) = 0;
  if (local_70 == 0x3c) {
    uVar6 = 0;
    if ((&DAT_10062804)[param_1] == '\0') {
      uVar6 = 0x4000;
    }
    uVar6 = uVar6 | *(uint *)(&DAT_10062890 + param_1 * 4) & 0xf | 0x80000010;
    FUN_10060d45((int *)local_1084,0,0x1000);
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        bVar1 = *(byte *)(param_4 + 1 + uVar4 * 4);
        local_1084[uVar4 * 4] = (float)*(byte *)(param_4 + 2 + uVar4 * 4);
        bVar2 = *(byte *)(param_4 + uVar4 * 4);
        local_1084[uVar4 * 4 + 1] = (float)bVar1;
        bVar1 = *(byte *)(param_4 + 3 + uVar4 * 4);
        uVar5 = uVar4 + 1;
        local_1084[uVar4 * 4 + 2] = (float)bVar2 + 0.0;
        local_1084[uVar4 * 4 + 3] = (float)bVar1;
        uVar4 = uVar5;
      } while (uVar5 < 0x100);
    }
    piVar3 = *(int **)(*(int *)((int)this + 0xcf04) + 4);
    (**(code **)(*piVar3 + 0xc0))
              (piVar3,*(undefined4 *)((int)this + 0xcfe0),0,0,local_1084,0x400,0x400);
  }
  else if ((local_70 == 0x44) || (local_70 == 0x45)) {
    uVar6 = 0x80004017;
  }
  else if (((local_70 == 0x46) || (local_70 == 0x49)) || (local_70 == 0x4c)) {
    uVar6 = 0x80000016;
  }
  else {
    uVar6 = 0;
    if ((&DAT_10062804)[param_1] == '\0') {
      uVar6 = 0x4000;
    }
    uVar6 = uVar6 | *(uint *)(&DAT_10062890 + param_1 * 4) & 0xf | 0x80000010;
  }
  local_30 = param_3;
  local_28 = param_3;
  local_1c = 0;
  local_10 = 0;
  local_54 = (float)((double)param_5 + (double)(&DAT_10066fd0)[-(param_5 >> 0x1f)]);
  local_c = 0;
  local_8 = 0;
  local_34 = param_2;
  local_2c = param_2;
  local_50 = (float)((double)param_6 + (double)(&DAT_10066fd0)[-(param_6 >> 0x1f)]);
  local_4c = (float)((double)param_7 + (double)(&DAT_10066fd0)[-(param_7 >> 0x1f)]);
  local_24 = param_9;
  local_20 = param_10;
  local_48 = (float)((double)param_8 + (double)(&DAT_10066fd0)[-(param_8 >> 0x1f)]);
  local_18 = param_11;
  local_14 = param_12;
  local_44 = local_54;
  local_40 = local_50;
  local_3c = local_4c;
  local_38 = local_48;
  FUN_10007c5d(this,&local_54,6,param_1,uVar6,'\0',(float *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0xcf00) + 0x4a0));
  return;
}

