/*
 * FUN_18006544c at 18006544c
 * undefined __fastcall FUN_18006544c(undefined8 param_1, int * param_2, longlong * param_3, ulonglong param_4)
 * Address ranges: 18006544c-18006560a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006544c(undefined8 param_1,int *param_2,longlong *param_3,ulonglong param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_res8;
  undefined4 uStackX_c;
  uint local_res10 [2];
  undefined4 local_98 [32];
  
  uVar6 = param_2[0x2d];
  uVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_res10[0] = 0;
  uStackX_c = (undefined4)((ulonglong)param_1 >> 0x20);
  local_res8 = uVar6;
  if (uVar6 != 0) {
    pbVar2 = (byte *)((longlong)&local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    while( true ) {
      uVar5 = (uint)((param_4 & 0xffffffffffff) >> ((char)uVar1 * '\x03' & 0x3fU)) & 7;
      if ((uVar5 == 5) || (uVar5 == 6)) {
        pbVar2 = (byte *)((longlong)local_res10 + ((longlong)(int)(uVar1 & 0xff) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (uVar1 & 7);
      }
      uVar1 = 0;
      if (local_res8 != 0) {
        for (; (local_res8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if (local_res8 == 0) break;
      pbVar2 = (byte *)((longlong)&local_res8 + ((longlong)(int)uVar1 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
    }
  }
  FUN_1800ed5c4(param_2,param_3,uVar6,&DAT_1801027e8,local_res10[0]);
  uVar6 = param_2[0x2d];
  uVar1 = 0;
  if (uVar6 != 0) {
    for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  _local_res8 = CONCAT44(uStackX_c,uVar6);
  if (uVar6 == 0) {
LAB_1800655d1:
    FUN_1800ed458(param_2,param_3,param_2[0x2d],0x1801027a0,(longlong)local_98);
    return;
  }
  pbVar2 = (byte *)((longlong)&local_res8 + ((longlong)(int)uVar1 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
  do {
    bVar3 = (byte)uVar1;
    local_98[(ulonglong)(uVar1 & 0xff) * 2 + 1] = 5;
    uVar7 = 0;
    uVar6 = (uint)((param_4 & 0xffffffffffff) >> (bVar3 * '\x03' & 0x3f)) & 7;
    uVar8 = 0;
    if ((uVar6 != 1) &&
       ((uVar6 == 2 ||
        ((((uVar8 = 2, uVar6 != 3 && (uVar8 = uVar7, uVar6 != 4)) && (uVar6 != 5)) && (uVar6 == 6)))
        ))) {
      uVar8 = 1;
    }
    local_98[(ulonglong)(uVar1 & 0xff) * 2] = uVar8;
    uVar8 = 0;
    if (uVar6 != 1) {
      if (uVar6 == 2) {
LAB_180065572:
        uVar8 = 1;
      }
      else if (uVar6 == 3) {
        uVar8 = 2;
      }
      else if (((uVar6 != 4) && (uVar8 = 0, uVar6 != 5)) && (uVar6 == 6)) goto LAB_180065572;
    }
    cVar4 = '\x01' << (sbyte)uVar8;
    if (cVar4 == '\x01') {
      param_2[7] = param_2[7] | 1 << (bVar3 & 0x1f);
    }
    else if (cVar4 == '\x02') {
      param_2[8] = param_2[8] | 1 << (bVar3 & 0x1f);
    }
    else if (cVar4 == '\x04') {
      param_2[9] = param_2[9] | 1 << (bVar3 & 0x1f);
    }
    uVar1 = 0;
    if (local_res8 != 0) {
      for (; (local_res8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if (local_res8 == 0) goto LAB_1800655d1;
    pbVar2 = (byte *)((longlong)&local_res8 + ((longlong)(int)uVar1 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
  } while( true );
}

