/*
 * FUN_1005dc3b at 1005dc3b
 * undefined4 __thiscall FUN_1005dc3b(void * this, void * param_1, uint * param_2, undefined4 param_3, undefined4 param_4, uint param_5, undefined4 param_6, uint param_7)
 * Address ranges: 1005dc3b-1005e07e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1005dc3b(void *this,void *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,undefined4 param_6,uint param_7)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint local_60;
  undefined1 local_5c;
  undefined4 *local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_38;
  int local_34;
  LPVOID local_28 [4];
  int local_18;
  void *local_14;
  
  local_14 = this;
  FUN_10036e19(&local_38,0x200);
  local_18 = FUN_100c3e60((int *)&local_38,*param_2);
  FUN_10036e19(local_28,0x80);
  if (*(char *)(param_2[0x3d] + 0x126d) != '\x03') {
    FUN_100587ce((int *)param_2,(int *)local_28,param_6,param_7);
  }
  cVar1 = *(char *)(param_2[0x3d] + 0x126d);
  if (cVar1 == '\x01') {
    puVar5 = param_2 + 0x82;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = param_2 + 0x88;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    param_2[0x8e] = 0;
    param_2[0x8f] = 0;
    param_2[0xec] = 0;
    param_2[0xed] = 0;
    param_2[0xee] = 0;
    param_2[0xef] = 0;
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_10060f3c((int *)param_2,(int *)local_28,CONCAT44(param_4,param_3),param_6,param_7);
    local_5c = 0;
    local_60 = 0xffffffff;
    local_50 = (undefined4 *)0xffffffff;
    local_4c = -1;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
    puVar5 = &local_60;
    puVar7 = param_2 + 0x130;
    for (iVar4 = 8; this = local_14, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  cVar1 = *(char *)(param_2[0x3d] + 0x126d);
  if (cVar1 == '\x01') {
    FUN_10060b13(this,param_2,(uint *)local_28,param_5,param_6,param_7);
    FUN_1005e324((int)param_2);
    uVar6 = param_2[0x82];
    FUN_10058982((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
    FUN_10058b0e((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
    FUN_10058d4c((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
    FUN_100c3be1((int *)param_2,(int *)local_28,0x2036);
    FUN_100c3be1((int *)param_2,(int *)local_28,0x3e);
    FUN_100c2ed2((int)param_2,param_2[0x82]);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    *(undefined1 *)((int)param_2 + 0x521) = 0;
    FUN_1006438f(local_14,param_2,(int *)local_28,(uint *)(param_5 + 4),param_6,param_7);
    FUN_10036e19(&local_50,0x100);
    *(undefined1 *)((int)param_2 + 0x521) = 1;
    FUN_100643f9(local_14,param_2,(int *)&local_50,param_5,param_6,param_7);
    FUN_10061146((int)param_2);
    bVar2 = FUN_10058e59(param_6,param_7);
    if (bVar2) {
      uVar6 = param_2[0xb0];
      FUN_10058982((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
      FUN_10058b0e((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
      FUN_10058d4c((int *)param_2,(int *)local_28,uVar6,param_6,param_7);
      FUN_100c3be1((int *)param_2,(int *)local_28,0x36);
      FUN_100c2ed2((int)param_2,param_2[0xb0]);
      param_2[0xb0] = 0;
    }
    FUN_100c3be1((int *)param_2,(int *)local_28,0x3e);
    FUN_100c3d16(local_28,local_50,local_4c - (int)local_50);
    thunk_FUN_100cfd6c(local_50);
  }
  FUN_100c422d(*param_2,(int *)&local_38);
  if ((param_2[2] >> 3 & 1) != 0) {
    FUN_100c42a9(*param_2,(int *)&local_38);
  }
  if ((param_2[2] >> 4 & 1) != 0) {
    FUN_100c42a9(*param_2,(int *)&local_38);
  }
  if ((param_2[2] >> 5 & 1) != 0) {
    FUN_100c42a9(*param_2,(int *)&local_38);
  }
  cVar1 = *(char *)(param_2[0x3d] + 0x126d);
  if (cVar1 == '\x01') {
    FUN_10058e97(param_2,(int *)&local_38,param_6,param_7);
    FUN_1005e204((int)param_2,(int *)&local_38);
  }
  else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_10058e97(param_2,(int *)&local_38,param_6,param_7);
    FUN_10060d7d((int)param_2,(int *)&local_38);
  }
  if (*(char *)((int)param_2 + 0x35) != '\0') {
    FUN_100c4456((int *)&local_38);
  }
  if (((char)param_2[0xae] != '\0') && (param_2[0xaf] == 0xffffffff)) {
    FUN_100c3d50((int *)&local_38,4);
  }
  uVar6 = 0;
  if (param_2[0xc4] != 0) {
    do {
      FUN_100c3d50((int *)&local_38,4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_2[0xc4]);
  }
  FUN_100c3eb1((int *)&local_38,(int *)local_28,local_18);
  FUN_100c3d16(param_1,local_38,local_34 - (int)local_38);
  thunk_FUN_100cfd6c(local_28[0]);
  uVar3 = thunk_FUN_100cfd6c(local_38);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

